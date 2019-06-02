/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CAMCaptureResultDelegate.h>
#import <libobjc.A.dylib/CAMPersistenceResultDelegate.h>
#import <libobjc.A.dylib/CAMCVCStillImageResultCoordinatorDelegate.h>
#import <libobjc.A.dylib/CAMIrisVideoControllerDelegate.h>
#import <libobjc.A.dylib/CAMViewfinderReviewButtonSource.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CAMCameraCaptureDelegate, OS_dispatch_queue, CAMCameraViewControllerPresentationDelegate, CAMCameraViewControllerCameraSessionDelegate;
@class CUCaptureController, CAMTimelapseController, CAMPersistenceController, CAMMotionController, CAMLocationController, CAMPowerController, CAMBurstController, CAMKeepAliveController, CAMProtectionController, CAMRemoteShutterController, CAMNebulaDaemonProxyManager, CAMIrisVideoController, CAMReviewButton, NSObject, NSMutableDictionary, CAMThumbnailGenerator, CAMViewfinderViewController, NSString;

@interface CAMCameraViewController : UIViewController <CAMCaptureResultDelegate, CAMPersistenceResultDelegate, CAMCVCStillImageResultCoordinatorDelegate, CAMIrisVideoControllerDelegate, CAMViewfinderReviewButtonSource, NSCoding, NSSecureCoding> {

	BOOL _automaticallyManagesCameraSession;
	id<CAMCameraCaptureDelegate> _captureDelegate;
	CUCaptureController* _captureController;
	CAMTimelapseController* _timelapseController;
	CAMPersistenceController* _persistenceController;
	CAMMotionController* _motionController;
	CAMLocationController* _locationController;
	CAMPowerController* _powerController;
	CAMBurstController* _burstController;
	CAMKeepAliveController* _keepAliveController;
	CAMProtectionController* _protectionController;
	CAMRemoteShutterController* _remoteShutterController;
	CAMNebulaDaemonProxyManager* _nebulaDaemonProxyManager;
	CAMIrisVideoController* _irisVideoController;
	CAMReviewButton* __reviewButton;
	NSObject*<OS_dispatch_queue> __resultProcessingQueue;
	NSMutableDictionary* __resultQueueStillImageResultCoordinators;
	CAMThumbnailGenerator* __resultQueueThumbnailGenerator;
	CAMViewfinderViewController* _viewfinderViewController;
	id<CAMCameraViewControllerPresentationDelegate> _presentationDelegate;
	id<CAMCameraViewControllerCameraSessionDelegate> _cameraSessionDelegate;

}

@property (nonatomic,readonly) CUCaptureController * captureController;                                                              //@synthesize captureController=_captureController - In the implementation block
@property (nonatomic,readonly) CAMTimelapseController * timelapseController;                                                         //@synthesize timelapseController=_timelapseController - In the implementation block
@property (nonatomic,readonly) CAMPersistenceController * persistenceController;                                                     //@synthesize persistenceController=_persistenceController - In the implementation block
@property (nonatomic,readonly) CAMMotionController * motionController;                                                               //@synthesize motionController=_motionController - In the implementation block
@property (nonatomic,readonly) CAMLocationController * locationController;                                                           //@synthesize locationController=_locationController - In the implementation block
@property (nonatomic,readonly) CAMPowerController * powerController;                                                                 //@synthesize powerController=_powerController - In the implementation block
@property (nonatomic,readonly) CAMBurstController * burstController;                                                                 //@synthesize burstController=_burstController - In the implementation block
@property (nonatomic,readonly) CAMKeepAliveController * keepAliveController;                                                         //@synthesize keepAliveController=_keepAliveController - In the implementation block
@property (nonatomic,readonly) CAMProtectionController * protectionController;                                                       //@synthesize protectionController=_protectionController - In the implementation block
@property (nonatomic,readonly) CAMRemoteShutterController * remoteShutterController;                                                 //@synthesize remoteShutterController=_remoteShutterController - In the implementation block
@property (nonatomic,readonly) CAMNebulaDaemonProxyManager * nebulaDaemonProxyManager;                                               //@synthesize nebulaDaemonProxyManager=_nebulaDaemonProxyManager - In the implementation block
@property (nonatomic,readonly) CAMIrisVideoController * irisVideoController;                                                         //@synthesize irisVideoController=_irisVideoController - In the implementation block
@property (nonatomic,readonly) CAMReviewButton * _reviewButton;                                                                      //@synthesize _reviewButton=__reviewButton - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _resultProcessingQueue;                                                  //@synthesize _resultProcessingQueue=__resultProcessingQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _resultQueueStillImageResultCoordinators;                                       //@synthesize _resultQueueStillImageResultCoordinators=__resultQueueStillImageResultCoordinators - In the implementation block
@property (nonatomic,readonly) CAMThumbnailGenerator * _resultQueueThumbnailGenerator;                                               //@synthesize _resultQueueThumbnailGenerator=__resultQueueThumbnailGenerator - In the implementation block
@property (nonatomic,readonly) CAMViewfinderViewController * viewfinderViewController;                                               //@synthesize viewfinderViewController=_viewfinderViewController - In the implementation block
@property (assign,getter=isDisablingMultipleCaptureFeatures,nonatomic) BOOL disablingMultipleCaptureFeatures; 
@property (assign,getter=isDisablingAdditionalCaptures,nonatomic) BOOL disablingAdditionalCaptures; 
@property (getter=isPreventingAdditionalCaptures,nonatomic,readonly) BOOL preventingAdditionalCaptures; 
@property (assign,nonatomic) unsigned long long persistenceBehavior; 
@property (assign,nonatomic) BOOL automaticallyAdjustsApplicationIdleTimer; 
@property (assign,nonatomic,__weak) id<CAMCameraViewControllerPresentationDelegate> presentationDelegate;                            //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (assign,getter=creativeCameraDelegate,nonatomic,__weak) id<CAMCreativeCameraDelegate> creativeCameraDelegate; 
@property (assign,getter=isPerformingTileTransition,nonatomic) BOOL performingTileTransition; 
@property (assign,nonatomic) BOOL automaticallyManagesCameraSession;                                                                 //@synthesize automaticallyManagesCameraSession=_automaticallyManagesCameraSession - In the implementation block
@property (assign,nonatomic,__weak) id<CAMCameraViewControllerCameraSessionDelegate> cameraSessionDelegate;                          //@synthesize cameraSessionDelegate=_cameraSessionDelegate - In the implementation block
@property (nonatomic,readonly) long long messagesTransitionState; 
@property (assign,nonatomic,__weak) id<CAMCameraConfigurationDelegate> configurationDelegate; 
@property (nonatomic,readonly) long long captureMode; 
@property (nonatomic,readonly) long long captureDevice; 
@property (assign,nonatomic) long long flashMode; 
@property (assign,nonatomic) long long torchMode; 
@property (assign,setter=setHDRMode:,nonatomic) long long hdrMode; 
@property (assign,nonatomic) long long timerDuration; 
@property (assign,nonatomic) long long livePhotoMode; 
@property (assign,nonatomic,__weak) id<CAMCameraCaptureDelegate> captureDelegate;                                                    //@synthesize captureDelegate=_captureDelegate - In the implementation block
@property (getter=isCapturingPhoto,nonatomic,readonly) BOOL capturingPhoto; 
@property (getter=isCapturingLivePhoto,nonatomic,readonly) BOOL capturingLivePhoto; 
@property (getter=isRecording,nonatomic,readonly) BOOL recording; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isEmulatingImagePicker;
+(BOOL)supportsSecureCoding;
-(CAMPowerController *)powerController;
-(void)setPresentationDelegate:(id<CAMCameraViewControllerPresentationDelegate>)arg1 ;
-(BOOL)isRecording;
-(BOOL)stopRecording;
-(void)setFlashMode:(long long)arg1 ;
-(void)setTorchMode:(long long)arg1 ;
-(BOOL)startRecording;
-(CUCaptureController *)captureController;
-(CAMViewfinderViewController *)viewfinderViewController;
-(id)reviewButton;
-(CAMReviewButton *)_reviewButton;
-(long long)captureDevice;
-(long long)flashMode;
-(void)setHDRMode:(long long)arg1 ;
-(long long)torchMode;
-(long long)timerDuration;
-(long long)captureMode;
-(void)setConfigurationDelegate:(id<CAMCameraConfigurationDelegate>)arg1 ;
-(BOOL)isDisablingAdditionalCaptures;
-(void)setPerformingTileTransition:(BOOL)arg1 ;
-(BOOL)isPerformingTileTransition;
-(unsigned long long)persistenceBehavior;
-(BOOL)isDisablingMultipleCaptureFeatures;
-(id<CAMCameraConfigurationDelegate>)configurationDelegate;
-(BOOL)automaticallyAdjustsApplicationIdleTimer;
-(long long)messagesTransitionState;
-(BOOL)isPreventingAdditionalCaptures;
-(void)setLivePhotoMode:(long long)arg1 ;
-(long long)livePhotoMode;
-(id<CAMCreativeCameraDelegate>)creativeCameraDelegate;
-(void)handleVolumeButtonPressed;
-(void)handleVolumeButtonReleased;
-(void)setTimerDuration:(long long)arg1 ;
-(BOOL)isCapturingPhoto;
-(BOOL)isCapturingLivePhoto;
-(BOOL)capturePhoto;
-(void)setDisablingAdditionalCaptures:(BOOL)arg1 ;
-(CGSize)viewSystemLayoutSizeFittingSize:(CGSize)arg1 forCaptureMode:(long long)arg2 ;
-(void)setMessagesTransitionState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setAutomaticallyAdjustsApplicationIdleTimer:(BOOL)arg1 ;
-(void)setPersistenceBehavior:(unsigned long long)arg1 ;
-(void)setCreativeCameraDelegate:(id<CAMCreativeCameraDelegate>)arg1 ;
-(void)setDisablingMultipleCaptureFeatures:(BOOL)arg1 ;
-(id<CAMCameraViewControllerPresentationDelegate>)presentationDelegate;
-(id)initWithOverrides:(id)arg1 usingEmulationMode:(long long)arg2 ;
-(void)setCaptureDelegate:(id<CAMCameraCaptureDelegate>)arg1 ;
-(void)configureForCaptureMode:(long long)arg1 captureDevice:(long long)arg2 ;
-(void)handleReviewButtonReleased:(id)arg1 ;
-(double)irisVideoController:(id)arg1 willPersistVideoCaptureResult:(id)arg2 forRequest:(id)arg3 ;
-(void)irisVideoController:(id)arg1 didPersistVideoCaptureResult:(id)arg2 forCaptureResult:(id)arg3 request:(id)arg4 ;
-(void)persistenceController:(id)arg1 didCompleteAllLocalPersistenceForRequest:(id)arg2 ;
-(void)persistenceController:(id)arg1 didGenerateStillImageLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4 ;
-(void)persistenceController:(id)arg1 didGenerateVideoLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4 ;
-(void)captureController:(id)arg1 didGenerateStillImageCaptureResult:(id)arg2 fromRequest:(id)arg3 ;
-(void)stillImagePersistenceCoordinator:(id)arg1 requestsDispatchForResultSpecifiers:(unsigned long long)arg2 photoProperties:(id)arg3 videoProperties:(id)arg4 unfilteredPhotoProperties:(id)arg5 unfilteredVideoProperties:(id)arg6 assetAdjustments:(id)arg7 error:(id)arg8 ;
-(CAMTimelapseController *)timelapseController;
-(CAMPersistenceController *)persistenceController;
-(CAMMotionController *)motionController;
-(CAMLocationController *)locationController;
-(CAMBurstController *)burstController;
-(CAMKeepAliveController *)keepAliveController;
-(CAMProtectionController *)protectionController;
-(CAMRemoteShutterController *)remoteShutterController;
-(CAMNebulaDaemonProxyManager *)nebulaDaemonProxyManager;
-(CAMIrisVideoController *)irisVideoController;
-(void)_commonCAMCameraViewControllerInitializationWithOverrides:(id)arg1 usingEmulationMode:(long long)arg2 initialLayoutStyle:(long long)arg3 privateOptions:(long long)arg4 ;
-(BOOL)automaticallyManagesCameraSession;
-(void)resumeCameraSession;
-(void)suspendCameraSession;
-(id<CAMCameraViewControllerCameraSessionDelegate>)cameraSessionDelegate;
-(unsigned long long)_capturePersistenceBehaviorForViewfinderPersistenceBehavior:(unsigned long long)arg1 ;
-(unsigned long long)_viewfinderPersistenceBehaviorForCapturePersistenceBehavior:(unsigned long long)arg1 ;
-(CAMThumbnailGenerator *)_resultQueueThumbnailGenerator;
-(id<CAMCameraCaptureDelegate>)captureDelegate;
-(id)_resultQueueSafeImageFromSurface:(void*)arg1 imageOrientation:(long long)arg2 ;
-(id)_previewImageFromVideoURL:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_resultProcessingQueue;
-(id)_clientPropertiesForStillImageWithURL:(id)arg1 captureMode:(long long)arg2 captureOrientation:(long long)arg3 previewSurface:(void*)arg4 previewOrientation:(long long)arg5 uniqueIdentifier:(id)arg6 savedToPhotoLibrary:(BOOL)arg7 captureResult:(id)arg8 ;
-(void)_notifyCaptureDelegateOfCompletedCaptureOfPhoto:(id)arg1 withProperties:(id)arg2 error:(id)arg3 ;
-(id)_behaviorDefinedDestinationURLForRequest:(id)arg1 withLocalDestinationURL:(id)arg2 linkedDestinationURL:(id)arg3 ;
-(id)_assetAdjustmentsFromFilters:(id)arg1 portraitMetadata:(id)arg2 properties:(id)arg3 ;
-(id)_resultQueue_getOrCreateStillImageResultCoordinatorForRequest:(id)arg1 allExpectedResultSpecifiers:(id)arg2 isExpectingPairedVideo:(BOOL)arg3 isDisablingMultipleCaptures:(BOOL)arg4 ;
-(void)_handleLivePhotoVideoLocalPersistenceResult:(id)arg1 forCaptureResult:(id)arg2 fromRequest:(id)arg3 ;
-(void)_handleVideoLocalPersistenceResult:(id)arg1 forCaptureResult:(id)arg2 fromRequest:(id)arg3 ;
-(id)_clientPropertiesForLivePhotoVideoURL:(id)arg1 duration:(SCD_Struct_CA2)arg2 ;
-(id)_clientPropertiesForVideoURL:(id)arg1 duration:(SCD_Struct_CA2)arg2 size:(CGSize)arg3 creationDate:(id)arg4 captureOrientation:(long long)arg5 previewSurface:(void*)arg6 previewOrientation:(long long)arg7 adjustments:(id)arg8 uniqueIdentifier:(id)arg9 savedToPhotoLibrary:(BOOL)arg10 ;
-(id)_resultQueue_getStillImageResultCoordinatorForRequest:(id)arg1 ;
-(void)_resultQueue_forceCompletionIfPossibleForRequest:(id)arg1 ;
-(void)_resultQueue_removeStillImageResultCoordinatorForRequest:(id)arg1 ;
-(NSMutableDictionary *)_resultQueueStillImageResultCoordinators;
-(void)_notifyCaptureDelegateOfCompletedCaptureOfLivePhoto:(id)arg1 withProperties:(id)arg2 error:(id)arg3 ;
-(id)initWithOverrides:(id)arg1 initialLayoutStyle:(long long)arg2 privateOptions:(long long)arg3 ;
-(void)setAutomaticallyManagesCameraSession:(BOOL)arg1 ;
-(void)setCameraSessionDelegate:(id<CAMCameraViewControllerCameraSessionDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)hdrMode;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(long long)preferredStatusBarUpdateAnimation;
-(void)didReceiveMemoryWarning;
@end
