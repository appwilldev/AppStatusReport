//
//  TestWxSDK.m
//  testSDK
//
//  Created by fangtang on 5/17/13.
//  Copyright (c) 2013 fangtang. All rights reserved.
//

#import "AWAppStatusReport.h"

// Converts C style string to NSString
#define GetStringParam( _x_ ) ( _x_ != NULL ) ? [NSString stringWithUTF8String:_x_] : [NSString stringWithUTF8String:""]

extern "C"
{
    void _init(const char *AppID)
    {
        NSLog(@"set app id to %s", AppID);
        [[AWAppStatusReport sharedInstance] init:GetStringParam(AppID)];
    }
    
    void _report()
    {
        NSLog(@"report for app status.");
        [[AWAppStatusReport sharedInstance] report];
    }
}

