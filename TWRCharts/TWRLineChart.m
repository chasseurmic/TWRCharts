//
//  TWRLineChart.m
//  ChartJS
//
//  Created by Michelangelo Chasseur on 21/04/14.
//  Copyright (c) 2014 Touchware. All rights reserved.
//

#import "TWRLineChart.h"

@interface TWRLineChart ()

@end

@implementation TWRLineChart

- (instancetype)initWithLabels:(NSArray *)labels
                      dataSets:(NSArray *)dataSets
                      animated:(BOOL)animated {
    return [self initWithLabels:labels dataSets:dataSets animated:animated
                  curved:YES];
}

- (instancetype)initWithLabels:(NSArray *)labels
                      dataSets:(NSArray *)dataSets
                      animated:(BOOL)animated
                        curved:(BOOL)curved
{
    self = [super init];
    if (self) {
        _labels = labels.mutableCopy;
        _dataSets = dataSets.mutableCopy;
        _animated = animated;
        _curveLines = curved;
    }
    return self;
}


@end
