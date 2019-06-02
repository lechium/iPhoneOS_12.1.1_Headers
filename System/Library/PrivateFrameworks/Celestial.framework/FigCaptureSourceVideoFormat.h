/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSourceFormat.h>

@class NSArray, FigCaptureSourceCompanionFormat;

@interface FigCaptureSourceVideoFormat : FigCaptureSourceFormat {

	BOOL _isMultiStreamFormat;
	BOOL _isExternalFormat;
	NSArray* _frontEndScalerCompanionFormats;
	BOOL _sifrSupported;
	FigCaptureSourceCompanionFormat* _nonSIFRCompanionFormat;
	FigCaptureSourceCompanionFormat* _depthCompanionFormat;
	NSArray* _supportedDepthDataFormats;
	BOOL _isStreamingDisparitySupported;
	BOOL _isStreamingDepthSupported;
	BOOL _isStillImageDisparitySupported;
	BOOL _isStillImageDepthSupported;

}

@property (readonly) int formatIndex; 
@property (readonly) SCD_Struct_BW13 dimensions; 
@property (readonly) SCD_Struct_BW13 sensorDimensions; 
@property (readonly) SCD_Struct_BW13 previewDimensions; 
@property (readonly) float minSupportedFrameRate; 
@property (readonly) float maxSupportedFrameRate; 
@property (readonly) float defaultMinFrameRate; 
@property (readonly) float defaultMaxFrameRate; 
@property (readonly) float fieldOfView; 
@property (getter=isBinned,readonly) BOOL binned; 
@property (getter=isZoomSupported,readonly) BOOL zoomSupported; 
@property (readonly) float maxZoomFactor; 
@property (readonly) float zoomFactorUpscaleThreshold; 
@property (getter=isZoomDynamicSensorCropSupported,readonly) BOOL zoomDynamicSensorCropSupported; 
@property (readonly) int rawBitDepth; 
@property (readonly) float minISO; 
@property (readonly) float maxISO; 
@property (readonly) SCD_Struct_BW2 minExposureDuration; 
@property (readonly) SCD_Struct_BW2 maxExposureDuration; 
@property (readonly) BOOL hasSensorHDRCompanionIndex; 
@property (readonly) BOOL prefersSensorHDREnabled; 
@property (getter=isSIFRSupported,readonly) BOOL SIFRSupported; 
@property (getter=isLowLightVideoCaptureSupported,readonly) BOOL lowLightVideoCaptureSupported; 
@property (getter=isVisionDataDeliverySupported,readonly) BOOL visionDataDeliverySupported; 
@property (getter=isSecondaryScalerUnavailable,readonly) BOOL secondaryScalerUnavailable; 
@property (getter=isStudioAndContourPreviewRenderingSupported,readonly) BOOL studioAndContourPreviewRenderingSupported; 
@property (getter=isStagePreviewRenderingSupported,readonly) BOOL stagePreviewRenderingSupported; 
@property (getter=isWideAsStatsMasterEnabled,readonly) BOOL wideAsStatsMasterEnabled; 
@property (readonly) int autoFocusSystem; 
@property (getter=isPhotoFormat,readonly) BOOL photoFormat; 
@property (getter=isHighResPhotoFormat,readonly) BOOL highResPhotoFormat; 
@property (readonly) BOOL needsPreviewDPCC; 
@property (getter=isStillImageStabilizationSupported,readonly) BOOL stillImageStabilizationSupported; 
@property (readonly) BOOL configureForStillImageStabilizationSupport; 
@property (getter=isIrisSupported,readonly) BOOL irisSupported; 
@property (getter=isIrisVideoStabilizationSupported,readonly) BOOL irisVideoStabilizationSupported; 
@property (getter=isHDRSupported,readonly) BOOL hdrSupported; 
@property (getter=isHighResStillImageSupported,readonly) BOOL highResStillImageSupported; 
@property (getter=isQuadraHighResStillImageSupported,readonly) BOOL quadraHighResStillImageSupported; 
@property (getter=isStereoFusionSupported,readonly) BOOL stereoFusionSupported; 
@property (getter=isISPMultiBandNoiseReductionSupported,readonly) BOOL ispMultiBandNoiseReductionSupported; 
@property (getter=isStillImageISPMultiBandNoiseReductionSupported,readonly) BOOL stillImageISPMultiBandNoiseReductionSupported; 
@property (getter=isZeroShutterLagSupported,readonly) BOOL zeroShutterLagSupported; 
@property (readonly) BOOL zeroShutterLagRequiresUserInitiatedCaptureRequestTime; 
@property (getter=isRedEyeReductionSupported,readonly) BOOL redEyeReductionSupported; 
@property (readonly) SCD_Struct_BW13 highResStillImageDimensions; 
@property (getter=isWideColorSupported,readonly) BOOL wideColorSupported; 
@property (readonly) NSArray * supportedColorSpaces; 
@property (readonly) unsigned supportedRawPixelFormat; 
@property (readonly) float defaultSimulatedAperture; 
@property (readonly) float minSimulatedAperture; 
@property (readonly) float maxSimulatedAperture; 
@property (getter=isHighProfileH264Supported,readonly) BOOL highProfileH264Supported; 
@property (readonly) NSArray * AVCaptureSessionPresets; 
@property (getter=isExternalFormat,readonly) BOOL externalFormat; 
@property (getter=isStreamingDisparitySupported,readonly) BOOL streamingDisparitySupported; 
@property (getter=isStreamingDepthSupported,readonly) BOOL streamingDepthSupported; 
@property (getter=isStillImageDisparitySupported,readonly) BOOL stillImageDisparitySupported; 
@property (getter=isStillImageDepthSupported,readonly) BOOL stillImageDepthSupported; 
@property (readonly) NSArray * supportedDepthDataFormats; 
@property (readonly) float minZoomFactorForDepthDataDelivery; 
@property (readonly) float maxZoomFactorForDepthDataDelivery; 
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)initWithXPCEncoding:(id)arg1 ;
-(SCD_Struct_BW13)sensorDimensions;
-(BOOL)isZoomSupported;
-(NSArray *)AVCaptureSessionPresets;
-(SCD_Struct_BW13)previewDimensions;
-(BOOL)isZeroShutterLagSupported;
-(BOOL)zeroShutterLagRequiresUserInitiatedCaptureRequestTime;
-(BOOL)isPhotoFormat;
-(float)maxSupportedFrameRate;
-(int)previewImageQueueSyncStrategy;
-(BOOL)sushiRawBlackBorderingEnabled;
-(SCD_Struct_BW13)sensorCropDimensions;
-(int)rawBitDepth;
-(id)rawLensShadingCorrection;
-(BOOL)configureForStillImageStabilizationSupport;
-(BOOL)isStudioAndContourPreviewRenderingSupported;
-(int)stabilizationTypeOverrideForStandard;
-(int)stabilizationTypeOverrideForCinematic;
-(BOOL)isStagePreviewRenderingSupported;
-(int)stillImageNoiseReductionAndStabilizationScheme;
-(SCD_Struct_BW13)highResStillImageDimensions;
-(int)horizontalSensorBinningFactor;
-(int)verticalSensorBinningFactor;
-(SCD_Struct_BW13)_outputDimensions;
-(SCD_Struct_BW2)maxExposureDuration;
-(float)aeMaxGain;
-(BOOL)capturesStillsFromVideoStream;
-(BOOL)isStillImageStabilizationSupported;
-(BOOL)isSIFRSupported;
-(id)nonSIFRCompanionFormat;
-(int)formatIndex;
-(BOOL)isSecondaryScalerUnavailable;
-(id)frontEndScalerCompanionFormats;
-(SCD_Struct_BW13)nativeDimensions;
-(id)depthCompanionFormat;
-(SCD_Struct_BW13)fesInputCropDimensions;
-(BOOL)hasSensorHDRCompanionIndex;
-(int)sensorHDRCompanionIndex;
-(SCD_Struct_BW13)cropDimensionsForFES;
-(BOOL)isStereoFusionSupported;
-(float)minSupportedFrameRate;
-(BOOL)isStillImageISPMultiBandNoiseReductionSupported;
-(BOOL)isRedEyeReductionSupported;
-(CGRect)maxVisibleSensorRect;
-(BOOL)isWideAsStatsMasterEnabled;
-(BOOL)isQuadraHighResStillImageSupported;
-(SCD_Struct_BW13)sourceCropAspectRatio;
-(int)fesBinningFactorHorizontal;
-(int)fesBinningFactorVertical;
-(CGSize)stabilizationOverscanPercentageFromSensorForFESCropDimensions:(SCD_Struct_BW13)arg1 ;
-(float)stabilizationOverscanPercentageOverrideForCinematic;
-(int)temporalNoiseReductionMode;
-(BOOL)ispChromaNoiseReductionEnabled;
-(BOOL)isStillImageISPChromaNoiseReductionEnabled;
-(BOOL)isISPMultiBandNoiseReductionSupported;
-(int)maxIntegrationTimeOverride;
-(id)initWithFigCaptureStreamFormatDictionary:(id)arg1 ;
-(BOOL)isBinned;
-(BOOL)isExternalFormat;
-(id)copyWithNewPixelFormat:(unsigned)arg1 ;
-(void)_resolveProperties;
-(float)defaultMaxFrameRate;
-(SCD_Struct_BW13)_maxUseableSensorDimensions;
-(SCD_Struct_BW13)_visibleSensorDimensionsIncludingCinematic:(BOOL)arg1 ;
-(float)minISO;
-(BOOL)isMultiStreamFormat;
-(SCD_Struct_BW13)_highQualitySensorDimensions;
-(BOOL)isHighResPhotoFormat;
-(BOOL)isHighResStillImageSupported;
-(float)maxZoomFactor;
-(BOOL)isStabilizationModeSupported:(int)arg1 ;
-(float)defaultMinFrameRate;
-(float)zoomFactorUpscaleThreshold;
-(BOOL)isZoomDynamicSensorCropSupported;
-(float)maxISO;
-(SCD_Struct_BW2)minExposureDuration;
-(BOOL)prefersSensorHDREnabled;
-(BOOL)isVisionDataDeliverySupported;
-(BOOL)needsPreviewDPCC;
-(BOOL)isIrisSupported;
-(BOOL)isIrisVideoStabilizationSupported;
-(BOOL)isHDRSupported;
-(BOOL)isWideColorSupported;
-(unsigned)supportedRawPixelFormat;
-(BOOL)isHighProfileH264Supported;
-(BOOL)isStreamingDisparitySupported;
-(BOOL)isStreamingDepthSupported;
-(BOOL)isStillImageDisparitySupported;
-(BOOL)isStillImageDepthSupported;
-(NSArray *)supportedDepthDataFormats;
-(float)minZoomFactorForDepthDataDelivery;
-(float)maxZoomFactorForDepthDataDelivery;
-(BOOL)isValidDerivedBravoFormatForUnderlyingFormat:(id)arg1 ;
-(BOOL)isCompatibleWithInfraredFormat:(id)arg1 ;
-(unsigned)mediaType;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(NSArray *)supportedColorSpaces;
-(BOOL)isLowLightVideoCaptureSupported;
-(int)autoFocusSystem;
-(float)minSimulatedAperture;
-(float)maxSimulatedAperture;
-(float)defaultSimulatedAperture;
-(float)fieldOfView;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_BW13)dimensions;
@end

