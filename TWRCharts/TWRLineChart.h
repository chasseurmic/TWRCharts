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

- (instancetype)initWithLabels:(NSArray *)labels
                      dataSets:(NSArray *)dataSets
                      animated:(BOOL)animated;

@end
