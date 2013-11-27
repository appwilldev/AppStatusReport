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
    NSString* _appStoreID;
}

+ (AWAppStatusReport *)sharedStatusReport;

- (void)setAppID:(NSString*)appID;
- (void)report;

@end
