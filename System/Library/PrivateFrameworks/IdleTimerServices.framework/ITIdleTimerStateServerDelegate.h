/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ITIdleTimerStateServerDelegate <NSObject>
@required
-(void)clientDidDisconnect:(id)arg1;
-(BOOL)isIdleTimerServiceAvailable;
-(void)client:(id)arg1 setIdleTimerDisabled:(BOOL)arg2 forReason:(id)arg3;

@end

