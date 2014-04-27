//
//  TWRChartView.h
//  ChartJS
//
//  Created by Michelangelo Chasseur on 21/04/14.
//  Copyright (c) 2014 Touchware. All rights reserved.
//

typedef void(^TWRAnimationCompletionBlock)(BOOL finished);

#import <UIKit/UIKit.h>
@class TWRBarChart;
@class TWRLineChart;
@class TWRCircularChart;

@interface TWRChartView : UIWebView

@property (copy, nonatomic) NSString *chartJsFilePath;

- (void)loadBarChart:(TWRBarChart *)barChart;
- (void)loadBarChart:(TWRBarChart *)barChart withCompletionHandler:(TWRAnimationCompletionBlock)block;
- (void)loadLineChart:(TWRLineChart *)lineChart;
- (void)loadLineChart:(TWRLineChart *)lineChart withCompletionHandler:(TWRAnimationCompletionBlock)block;
- (void)loadCircularChart:(TWRCircularChart *)circularChart;
- (void)loadCircularChart:(TWRCircularChart *)circularChart withCompletionHandler:(TWRAnimationCompletionBlock)block;

@end
