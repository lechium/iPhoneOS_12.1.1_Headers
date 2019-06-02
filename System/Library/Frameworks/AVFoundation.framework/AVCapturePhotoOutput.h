/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>

@class AVCapturePhotoOutputInternal, NSArray, AVCapturePhotoSettings;

@interface AVCapturePhotoOutput : AVCaptureOutput {

	AVCapturePhotoOutputInternal* _internal;

}

@property (nonatomic,readonly) NSArray * preparedPhotoSettingsArray; 
@property (nonatomic,readonly) NSArray * availablePhotoPixelFormatTypes; 
@property (nonatomic,readonly) NSArray * availablePhotoCodecTypes; 
@property (nonatomic,readonly) NSArray * availableRawPhotoPixelFormatTypes; 
@property (nonatomic,readonly) NSArray * availablePhotoFileTypes; 
@property (nonatomic,readonly) NSArray * availableRawPhotoFileTypes; 
@property (getter=isStillImageStabilizationSupported,nonatomic,readonly) BOOL stillImageStabilizationSupported; 
@property (nonatomic,readonly) BOOL isStillImageStabilizationScene; 
@property (getter=isDualCameraFusionSupported,nonatomic,readonly) BOOL dualCameraFusionSupported; 
@property (getter=isDualCameraDualPhotoDeliverySupported,nonatomic,readonly) BOOL dualCameraDualPhotoDeliverySupported; 
@property (assign,getter=isDualCameraDualPhotoDeliveryEnabled,nonatomic) BOOL dualCameraDualPhotoDeliveryEnabled; 
@property (getter=isCameraCalibrationDataDeliverySupported,nonatomic,readonly) BOOL cameraCalibrationDataDeliverySupported; 
@property (nonatomic,readonly) NSArray * supportedFlashModes; 
@property (getter=isAutoRedEyeReductionSupported,nonatomic,readonly) BOOL autoRedEyeReductionSupported; 
@property (nonatomic,readonly) BOOL isFlashScene; 
@property (nonatomic,copy) AVCapturePhotoSettings * photoSettingsForSceneMonitoring; 
@property (assign,getter=isHighResolutionCaptureEnabled,nonatomic) BOOL highResolutionCaptureEnabled; 
@property (nonatomic,readonly) unsigned long long maxBracketedCapturePhotoCount; 
@property (getter=isLensStabilizationDuringBracketedCaptureSupported,nonatomic,readonly) BOOL lensStabilizationDuringBracketedCaptureSupported; 
@property (getter=isLivePhotoCaptureSupported,nonatomic,readonly) BOOL livePhotoCaptureSupported; 
@property (assign,getter=isLivePhotoCaptureEnabled,nonatomic) BOOL livePhotoCaptureEnabled; 
@property (assign,getter=isLivePhotoCaptureSuspended,nonatomic) BOOL livePhotoCaptureSuspended; 
@property (assign,getter=isLivePhotoAutoTrimmingEnabled,nonatomic) BOOL livePhotoAutoTrimmingEnabled; 
@property (nonatomic,readonly) NSArray * availableLivePhotoVideoCodecTypes; 
+(SCD_Struct_AV37)maxLivePhotoMovieDimensions;
+(id)validMetadataTopLevelCGImagePropertiesKeys;
+(CFDictionaryRef)_copyAttachmentsAndPropagateFaceRegionsToExifAuxDictionaryForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
+(id)JPEGPhotoDataRepresentationForJPEGSampleBuffer:(opaqueCMSampleBufferRef)arg1 previewPhotoSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
+(id)DNGPhotoDataRepresentationForRawSampleBuffer:(opaqueCMSampleBufferRef)arg1 previewPhotoSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
+(unsigned long long)maxLivePhotoDataSize;
+(void)initialize;
+(id)new;
-(BOOL)optimizesImagesForOfflineVideoStabilization;
-(BOOL)isStillImageStabilizationSupported;
-(BOOL)isFlashScene;
-(BOOL)isHDRScene;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)connectionMediaTypes;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(BOOL)isDualCameraDualPhotoDeliveryEnabled;
-(BOOL)isAutoRedEyeReductionSupported;
-(void)setDualCameraDualPhotoDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)isPortraitEffectsMatteDeliveryEnabled;
-(BOOL)canAddConnectionForMediaType:(id)arg1 ;
-(SCD_Struct_AV5)livePhotoMovieDuration;
-(SCD_Struct_AV5)livePhotoMovieVideoFrameDuration;
-(BOOL)isLivePhotoAutoTrimmingEnabled;
-(id)figCaptureIrisPreparedSettings;
-(BOOL)isFilterRenderingEnabled;
-(BOOL)isStillImageStabilizationScene;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(BOOL)isLensStabilizationDuringBracketedCaptureSupported;
-(NSArray *)availablePhotoPixelFormatTypes;
-(NSArray *)availablePhotoCodecTypes;
-(NSArray *)availableRawPhotoPixelFormatTypes;
-(NSArray *)availablePhotoFileTypes;
-(NSArray *)availableRawPhotoFileTypes;
-(unsigned long long)maxBracketedCapturePhotoCount;
-(void)_incrementObserverCountForKeyPath:(id)arg1 ;
-(void)_decrementObserverCountForKeyPath:(id)arg1 ;
-(id)_figCaptureIrisStillImageSettingsForAVCapturePhotoSettings:(id)arg1 delegate:(id)arg2 connections:(id)arg3 ;
-(void)_dispatchFailureCallbacksForSettings:(id)arg1 toDelegate:(id)arg2 withError:(id)arg3 ;
-(id)_figCaptureIrisPreparedSettingsForRequest:(id)arg1 ;
-(void)_handlePreparationCompleteNotificationWithPayload:(id)arg1 settingsID:(long long)arg2 ;
-(BOOL)isDualCameraDualPhotoDeliverySupported;
-(void)_updateSceneMonitoringForSourceDevice:(id)arg1 ;
-(void)setFigCaptureSessionSectionProperty:(CFStringRef)arg1 withHostTime:(SCD_Struct_AV5)arg2 settingStateVaribleToNoOnFailure:(BOOL*)arg3 ;
-(void)_updateSupportedPropertiesForSourceDevice:(id)arg1 ;
-(void)_resetLivePhotoMovieProcessingSuspended;
-(void)_resetLivePhotoCaptureSuspended;
-(void)_dispatchFailureCallbacks:(unsigned)arg1 forRequest:(id)arg2 withError:(id)arg3 cleanupRequest:(BOOL)arg4 ;
-(void)_updateSupportedHDRModesForSourceDevice:(id)arg1 ;
-(void)_updateLivePhotoCaptureSupportedForSourceDevice:(id)arg1 ;
-(void)_updateLivePhotoMovieDimensionsForSourceDevice:(id)arg1 ;
-(void)_updateAvailableLivePhotoVideoCodecTypesForSourceDevice:(id)arg1 ;
-(void)_updateAvailableRawPhotoPixelFormatTypesForSourceDevice:(id)arg1 ;
-(void)_setIsFlashScene:(BOOL)arg1 firingKVO:(BOOL)arg2 ;
-(void)_setIsHDRScene:(BOOL)arg1 firingKVO:(BOOL)arg2 ;
-(void)_setIsStillImageStabilizationScene:(BOOL)arg1 firingKVO:(BOOL)arg2 ;
-(void)_updateAvailablePhotoPixelFormatTypesForSourceDevice:(id)arg1 ;
-(void)_updateAvailablePhotoCodecTypesForSourceDevice:(id)arg1 ;
-(void)_updateAvailablePhotoFileTypesForSourceDevice:(id)arg1 ;
-(void)_updateAvailableRawPhotoFileTypesForSourceDevice:(id)arg1 ;
-(void)_updateAutoRedReductionSupportedForSourceDevice:(id)arg1 ;
-(void)_updateStillImageStabilizationSupportedForSourceDevice:(id)arg1 ;
-(void)_updateDualCameraFusionSupportedForSourceDevice:(id)arg1 ;
-(void)_updateDualCameraDualPhotoDeliverySupportedForSourceDevice:(id)arg1 ;
-(void)_updateSupportedFlashModesForSourceDevice:(id)arg1 ;
-(void)_updateMaxBracketedCapturePhotoCountForSourceDevice:(id)arg1 ;
-(void)_updateLensStabilizationDuringBracketedCaptureSupportedForSourceDevice:(id)arg1 ;
-(void)_updateOfflineVISSupportedForSourceDevice:(id)arg1 ;
-(void)_updateDepthDataDeliverySupportedForSourceDevice:(id)arg1 ;
-(BOOL)_HEVCAndHEIFAreAvailableForSourceDevice:(id)arg1 ;
-(id)_sanitizedSettingsForSettings:(id)arg1 ;
-(id)_photoRequestForUniqueID:(long long)arg1 ;
-(void)_handleWillBeginCaptureNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleWillCaptureStillImageNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleDidCaptureStillImageNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleStillImageCompleteNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleDidRecordIrisMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleDidFinishRecordingIrisMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(id)_errorForFigCaptureSessionNotificationPayloadErrorStatus:(int)arg1 userInfo:(id)arg2 ;
-(void)_handleDidFinishCaptureNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(id)_avErrorUserInfoDictionaryForError:(int)arg1 request:(id)arg2 payload:(id)arg3 isOriginalMovie:(BOOL)arg4 ;
-(NSArray *)preparedPhotoSettingsArray;
-(id)supportedPhotoPixelFormatTypesForFileType:(id)arg1 ;
-(id)supportedPhotoCodecTypesForFileType:(id)arg1 ;
-(id)supportedRawPhotoPixelFormatTypesForFileType:(id)arg1 ;
-(BOOL)isDualCameraFusionSupported;
-(BOOL)isCameraCalibrationDataDeliverySupported;
-(void)setLivePhotoAutoTrimmingEnabled:(BOOL)arg1 ;
-(BOOL)isLivePhotoMovieProcessingSuspended;
-(void)setLivePhotoMovieProcessingSuspended:(BOOL)arg1 ;
-(BOOL)isDepthDataDeliveryEnabled;
-(void)setFilterRenderingEnabled:(BOOL)arg1 ;
-(BOOL)isDepthDataDeliverySupported;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(NSArray *)supportedFlashModes;
-(id)supportedHDRModes;
-(BOOL)isLivePhotoCaptureEnabled;
-(BOOL)isPortraitEffectsMatteDeliverySupported;
-(void)setPortraitEffectsMatteDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)isLivePhotoCaptureSuspended;
-(void)setLivePhotoCaptureSuspended:(BOOL)arg1 ;
-(BOOL)isHighResolutionCaptureEnabled;
-(NSArray *)availableLivePhotoVideoCodecTypes;
-(void)capturePhotoWithSettings:(id)arg1 delegate:(id)arg2 ;
-(void)userInitiatedCaptureRequestAtTime:(unsigned long long)arg1 ;
-(BOOL)isLivePhotoCaptureSupported;
-(void)removeConnection:(id)arg1 ;
-(void)setHighResolutionCaptureEnabled:(BOOL)arg1 ;
-(BOOL)isImageOptimizationForOfflineVideoStabilizationSupported;
-(void)setOptimizesImagesForOfflineVideoStabilization:(BOOL)arg1 ;
-(AVCapturePhotoSettings *)photoSettingsForSceneMonitoring;
-(void)setPhotoSettingsForSceneMonitoring:(AVCapturePhotoSettings *)arg1 ;
-(void)setPreparedPhotoSettingsArray:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setLivePhotoCaptureEnabled:(BOOL)arg1 ;
-(SCD_Struct_AV37)optimizedImageDimensionsForOfflineStabilization;
-(SCD_Struct_AV37)livePhotoMovieDimensions;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

