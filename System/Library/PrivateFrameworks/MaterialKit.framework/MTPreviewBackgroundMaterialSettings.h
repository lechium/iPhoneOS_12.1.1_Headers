/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTMaterialSettings.h>
#import <libobjc.A.dylib/MTMaterialOverlaySettings.h>
#import <libobjc.A.dylib/MTZooming.h>

@class MTVibrantStylingProvider, UIColor, NSString;

@interface MTPreviewBackgroundMaterialSettings : NSObject <MTMaterialSettings, MTMaterialOverlaySettings, MTZooming>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL usesLuminanceMap; 
@property (assign,nonatomic) double blurRadius; 
@property (assign,nonatomic) double luminanceAlpha; 
@property (assign,nonatomic) double saturation; 
@property (assign,nonatomic) double brightness; 
@property (assign,nonatomic) double tintAlpha; 
@property (nonatomic,__weak,readonly) MTVibrantStylingProvider * vibrantStylingProvider; 
@property (nonatomic,copy,readonly) UIColor * baseOverlayColor; 
@property (assign,nonatomic) double baseOverlayTintAlpha; 
@property (nonatomic,copy,readonly) UIColor * primaryOverlayTintColor; 
@property (assign,nonatomic) double primaryOverlayTintAlpha; 
@property (nonatomic,copy,readonly) UIColor * secondaryOverlayTintColor; 
@property (assign,nonatomic) double secondaryOverlayTintAlpha; 
@property (nonatomic,readonly) double zoom; 
+(id)sharedMaterialSettings;
-(double)tintAlpha;
-(void)updateWithSettingsFromArchive:(id)arg1 ;
-(void)setUsesLuminanceMap:(BOOL)arg1 ;
-(double)luminanceAlpha;
-(void)setLuminanceAlpha:(double)arg1 ;
-(void)setTintAlpha:(double)arg1 ;
-(UIColor *)baseOverlayColor;
-(double)baseOverlayTintAlpha;
-(void)setBaseOverlayTintAlpha:(double)arg1 ;
-(UIColor *)primaryOverlayTintColor;
-(double)primaryOverlayTintAlpha;
-(void)setPrimaryOverlayTintAlpha:(double)arg1 ;
-(UIColor *)secondaryOverlayTintColor;
-(double)secondaryOverlayTintAlpha;
-(void)setSecondaryOverlayTintAlpha:(double)arg1 ;
-(double)saturation;
-(void)setSaturation:(double)arg1 ;
-(MTVibrantStylingProvider *)vibrantStylingProvider;
-(BOOL)usesLuminanceMap;
-(void)setBlurRadius:(double)arg1 ;
-(double)zoom;
-(double)blurRadius;
-(void)setBrightness:(double)arg1 ;
-(double)brightness;
@end

