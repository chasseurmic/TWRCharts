//
//  UIColor+HexString.m
//  ChartJS
//
//  Created by Michelangelo Chasseur on 23/04/14.
//  Copyright (c) 2014 Touchware. All rights reserved.
//

#import "UIColor+HexString.h"

@implementation UIColor (HexString)

- (NSString *)hexString {
    const CGFloat *components = CGColorGetComponents(self.CGColor);
    CGFloat r = components[0];
    CGFloat g = components[1];
    CGFloat b = components[2];
    NSString *hexString=[NSString stringWithFormat:@"#%02X%02X%02X", (int)(r * 255), (int)(g * 255), (int)(b * 255)];
    return hexString;
}

@end
