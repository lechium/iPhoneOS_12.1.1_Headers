/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray, NSString;

@interface FigCaptureStillImageSettings : NSObject <NSSecureCoding, NSCopying> {

	long long _settingsID;
	int _payloadType;
	int _settingsProvider;
	unsigned _outputFormat;
	int _outputFileType;
	unsigned _rawOutputFormat;
	int _rawOutputFileType;
	unsigned _outputWidth;
	unsigned _outputHeight;
	BOOL _squareCropEnabled;
	BOOL _outputMirroring;
	int _outputOrientation;
	BOOL _previewEnabled;
	unsigned _previewFormat;
	unsigned _previewWidth;
	unsigned _previewHeight;
	BOOL _previewMirroring;
	int _previewOrientation;
	BOOL _thumbnailEnabled;
	unsigned _thumbnailFormat;
	unsigned _thumbnailWidth;
	unsigned _thumbnailHeight;
	BOOL _rawThumbnailEnabled;
	unsigned _rawThumbnailFormat;
	unsigned _rawThumbnailWidth;
	unsigned _rawThumbnailHeight;
	BOOL _noiseReductionEnabled;
	BOOL _burstQualityCaptureEnabled;
	float _scaleFactor;
	unsigned _shutterSound;
	int _flashMode;
	BOOL _autoRedEyeReductionEnabled;
	int _wideColorMode;
	int _HDRMode;
	BOOL _depthDataDeliveryEnabled;
	BOOL _embedsDepthDataInImage;
	BOOL _depthDataFiltered;
	BOOL _cameraCalibrationDataDeliveryEnabled;
	BOOL _portraitEffectsMatteDeliveryEnabled;
	BOOL _embedsPortraitEffectsMatteInImage;
	NSDictionary* _metadata;
	NSArray* _originalImageFilters;
	NSArray* _processedImageFilters;
	float _simulatedAperture;
	BOOL _providesOriginalImage;
	BOOL _bravoDualImageDeliveryEnabled;
	int _SISMode;
	int _bravoImageFusionMode;
	NSDictionary* _vtCompressionProperties;
	int _bracketType;
	unsigned _bracketImageCount;
	BOOL _lensStabilizationDuringBracketEnabled;
	SCD_Struct_BW2* _exposureDurations;
	float* _ISOs;
	float* _exposureTargetBiases;
	unsigned long long _stillImageUserInitiatedRequestTime;
	SCD_Struct_BW2 _stillImageUserInitiatedRequestPTS;
	long long _stillImageRequestTime;
	long long _stillImageCaptureStartTime;
	double _stillImageCaptureAbsoluteStartTime;
	NSString* _imageGroupIdentifier;
	BOOL _clientInitiatedPrepareSettings;
	BOOL _userInitiatedRequestSettings;

}

@property (assign,nonatomic) long long settingsID;                                                                     //@synthesize settingsID=_settingsID - In the implementation block
@property (assign,nonatomic) int payloadType;                                                                          //@synthesize payloadType=_payloadType - In the implementation block
@property (assign,nonatomic) int settingsProvider;                                                                     //@synthesize settingsProvider=_settingsProvider - In the implementation block
@property (assign,nonatomic) unsigned outputFormat;                                                                    //@synthesize outputFormat=_outputFormat - In the implementation block
@property (assign,nonatomic) int outputFileType;                                                                       //@synthesize outputFileType=_outputFileType - In the implementation block
@property (assign,nonatomic) unsigned rawOutputFormat;                                                                 //@synthesize rawOutputFormat=_rawOutputFormat - In the implementation block
@property (assign,nonatomic) int rawOutputFileType;                                                                    //@synthesize rawOutputFileType=_rawOutputFileType - In the implementation block
@property (assign,nonatomic) unsigned outputWidth;                                                                     //@synthesize outputWidth=_outputWidth - In the implementation block
@property (assign,nonatomic) unsigned outputHeight;                                                                    //@synthesize outputHeight=_outputHeight - In the implementation block
@property (assign,nonatomic) BOOL squareCropEnabled;                                                                   //@synthesize squareCropEnabled=_squareCropEnabled - In the implementation block
@property (assign,nonatomic) BOOL outputMirroring;                                                                     //@synthesize outputMirroring=_outputMirroring - In the implementation block
@property (assign,nonatomic) int outputOrientation;                                                                    //@synthesize outputOrientation=_outputOrientation - In the implementation block
@property (nonatomic,readonly) NSDictionary * outputPixelBufferAttributes; 
@property (getter=isOutputFormatCompressed,nonatomic,readonly) BOOL outputFormatCompressed; 
@property (assign,nonatomic) BOOL previewEnabled;                                                                      //@synthesize previewEnabled=_previewEnabled - In the implementation block
@property (assign,nonatomic) unsigned previewFormat;                                                                   //@synthesize previewFormat=_previewFormat - In the implementation block
@property (assign,nonatomic) unsigned previewWidth;                                                                    //@synthesize previewWidth=_previewWidth - In the implementation block
@property (assign,nonatomic) unsigned previewHeight;                                                                   //@synthesize previewHeight=_previewHeight - In the implementation block
@property (assign,nonatomic) BOOL previewMirroring;                                                                    //@synthesize previewMirroring=_previewMirroring - In the implementation block
@property (assign,nonatomic) int previewOrientation;                                                                   //@synthesize previewOrientation=_previewOrientation - In the implementation block
@property (nonatomic,readonly) NSDictionary * previewPixelBufferAttributes; 
@property (assign,nonatomic) BOOL thumbnailEnabled;                                                                    //@synthesize thumbnailEnabled=_thumbnailEnabled - In the implementation block
@property (assign,nonatomic) unsigned thumbnailFormat;                                                                 //@synthesize thumbnailFormat=_thumbnailFormat - In the implementation block
@property (assign,nonatomic) unsigned thumbnailWidth;                                                                  //@synthesize thumbnailWidth=_thumbnailWidth - In the implementation block
@property (assign,nonatomic) unsigned thumbnailHeight;                                                                 //@synthesize thumbnailHeight=_thumbnailHeight - In the implementation block
@property (assign,nonatomic) BOOL rawThumbnailEnabled;                                                                 //@synthesize rawThumbnailEnabled=_rawThumbnailEnabled - In the implementation block
@property (assign,nonatomic) unsigned rawThumbnailFormat;                                                              //@synthesize rawThumbnailFormat=_rawThumbnailFormat - In the implementation block
@property (assign,nonatomic) unsigned rawThumbnailWidth;                                                               //@synthesize rawThumbnailWidth=_rawThumbnailWidth - In the implementation block
@property (assign,nonatomic) unsigned rawThumbnailHeight;                                                              //@synthesize rawThumbnailHeight=_rawThumbnailHeight - In the implementation block
@property (assign,nonatomic) BOOL noiseReductionEnabled;                                                               //@synthesize noiseReductionEnabled=_noiseReductionEnabled - In the implementation block
@property (assign,nonatomic) BOOL burstQualityCaptureEnabled;                                                          //@synthesize burstQualityCaptureEnabled=_burstQualityCaptureEnabled - In the implementation block
@property (assign,nonatomic) float scaleFactor;                                                                        //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign,nonatomic) unsigned shutterSound;                                                                    //@synthesize shutterSound=_shutterSound - In the implementation block
@property (assign,nonatomic) int flashMode;                                                                            //@synthesize flashMode=_flashMode - In the implementation block
@property (assign,nonatomic) BOOL autoRedEyeReductionEnabled;                                                          //@synthesize autoRedEyeReductionEnabled=_autoRedEyeReductionEnabled - In the implementation block
@property (assign,nonatomic) int wideColorMode;                                                                        //@synthesize wideColorMode=_wideColorMode - In the implementation block
@property (assign,nonatomic) int HDRMode;                                                                              //@synthesize HDRMode=_HDRMode - In the implementation block
@property (assign,nonatomic) BOOL depthDataDeliveryEnabled;                                                            //@synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled - In the implementation block
@property (assign,nonatomic) BOOL embedsDepthDataInImage;                                                              //@synthesize embedsDepthDataInImage=_embedsDepthDataInImage - In the implementation block
@property (assign,nonatomic) BOOL depthDataFiltered;                                                                   //@synthesize depthDataFiltered=_depthDataFiltered - In the implementation block
@property (assign,nonatomic) BOOL cameraCalibrationDataDeliveryEnabled;                                                //@synthesize cameraCalibrationDataDeliveryEnabled=_cameraCalibrationDataDeliveryEnabled - In the implementation block
@property (assign,nonatomic) BOOL portraitEffectsMatteDeliveryEnabled;                                                 //@synthesize portraitEffectsMatteDeliveryEnabled=_portraitEffectsMatteDeliveryEnabled - In the implementation block
@property (assign,nonatomic) BOOL embedsPortraitEffectsMatteInImage;                                                   //@synthesize embedsPortraitEffectsMatteInImage=_embedsPortraitEffectsMatteInImage - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                                                                    //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSArray * originalImageFilters;                                                             //@synthesize originalImageFilters=_originalImageFilters - In the implementation block
@property (nonatomic,copy) NSArray * processedImageFilters;                                                            //@synthesize processedImageFilters=_processedImageFilters - In the implementation block
@property (assign,nonatomic) float simulatedAperture;                                                                  //@synthesize simulatedAperture=_simulatedAperture - In the implementation block
@property (assign,nonatomic) BOOL providesOriginalImage;                                                               //@synthesize providesOriginalImage=_providesOriginalImage - In the implementation block
@property (assign,nonatomic) BOOL bravoDualImageDeliveryEnabled;                                                       //@synthesize bravoDualImageDeliveryEnabled=_bravoDualImageDeliveryEnabled - In the implementation block
@property (assign,setter=ISMode,nonatomic) int SISMode;                                                                //@synthesize SISMode=_SISMode - In the implementation block
@property (assign,nonatomic) int bravoImageFusionMode;                                                                 //@synthesize bravoImageFusionMode=_bravoImageFusionMode - In the implementation block
@property (nonatomic,copy) NSDictionary * vtCompressionProperties;                                                     //@synthesize vtCompressionProperties=_vtCompressionProperties - In the implementation block
@property (nonatomic,readonly) int bracketType;                                                                        //@synthesize bracketType=_bracketType - In the implementation block
@property (nonatomic,readonly) unsigned bracketImageCount;                                                             //@synthesize bracketImageCount=_bracketImageCount - In the implementation block
@property (assign,nonatomic) BOOL lensStabilizationDuringBracketEnabled;                                               //@synthesize lensStabilizationDuringBracketEnabled=_lensStabilizationDuringBracketEnabled - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW2* exposureDurations;                                                      //@synthesize exposureDurations=_exposureDurations - In the implementation block
@property (nonatomic,readonly) float* ISOs;                                                                            //@synthesize ISOs=_ISOs - In the implementation block
@property (nonatomic,readonly) float* exposureTargetBiases;                                                            //@synthesize exposureTargetBiases=_exposureTargetBiases - In the implementation block
@property (assign,nonatomic) unsigned long long stillImageUserInitiatedRequestTime;                                    //@synthesize stillImageUserInitiatedRequestTime=_stillImageUserInitiatedRequestTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 stillImageUserInitiatedRequestPTS;                                         //@synthesize stillImageUserInitiatedRequestPTS=_stillImageUserInitiatedRequestPTS - In the implementation block
@property (assign,nonatomic) long long stillImageRequestTime;                                                          //@synthesize stillImageRequestTime=_stillImageRequestTime - In the implementation block
@property (assign,nonatomic) long long stillImageCaptureStartTime;                                                     //@synthesize stillImageCaptureStartTime=_stillImageCaptureStartTime - In the implementation block
@property (assign,nonatomic) double stillImageCaptureAbsoluteStartTime;                                                //@synthesize stillImageCaptureAbsoluteStartTime=_stillImageCaptureAbsoluteStartTime - In the implementation block
@property (nonatomic,readonly) NSString * imageGroupIdentifier; 
@property (assign,getter=isClientInitiatedPrepareSettings,nonatomic) BOOL clientInitiatedPrepareSettings;              //@synthesize clientInitiatedPrepareSettings=_clientInitiatedPrepareSettings - In the implementation block
@property (assign,getter=isUserInitiatedRequestSettings,nonatomic) BOOL userInitiatedRequestSettings;                  //@synthesize userInitiatedRequestSettings=_userInitiatedRequestSettings - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)settingsID;
-(int)outputFileType;
-(void)setSettingsID:(long long)arg1 ;
-(void)_teardownBracketStorage;
-(void)setPayloadType:(int)arg1 ;
-(void)setSettingsProvider:(int)arg1 ;
-(void)setOutputFormat:(unsigned)arg1 ;
-(void)setRawOutputFormat:(unsigned)arg1 ;
-(void)setRawOutputFileType:(int)arg1 ;
-(void)setOutputWidth:(unsigned)arg1 ;
-(void)setOutputHeight:(unsigned)arg1 ;
-(void)setOutputMirroring:(BOOL)arg1 ;
-(void)setOutputOrientation:(int)arg1 ;
-(void)setPreviewEnabled:(BOOL)arg1 ;
-(void)setPreviewFormat:(unsigned)arg1 ;
-(void)setPreviewWidth:(unsigned)arg1 ;
-(void)setPreviewHeight:(unsigned)arg1 ;
-(void)setPreviewMirroring:(BOOL)arg1 ;
-(void)setPreviewOrientation:(int)arg1 ;
-(void)setThumbnailEnabled:(BOOL)arg1 ;
-(void)setThumbnailFormat:(unsigned)arg1 ;
-(void)setThumbnailWidth:(unsigned)arg1 ;
-(void)setThumbnailHeight:(unsigned)arg1 ;
-(void)setRawThumbnailEnabled:(BOOL)arg1 ;
-(void)setRawThumbnailFormat:(unsigned)arg1 ;
-(void)setRawThumbnailWidth:(unsigned)arg1 ;
-(void)setRawThumbnailHeight:(unsigned)arg1 ;
-(void)setNoiseReductionEnabled:(BOOL)arg1 ;
-(void)setBurstQualityCaptureEnabled:(BOOL)arg1 ;
-(void)setAutoRedEyeReductionEnabled:(BOOL)arg1 ;
-(void)setWideColorMode:(int)arg1 ;
-(void)setEmbedsDepthDataInImage:(BOOL)arg1 ;
-(void)setDepthDataFiltered:(BOOL)arg1 ;
-(void)setEmbedsPortraitEffectsMatteInImage:(BOOL)arg1 ;
-(void)setCameraCalibrationDataDeliveryEnabled:(BOOL)arg1 ;
-(void)setOriginalImageFilters:(NSArray *)arg1 ;
-(void)setProcessedImageFilters:(NSArray *)arg1 ;
-(void)setProvidesOriginalImage:(BOOL)arg1 ;
-(void)setBravoDualImageDeliveryEnabled:(BOOL)arg1 ;
-(void)setSISMode:(int)arg1 ;
-(void)setBravoImageFusionMode:(int)arg1 ;
-(void)setVtCompressionProperties:(NSDictionary *)arg1 ;
-(void)setBracketType:(int)arg1 imageCount:(unsigned)arg2 ;
-(void)setLensStabilizationDuringBracketEnabled:(BOOL)arg1 ;
-(SCD_Struct_BW2*)exposureDurations;
-(float*)ISOs;
-(float*)exposureTargetBiases;
-(void)setStillImageUserInitiatedRequestTime:(unsigned long long)arg1 ;
-(void)setStillImageUserInitiatedRequestPTS:(SCD_Struct_BW2)arg1 ;
-(void)setStillImageRequestTime:(long long)arg1 ;
-(void)setStillImageCaptureStartTime:(long long)arg1 ;
-(void)setStillImageCaptureAbsoluteStartTime:(double)arg1 ;
-(unsigned)outputFormat;
-(BOOL)isOutputFormatCompressed;
-(unsigned)outputWidth;
-(unsigned)outputHeight;
-(unsigned)previewFormat;
-(unsigned)previewWidth;
-(unsigned)previewHeight;
-(NSDictionary *)outputPixelBufferAttributes;
-(NSDictionary *)previewPixelBufferAttributes;
-(id)figCaptureIrisPreparedSettingsRepresentation;
-(int)settingsProvider;
-(unsigned)rawOutputFormat;
-(int)rawOutputFileType;
-(BOOL)squareCropEnabled;
-(BOOL)outputMirroring;
-(int)outputOrientation;
-(BOOL)previewEnabled;
-(BOOL)previewMirroring;
-(int)previewOrientation;
-(BOOL)thumbnailEnabled;
-(unsigned)thumbnailFormat;
-(unsigned)thumbnailWidth;
-(unsigned)thumbnailHeight;
-(BOOL)rawThumbnailEnabled;
-(unsigned)rawThumbnailFormat;
-(unsigned)rawThumbnailWidth;
-(unsigned)rawThumbnailHeight;
-(BOOL)noiseReductionEnabled;
-(BOOL)burstQualityCaptureEnabled;
-(unsigned)shutterSound;
-(BOOL)autoRedEyeReductionEnabled;
-(int)wideColorMode;
-(BOOL)depthDataDeliveryEnabled;
-(BOOL)embedsDepthDataInImage;
-(BOOL)depthDataFiltered;
-(BOOL)cameraCalibrationDataDeliveryEnabled;
-(BOOL)portraitEffectsMatteDeliveryEnabled;
-(BOOL)embedsPortraitEffectsMatteInImage;
-(NSArray *)originalImageFilters;
-(NSArray *)processedImageFilters;
-(float)simulatedAperture;
-(BOOL)providesOriginalImage;
-(BOOL)bravoDualImageDeliveryEnabled;
-(int)SISMode;
-(int)bravoImageFusionMode;
-(NSDictionary *)vtCompressionProperties;
-(int)bracketType;
-(unsigned)bracketImageCount;
-(BOOL)lensStabilizationDuringBracketEnabled;
-(unsigned long long)stillImageUserInitiatedRequestTime;
-(SCD_Struct_BW2)stillImageUserInitiatedRequestPTS;
-(long long)stillImageRequestTime;
-(long long)stillImageCaptureStartTime;
-(double)stillImageCaptureAbsoluteStartTime;
-(BOOL)isClientInitiatedPrepareSettings;
-(void)setClientInitiatedPrepareSettings:(BOOL)arg1 ;
-(BOOL)isUserInitiatedRequestSettings;
-(void)setUserInitiatedRequestSettings:(BOOL)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)setOutputFileType:(int)arg1 ;
-(void)setFlashMode:(int)arg1 ;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(int)flashMode;
-(int)HDRMode;
-(void)setHDRMode:(int)arg1 ;
-(void)setPortraitEffectsMatteDeliveryEnabled:(BOOL)arg1 ;
-(NSString *)imageGroupIdentifier;
-(void)setSimulatedAperture:(float)arg1 ;
-(void)setShutterSound:(unsigned)arg1 ;
-(void)setSquareCropEnabled:(BOOL)arg1 ;
-(int)payloadType;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)scaleFactor;
-(void)setScaleFactor:(float)arg1 ;
-(NSDictionary *)metadata;
@end

