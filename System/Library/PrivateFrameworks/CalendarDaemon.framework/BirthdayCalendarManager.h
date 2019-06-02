/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, NSTimer;

@interface BirthdayCalendarManager : NSObject {

	NSOperationQueue* _queue;
	void* _addressBook;
	BOOL _abSyncActive;
	BOOL _calSyncActive;
	NSTimer* _syncTimer;
	NSTimer* _throttleTimer;
	BOOL _wantsUpdatedWhileThrottled;
	BOOL _running;
	unsigned long long _failedPopulateAttempts;
	BOOL _isPopulatePending;
	unsigned long long _failedAlarmUpdateAttempts;
	BOOL _isAlarmUpdatePending;

}
+(void)setStateInPrefs:(int)arg1 withLastABSequence:(int)arg2 ;
-(void)_killThrottleTimer;
-(void)_throttleTimerFired:(id)arg1 ;
-(void)_startThrottleTimer;
-(void)updateAlarms;
-(void)syncTimerFired:(id)arg1 ;
-(void)killSyncTimer;
-(void)resetSyncTimer;
-(void)maybeUpdateAfterSyncEnd;
-(void)abSyncDidStart;
-(void)abSyncDidEnd;
-(void)calSyncDidStart;
-(void)calSyncDidEnd;
-(void)_killSyncTimer;
-(void)_updateIfNeeded;
-(void)populate;
-(void)rebuild;
-(void)dealloc;
-(void)stop;
-(void)start;
@end

