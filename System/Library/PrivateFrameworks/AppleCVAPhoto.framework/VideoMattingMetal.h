/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
#import <AppleCVAPhoto/ImageSaverRegistrator.h>

@protocol MTLDeviceSPI, MTLLibrary, MTLCommandQueue, MTLComputePipelineState, OS_dispatch_semaphore, MTLTexture, OS_dispatch_queue;
@class CVAFilterBox, CVAFilterHybridResampling, MPSImageGuidedFilter, CVAFilterGuided, CVAFilterRenderStagelight, CVAFilterColorAlphaToFgBg, CVAFilterRenderComposite, CVAFilterDistanceTransform, CVAFilterDiffusion, CVAFilterInfimumConvolution, CVAPhotoMTLRingBuffer, CVAFilterMaskedVariableBlur, NSObject, MPSImageBox, MPSImageAreaMin, MPSImageGaussianBlur, NSData;

@interface VideoMattingMetal : ImageSaverRegistrator {

	id<MTLDeviceSPI> _device;
	id<MTLLibrary> _defaultLibrary;
	id<MTLCommandQueue> _commandQueue;
	CVAPhotoMetalContext* _metalContext;
	BOOL _mattingUsesPostprocessing;
	BOOL _renderingUsesPostprocessing;
	BOOL _enableInfConvolution;
	int _lastCommittedCommand;
	int _width;
	int _height;
	int _width2;
	int _height2;
	float _renderingDisparityBlurRadius;
	float _renderingLensFocalLength_mm;
	BOOL _useTemporalConfidence;
	CVAFilterBox* _boxFilter;
	CVAFilterHybridResampling* _hybridResampler;
	MPSImageGuidedFilter* _guidedFilter;
	CVAFilterGuided* _cvaGuidedFilter;
	CVAFilterRenderStagelight* _stagelightFilter;
	CVAFilterColorAlphaToFgBg* _colorAlphaToFgBg;
	CVAFilterRenderComposite* _renderComposite;
	CVAFilterDistanceTransform* _distanceTransform;
	BOOL _doDisparityDiffusion;
	CVAFilterDiffusion* _diffusion;
	CVAFilterInfimumConvolution* _infConvolution;
	float _infConvolutionScale;
	float _gammaExponent;
	id<MTLComputePipelineState> _diffusionMapKernel;
	id<MTLComputePipelineState> _fillBackgroundDisparityKernel;
	id<MTLComputePipelineState> _fillBackgroundDisparityKernel_faceMask;
	id<MTLComputePipelineState> _disparityConfidenceMaskKernel;
	id<MTLComputePipelineState> _disparityMasksKernel;
	id<MTLComputePipelineState> _disparityIsValidKernel;
	id<MTLComputePipelineState> _domainTransformXKernel;
	id<MTLComputePipelineState> _domainTransformYKernel;
	id<MTLComputePipelineState> _edgeAwareFillXKernel;
	id<MTLComputePipelineState> _edgeAwareFillYKernel;
	id<MTLComputePipelineState> _invalidDisparityMaskKernel;
	id<MTLComputePipelineState> _bgFillXKernel;
	id<MTLComputePipelineState> _bgFillYKernel;
	id<MTLComputePipelineState> _internalDisparityToCanonicalDisparityKernel;
	id<MTLComputePipelineState> _disparityDecimateKernel;
	id<MTLComputePipelineState> _alphaFillKernel;
	id<MTLComputePipelineState> _disparityCleanupKernel;
	id<MTLComputePipelineState> _disparityCleanupKernel_firstFrame;
	id<MTLComputePipelineState> _simpleConfidenceKernel;
	id<MTLComputePipelineState> _updateConfidenceAndLastValidDisparityKernel;
	id<MTLComputePipelineState> _updateConfidenceAndLastValidDisparityKernel_useTemporalConfidence;
	id<MTLComputePipelineState> _roughDisparityKernel;
	id<MTLComputePipelineState> _temporalDisparityFilterKernel;
	id<MTLComputePipelineState> _temporalDisparityFilterKernel_fallbackToInvalid;
	id<MTLComputePipelineState> _renderingDisparityDeweightKernel;
	CVAPhotoMTLRingBuffer* _disparityConfig;
	id<MTLComputePipelineState> _renderingDisparityFillAndFilterKernel;
	CompositeConfig _noiseConfig;
	CVAFilterMaskedVariableBlur* _maskedVariableBlur;
	id<MTLComputePipelineState> _halfDownSampler;
	id<MTLComputePipelineState> _colorSimKernel;
	id<MTLComputePipelineState> _colorSimL1Kernel;
	id<MTLComputePipelineState> _temporalCoefficientsFilterKernel;
	id<MTLComputePipelineState> _guidedFilterWeightKernel;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	id<MTLTexture> _rTexture;
	id<MTLTexture> _gTexture;
	id<MTLTexture> _bTexture;
	id<MTLTexture> _bg;
	id<MTLTexture> _blurredBg;
	id<MTLTexture> _deweightedDisparity;
	id<MTLTexture> _shift[2];
	id<MTLTexture> _blurredBgX;
	id<MTLTexture> _coc;
	id<MTLTexture> _fullResCoC;
	id<MTLTexture> _halfResCoC;
	id<MTLTexture> _bgColorLut;
	id<MTLTexture> _fgColorLut;
	id<MTLTexture> _stageLightProxyLut;
	id<MTLTexture> _stageLightLut;
	MPSImageBox* _disparityBlurBoxKernel;
	MPSImageBox* _fgBlurBoxKernel;
	MPSImageAreaMin* _fgMaskErosionKernel;
	id<MTLTexture> _gfForegroundMask;
	id<MTLTexture> _gfWeight;
	id<MTLTexture> _disparityLastValidValue[2];
	id<MTLTexture> _disparity[2];
	id<MTLTexture> _facemaskDisparity;
	id<MTLTexture> _filledDisparityTexture;
	id<MTLTexture> _filledDisparityNoInvalidTexture;
	id<MTLTexture> _temporallyFilteredDisparity;
	id<MTLTexture> _disparityConfidenceMaskTexture;
	id<MTLTexture> _smoothConfidence[2];
	id<MTLTexture> _smoothDisparity[2];
	id<MTLTexture> _roughDisparity;
	id<MTLTexture> _diffusionMapTexture;
	id<MTLTexture> _disparityIsValidTexture;
	id<MTLTexture> _distanceFromKnownDisparityTexture;
	id<MTLTexture> _domainTransformXTexture;
	id<MTLTexture> _domainTransformYTexture;
	id<MTLTexture> _edgeAwareFillTempTexture;
	id<MTLTexture> _invalidDisparityMaskTexture;
	id<MTLTexture> _initDisparity;
	id<MTLTexture> _outputCanonicalDisparity;
	id<MTLTexture> _coeff;
	id<MTLTexture> _coeffHistory[2];
	id<MTLTexture> _isForegroundTexture;
	id<MTLTexture> _distanceToForegroundTexture;
	id<MTLTexture> _alphaNoPostprocessing;
	id<MTLTexture> _scaledSource[2];
	_CVBuffer* _scaledSourceCV[2];
	id<MTLTexture> _tempFloatR32FloatTexture;
	CVBufferRef _hybridDownsamplingIntermediateBuffer;
	BOOL _doFaceMask;
	id<MTLTexture> _facemaskRegionTexture;
	unsigned long long _frameIndex;
	MPSImageGaussianBlur* _smoothFilter;
	IOSurfaceAcceleratorRef _hwScaler;
	CVBufferRef _msrIntermediateBuffer;
	NSData* _lastBgLutData;
	NSData* _lastFgLutData;
	NSData* _lastStageLightProxyCubeData;
	NSData* _lastStageLightCubeData;
	NSObject*<OS_dispatch_queue> _synchronousRenderingCallbackQueue;
	NSObject*<OS_dispatch_semaphore> _renderingCallbackSemaphore;
	NSObject*<OS_dispatch_queue> _synchronousMattingCallbackQueue;
	NSObject*<OS_dispatch_semaphore> _mattingCallbackSemaphore;
	_sFILE* _scaledSourceFile;
	BOOL _printTimings;
	BOOL _bypassShiftCleanup;
	BOOL _isBgColorLutBlack;
	float _renderingDisparityUpdateRate;
	id<MTLTexture> _colorSim;
	id<MTLTexture> _filteredBeforeSmoothDisparity;

}

@property (assign) BOOL isBgColorLutBlack;                                      //@synthesize isBgColorLutBlack=_isBgColorLutBlack - In the implementation block
@property (assign) float renderingDisparityUpdateRate;                          //@synthesize renderingDisparityUpdateRate=_renderingDisparityUpdateRate - In the implementation block
@property (assign) BOOL bypassShiftCleanup;                                     //@synthesize bypassShiftCleanup=_bypassShiftCleanup - In the implementation block
@property (readonly) id<MTLTexture> colorSim;                                   //@synthesize colorSim=_colorSim - In the implementation block
@property (readonly) id<MTLTexture> filteredBeforeSmoothDisparity;              //@synthesize filteredBeforeSmoothDisparity=_filteredBeforeSmoothDisparity - In the implementation block
+(void)decomposeYuvPixelBuffer:(CVBufferRef)arg1 yTexture:(id*)arg2 uvTexture:(id*)arg3 device:(id)arg4 ;
+(void)prewarmGuidedFilter:(id)arg1 device:(id)arg2 commandBuffer:(id)arg3 width:(int)arg4 height:(int)arg5 width2:(int)arg6 height2:(int)arg7 ;
+(void)prewarmBox:(id)arg1 device:(id)arg2 commandBuffer:(id)arg3 ;
+(void)saveTexture:(id)arg1 toFilename:(id)arg2 ;
-(float)renderingDisparityUpdateRate;
-(void)setRenderingDisparityUpdateRate:(float)arg1 ;
-(void)initSourceTexture:(CVBufferRef)arg1 ;
-(id)initWithStaticParams:(const VideoMattingStaticParams*)arg1 renderingDisparityUpdateRate:(float)arg2 renderingDisparityBlurRadius:(float)arg3 renderingLensFocalLength_mm:(float)arg4 useTemporalConfidence:(BOOL)arg5 metalContext:(CVAPhotoMetalContext*)arg6 error:(id*)arg7 ;
-(void)setAlphaLut:(float)arg1 gammaExponent:(float)arg2 ;
-(void)setBgLut:(id)arg1 ;
-(void)setFgLut:(id)arg1 ;
-(void)setPortraitForegroundCubeData:(id)arg1 backgroundCubeData:(id)arg2 ;
-(void)setStageLightProxyCubeData:(id)arg1 cubeData:(id)arg2 ;
-(void)encodeCopyTextureToCommandBuffer:(id)arg1 inTexture:(id)arg2 outTexture:(id)arg3 ;
-(void)encodeColorSimToCommandBuffer:(id)arg1 prevSource:(id)arg2 currSource:(id)arg3 destination:(id)arg4 similarityScaleFactor:(float)arg5 ;
-(void)encodeColorSimL1ToCommandBuffer:(id)arg1 prevSource:(id)arg2 currSource:(id)arg3 destination:(id)arg4 ;
-(void)encodeDisparityCleanupToCommandBuffer:(id)arg1 prevDisparity:(id)arg2 currDisparity:(id)arg3 colorSim:(id)arg4 cleanDisparity:(id)arg5 ;
-(void)encodeDomainTransformToCommandBuffer:(id)arg1 inputDiffusionMap:(id)arg2 inputDistanceFromKnownDisparity:(id)arg3 outputDomainTransformX:(id)arg4 outputDomainTransformY:(id)arg5 ;
-(void)encodeEdgeAwareFillToCommandBuffer:(id)arg1 inputDisparity:(id)arg2 inputDomainTransformX:(id)arg3 inputDomainTransformY:(id)arg4 outputDisparity:(id)arg5 ;
-(void)encodeInvalidDisparityMaskToCommandBuffer:(id)arg1 inputDisparity:(id)arg2 outputMask:(id)arg3 ;
-(void)encodeBackgroundFillToCommandBuffer:(id)arg1 inputDisparity:(id)arg2 inputMask:(id)arg3 outputDisparity:(id)arg4 ;
-(void)encodeSimpleConfidenceToCommandBuffer:(id)arg1 disparity:(id)arg2 outConfidence:(id)arg3 ;
-(void)encodeUpdateConfidenceAndLastValidDisparityToCommandBuffer:(id)arg1 disparity:(id)arg2 prevSmoothConfidence:(id)arg3 lastValidDisparityIn:(id)arg4 lastValidDisparityOut:(id)arg5 currConfidenceOut:(id)arg6 useTemporalConfidence:(BOOL)arg7 ;
-(void)encodeDisparityTemporalFilterToCommandBuffer:(id)arg1 currentDisparity:(id)arg2 previousDisparity:(id)arg3 currConfidence:(id)arg4 prevSmoothConfidence:(id)arg5 colorSim:(id)arg6 outPrevSmoothConfidence:(id)arg7 outTemporallyFilteredDisparity:(id)arg8 disparityFallbackToInvalid:(BOOL)arg9 disparityFilterUpdateRate:(float)arg10 minimumConfidenceToKeepDisparity:(float)arg11 maximumSimilarityToKeepDisparity:(float)arg12 ;
-(void)encodeDiffusionMapToCommandBuffer:(id)arg1 color:(id)arg2 diffusionMap:(id)arg3 ;
-(void)encodeDisparityMasksToCommandBuffer:(id)arg1 inputDisparity:(id)arg2 inputSegmentation:(id)arg3 useSegmentationOnly:(BOOL)arg4 outputForegroundMask:(id)arg5 outputIsForeground:(id)arg6 disparityMin:(float)arg7 focusDisparity:(float)arg8 hardness:(float)arg9 minDistToDeweight:(float)arg10 unconfidentWeight:(float)arg11 ;
-(void)encodeFillBackgroundDisparityToCommandBuffer:(id)arg1 inputDisparity:(id)arg2 inputFacemask:(id)arg3 outputDistanceFromKnownDisparity:(id)arg4 outputDisparity:(id)arg5 backgroundDisparityValue:(float)arg6 minimumDistanceFromValidDisparity:(float)arg7 ;
-(void)encodeConfidenceMaskToCommandBuffer:(id)arg1 inputDisparity:(id)arg2 inputDisparityNoInvalid:(id)arg3 outputConfidenceMask:(id)arg4 ;
-(void)encodeOutputDisparityToCommandBuffer:(id)arg1 inputDisparity:(id)arg2 outputDisparity:(id)arg3 ;
-(void)disparityPostprocessingWithCanonicalDisparity:(CVBufferRef)arg1 color:(CVBufferRef)arg2 postProcessedDisparity:(CVBufferRef)arg3 staticParams:(const VideoMattingStaticParams*)arg4 dynamicParams:(const VideoMattingDynamicParams*)arg5 postProcessingParams:(const VideoPostprocessingParams*)arg6 facesArray:(id)arg7 faceModel:(id)arg8 isFinalStage:(BOOL)arg9 callbackQueue:(id)arg10 callback:(/*^block*/id)arg11 ;
-(void)alphaMattingWithPostprocessedDisparity:(CVBufferRef)arg1 source:(CVBufferRef)arg2 inSegmentation:(CVBufferRef)arg3 alpha:(CVBufferRef)arg4 staticParams:(const VideoMattingStaticParams*)arg5 dynamicParams:(const VideoMattingDynamicParams*)arg6 usePostprocessedDisparity:(BOOL)arg7 isFinalStage:(BOOL)arg8 dilateForegroundMask:(BOOL)arg9 callbackQueue:(id)arg10 callback:(/*^block*/id)arg11 ;
-(void)encodeFilterCoefficientToBuffer:(id)arg1 inputCoeff:(id)arg2 prevCoeff:(id)arg3 outCoeff:(id)arg4 inColorSim:(id)arg5 updateRate:(float)arg6 ;
-(CVBufferRef)createCVBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned)arg3 ;
-(void)encodeScaleSourceToCommandBuffer:(id)arg1 source:(CVBufferRef)arg2 targetWidth:(unsigned long long)arg3 targetHeight:(unsigned long long)arg4 ;
-(void)encodeGuidedFilterWeightToCommandBuffer:(id)arg1 inputDisparity:(id)arg2 inputSegmentation:(id)arg3 useSegmentationOnly:(BOOL)arg4 inputForegroundDistance:(id)arg5 outputForegroundMask:(id)arg6 outputWeight:(id)arg7 minDistToDeweight:(float)arg8 unconfidentWeight:(float)arg9 dilateForegroundMask:(BOOL)arg10 foregroundMaskDilationRadius:(float)arg11 ;
-(void)encodeForegroundMaskToBuffer:(id)arg1 disparity:(id)arg2 inSegmentation:(id)arg3 useSegmentationOnly:(BOOL)arg4 weight:(id)arg5 foregroundMask:(id)arg6 erodedForegroundMask:(id)arg7 disparityMin:(float)arg8 focusDisparity:(float)arg9 hardness:(float)arg10 minDistToDeweight:(float)arg11 unconfidentWeight:(float)arg12 dilateForegroundMask:(BOOL)arg13 foregroundMaskDilationRadius:(float)arg14 ;
-(void)encodeDisparityDecimateToCommandBuffer:(id)arg1 canonicalDisparity:(CVBufferRef)arg2 disparityOut:(id)arg3 ;
-(float)cocAtInfinityForFocalLength:(float)arg1 focusCanonicalDisparity:(float)arg2 focalRatio:(float)arg3 xResolution:(float)arg4 ;
-(void)encodeDisparitySmoothingToCommandBuffer:(id)arg1 disparity:(id)arg2 ;
-(void)renderContinuousWithSource:(CVBufferRef)arg1 alpha:(CVBufferRef)arg2 canonicalDisparity:(CVBufferRef)arg3 disparityInFocus:(float)arg4 focusCanonicalDisparity:(float)arg5 fNumber:(float)arg6 infConvolutionScale:(float)arg7 noiseBits:(float)arg8 disparityUpdateRate:(float)arg9 focusThresholdHardness:(float)arg10 cubeIntensity:(float)arg11 usePostprocessedDisparity:(BOOL)arg12 dstColor:(CVBufferRef)arg13 isFinalStage:(BOOL)arg14 callbackQueue:(id)arg15 withCallback:(/*^block*/id)arg16 ;
-(void)renderStageLightWithSource:(CVBufferRef)arg1 alpha:(CVBufferRef)arg2 canonicalDisparity:(CVBufferRef)arg3 dstColor:(CVBufferRef)arg4 blackBackgroundIntensity:(float)arg5 vignetteIntensity:(float)arg6 isFinalStage:(BOOL)arg7 callbackQueue:(id)arg8 withCallback:(/*^block*/id)arg9 ;
-(void)encode420HybridDownsamplingToCommandBuffer:(id)arg1 source:(CVBufferRef)arg2 destination:(CVBufferRef)arg3 ;
-(void)downsampleWithHWScalerSource:(CVBufferRef)arg1 destination:(CVBufferRef)arg2 ;
-(void)cropFrame:(CVBufferRef)arg1 destination:(CVBufferRef)arg2 rect:(CGRect)arg3 ;
-(void)encode420BilinearScalingToCommandBuffer:(id)arg1 source:(CVBufferRef)arg2 destination:(CVBufferRef)arg3 ;
-(void)encode420ScalingByMPSToCommandBuffer:(id)arg1 source:(CVBufferRef)arg2 destination:(CVBufferRef)arg3 ;
-(void)encodeFillAlphaToCommandBuffer:(id)arg1 alpha:(id)arg2 ;
-(BOOL)bypassShiftCleanup;
-(void)setBypassShiftCleanup:(BOOL)arg1 ;
-(id<MTLTexture>)colorSim;
-(id<MTLTexture>)filteredBeforeSmoothDisparity;
-(BOOL)isBgColorLutBlack;
-(void)setIsBgColorLutBlack:(BOOL)arg1 ;
-(void)dealloc;
@end

