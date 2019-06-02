/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MaterialKit/MTSystemModuleMaterialSettings.h>
#import <libobjc.A.dylib/MTMaterialSettings_v2.h>
#import <libobjc.A.dylib/_MTMaterialPerformanceConfiguring.h>

@class NSString, MTVibrantStylingProvider, UIColor;

@interface MTSystemModuleSheerMaterialSettings : MTSystemModuleMaterialSettings <MTMaterialSettings_v2, _MTMaterialPerformanceConfiguring>

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
@property (nonatomic,copy,readonly) UIColor * tintColor; 
+(id)sharedMaterialSettings;
-(double)_backdropScaleForOptions:(unsigned long long)arg1 ;
-(id)_blurInputQualityForOptions:(unsigned long long)arg1 ;
-(UIColor *)tintColor;
-(void)setDefaultValues;
-(double)zoom;
@end
