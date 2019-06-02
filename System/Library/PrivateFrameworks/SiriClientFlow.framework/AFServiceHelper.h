/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFServiceHelper <NSObject>
@required
-(void)handleCommand:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)openSensitiveURL:(id)arg1;
-(void)dismissAssistant;
-(id)assistantLocalizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3;
-(BOOL)isDeviceLockedWithPasscode;
-(BOOL)isTimeoutSuspended;
-(id)peerInfoForCurrentCommand;

@end

