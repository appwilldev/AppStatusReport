//
//  AWAppStatusReport.h
//  appStatusReportSample
//
//  Created by yun.chen on 10/29/13.
//  Copyright (c) 2013 AppTao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AWAppStatusReport : NSObject
{
@private
    NSString *_appStoreID;
    NSString *_appName;
}

+ (AWAppStatusReport *)sharedStatusReport;

- (void)setAppID:(NSString*)appID;
- (void)setAppName:(NSString*)appName;
- (void)report;

@end
