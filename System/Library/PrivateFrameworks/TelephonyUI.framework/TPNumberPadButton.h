/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/TPNumberPadButtonProtocol.h>

@class UIColor, CALayer, UIView, TPRevealingRingView, NSString;

@interface TPNumberPadButton : UIControl <TPNumberPadButtonProtocol> {

	unsigned character;
	UIColor* _color;
	CALayer* _glyphLayer;
	CALayer* _highlightedGlyphLayer;
	UIView* _circleView;
	UIColor* _buttonColor;
	TPRevealingRingView* _revealingRingView;

}

@property (retain) CALayer * glyphLayer;                                             //@synthesize glyphLayer=_glyphLayer - In the implementation block
@property (retain) CALayer * highlightedGlyphLayer;                                  //@synthesize highlightedGlyphLayer=_highlightedGlyphLayer - In the implementation block
@property (retain) UIView * circleView;                                              //@synthesize circleView=_circleView - In the implementation block
@property (nonatomic,readonly) UIColor * buttonColor;                                //@synthesize buttonColor=_buttonColor - In the implementation block
@property (nonatomic,readonly) TPRevealingRingView * revealingRingView;              //@synthesize revealingRingView=_revealingRingView - In the implementation block
@property (nonatomic,retain) UIColor * color;                                        //@synthesize color=_color - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned character; 
+(void)resetLocale;
+(id)imageForCharacter:(unsigned)arg1 highlighted:(BOOL)arg2 whiteVersion:(BOOL)arg3 ;
+(id)imageForCharacter:(unsigned)arg1 ;
+(id)imageForCharacter:(unsigned)arg1 highlighted:(BOOL)arg2 ;
+(double)outerCircleDiameter;
+(void)loadNumberPadKeyPrototypeView;
+(void)resetLocaleIfNeeded;
+(id)scriptKey;
+(BOOL)usesBoldAssets;
+(id)localizedLettersForCharacter:(unsigned)arg1 ;
+(BOOL)useLargeFont;
+(CGRect)circleBounds;
+(BOOL)usesButtonSaturationFilters;
+(UIEdgeInsets)paddingOutsideRing;
+(double)unhighlightedCircleViewAlpha;
+(double)highlightedCircleViewAlpha;
+(BOOL)usesTelephonyGlyphsWhereAvailable;
+(double)verticalPadding;
+(CGSize)defaultSize;
+(double)horizontalPadding;
-(void)touchUp;
-(void)touchCancelled;
-(CALayer *)glyphLayer;
-(CALayer *)highlightedGlyphLayer;
-(void)setGlyphLayer:(CALayer *)arg1 ;
-(void)setHighlightedGlyphLayer:(CALayer *)arg1 ;
-(void)highlightCircleView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initForCharacter:(unsigned)arg1 ;
-(void)loadImagesForCurrentCharacter;
-(TPRevealingRingView *)revealingRingView;
-(UIColor *)buttonColor;
-(UIView *)circleView;
-(void)setCircleView:(UIView *)arg1 ;
-(unsigned)character;
-(void)setCharacter:(unsigned)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchDown;
-(id)defaultColor;
@end
