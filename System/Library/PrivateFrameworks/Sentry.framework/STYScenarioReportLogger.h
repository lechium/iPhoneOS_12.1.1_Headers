/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Sentry.framework/Sentry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class NSObject;

@interface STYScenarioReportLogger : NSObject {

	NSObject*<OS_os_log> _logHandle;

}

@property (retain) NSObject*<OS_os_log> logHandle;              //@synthesize logHandle=_logHandle - In the implementation block
+(id)sharedLogger;
-(NSObject*<OS_os_log>)logHandle;
-(void)setLogHandle:(NSObject*<OS_os_log>)arg1 ;
@end

