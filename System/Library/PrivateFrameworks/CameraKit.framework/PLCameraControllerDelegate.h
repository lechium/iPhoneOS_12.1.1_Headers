/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLCameraControllerDelegate <NSObject>
@optional
-(void)cameraControllerModeDidChange:(id)arg1;
-(void)cameraControllerPreviewDidStart:(id)arg1;
-(void)cameraControllerSessionDidStart:(id)arg1;
-(void)cameraControllerDidSetupSession:(id)arg1;
-(void)cameraControllerDidStartSession:(id)arg1;
-(void)cameraControllerWillStartPreview:(id)arg1;
-(void)cameraControllerDidStopSession:(id)arg1;
-(void)cameraControllerWillStopSession:(id)arg1;
-(void)cameraControllerSessionDidStop:(id)arg1;
-(void)cameraControllerSessionWasInterrupted:(id)arg1;
-(void)cameraControllerSessionInterruptionEnded:(id)arg1;
-(void)cameraControllerServerDied:(id)arg1;
-(void)cameraControllerServerError:(id)arg1;
-(void)cameraController:(id)arg1 cleanApertureDidChange:(CGRect)arg2;
-(void)cameraController:(id)arg1 willChangeToMode:(long long)arg2 device:(long long)arg3;
-(void)cameraControllerWillTakePhoto:(id)arg1;
-(void)cameraControllerDidTakePhoto:(id)arg1;
-(void)cameraController:(id)arg1 capturedPhoto:(id)arg2 error:(id)arg3;
-(void)cameraController:(id)arg1 didChangeCaptureAbility:(BOOL)arg2;
-(void)cameraControllerDidChangePanoramaConfiguration:(id)arg1;
-(void)cameraController:(id)arg1 didUpdatePanoramaPreview:(id)arg2;
-(void)cameraController:(id)arg1 didReceivePanoramaIssue:(int)arg2;
-(void)cameraControllerDidStartPanoramaCapture:(id)arg1;
-(void)cameraControllerWillStopPanoramaCapture:(id)arg1;
-(void)cameraControllerPanoramaWillStartProcessing:(id)arg1;
-(void)cameraControllerPanoramaDidStopProcessing:(id)arg1;
-(void)cameraController:(id)arg1 capturedPanorama:(id)arg2 error:(id)arg3;
-(void)cameraControllerVideoCaptureDidStart:(id)arg1;
-(void)cameraControllerDidStopVideoCapture:(id)arg1;
-(void)cameraControllerVideoCaptureDidStop:(id)arg1 withReason:(int)arg2 userInfo:(id)arg3;
-(void)cameraControllerDidChangeFocusMode:(id)arg1;
-(void)cameraControllerDidChangeExposureMode:(id)arg1;
-(void)cameraControllerFocusDidStart:(id)arg1;
-(void)cameraControllerFocusDidEnd:(id)arg1;
-(void)cameraControllerExposureDidStart:(id)arg1;
-(void)cameraControllerExposureDidEnd:(id)arg1;
-(void)cameraController:(id)arg1 willResetFocus:(BOOL)arg2 exposure:(BOOL)arg3;
-(void)cameraControllerDidChangeUserLockedFocus:(id)arg1;
-(void)cameraControllerDidChangeUserLockedExposure:(id)arg1;
-(void)cameraControllerDidChangeExposureTargetBias:(id)arg1;
-(void)cameraController:(id)arg1 faceMetadataDidChange:(id)arg2;
-(void)cameraController:(id)arg1 videoZoomFactorDidChange:(double)arg2;
-(void)cameraControllerFlashWillFireChanged:(id)arg1;
-(void)cameraControllerTorchActiveChanged:(id)arg1;
-(void)cameraControllerTorchAvailabilityChanged:(id)arg1;
-(void)cameraControllerDidChangeEffectFilterIndex:(id)arg1;
-(void)cameraController:(id)arg1 willTransitionToShowEffectsGrid:(BOOL)arg2;
-(void)cameraController:(id)arg1 didStartTransitionToShowEffectsGrid:(BOOL)arg2 animated:(BOOL)arg3;
-(void)cameraController:(id)arg1 didFinishTransitionToShowEffectsGrid:(BOOL)arg2;
-(void)cameraControllerDidChangeHDRSuggestion:(id)arg1;
-(void)cameraControllerRemoteShutterPressed:(id)arg1 countdown:(unsigned long long)arg2;
-(void)cameraControllerRemoteShutterCanceled:(id)arg1;
-(void)cameraController:(id)arg1 remoteFocusTapped:(CGPoint)arg2;
-(BOOL)cameraControllerRemoteShutterStartVideoCapture:(id)arg1;
-(BOOL)cameraControllerRemoteShutterStopVideoCapture:(id)arg1;
-(void)cameraControllerRemoteShutterNeedsReadiness:(id)arg1;
-(void)cameraControllerRemoteShutter:(id)arg1 setFlashMode:(long long)arg2;
-(void)cameraControllerRemoteShutterToggleCameraDevice:(id)arg1;
-(void)captureController:(id)arg1 didStartRecordingForVideoRequest:(id)arg2;
-(void)captureController:(id)arg1 didStopRecordingForVideoRequest:(id)arg2;
-(void)captureController:(id)arg1 didFinishRecordingForVideoRequest:(id)arg2 withResponse:(id)arg3;
-(void)captureController:(id)arg1 didStartCapturingForPanoramaRequest:(id)arg2;
-(void)captureController:(id)arg1 didStopCapturingForPanoramaRequest:(id)arg2;
-(void)captureController:(id)arg1 didStartProcessingForPanoramaRequest:(id)arg2;
-(void)captureController:(id)arg1 didStopProcessingForPanoramaRequest:(id)arg2;
-(void)captureController:(id)arg1 didFinishPanoramaRequest:(id)arg2 withResponse:(id)arg3;
-(void)captureControllerPanoramaConfigurationChanged:(id)arg1;
-(void)captureController:(id)arg1 didOutputPanoramaCaptureParameters:(id)arg2;

@end

