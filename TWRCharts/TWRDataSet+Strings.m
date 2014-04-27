//
//  TWRDataSet+Strings.m
//  ChartJS
//
//  Created by Michelangelo Chasseur on 22/04/14.
//  Copyright (c) 2014 Touchware. All rights reserved.
//

#import "TWRDataSet+Strings.h"

@implementation TWRDataSet (Strings)

- (NSString *)fillColorString {
    CGFloat red;
    CGFloat green;
    CGFloat blue;
    CGFloat alpha;
    BOOL valid = [self.fillColor getRed:&red green:&green blue:&blue alpha:&alpha];
    NSString *retString;
    if (valid) {
        retString = [NSString stringWithFormat:@"\"rgba(%d,%d,%d,%f)\"",(int)(red * 255),(int)(green * 255),(int)(blue * 255),alpha];
    }
    return retString;
}

- (NSString *)strokeColorString {
    CGFloat red;
    CGFloat green;
    CGFloat blue;
    CGFloat alpha;
    BOOL valid = [self.strokeColor getRed:&red green:&green blue:&blue alpha:&alpha];
    NSString *retString;
    if (valid) {
        retString = [NSString stringWithFormat:@"\"rgba(%d,%d,%d,%f)\"",(int)(red * 255),(int)(green * 255),(int)(blue * 255),alpha];
    }
    return retString;
}

- (NSString *)pointColorString {
    CGFloat red;
    CGFloat green;
    CGFloat blue;
    CGFloat alpha;
    BOOL valid = [self.pointColor getRed:&red green:&green blue:&blue alpha:&alpha];
    NSString *retString;
    if (valid) {
        retString = [NSString stringWithFormat:@"\"rgba(%d,%d,%d,%f)\"",(int)(red * 255),(int)(green * 255),(int)(blue * 255),alpha];
    }
    return retString;
}

- (NSString *)pointStrokeColorString {
    CGFloat red;
    CGFloat green;
    CGFloat blue;
    CGFloat alpha;
    BOOL valid = [self.pointStrokeColor getRed:&red green:&green blue:&blue alpha:&alpha];
    NSString *retString;
    if (valid) {
        retString = [NSString stringWithFormat:@"\"rgba(%d,%d,%d,%f)\"",(int)(red * 255),(int)(green * 255),(int)(blue * 255),alpha];
    }
    return retString;
}

- (NSString *)dataString {
    __block NSString *retString = @"[";
    [self.dataPoints enumerateObjectsUsingBlock:^(NSNumber *number, NSUInteger idx, BOOL *stop) {
        retString = [retString stringByAppendingString:[NSString stringWithFormat:@"%@", number]];
        if (idx != self.dataPoints.count - 1) {
            retString = [retString stringByAppendingString:@","];
        } else {
            retString = [retString stringByAppendingString:@"]"];
        }
    }];
    return retString;
}


@end
