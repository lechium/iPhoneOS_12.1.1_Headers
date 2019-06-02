/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AVCaptureFileOutputRecordingDelegate.h>

@protocol OS_dispatch_queue, CKVideoRecorderDelegate;
@class AVCaptureDevice, NSObject, AVCaptureVideoPreviewLayer, NSURL, AVCaptureSession, AVCaptureDeviceInput, AVCaptureMovieFileOutput, AVCaptureStillImageOutput, NSString;

@interface CKVideoRecorder : UIViewController <AVCaptureFileOutputRecordingDelegate> {

	long long _currentDevice;
	BOOL _previousStatusBarHidden;
	AVCaptureDevice* _frontFacingCamera;
	AVCaptureDevice* _rearFacingCamera;
	NSObject*<OS_dispatch_queue> _avCaptureSessionDispatchQueue;
	BOOL _canceled;
	AVCaptureVideoPreviewLayer* _captureVideoPreviewLayer;
	id<CKVideoRecorderDelegate> _delegate;
	NSURL* _outputFileURL;
	AVCaptureSession* _session;
	AVCaptureDeviceInput* _rearVideoInput;
	AVCaptureDeviceInput* _frontVideoInput;
	AVCaptureDeviceInput* _audioInput;
	AVCaptureMovieFileOutput* _videoOutput;
	AVCaptureStillImageOutput* _stillImageOutput;

}

@property (nonatomic,retain) AVCaptureSession * session;                                         //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * rearVideoInput;                              //@synthesize rearVideoInput=_rearVideoInput - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * frontVideoInput;                             //@synthesize frontVideoInput=_frontVideoInput - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * audioInput;                                  //@synthesize audioInput=_audioInput - In the implementation block
@property (nonatomic,retain) AVCaptureMovieFileOutput * videoOutput;                             //@synthesize videoOutput=_videoOutput - In the implementation block
@property (nonatomic,retain) AVCaptureStillImageOutput * stillImageOutput;                       //@synthesize stillImageOutput=_stillImageOutput - In the implementation block
@property (assign,nonatomic) BOOL canceled;                                                      //@synthesize canceled=_canceled - In the implementation block
@property (nonatomic,retain) AVCaptureVideoPreviewLayer * captureVideoPreviewLayer;              //@synthesize captureVideoPreviewLayer=_captureVideoPreviewLayer - In the implementation block
@property (assign,nonatomic) long long cameraDevice; 
@property (assign,nonatomic,__weak) id<CKVideoRecorderDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSURL * outputFileURL;                                                //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canceled;
-(void)setCanceled:(BOOL)arg1 ;
-(void)setCaptureVideoPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(id)_configureFrontVideoInput;
-(id)_configureRearVideoInput;
-(void)setVideoOutput:(AVCaptureMovieFileOutput *)arg1 ;
-(void)setStillImageOutput:(AVCaptureStillImageOutput *)arg1 ;
-(AVCaptureVideoPreviewLayer *)captureVideoPreviewLayer;
-(id)audioDevice;
-(void)setAudioInput:(AVCaptureDeviceInput *)arg1 ;
-(AVCaptureMovieFileOutput *)videoOutput;
-(void)setOutputFileURL:(NSURL *)arg1 ;
-(NSURL *)outputFileURL;
-(AVCaptureStillImageOutput *)stillImageOutput;
-(id)_cameraWithPosition:(long long)arg1 ;
-(void)setupCamera:(id)arg1 ;
-(id)frontFacingCamera;
-(void)setFrontVideoInput:(AVCaptureDeviceInput *)arg1 ;
-(id)rearFacingCamera;
-(void)setRearVideoInput:(AVCaptureDeviceInput *)arg1 ;
-(AVCaptureDeviceInput *)frontVideoInput;
-(AVCaptureDeviceInput *)rearVideoInput;
-(void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4 ;
-(void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 ;
-(AVCaptureDeviceInput *)audioInput;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<CKVideoRecorderDelegate>)arg1 ;
-(id<CKVideoRecorderDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)cancel;
-(AVCaptureSession *)session;
-(void)takePicture;
-(BOOL)startVideoCapture;
-(void)stopVideoCapture;
-(long long)cameraDevice;
-(void)setCameraDevice:(long long)arg1 ;
-(void)setSession:(AVCaptureSession *)arg1 ;
@end

