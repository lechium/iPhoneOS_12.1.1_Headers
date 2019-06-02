/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextMagnifier.h>

@interface UITextMagnifierCaret : UITextMagnifier {

	BOOL _isAnimating;
	long long _delayedAnimationType;
	double _yOffset;
	CGPoint _offset;

}

@property (assign,nonatomic) CGPoint offset;              //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) double yOffset;              //@synthesize yOffset=_yOffset - In the implementation block
+(id)sharedCaretMagnifier;
+(id)activeCaretMagnifier;
-(CGPoint)offset;
-(void)setOffset:(CGPoint)arg1 ;
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
-(CGPoint)animationPoint;
-(void)setAnimationPoint:(CGPoint)arg1 ;
-(id)initWithFrame;
-(void)updateFrameAndOffset;
-(double)yOffset;
-(void)setYOffset:(double)arg1 ;
@end

