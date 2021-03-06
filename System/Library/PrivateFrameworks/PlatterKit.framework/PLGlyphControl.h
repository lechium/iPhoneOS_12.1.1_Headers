/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImageView, MTMaterialView, UIView, UIImage, NSString;

@interface PLGlyphControl : UIControl {

	long long _materialRecipe;
	unsigned long long _backgroundMaterialOptions;
	unsigned long long _overlayMaterialOptions;
	UIImageView* _glyphView;
	MTMaterialView* _backgroundMaterialView;
	MTMaterialView* _overlayMaterialView;
	UIView* _highlightView;

}

@property (getter=_glyphView,nonatomic,readonly) UIImageView * glyphView; 
@property (getter=_backgroundMaterialView,nonatomic,readonly) MTMaterialView * backgroundMaterialView; 
@property (getter=_overlayMaterialView,nonatomic,readonly) MTMaterialView * overlayMaterialView; 
@property (getter=_glyphView,nonatomic,retain) UIImageView * glyphView;                                             //@synthesize glyphView=_glyphView - In the implementation block
@property (getter=_backgroundMaterialView,nonatomic,retain) MTMaterialView * backgroundMaterialView;                //@synthesize backgroundMaterialView=_backgroundMaterialView - In the implementation block
@property (getter=_overlayMaterialView,nonatomic,retain) MTMaterialView * overlayMaterialView;                      //@synthesize overlayMaterialView=_overlayMaterialView - In the implementation block
@property (getter=_hightlightView,nonatomic,retain) UIView * highlightView;                                         //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,copy) UIImage * glyph; 
@property (nonatomic,copy) NSString * groupName; 
@property (nonatomic,readonly) long long materialRecipe;                                                            //@synthesize materialRecipe=_materialRecipe - In the implementation block
@property (nonatomic,readonly) unsigned long long backgroundMaterialOptions;                                        //@synthesize backgroundMaterialOptions=_backgroundMaterialOptions - In the implementation block
@property (nonatomic,readonly) unsigned long long overlayMaterialOptions;                                           //@synthesize overlayMaterialOptions=_overlayMaterialOptions - In the implementation block
+(id)dismissControlWithMaterialRecipe:(long long)arg1 backgroundMaterialOptions:(unsigned long long)arg2 overlayMaterialOptions:(unsigned long long)arg3 ;
-(void)setGlyphView:(UIImageView *)arg1 ;
-(void)setGlyph:(UIImage *)arg1 ;
-(UIImage *)glyph;
-(id)_glyphView;
-(long long)materialRecipe;
-(id)_backgroundMaterialView;
-(unsigned long long)backgroundMaterialOptions;
-(unsigned long long)overlayMaterialOptions;
-(id)initWithMaterialRecipe:(long long)arg1 backgroundMaterialOptions:(unsigned long long)arg2 overlayMaterialOptions:(unsigned long long)arg3 ;
-(id)_overlayMaterialView;
-(void)_handleTouchUpInsideWithEvent:(id)arg1 ;
-(void)_darkerSystemColorsStatusDidChange:(id)arg1 ;
-(void)_updateVibrantStylingOfView:(id)arg1 ;
-(void)_reduceTransparencyStatusDidChange:(id)arg1 ;
-(void)_configureBackgroundMaterialViewIfNecessary;
-(void)_configureGlyphViewIfNecessaryWithImage:(id)arg1 ;
-(void)_configureOverlayMaterialViewIfNecessary;
-(void)_updateGlyphViewVibrantStyling;
-(void)_configureMaterialView:(id*)arg1 ifNecessaryWithOptions:(unsigned long long)arg2 positioningAtIndex:(unsigned long long)arg3 ;
-(void)setBackgroundMaterialView:(MTMaterialView *)arg1 ;
-(void)setOverlayMaterialView:(MTMaterialView *)arg1 ;
-(id)_hightlightView;
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setGroupName:(NSString *)arg1 ;
-(double)_cornerRadius;
-(NSString *)groupName;
-(void)_sendActionsForEvents:(unsigned long long)arg1 withEvent:(id)arg2 ;
-(void)setHighlightView:(UIView *)arg1 ;
@end

