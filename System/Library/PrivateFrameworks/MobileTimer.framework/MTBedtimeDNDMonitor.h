/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DNDModeAssertionUpdateListener.h>
#import <libobjc.A.dylib/MTSleepObserver.h>
#import <libobjc.A.dylib/MTTimeObserver.h>
#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>

@protocol MTAlarmStorage;
@class MTSleepMonitor, DNDModeAssertionService, NSString;

@interface MTBedtimeDNDMonitor : NSObject <DNDModeAssertionUpdateListener, MTSleepObserver, MTTimeObserver, MTAgentDiagnosticDelegate> {

	id<MTAlarmStorage> _alarmStorage;
	MTSleepMonitor* _sleepMonitor;
	/*^block*/id _currentDateProvider;
	DNDModeAssertionService* _assertionService;

}

@property (nonatomic,retain) id<MTAlarmStorage> alarmStorage;                         //@synthesize alarmStorage=_alarmStorage - In the implementation block
@property (nonatomic,retain) MTSleepMonitor * sleepMonitor;                           //@synthesize sleepMonitor=_sleepMonitor - In the implementation block
@property (nonatomic,copy) id currentDateProvider;                                    //@synthesize currentDateProvider=_currentDateProvider - In the implementation block
@property (nonatomic,retain) DNDModeAssertionService * assertionService;              //@synthesize assertionService=_assertionService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)printDiagnostics;
-(id)gatherDiagnostics;
-(id)currentDateProvider;
-(id)initWithAlarmStorage:(id)arg1 sleepMonitor:(id)arg2 currentDateProvider:(/*^block*/id)arg3 ;
-(void)_checkDNDForAlarm:(id)arg1 ;
-(void)_checkDNDForAlarm:(id)arg1 delay:(double)arg2 ;
-(void)disengageDND;
-(void)checkDND;
-(void)engageDNDUntilDate:(id)arg1 ;
-(DNDModeAssertionService *)assertionService;
-(void)handleManualDNDInvalidation;
-(void)modeAssertionService:(id)arg1 didReceiveModeAssertionInvalidation:(id)arg2 ;
-(void)sleepMonitor:(id)arg1 bedtimeReminderDidFire:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepMonitor:(id)arg1 bedtimeReminderWasConfirmed:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepMonitor:(id)arg1 bedtimeWasReached:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepMonitor:(id)arg1 wakeUpAlarmDidFire:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepMonitor:(id)arg1 wakeUpAlarmWasDismissed:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepMonitor:(id)arg1 wakeUpAlarmWasSnoozed:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepMonitor:(id)arg1 sleepAlarmDidChange:(id)arg2 ;
-(void)timeListener:(id)arg1 didDetectSignificantTimeChangeWithCompletionBlock:(/*^block*/id)arg2 ;
-(id)initWithAlarmStorage:(id)arg1 sleepMonitor:(id)arg2 ;
-(id<MTAlarmStorage>)alarmStorage;
-(void)setAlarmStorage:(id<MTAlarmStorage>)arg1 ;
-(MTSleepMonitor *)sleepMonitor;
-(void)setSleepMonitor:(MTSleepMonitor *)arg1 ;
-(void)setCurrentDateProvider:(id)arg1 ;
-(void)setAssertionService:(DNDModeAssertionService *)arg1 ;
-(void)dealloc;
@end

