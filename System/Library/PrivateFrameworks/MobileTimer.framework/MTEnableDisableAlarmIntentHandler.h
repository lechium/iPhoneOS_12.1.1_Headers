/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MTAlarmIntentHandler.h>
#import <libobjc.A.dylib/MTEnableAlarmIntentHandling.h>
#import <libobjc.A.dylib/MTDisableAlarmIntentHandling.h>

@class NSString;

@interface MTEnableDisableAlarmIntentHandler : MTAlarmIntentHandler <MTEnableAlarmIntentHandling, MTDisableAlarmIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_alarmUserActivityWithEnableIntent:(id)arg1 ;
-(id)_alarmUserActivityWithDisableIntent:(id)arg1 ;
-(BOOL)_enableDisableAlarm:(BOOL)arg1 alarmIDString:(id)arg2 ;
-(void)handleMTEnableAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmMTEnableAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleMTDisableAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmMTDisableAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

