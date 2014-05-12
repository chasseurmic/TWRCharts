//
//  TWRLineChart.h
//  ChartJS
//
//  Created by Michelangelo Chasseur on 21/04/14.
//  Copyright (c) 2014 Touchware. All rights reserved.
//

#import <Foundation/Foundation.h>
@class TWRDataSet;

@interface TWRLineChart : NSObject

@property (copy, nonatomic) NSMutableArray *labels;
@property (copy, nonatomic) NSMutableArray *dataSets;
@property (assign, nonatomic) BOOL animated;
@property(nonatomic) BOOL curveLines;

/**
 *  Initializing the Line Chart object
 *
 *  @param labels   an NSArray of labels (NSString) to go along with the data
 *  @param dataSets an NSArray of TWRDataSet objects containing the data to be plotted
 *  @param animated a BOOL defining whether the chart should be animated or not
 *
 *  @return an instance of TWRLineChart
 */
- (instancetype)initWithLabels:(NSArray *)labels
                      dataSets:(NSArray *)dataSets
                      animated:(BOOL)animated;

/**
 *  Initializing the Line Chart object
 *
 *  @param labels   an NSArray of labels (NSString) to go along with the data
 *  @param dataSets an NSArray of TWRDataSet objects containing the data to be plotted
 *  @param animated a BOOL defining whether the chart should be animated or not
 *  @param curved a BOOL defining whether the chart should be curved or not
 *
 *  @return an instance of TWRLineChart
 */
- (instancetype)initWithLabels:(NSArray *)labels
                      dataSets:(NSArray *)dataSets
                      animated:(BOOL)animated
                        curved:(BOOL)curved;

@end
