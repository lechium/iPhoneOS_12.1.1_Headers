/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppNotificationsLoggingClient.framework/AppNotificationsLoggingClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PETScalarEventTracker;

@interface ATXNotificationsAggregateLogger : NSObject {

	PETScalarEventTracker* _rttSelectionTracker;
	PETScalarEventTracker* _rttFromTracker;

}
+(id)rtFromMapping;
+(id)rtOutcomesMapping;
+(id)stringForRTOutcome:(unsigned long long)arg1 ;
+(id)stringForRTFrom:(unsigned long long)arg1 ;
+(id)sharedInstance;
-(void)logRealTimeTuningCountFrom:(unsigned long long)arg1 ;
-(void)logRealTimeTuningOutcome:(unsigned long long)arg1 ;
-(id)init;
@end

