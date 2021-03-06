/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer, _SLSheetMaskLayer, UIColor;

@interface SLSheetMasklayer : CALayer {

	CALayer* _topLayer;
	CALayer* _leftLayer;
	CALayer* _bottomLayer;
	CALayer* _rightLayer;
	_SLSheetMaskLayer* _sheetMaskLayer;
	CALayer* _solidSheetMaskLayer;
	UIColor* _backgroundColor;
	CGRect _lastBounds;
	CGRect _lastMaskRect;
	double _clipCornerRadius;
	UIColor* _clipBackgroundColor;

}

@property (assign,nonatomic) double clipCornerRadius;                    //@synthesize clipCornerRadius=_clipCornerRadius - In the implementation block
@property (nonatomic,retain) UIColor * clipBackgroundColor;              //@synthesize clipBackgroundColor=_clipBackgroundColor - In the implementation block
-(double)clipCornerRadius;
-(UIColor *)clipBackgroundColor;
-(void)setClipCornerRadius:(double)arg1 ;
-(void)setClipBackgroundColor:(UIColor *)arg1 ;
-(void)updateMaskWithBounds:(CGRect)arg1 maskRect:(CGRect)arg2 ;
-(id)initWithBackgroundColor:(id)arg1 cornerRadius:(double)arg2 ;
-(void)removeSheetCutout;
-(void)restoreSheetCutout;
-(void)animateSheetMaskFromOldSheetFrame:(CGRect)arg1 toSheetFrame:(CGRect)arg2 duration:(double)arg3 ;
-(void)removeAllAnimations;
@end

