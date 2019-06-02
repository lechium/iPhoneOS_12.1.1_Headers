/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVTViewFaceTrackingDelegate.h>
#import <libobjc.A.dylib/AVTUIRaiseGestureManagerDelegate.h>
#import <libobjc.A.dylib/FBSDisplayLayoutObserver.h>

@protocol AVTFaceTrackingManagerDelegate;
@class AVTUserInfoView, AVTUIEnvironment, AVTUIRaiseGestureManager, AVTView, NSTimer, NSString;

@interface AVTFaceTrackingManager : NSObject <AVTViewFaceTrackingDelegate, AVTUIRaiseGestureManagerDelegate, FBSDisplayLayoutObserver> {

	BOOL _faceTrackingManagementPaused;
	BOOL _shouldRecheckLowLightAndSensorOcclusionState;
	id<AVTFaceTrackingManagerDelegate> _delegate;
	AVTUserInfoView* _userInfoView;
	AVTUIEnvironment* _environment;
	AVTUIRaiseGestureManager* _raiseGestureManager;
	AVTView* _avatarView;
	NSTimer* _lowLightAndSensorOcclusionLockoutTimer;
	NSTimer* _trackingLostMessageTimer;
	NSTimer* _pauseTrackingTimer;
	unsigned long long _interruptionType;
	NSString* _localizedDeviceName;

}

@property (nonatomic,readonly) AVTUIEnvironment * environment;                                //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) AVTUIRaiseGestureManager * raiseGestureManager;                //@synthesize raiseGestureManager=_raiseGestureManager - In the implementation block
@property (nonatomic,readonly) AVTView * avatarView;                                          //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) NSTimer * lowLightAndSensorOcclusionLockoutTimer;                //@synthesize lowLightAndSensorOcclusionLockoutTimer=_lowLightAndSensorOcclusionLockoutTimer - In the implementation block
@property (assign,nonatomic) BOOL shouldRecheckLowLightAndSensorOcclusionState;               //@synthesize shouldRecheckLowLightAndSensorOcclusionState=_shouldRecheckLowLightAndSensorOcclusionState - In the implementation block
@property (nonatomic,retain) NSTimer * trackingLostMessageTimer;                              //@synthesize trackingLostMessageTimer=_trackingLostMessageTimer - In the implementation block
@property (nonatomic,retain) NSTimer * pauseTrackingTimer;                                    //@synthesize pauseTrackingTimer=_pauseTrackingTimer - In the implementation block
@property (assign,nonatomic) unsigned long long interruptionType;                             //@synthesize interruptionType=_interruptionType - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDeviceName;                           //@synthesize localizedDeviceName=_localizedDeviceName - In the implementation block
@property (assign,nonatomic) BOOL faceTrackingManagementPaused;                               //@synthesize faceTrackingManagementPaused=_faceTrackingManagementPaused - In the implementation block
@property (assign,nonatomic,__weak) id<AVTFaceTrackingManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) AVTUserInfoView * userInfoView;                                //@synthesize userInfoView=_userInfoView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)desiredUserInfoLabelAlphaForFaceTrackingState:(BOOL)arg1 ;
-(AVTView *)avatarView;
-(void)raiseGestureManagerDidRecognizeRaiseGesture:(id)arg1 ;
-(void)setFaceTrackingManagementPaused:(BOOL)arg1 ;
-(AVTUserInfoView *)userInfoView;
-(void)resumeFaceTrackingIfNeededAnimated:(BOOL)arg1 ;
-(id)initWithAvatarView:(id)arg1 raiseGestureManager:(id)arg2 environment:(id)arg3 ;
-(id)initWithAvatarView:(id)arg1 raiseGestureManager:(id)arg2 userInfoView:(id)arg3 environment:(id)arg4 ;
-(AVTUIRaiseGestureManager *)raiseGestureManager;
-(void)invalidateFaceTrackingTimers;
-(void)cancelLowLightAndSensorOcclusionTimer;
-(void)startTrackingLostTimers;
-(void)updateUserInfoLabelAlphaForFaceTrackingState:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)resetForResumingTrackingAnimated:(BOOL)arg1 ;
-(unsigned long long)interruptionType;
-(void)setInterruptionType:(unsigned long long)arg1 ;
-(id)userInfoStringForCurrentTrackingState;
-(void)updateUserInfoLabelAlphaForFaceTrackingState:(BOOL)arg1 ;
-(NSTimer *)trackingLostMessageTimer;
-(void)setTrackingLostMessageTimer:(NSTimer *)arg1 ;
-(NSTimer *)pauseTrackingTimer;
-(void)setPauseTrackingTimer:(NSTimer *)arg1 ;
-(BOOL)faceTrackingManagementPaused;
-(void)updateForTrackingLost;
-(void)updateForPausingTracking;
-(void)updateUserInfoBackdropForCurrentLabel;
-(void)updateForPausingTrackingWithLabel:(BOOL)arg1 ;
-(void)updateInterruptionTypeIfNeeded:(unsigned long long)arg1 ;
-(NSString *)localizedDeviceName;
-(void)resetForTrackingFoundAFaceAnimated:(BOOL)arg1 ;
-(NSTimer *)lowLightAndSensorOcclusionLockoutTimer;
-(void)setLowLightAndSensorOcclusionLockoutTimer:(NSTimer *)arg1 ;
-(void)setShouldRecheckLowLightAndSensorOcclusionState:(BOOL)arg1 ;
-(BOOL)shouldRecheckLowLightAndSensorOcclusionState;
-(void)avatarViewDidUpdateWithLowLightOrCameraOcclusionStatus;
-(void)avatarView:(id)arg1 didUpdateWithFaceTrackingStatus:(BOOL)arg2 ;
-(void)avatarView:(id)arg1 didUpdateWithLowLightStatus:(BOOL)arg2 ;
-(void)avatarView:(id)arg1 didUpdateWithSensorOcclusionStatus:(BOOL)arg2 ;
-(void)avatarView:(id)arg1 faceTrackingSessionFailedWithError:(id)arg2 ;
-(void)avatarViewFaceTrackingSessionInterruptionDidBegin:(id)arg1 ;
-(void)avatarViewFaceTrackingSessionInterruptionDidEnd:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<AVTFaceTrackingManagerDelegate>)arg1 ;
-(id<AVTFaceTrackingManagerDelegate>)delegate;
-(AVTUIEnvironment *)environment;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
@end
