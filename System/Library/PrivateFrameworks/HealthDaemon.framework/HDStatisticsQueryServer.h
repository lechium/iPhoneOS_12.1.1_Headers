/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>

@class NSDateInterval;

@interface HDStatisticsQueryServer : HDQueryServer {

	NSDateInterval* _dateInterval;
	unsigned long long _statisticsOptions;
	unsigned long long _mergeStrategy;

}

@property (nonatomic,readonly) unsigned long long statisticsOptions;              //@synthesize statisticsOptions=_statisticsOptions - In the implementation block
@property (nonatomic,readonly) unsigned long long mergeStrategy;                  //@synthesize mergeStrategy=_mergeStrategy - In the implementation block
+(id)requiredEntitlements;
+(Class)queryClass;
+(BOOL)supportsAnchorBasedAuthorization;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5 ;
-(void)_queue_start;
-(unsigned long long)mergeStrategy;
-(id)_queue_fetchStatisticsWithError:(id*)arg1 ;
-(unsigned long long)statisticsOptions;
@end

