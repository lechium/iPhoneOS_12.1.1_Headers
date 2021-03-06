/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIColor;

@interface _PKInkColorButton : UIButton {

	BOOL _isCompact;
	BOOL _isUsedOnDarkBackground;
	UIColor* _color;

}

@property (nonatomic,retain) UIColor * color;                          //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL isCompact;                           //@synthesize isCompact=_isCompact - In the implementation block
@property (assign,nonatomic) BOOL isUsedOnDarkBackground;              //@synthesize isUsedOnDarkBackground=_isUsedOnDarkBackground - In the implementation block
+(CGRect)swatchRectForBounds:(CGRect)arg1 isCompact:(BOOL)arg2 ;
+(double)swatchInsetForIsCompact:(BOOL)arg1 ;
+(double)transparentSelectionRingInset:(BOOL)arg1 ;
+(double)innerColorCircleInset:(BOOL)arg1 ;
+(id)pathForFillShapeLayerWithSwatchRect:(CGRect)arg1 selected:(BOOL)arg2 isCompact:(BOOL)arg3 ;
+(id)buttonWithColor:(id)arg1 isCompact:(BOOL)arg2 ;
+(id)embossOverlayImageForColor:(id)arg1 selected:(BOOL)arg2 isCompact:(BOOL)arg3 ;
+(id)pathForSelectedColorShapeLayerWithSwatchRect:(CGRect)arg1 selected:(BOOL)arg2 embossed:(BOOL)arg3 isCompact:(BOOL)arg4 ;
+(id)pathForStrokeShapeLayerWithSwatchRect:(CGRect)arg1 selected:(BOOL)arg2 color:(id)arg3 isUsedOnDarkBackground:(BOOL)arg4 isCompact:(BOOL)arg5 ;
+(id)strokeColorForStrokeShapeLayerWithColor:(id)arg1 isUsedOnDarkBackground:(BOOL)arg2 ;
-(id)initWithColor:(id)arg1 isCompact:(BOOL)arg2 ;
-(BOOL)isCompact;
-(CGRect)_swatchRect;
-(double)_swatchInset;
-(void)setIsCompact:(BOOL)arg1 ;
-(void)setIsUsedOnDarkBackground:(BOOL)arg1 ;
-(BOOL)isUsedOnDarkBackground;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

