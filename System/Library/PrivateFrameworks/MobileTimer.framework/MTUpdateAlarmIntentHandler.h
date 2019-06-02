/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MTAlarmIntentHandler.h>
#import <libobjc.A.dylib/MTUpdateAlarmIntentHandling.h>

@class NSString;

@interface MTUpdateAlarmIntentHandler : MTAlarmIntentHandler <MTUpdateAlarmIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_alarmUserActivityWithIntent:(id)arg1 ;
-(void)handleMTUpdateAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmMTUpdateAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
