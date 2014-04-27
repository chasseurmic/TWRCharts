//
//  TWRDataSet.m
//  ChartJS
//
//  Created by Michelangelo Chasseur on 21/04/14.
//  Copyright (c) 2014 Touchware. All rights reserved.
//

#import "TWRDataSet.h"

@implementation TWRDataSet

- (instancetype)initWithDataPoints:(NSArray *)dataPoints {
    // Default color: light gray
    UIColor *fillColor = [UIColor colorWithRed:220/255.0f green:220/255.0f blue:220/255.0f alpha:0.5];
    UIColor *strokeColor = [UIColor colorWithRed:220/255.0f green:220/255.0f blue:220/255.0f alpha:1.0];
    UIColor *pointColor = [UIColor colorWithRed:220/255.0f green:220/255.0f blue:220/255.0f alpha:1.0];
    UIColor *pointStrokeColor = [UIColor whiteColor];
    self = [self initWithDataPoints:dataPoints fillColor:fillColor strokeColor:strokeColor pointColor:pointColor pointStrokeColor:pointStrokeColor];

    return self;
}

- (instancetype)initWithDataPoints:(NSArray *)dataPoints
                         fillColor:(UIColor *)fillColor
                       strokeColor:(UIColor *)strokeColor {
    UIColor *pointColor = strokeColor;
    UIColor *pointStrokeColor = strokeColor;
    self = [self initWithDataPoints:dataPoints fillColor:fillColor strokeColor:strokeColor pointColor:pointColor pointStrokeColor:pointStrokeColor];
    
    return self;
}

- (instancetype)initWithDataPoints:(NSArray *)dataPoints
                         fillColor:(UIColor *)fillColor
                       strokeColor:(UIColor *)strokeColor
                        pointColor:(UIColor *)pointColor
                  pointStrokeColor:(UIColor *)pointStrokeColor {
    self = [super init];
    if (self) {
        _dataPoints = dataPoints.mutableCopy;
        _fillColor = fillColor;
        _strokeColor = strokeColor;
        _pointColor = pointColor;
        _pointStrokeColor = pointStrokeColor;
    }
    return self;
}

@end
