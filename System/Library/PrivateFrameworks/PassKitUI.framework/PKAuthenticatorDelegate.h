/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKAuthenticatorDelegate <NSObject>
@optional
-(void)authenticatorDidEncounterMatchMiss:(id)arg1;
-(void)authenticatorWillRestartEvaluation:(id)arg1;
-(void)authenticator:(id)arg1 didTransitionToPearlState:(long long)arg2;
-(void)authenticator:(id)arg1 didTransitionToCoachingState:(long long)arg2;
-(void)authenticatorDidEncounterFingerOn:(id)arg1;
-(void)authenticatorDidEncounterFingerOff:(id)arg1;
-(void)authenticator:(id)arg1 didRequestUserAction:(long long)arg2;
-(void)authenticatorDidEncounterBiometricLockout:(id)arg1;
-(void)authenticatorDidActivateTouchID:(id)arg1;
-(void)authenticatorDidDeactivateTouchID:(id)arg1 status:(long long)arg2;
-(UIViewController*)passcodeViewController;
-(void)presentPasscodeViewController:(UIViewController*)arg1 completionHandler:(/*^block*/id)arg2 reply:(/*^block*/id)arg3;
-(void)dismissPasscodeViewController;
-(UIViewController*)passphraseViewController;
-(void)presentPassphraseViewController:(UIViewController*)arg1 completionHandler:(/*^block*/id)arg2 reply:(/*^block*/id)arg3;
-(void)dismissPassphraseViewController;

@end

