//
//  TWRDataSet.h
//  ChartJS
//
//  Created by Michelangelo Chasseur on 21/04/14.
//  Copyright (c) 2014 Touchware. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TWRDataSet : NSObject

@property (strong, nonatomic) UIColor *fillColor;
@property (strong, nonatomic) UIColor *strokeColor;
@property (strong, nonatomic) UIColor *pointColor;
@property (strong, nonatomic) UIColor *pointStrokeColor;
@property (copy, nonatomic) NSMutableArray *dataPoints;

/**
 *  Initializing the Data Set (Line charts only)
 *
 *  @param dataPoints       an array of NSNumber objects representing the data to be plotted
 *  @param fillColor        an array of UIColor objects to go along with the provided data that represent the fill color of the bar / line
 *  @param strokeColor      an array of UIColor objects to go along with the provided data that represent the stroke color of the bar / line
 *  @param pointColor       an array of UIColor objects to go along with the provided data that represent the fill color of line points
 *  @param pointStrokeColor an array of UIColor objects to go along with the provided data that represent the stroke color of line points
 *
 *  @return an instance of TWRDataSet
 */
- (instancetype)initWithDataPoints:(NSArray *)dataPoints
                         fillColor:(UIColor *)fillColor
                       strokeColor:(UIColor *)strokeColor
                        pointColor:(UIColor *)pointColor
                  pointStrokeColor:(UIColor *)pointStrokeColor;

/**
 *  Initializing the Data Set (Line and Bar charts)
 *
 *  @param dataPoints  an array of NSNumber objects representing the data to be plotted
 *  @param fillColor   an array of UIColor objects to go along with the provided data that represent the fill color of the bar / line
 *  @param strokeColor an array of UIColor objects to go along with the provided data that represent the stroke color of the bar / line
 *
 *  @return an instance of TWRDataSet
 */
- (instancetype)initWithDataPoints:(NSArray *)dataPoints
                         fillColor:(UIColor *)fillColor
                       strokeColor:(UIColor *)strokeColor;

/**
 *  Initializing the Data Set (Line and Bar charts)
 *
 *  @param dataPoints an array of NSNumber objects representing the data to be plotted
 *
 *  @return an instance of TWRDataSet
 */
- (instancetype)initWithDataPoints:(NSArray *)dataPoints;

@end
