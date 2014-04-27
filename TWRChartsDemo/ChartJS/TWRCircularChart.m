//
//  TWRPieChart.m
//  ChartJS
//
//  Created by Michelangelo Chasseur on 22/04/14.
//  Copyright (c) 2014 Touchware. All rights reserved.
//

#import "TWRCircularChart.h"

@implementation TWRCircularChart

- (instancetype)initWithValues:(NSArray *)values
                        colors:(NSArray *)colors
                          type:(TWRCircularChartType)type
                      animated:(BOOL)animated {
    self = [super init];
    if (self) {
        _values = values.mutableCopy;
        _colors = colors.mutableCopy;
        _type = type;
        _animated = animated;
    }
    return self;
}

@end
