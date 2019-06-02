/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextMagnifier.h>

@interface UITextMagnifierRanged : UITextMagnifier {

	double _touchOffsetFromMagnificationPoint;
	double _magnifierOffsetFromTouch;
	BOOL _isHorizontal;
	BOOL _isAnimating;
	long long _delayedAnimationType;
	CGPoint _delayedAnimationPoint;

}

@property (assign,nonatomic) BOOL isHorizontal;              //@synthesize isHorizontal=_isHorizontal - In the implementation block
+(id)sharedRangedMagnifier;
+(id)activeRangedMagnifier;
-(void)setIsHorizontal:(BOOL)arg1 ;
-(void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(CGPoint)arg3 offset:(CGPoint)arg4 animated:(BOOL)arg5 ;
-(void)setMagnificationPoint:(CGPoint)arg1 ;
-(void)stopMagnifying:(BOOL)arg1 ;
-(BOOL)isHorizontal;
-(void)remove;
-(void)zoomDownAnimation;
-(BOOL)terminalPointPlacedCarefully;
-(void)setAutoscrollDirections:(int)arg1 ;
-(void)zoomUpAnimation;
-(void)zoomUpAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)zoomDownAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(double)offsetFromMagnificationPoint;
-(id)initWithFrame;
-(void)updateFrame;
-(CGPoint)snappedPoint:(CGPoint)arg1 ;
-(CGPoint)clipPoint:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(CGRect)caretRectClosestToPoint:(CGPoint)arg1 ;
-(int)horizontalMovementAtTime:(double)arg1 ;
-(BOOL)wasPlacedCarefullyAtTime:(double)arg1 ;
-(int)horizontalMovement;
@end

