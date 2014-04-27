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

- (instancetype)initWithDataPoints:(NSArray *)dataPoints
                         fillColor:(UIColor *)fillColor
                       strokeColor:(UIColor *)strokeColor
                        pointColor:(UIColor *)pointColor
                  pointStrokeColor:(UIColor *)pointStrokeColor;

- (instancetype)initWithDataPoints:(NSArray *)dataPoints
                         fillColor:(UIColor *)fillColor
                       strokeColor:(UIColor *)strokeColor;

- (instancetype)initWithDataPoints:(NSArray *)dataPoints;

@end
