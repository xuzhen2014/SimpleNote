//
//  NSDate+Conversion.h
//  SimpleNote
//
//  Created by 徐臻 on 15/3/19.
//  Copyright (c) 2015年 xuzhen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Conversion)

+ (BOOL)isSameDay:(NSDate *)firstDate andDate:(NSDate *)secondDate;

@end