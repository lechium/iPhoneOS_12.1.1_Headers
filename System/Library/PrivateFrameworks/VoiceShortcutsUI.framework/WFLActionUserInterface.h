/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFLActionUserInterface <NSObject>
@optional
-(void)logDebugInformation:(id)arg1;
-(void)action:(id)arg1 requiresUserConfirmation:(BOOL)arg2 proceedHandler:(/*^block*/id)arg3;
-(void)action:(id)arg1 requiresUserConfirmation:(BOOL)arg2 requiresUserAuthentication:(BOOL)arg3 proceedHandler:(/*^block*/id)arg4;
-(void)handleIntentAction:(id)arg1 requiresUserConfirmation:(BOOL)arg2 requiresUserAuthentication:(BOOL)arg3 withIntentResponse:(id)arg4 proceedHandler:(/*^block*/id)arg5;
-(void)action:(id)arg1 requiresContinuingInAppWithProceedHandler:(/*^block*/id)arg2;

@end

