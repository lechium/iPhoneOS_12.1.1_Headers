/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTClock
@property (nonatomic,readonly) long long runMode; 
@optional
-(void)updateFlutter;
-(void)updateTimeContinuously:(long long)arg1;
-(double)coarseUpdateInterval;
-(double)updateInterval;

@required
-(void)updateTime;
-(long long)runMode;
-(void)stop;
-(void)start;

@end
