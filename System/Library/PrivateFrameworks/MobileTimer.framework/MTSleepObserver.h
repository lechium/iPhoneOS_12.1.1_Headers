/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTSleepObserver <NSObject>
@optional
-(void)sleepMonitor:(id)arg1 bedtimeReminderDidFire:(id)arg2 sleepAlarm:(id)arg3;
-(void)sleepMonitor:(id)arg1 bedtimeReminderWasConfirmed:(id)arg2 sleepAlarm:(id)arg3;
-(void)sleepMonitor:(id)arg1 bedtimeReminderWasSnoozed:(id)arg2 sleepAlarm:(id)arg3;
-(void)sleepMonitor:(id)arg1 bedtimeWasReached:(id)arg2 sleepAlarm:(id)arg3;
-(void)sleepMonitor:(id)arg1 wakeUpAlarmDidFire:(id)arg2 sleepAlarm:(id)arg3;
-(void)sleepMonitor:(id)arg1 wakeUpAlarmWasDismissed:(id)arg2 sleepAlarm:(id)arg3;
-(void)sleepMonitor:(id)arg1 wakeUpAlarmWasSnoozed:(id)arg2 sleepAlarm:(id)arg3;
-(void)sleepMonitor:(id)arg1 sleepAlarmDidChange:(id)arg2;

@end
