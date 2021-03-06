/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTSiriAssertionMonitor : VTEventMonitor {

	unsigned char _assertionState;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(void)enableAssertionReceived;
-(void)disableAssertionReceived;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEnabled;
@end

