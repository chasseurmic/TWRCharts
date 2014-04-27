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

/**
 *  Loading a Bar chart
 *
 *  @param barChart the TWRBarChart object that needs to be drawn by the view
 */
- (void)loadBarChart:(TWRBarChart *)barChart;

/**
 *  Loading a Bar chart
 *
 *  @param barChart the TWRBarChart object that needs to be drawn by the view
 *  @param block    the completion block that gets called once the animation has completed
 */
- (void)loadBarChart:(TWRBarChart *)barChart withCompletionHandler:(TWRAnimationCompletionBlock)block;

/**
 *  Loading a Line chart
 *
 *  @param lineChart the TWRLineChart object that needs to be drawn by the view
 */
- (void)loadLineChart:(TWRLineChart *)lineChart;

/**
 *  Loading a Line chart
 *
 *  @param lineChart the TWRLineChart object that needs to be drawn by the view
 *  @param block     the completion block that gets called once the animation has completed
 */
- (void)loadLineChart:(TWRLineChart *)lineChart withCompletionHandler:(TWRAnimationCompletionBlock)block;

/**
 *  Loading a Circular chart
 *
 *  @param circularChart the TWRCircularChart object that needs to be drawn by the view
 */
- (void)loadCircularChart:(TWRCircularChart *)circularChart;

/**
 *  Loading a Circular chart
 *
 *  @param circularChart the TWRCircularChart object that needs to be drawn by the view
 *  @param block         the completion block that gets called once the animation has completed
 */
- (void)loadCircularChart:(TWRCircularChart *)circularChart withCompletionHandler:(TWRAnimationCompletionBlock)block;

@end
