/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class NSArray, CIImage, NSDictionary, NSObject, NSNumber, NSString, CIVector, CIFilter;

@interface CIRAWFilterImpl : CIFilter {

	CGImageSourceRef _inputImageSource;
	NSArray* _inputImageAndProperties;
	CIImage* _inputImage;
	CGSize _nativeSize;
	BOOL _isRawSource;
	BOOL _calledDealloc;
	NSDictionary* _baseImageProperties;
	NSDictionary* _rawDictionary;
	NSDictionary* _rawReconstructionDefaultsDictionary;
	NSArray* _supportedSushiModes;
	NSArray* _supportedDecoderVersions;
	NSArray* _filters;
	NSObject* _typeIdentifierHint;
	NSNumber* _defaultOrientation;
	NSString* inputRequestedSushiMode;
	NSNumber* inputNeutralChromaticityX;
	NSNumber* inputNeutralChromaticityY;
	NSNumber* inputNeutralTemperature;
	NSNumber* inputNeutralTint;
	CIVector* inputNeutralLocation;
	NSNumber* inputEV;
	NSNumber* inputBoost;
	NSNumber* inputDraftMode;
	NSNumber* inputScaleFactor;
	NSNumber* inputIgnoreOrientation;
	NSNumber* inputImageOrientation;
	NSNumber* inputEnableSharpening;
	NSNumber* inputEnableNoiseTracking;
	NSNumber* inputEnableVendorLensCorrection;
	NSNumber* inputNoiseReductionAmount;
	NSNumber* inputLuminanceNoiseReductionAmount;
	NSNumber* inputColorNoiseReductionAmount;
	NSNumber* inputNoiseReductionSharpnessAmount;
	NSNumber* inputNoiseReductionContrastAmount;
	NSNumber* inputNoiseReductionDetailAmount;
	NSNumber* inputMoireAmount;
	NSString* inputDecoderVersion;
	NSNumber* inputBoostShadowAmount;
	NSNumber* inputBias;
	NSNumber* inputBaselineExposure;
	NSNumber* inputDisableGamutMap;
	NSNumber* inputHueMagMR;
	NSNumber* inputHueMagRY;
	NSNumber* inputHueMagYG;
	NSNumber* inputHueMagGC;
	NSNumber* inputHueMagCB;
	NSNumber* inputHueMagBM;
	CIFilter* inputLinearSpaceFilter;

}

@property (retain,readonly) NSDictionary * rawDictionary; 
@property (retain,readonly) NSDictionary * rawReconstructionDefaultsDictionary; 
@property (retain,readonly) NSNumber * sushiMode; 
@property (readonly) int rawMajorVersion; 
@property (retain,readonly) NSArray * filters; 
@property (readonly) int subsampling; 
@property (readonly) CGSize nativeSize; 
+(id)filterWithImageURL:(id)arg1 options:(id)arg2 ;
+(id)filterWithImageData:(id)arg1 options:(id)arg2 ;
+(id)filterWithCVPixelBuffer:(CVBufferRef)arg1 properties:(id)arg2 options:(id)arg3 ;
+(id)optionKeys;
+(id)applyMatrix:(const double*)arg1 toCIImage:(id)arg2 ;
+(void)convertNeutralX:(id)arg1 y:(id)arg2 toTemperature:(id*)arg3 tint:(id*)arg4 ;
+(void)convertNeutralTemperature:(id)arg1 tint:(id)arg2 toX:(id*)arg3 y:(id*)arg4 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)customAttributes;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)outputKeys;
-(void)setInputEV:(id)arg1 ;
-(void)setInputDraftMode:(id)arg1 ;
-(void)setInputScaleFactor:(id)arg1 ;
-(id)initWithImageSource:(CGImageSourceRef)arg1 options:(id)arg2 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 properties:(id)arg2 options:(id)arg3 ;
-(id)defaultInputLuminanceNoiseReductionAmount;
-(void)setInputLuminanceNoiseReductionAmount:(id)arg1 ;
-(id)defaultInputColorNoiseReductionAmount;
-(void)setInputColorNoiseReductionAmount:(id)arg1 ;
-(id)defaultInputNoiseReductionContrastAmount;
-(void)setInputNoiseReductionContrastAmount:(id)arg1 ;
-(id)defaultInputNoiseReductionDetailAmount;
-(void)setInputNoiseReductionDetailAmount:(id)arg1 ;
-(id)defaultInputNoiseReductionSharpnessAmount;
-(void)setInputNoiseReductionSharpnessAmount:(id)arg1 ;
-(id)defaultInputMoireAmount;
-(void)setInputMoireAmount:(id)arg1 ;
-(id)defaultInputEnableVendorLensCorrection;
-(void)setInputEnableVendorLensCorrection:(id)arg1 ;
-(void)setInputIgnoreOrientation:(id)arg1 ;
-(void)setInputEnableNoiseTracking:(id)arg1 ;
-(void)setInputNoiseReductionAmount:(id)arg1 ;
-(void)setInputEnableSharpening:(id)arg1 ;
-(void)setInputBoost:(id)arg1 ;
-(id)defaultBoostShadowAmount;
-(void)setInputBoostShadowAmount:(id)arg1 ;
-(id)defaultImageOrientation;
-(void)setInputImageOrientation:(id)arg1 ;
-(id)defaultDecoderVersion;
-(void)setInputDecoderVersion:(id)arg1 ;
-(id)defaultInputBaselineExposureAmount;
-(void)setInputBaselineExposure:(id)arg1 ;
-(id)defaultInputBiasAmount;
-(id)defaultInputHueMagMRAmount;
-(void)setInputHueMagMR:(id)arg1 ;
-(id)defaultInputHueMagRYAmount;
-(void)setInputHueMagRY:(id)arg1 ;
-(id)defaultInputHueMagYGAmount;
-(void)setInputHueMagYG:(id)arg1 ;
-(id)defaultInputHueMagGCAmount;
-(void)setInputHueMagGC:(id)arg1 ;
-(id)defaultInputHueMagCBAmount;
-(void)setInputHueMagCB:(id)arg1 ;
-(id)defaultInputHueMagBMAmount;
-(void)setInputHueMagBM:(id)arg1 ;
-(void)setInputDisableGamutMap:(id)arg1 ;
-(id)defaultNeutralTemperature;
-(void)setInputNeutralTemperature:(id)arg1 ;
-(id)defaultNeutralTint;
-(void)setInputNeutralTint:(id)arg1 ;
-(id)defaultNeutralChromaticityX;
-(void)setInputNeutralChromaticityX:(id)arg1 ;
-(id)defaultNeutralChromaticityY;
-(void)setInputNeutralChromaticityY:(id)arg1 ;
-(id)inputNeutralChromaticityX;
-(id)inputNeutralChromaticityY;
-(id)inputNeutralTemperature;
-(id)inputNeutralTint;
-(id)inputNeutralLocation;
-(id)inputBaselineExposure;
-(id)inputDisableGamutMap;
-(id)inputHueMagMR;
-(id)inputHueMagRY;
-(id)inputHueMagYG;
-(id)inputHueMagGC;
-(id)inputHueMagCB;
-(id)inputHueMagBM;
-(id)inputLinearSpaceFilter;
-(NSDictionary *)rawReconstructionDefaultsDictionary;
-(id)rawOptions;
-(id)whitePointArray;
-(void)getWhitePointVectorsR:(id*)arg1 g:(id*)arg2 b:(id*)arg3 ;
-(NSNumber *)sushiMode;
-(void)invalidateFilters;
-(id)rawOptionsWithSubsampling:(BOOL)arg1 ;
-(int)subsampling;
-(id)transformedImageIgnoringOrientation:(BOOL)arg1 ;
-(CGSize)nativeSize;
-(CGAffineTransform)getScaleTransform:(id)arg1 ;
-(CGAffineTransform)getOrientationTransform:(id)arg1 ;
-(int)rawMajorVersion;
-(void)invalidateInputImage;
-(void)setTempTintAtPoint:(CGPoint)arg1 ;
-(id)supportedDecoderVersions;
-(id)RAWFiltersValueForKeyPath:(id)arg1 ;
-(void)setInputNeutralLocation:(id)arg1 ;
-(id)supportedSushiModes;
-(void)setInputLinearSpaceFilter:(id)arg1 ;
-(id)activeKeys;
-(id)outputNativeSize;
-(void)updateTemperatureAndTint;
-(void)updateChomaticityXAndY;
-(void)setInputRequestedSushiMode:(id)arg1 ;
-(NSDictionary *)rawDictionary;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(id)inputBias;
-(id)whitePoint;
-(void)setInputBias:(id)arg1 ;
-(void)setDefaults;
-(id)init;
-(void)dealloc;
-(NSArray *)filters;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)outputImage;
@end

