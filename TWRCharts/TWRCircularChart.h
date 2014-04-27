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

- (instancetype)initWithValues:(NSArray *)values
                        colors:(NSArray *)colors
                          type:(TWRCircularChartType)type
                      animated:(BOOL)animated;

@end
