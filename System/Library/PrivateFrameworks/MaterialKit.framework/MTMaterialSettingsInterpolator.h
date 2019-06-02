/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTMaterialSettings;
@class NSString, UIColor;

@interface MTMaterialSettingsInterpolator : NSObject {

	double _previousWeighting;
	double _weighting;
	id<MTMaterialSettings> _initialSettings;
	unsigned long long _initialOptions;
	id<MTMaterialSettings> _finalSettings;
	unsigned long long _finalOptions;

}

@property (assign,nonatomic) double weighting;                                                                         //@synthesize weighting=_weighting - In the implementation block
@property (nonatomic,retain) id<MTMaterialSettings> initialSettings;                                                   //@synthesize initialSettings=_initialSettings - In the implementation block
@property (assign,nonatomic) unsigned long long initialOptions;                                                        //@synthesize initialOptions=_initialOptions - In the implementation block
@property (nonatomic,retain) id<MTMaterialSettings> finalSettings;                                                     //@synthesize finalSettings=_finalSettings - In the implementation block
@property (assign,nonatomic) unsigned long long finalOptions;                                                          //@synthesize finalOptions=_finalOptions - In the implementation block
@property (getter=isGammaOptionEnabled,nonatomic,readonly) BOOL gammaOptionEnabled; 
@property (getter=isBlurOptionEnabled,nonatomic,readonly) BOOL blurOptionEnabled; 
@property (getter=isZoomOptionEnabled,nonatomic,readonly) BOOL zoomOptionEnabled; 
@property (getter=isLuminanceOnlyOptionEnabled,nonatomic,readonly) BOOL luminanceOnlyOptionEnabled; 
@property (getter=isPrimaryOverlayOptionEnabled,nonatomic,readonly) BOOL primaryOverlayOptionEnabled; 
@property (getter=isSecondaryOverlayOptionEnabled,nonatomic,readonly) BOOL secondaryOverlayOptionEnabled; 
@property (getter=isBaseOverlayOptionEnabled,nonatomic,readonly) BOOL baseOverlayOptionEnabled; 
@property (getter=isAuxiliaryOverlayOptionEnabled,nonatomic,readonly) BOOL auxiliaryOverlayOptionEnabled; 
@property (getter=isCaptureOnlyOptionEnabled,nonatomic,readonly) BOOL captureOnlyOptionEnabled; 
@property (getter=isBackdropRequiredEver,nonatomic,readonly) BOOL backdropRequiredEver; 
@property (getter=isBackdropRequiredInitially,nonatomic,readonly) BOOL backdropRequiredInitially; 
@property (getter=isBackdropRequiredFinally,nonatomic,readonly) BOOL backdropRequiredFinally; 
@property (nonatomic,readonly) BOOL hasOverlay; 
@property (getter=isOverlay,nonatomic,readonly) BOOL overlay; 
@property (getter=isBlurEnabled,nonatomic,readonly) BOOL blurEnabled; 
@property (getter=isLuminanceAlphaEnabled,nonatomic,readonly) BOOL luminanceAlphaEnabled; 
@property (getter=isSaturationEnabled,nonatomic,readonly) BOOL saturationEnabled; 
@property (getter=isBrightnessEnabled,nonatomic,readonly) BOOL brightnessEnabled; 
@property (getter=isBackdropTintEnabled,nonatomic,readonly) BOOL backdropTintEnabled; 
@property (getter=isZoomEnabled,nonatomic,readonly) BOOL zoomEnabled; 
@property (nonatomic,readonly) double blurRadius; 
@property (nonatomic,readonly) double blurRadiusWithTransformer; 
@property (nonatomic,readonly) double luminanceAlpha; 
@property (nonatomic,readonly) double saturation; 
@property (nonatomic,readonly) double brightness; 
@property (nonatomic,readonly) double tintAlpha; 
@property (nonatomic,readonly) double zoom; 
@property (nonatomic,readonly) double backdropScale; 
@property (nonatomic,copy,readonly) NSString * blurInputQuality; 
@property (nonatomic,copy,readonly) UIColor * baseOverlayColor; 
@property (nonatomic,copy,readonly) UIColor * primaryOverlayColor; 
@property (nonatomic,copy,readonly) UIColor * secondaryOverlayColor; 
@property (nonatomic,copy,readonly) UIColor * colorMatrixColor; 
@property (nonatomic,copy,readonly) UIColor * colorAddColor; 
@property (nonatomic,copy,readonly) NSString * luminanceColorMapName; 
+(BOOL)isCaptureOnly:(unsigned long long)arg1 ;
-(double)tintAlpha;
-(double)luminanceAlpha;
-(UIColor *)baseOverlayColor;
-(id)initWithSettings:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setInitialSettings:(id<MTMaterialSettings>)arg1 ;
-(void)setInitialOptions:(unsigned long long)arg1 ;
-(BOOL)isOverlayOptionEnabled:(unsigned long long)arg1 ;
-(BOOL)_isBackdropRequiredWithSettings:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)isBackdropRequiredFinally;
-(BOOL)isBackdropRequiredInitially;
-(BOOL)_isPropertyEnabled:(id)arg1 consideringWeighting:(BOOL)arg2 ;
-(BOOL)isBackdropRequiredEver;
-(id)_backdropTintAlphaWithSettings:(id)arg1 wrappedOptions:(id)arg2 ;
-(BOOL)_isBackdropRequiredForOverlayWithSettings:(id)arg1 options:(unsigned long long)arg2 ;
-(double)_propertyValueForProperty:(id)arg1 ;
-(double)_propertyValueForProperty:(id)arg1 withTransformer:(/*^block*/id)arg2 ;
-(id)_performanceConfiguringSettingsForSettings:(id)arg1 ;
-(BOOL)isBaseOverlayOptionEnabled;
-(id)_basicOverlaySettingsForSettings:(id)arg1 ;
-(id)_colorForBackdrop:(BOOL)arg1 withGetterBlock:(/*^block*/id)arg2 ;
-(BOOL)isPrimaryOverlayOptionEnabled;
-(BOOL)isSecondaryOverlayOptionEnabled;
-(id)_colorMatrixColorWithSettings:(id)arg1 options:(unsigned long long)arg2 alpha:(double)arg3 ;
-(id)_colorAddColorWithSettings:(id)arg1 options:(unsigned long long)arg2 alpha:(double)arg3 ;
-(double)identityValueForProperty:(id)arg1 ;
-(id)_tintAlphaWithSettings:(id)arg1 wrappedOptions:(id)arg2 ;
-(id)_luminanceOverlaySettingsForSettings:(id)arg1 ;
-(BOOL)_isBackdropRequiredForMainMaterialWithSettings:(id)arg1 options:(unsigned long long)arg2 ;
-(id)_v2SettingsForSettings:(id)arg1 ;
-(id)invertedMaterialSettingsInterpolator;
-(BOOL)isGammaOptionEnabled;
-(BOOL)isBlurOptionEnabled;
-(BOOL)isZoomOptionEnabled;
-(BOOL)isLuminanceOnlyOptionEnabled;
-(BOOL)isAuxiliaryOverlayOptionEnabled;
-(BOOL)isCaptureOnlyOptionEnabled;
-(BOOL)isBlurEnabled;
-(BOOL)isLuminanceAlphaEnabled;
-(BOOL)isSaturationEnabled;
-(BOOL)isBrightnessEnabled;
-(BOOL)isBackdropTintEnabled;
-(BOOL)isBackdropRequiredForOverlayOption:(unsigned long long)arg1 ;
-(double)blurRadiusWithTransformer;
-(double)backdropScale;
-(NSString *)blurInputQuality;
-(UIColor *)primaryOverlayColor;
-(UIColor *)secondaryOverlayColor;
-(UIColor *)colorMatrixColor;
-(UIColor *)colorAddColor;
-(NSString *)luminanceColorMapName;
-(id)_blurRadiusWithSettings:(id)arg1 wrappedOptions:(id)arg2 ;
-(id)_luminanceAlphaWithSettings:(id)arg1 wrappedOptions:(id)arg2 ;
-(id)_saturationWithSettings:(id)arg1 wrappedOptions:(id)arg2 ;
-(id)_brightnessWithSettings:(id)arg1 wrappedOptions:(id)arg2 ;
-(id)_zoomWithSettings:(id)arg1 wrappedOptions:(id)arg2 ;
-(id<MTMaterialSettings>)initialSettings;
-(unsigned long long)initialOptions;
-(id<MTMaterialSettings>)finalSettings;
-(void)setFinalSettings:(id<MTMaterialSettings>)arg1 ;
-(unsigned long long)finalOptions;
-(void)setFinalOptions:(unsigned long long)arg1 ;
-(BOOL)hasOverlay;
-(BOOL)isOverlay;
-(double)saturation;
-(id)description;
-(double)zoom;
-(double)blurRadius;
-(void)setWeighting:(double)arg1 ;
-(double)weighting;
-(double)brightness;
-(BOOL)isZoomEnabled;
@end

