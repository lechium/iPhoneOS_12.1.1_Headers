/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 5:59:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CFXCaptureViewControllerDelegate <NSObject>
@optional
-(void)captureViewControllerDidStartVideoRecording:(id)arg1;
-(void)captureViewControllerDidStopVideoRecording:(id)arg1;

@required
-(void)captureViewController:(id)arg1 didCaptureMediaItem:(id)arg2;
-(void)captureViewController:(id)arg1 didChangeEffectComposition:(id)arg2;
-(void)captureViewController:(id)arg1 didRenderFrame:(id)arg2;
-(void)captureViewControllerDoneButtonWasTapped:(id)arg1;
-(void)captureViewControllerEffectsButtonWasTapped:(id)arg1;
-(void)captureViewControllerPresentationRectWasDoubleTapped:(id)arg1;
-(void)captureViewControllerStartCaptureSession:(id)arg1;
-(void)captureViewControllerStopCaptureSession:(id)arg1;
-(void)captureViewControllerCameraFlipButtonWasTapped:(id)arg1;
-(id)cameraControlsViewControllerForCaptureViewController:(id)arg1;

@end

