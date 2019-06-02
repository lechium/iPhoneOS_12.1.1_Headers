/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CFXCameraViewController.h>

@interface CNKFaceTimeCameraViewController : CFXCameraViewController {

	 cameraDelegate;

}

@property (assign,__weak,nonatomic) id<CNKFaceTimeCameraViewControllerDelegate> cameraDelegate; 
-(id<CNKFaceTimeCameraViewControllerDelegate>)cameraDelegate;
-(void)setCameraDelegate:(id<CNKFaceTimeCameraViewControllerDelegate>)arg1 ;
-(id)initWithCaptureMode:(long long)arg1 devicePosition:(long long)arg2 flashMode:(long long)arg3 ;
-(void)effectBrowserViewController:(id)arg1 didSelectApp:(id)arg2 ;
@end

