/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTViewFaceTrackingDelegate <NSObject>
@required
-(void)avatarView:(id)arg1 didUpdateWithFaceTrackingStatus:(BOOL)arg2;
-(void)avatarView:(id)arg1 didUpdateWithLowLightStatus:(BOOL)arg2;
-(void)avatarView:(id)arg1 didUpdateWithSensorOcclusionStatus:(BOOL)arg2;
-(void)avatarView:(id)arg1 faceTrackingSessionFailedWithError:(id)arg2;
-(void)avatarViewFaceTrackingSessionInterruptionDidBegin:(id)arg1;
-(void)avatarViewFaceTrackingSessionInterruptionDidEnd:(id)arg1;

@end

