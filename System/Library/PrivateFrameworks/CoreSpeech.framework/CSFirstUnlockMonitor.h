/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSFirstUnlockMonitor : CSEventMonitor {

	int _notifyToken;
	BOOL _firstUnlocked;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)isFirstUnlocked;
-(BOOL)_checkFirstUnlocked;
-(void)_didReceiveFirstUnlock:(BOOL)arg1 ;
-(void)_notifyObserver:(id)arg1 withUnlocked:(BOOL)arg2 ;
-(void)_didReceiveFirstUnlockInQueue:(BOOL)arg1 ;
-(id)init;
@end
