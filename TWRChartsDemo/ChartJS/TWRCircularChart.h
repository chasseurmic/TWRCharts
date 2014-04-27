//
//  TWRPieChart.h
//  ChartJS
//
//  Created by Michelangelo Chasseur on 22/04/14.
//  Copyright (c) 2014 Touchware. All rights reserved.
//

typedef NS_ENUM(NSUInteger, TWRCircularChartType) {
    TWRCircularChartTypePie = 0,
    TWRCircularChartTypeDoughnut
};

#import <Foundation/Foundation.h>

@interface TWRCircularChart : NSObject

@property (copy, nonatomic) NSMutableArray *values;
@property (copy, nonatomic) NSMutableArray *colors;
@property (assign, nonatomic) BOOL animated;
@property (assign, nonatomic) TWRCircularChartType type;

/**
 *  Initializing the Circular Chart object
 *
 *  @param values   an array of NSNumber objects that represent the data to be plotted
 *  @param colors   an array of UIColor objects to go along with the previously provided data
 *  @param type     the type of the circular chart to be instantiated, either a Pie chart or a Doughnut chart
 *  @param animated a BOOL defining whether the chart should be animated or not
 *
 *  @return an instance of TWRCircularChart
 */
- (instancetype)initWithValues:(NSArray *)values
                        colors:(NSArray *)colors
                          type:(TWRCircularChartType)type
                      animated:(BOOL)animated;

@end
