/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBUIRemoteAlertServiceInterface
@optional
-(void)prepareForActivationWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)handleButtonActions:(id)arg1;
-(void)handleLockButtonPressed;
-(void)handleVolumeUpButtonPressed;
-(void)handleVolumeDownButtonPressed;
-(void)handleHeadsetButtonPressed:(BOOL)arg1;
-(void)handleDoubleHeightStatusBarTap;
-(void)noteActivatedForActivityContinuationWithIdentifier:(id)arg1;
-(void)handleHomeButtonPressed;
-(void)setUserInfo:(id)arg1;

@required
-(void)configureWithContext:(id)arg1 completion:(/*^block*/id)arg2;

@end

