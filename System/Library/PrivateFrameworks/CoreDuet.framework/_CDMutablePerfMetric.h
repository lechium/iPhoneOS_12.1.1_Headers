/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_CDPerfMetric.h>

@protocol OS_os_activity;
@class NSObject, _DKEventStatsTimerCounter;

@interface _CDMutablePerfMetric : _CDPerfMetric {

	XSPerfCollection* _stats;
	NSObject*<OS_os_activity> _os_activity;
	os_activity_scope_state_s _os_activity_scope_state;
	_DKEventStatsTimerCounter* _eventStatsTimerCounter;

}
-(double)lastElapsedTime;
-(double)minimumElapsedTime;
-(double)maximumElapsedTime;
-(double)averageElapsedTime;
-(unsigned long long)lastResultCount;
-(id)elapsedTimeHistogram;
-(id)initWithName:(id)arg1 string:(id)arg2 family:(id)arg3 ;
-(void)startTelemetryWithOSActivity:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(unsigned long long)errorCount;
-(id)lastUpdate;
@end
