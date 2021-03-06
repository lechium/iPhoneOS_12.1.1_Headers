/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTMaterialSettingsObserving.h>
#import <libobjc.A.dylib/PLPlatterInternal.h>
#import <libobjc.A.dylib/PLPlatter.h>

@class UIView, UIImageView, MTMaterialView, NSString, MTVibrantStylingProvider;

@interface PLPlatterView : UIView <MTMaterialSettingsObserving, PLPlatterInternal, PLPlatter> {

	long long _recipe;
	unsigned long long _options;
	UIImageView* _shadowView;
	UIView* _customContentView;
	BOOL _hasShadow;
	BOOL _backgroundBlurred;
	BOOL _usesBackgroundView;
	UIView* _backgroundView;
	double _cornerRadius;
	MTMaterialView* _mainOverlayView;

}

@property (assign,nonatomic) double overlayAlpha; 
@property (assign,nonatomic) BOOL hasStackingShadow; 
@property (nonatomic,readonly) long long recipe; 
@property (nonatomic,readonly) unsigned long long options; 
@property (nonatomic,readonly) MTMaterialView * backgroundMaterialView; 
@property (nonatomic,readonly) MTMaterialView * mainOverlayView; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double cornerRadius;                                              //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) MTMaterialView * mainOverlayView;                                 //@synthesize mainOverlayView=_mainOverlayView - In the implementation block
@property (assign,nonatomic) BOOL usesBackgroundView;                                          //@synthesize usesBackgroundView=_usesBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                          //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,copy) NSString * groupName; 
@property (nonatomic,readonly) MTVibrantStylingProvider * vibrantStylingProvider; 
@property (nonatomic,readonly) UIView * customContentView;                                     //@synthesize customContentView=_customContentView - In the implementation block
@property (assign,nonatomic) BOOL hasShadow;                                                   //@synthesize hasShadow=_hasShadow - In the implementation block
@property (assign,getter=isBackgroundBlurred,nonatomic) BOOL backgroundBlurred;                //@synthesize backgroundBlurred=_backgroundBlurred - In the implementation block
+(double)overlayAlphaForTransform:(CGAffineTransform)arg1 ;
+(double)_overlayAlphaForTransformScale:(double)arg1 ;
+(CGRect)_shadowImage:(id)arg1 frameForPlatterViewBounds:(CGRect)arg2 ;
+(id)_shadowImageMask;
-(double)overlayAlpha;
-(void)setOverlayAlpha:(double)arg1 ;
-(void)setHasStackingShadow:(BOOL)arg1 ;
-(BOOL)hasStackingShadow;
-(long long)recipe;
-(void)setUsesBackgroundView:(BOOL)arg1 ;
-(void)_willRemoveCustomContent:(id)arg1 ;
-(BOOL)usesBackgroundView;
-(CGSize)sizeThatFitsContentWithSize:(CGSize)arg1 ;
-(CGSize)contentSizeForSize:(CGSize)arg1 ;
-(void)_configureCustomContentView;
-(BOOL)isBackgroundBlurred;
-(void)setBackgroundBlurred:(BOOL)arg1 ;
-(id)initWithRecipe:(long long)arg1 options:(unsigned long long)arg2 ;
-(void)_configureBackgroundViewIfNecessary;
-(MTVibrantStylingProvider *)vibrantStylingProvider;
-(MTMaterialView *)backgroundMaterialView;
-(MTMaterialView *)mainOverlayView;
-(MTMaterialView *)mainOverlayView;
-(void)_configureCustomContentViewIfNecessary;
-(void)_configureMainOverlayViewIfNecessary;
-(void)_layoutMainOverlay;
-(unsigned long long)_optionsForMainOverlay;
-(void)updateWithRecipe:(long long)arg1 options:(unsigned long long)arg2 ;
-(void)setMainOverlayView:(MTMaterialView *)arg1 ;
-(void)_configureMainOverlayView;
-(void)_configureBackgroundView:(id)arg1 ;
-(void)_configureShadowView;
-(unsigned long long)_optionsForBackgroundWithBlur:(BOOL)arg1 ;
-(id)_newDefaultBackgroundView;
-(void)_configureShadowViewIfNecessary;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIView *)customContentView;
-(UIView *)backgroundView;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(unsigned long long)options;
-(double)cornerRadius;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(BOOL)hasShadow;
-(void)setHasShadow:(BOOL)arg1 ;
@end

