TWRCharts
=================

## TWRCharts

An Obj-C wrapper for ChartJS. Easily build animated charts by leveraging the power of native code.

## Usage

Usage is easy.

Add the dependency to your `Podfile`:

```ruby
platform :ios
pod 'TWRChart'
```

Run `pod install` to install the dependencies.

Next, import the header file wherever you want to use the custom view:

```objc
#import <TWRCharts/TWRChart.h>
```

TWRCharts is yet another charting library for iOS. TWRCharts is basically an effort to port the famous ChartJS Javascript library to native Obj-C code; its power lies in the fact that it gives developers the flexibility to choose between loading a ChartJS Javascript file (more on this later) into a TWRChartView, or using native methods to build either a line / bar or circular (pie / doughnut) chart. 

Loading the chart from a Javascript file is very easy though little configurable and dynamic, whereas by using the native extension the user can update and refresh data on the fly. 

Native code API does not yet support all type of charts provided by ChartJS; only line, bars, pies and doughnuts are currently available.

TWRCharts's main class is TWRChartView, a subclass of UIWebView backed by an HTML file that the user never has to deal with. The API has been engineered to make it feel like a fully native experience, both from a developer as an end user point of view.

### Loading a chart from a JS file

Drop in your Xcode project a .js file and make sure it's been added to the resources that are being bundled with the project in the build phases of your project.

Then just get a handle on the file and set its path to the TWRChartView that's being added to the controller's view.

```objc
NSString *jsFilePath = [[NSBundle mainBundle] pathForResource:@"file" ofType:@"js"];
[_chartView setChartJsFilePath:jsFilePath];

// Add the chart view to the controller's view
[self.view addSubview:_chartView];
```

You can use any of the chart types currently supported by [ChartJS](). Here's an example of how you would load a Polar Chart.

```js
var context = document.getElementById("canvas").getContext("2d");
var polarData = [
    {
        value : 30,
        color: "#D97041"
    },
    {
        value : 90,
        color: "#C7604C"
    },
    {
        value : 24,
        color: "#21323D"
    },
    {
        value : 58,
        color: "#9D9B7F"
    },
    {
        value : 82,
        color: "#7D4F6D"
    },
    {
        value : 8,
        color: "#584A5E"
    }
]

var polarArea = new Chart(context).PolarArea(polarData);
```

If you're planning on to use JS files to load your charts, be sure to make the following as the first line of your *.js* file:

```js
var context = document.getElementById("canvas").getContext("2d");
```

This code retrieves the correct context from the HTML file that backs the TWRChartView.

### Loading a chart using native Obj-C code

Depending on the type of chart you want to plot (bar / line / pie...) you need to instantiate different objects, but mainly you need to follow these steps:

- Instantiate data objects;
- Instantiate a chart object by passing the data objects along with labels;
- Load the chart object onto the chart view.

Here's some example code:

```objc
// Build chart data
TWRDataSet *dataSet1 = [[TWRDataSet alloc] initWithDataPoints:@[@10, @15, @5, @15, @5]];
TWRDataSet *dataSet2 = [[TWRDataSet alloc] initWithDataPoints:@[@5, @10, @5, @15, @10]];

NSArray *labels = @[@"A", @"B", @"C", @"D", @"E"];

TWRLineChart *line = [[TWRLineChart alloc] initWithLabels:labels
                                                 dataSets:@[dataSet1, dataSet2]
                                                 animated:NO];
// Load data
[_chartView loadLineChart:line];
```

#### Data Sets

TWRDataSet (which represents the data for bar and line charts) can be instantiated with the following *init* method:

```objc
- (instancetype)initWithDataPoints:(NSArray *)dataPoints
                         fillColor:(UIColor *)fillColor
                       strokeColor:(UIColor *)strokeColor
                        pointColor:(UIColor *)pointColor
                  pointStrokeColor:(UIColor *)pointStrokeColor;
```

You can customize the fill and stroke colors for either the bar or the line chart. For the latter one you can also choose the point fill and point stroke colors.

At a minimum you have to provide the data points, which is an array of NSNumbers.

#### Line / Bar Charts

Line and bar charts can be instantiated as such:

```objc
- (instancetype)initWithLabels:(NSArray *)labels
                      dataSets:(NSArray *)dataSets
                      animated:(BOOL)animated;
```

When passing the chart objects to the chart view, you need to call one of the following methods called on your instance of ```TWRChartView``` according to the type of object you are dealing with:

```objc
- (void)loadBarChart:(TWRBarChart *)barChart;
- (void)loadLineChart:(TWRLineChart *)lineChart;
```

A sweet final touch: you even have an option to call the above methods with a completion handler to get a callback whenever the chart animation finishes. You wouldn't even guess that there's a bunch of Javascript code running underneath!

```objc
- (void)loadBarChart:(TWRBarChart *)barChart withCompletionHandler:(TWRAnimationCompletionBlock)block;
- (void)loadLineChart:(TWRLineChart *)lineChart withCompletionHandler:(TWRAnimationCompletionBlock)block;
```

#### Circular Charts

And finally, circular charts can be instantiated with the following method:

```objc
- (instancetype)initWithValues:(NSArray *)values
                        colors:(NSArray *)colors
                          type:(TWRCircularChartType)type
                      animated:(BOOL)animated;
```

You even get a chance to choose the chart type, either a pie chart (TWRCircularChartTypePie) or a doughnut (TWRCircularChartTypeDoughnut).

And again, once you have the chart object, you can add it to the chart view with one of the following two methods called on your instance of ```TWRChartView```:

```objc
- (void)loadCircularChart:(TWRCircularChart *)circularChart;
- (void)loadCircularChart:(TWRCircularChart *)circularChart withCompletionHandler:(TWRAnimationCompletionBlock)block;
```

## Requirements

`TWRCharts` requires iOS 6.x or greater.


## License

Usage is provided under the [MIT License](http://opensource.org/licenses/mit-license.php).  See LICENSE for the full details.
