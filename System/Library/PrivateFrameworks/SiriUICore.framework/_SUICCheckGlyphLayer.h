/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUICore/SiriUICore-Structs.h>
#import <QuartzCore/CALayer.h>

@class CAShapeLayer, CAGradientLayer, UIColor;

@interface _SUICCheckGlyphLayer : CALayer {

	CAShapeLayer* _checkPackageLayer;
	CAGradientLayer* _maskLayer;
	BOOL _covered;
	CATransform3D _uncoveredTransform;
	CATransform3D _coveredTransform;
	UIColor* _primaryColor;

}

@property (nonatomic,copy) UIColor * primaryColor;              //@synthesize primaryColor=_primaryColor - In the implementation block
@property (assign,nonatomic) BOOL revealed; 
-(void)_createMask;
-(double)_updateCovered:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(double)_pointScaleToMatchBoundsSize:(CGSize)arg1 ;
-(void)setPrimaryColor:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setRevealed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(double)setCovered:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)revealed;
-(void)setRevealed:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(UIColor *)primaryColor;
-(void)layoutSublayers;
@end

