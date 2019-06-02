/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSArray, NSObject, AVCapturePhotoSettings, NSMutableArray, NSString;

@interface AVCapturePhotoOutputInternal : NSObject {

	AVWeakReference* weakReference;
	long long lastSettingsUniqueID;
	NSArray* availablePhotoPixelFormatTypes;
	NSArray* availablePhotoCodecTypes;
	NSArray* availableRawPhotoPixelFormatTypes;
	NSArray* availablePhotoFileTypes;
	NSArray* availableRawPhotoFileTypes;
	BOOL stillImageStabilizationSupported;
	BOOL dualCameraFusionSupported;
	BOOL dualCameraDualPhotoDeliverySupported;
	BOOL dualCameraDualPhotoDeliveryEnabled;
	NSArray* supportedHDRModes;
	NSArray* supportedFlashModes;
	BOOL autoRedEyeReductionSupported;
	BOOL highResolutionCaptureEnabled;
	unsigned long long maxBracketedCapturePhotoCount;
	BOOL lensStabilizationDuringBracketedCaptureSupported;
	BOOL livePhotoCaptureSupported;
	BOOL livePhotoCaptureEnabled;
	BOOL livePhotoAutoTrimmingEnabled;
	NSArray* availableLivePhotoVideoCodecTypes;
	SCD_Struct_AV5 livePhotoMovieDuration;
	SCD_Struct_AV5 livePhotoMovieVideoFrameDuration;
	SCD_Struct_AV37 livePhotoMovieDimensions;
	BOOL livePhotoCaptureSuspended;
	BOOL depthDataDeliverySupported;
	BOOL depthDataDeliveryEnabled;
	BOOL portraitEffectsMatteDeliverySupported;
	BOOL portraitEffectsMatteDeliveryEnabled;
	BOOL filterRenderingEnabled;
	BOOL imageOptimizationForOfflineVideoStabilizationSupported;
	BOOL optimizesImagesForOfflineVideoStabilization;
	SCD_Struct_AV37 optimizedImageDimensionsForOfflineStabilization;
	BOOL livePhotoMovieProcessingSuspended;
	NSObject*<OS_dispatch_queue> sceneDetectionObserversDispatchQueue;
	int flashSceneObserverCount;
	int HDRSceneObserverCount;
	int stillImageStabilizationSceneObserverCount;
	BOOL isFlashScene;
	BOOL isHDRScene;
	BOOL isStillImageStabilizationScene;
	AVCapturePhotoSettings* photoSettingsForSceneMonitoring;
	OpaqueFigSimpleMutexRef requestsLock;
	NSMutableArray* requests;
	NSMutableArray* prepareRequests;
	NSObject*<OS_dispatch_queue> beginEndIrisMovieCaptureHostTimeQueue;
	NSObject*<OS_dispatch_group> beginEndIrisMovieCaptureHostTimeDispatchGroup;
	NSString* sourceDeviceType;
	ct_green_tea_logger_sRef greenTeaLogger;

}
@end
