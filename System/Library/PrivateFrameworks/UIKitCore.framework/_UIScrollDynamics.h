/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIScrollDynamics : NSObject {

	BOOL _shouldRoundCalculations;
	CGSize _tolerance;
	CGPoint _decelerationTarget;
	CGPoint _initialContentOffset;
	CGVector _initialVelocity;
	CGPoint _contentOrigin;
	CGSize _viewSize;
	CGRect _contentFrame;

}

@property (assign,nonatomic) BOOL shouldRoundCalculations;              //@synthesize shouldRoundCalculations=_shouldRoundCalculations - In the implementation block
@property (nonatomic,readonly) CGSize tolerance;                        //@synthesize tolerance=_tolerance - In the implementation block
@property (assign,nonatomic) CGPoint decelerationTarget;                //@synthesize decelerationTarget=_decelerationTarget - In the implementation block
@property (assign,nonatomic) CGPoint initialContentOffset;              //@synthesize initialContentOffset=_initialContentOffset - In the implementation block
@property (assign,nonatomic) CGVector initialVelocity;                  //@synthesize initialVelocity=_initialVelocity - In the implementation block
@property (assign,nonatomic) CGRect contentFrame;                       //@synthesize contentFrame=_contentFrame - In the implementation block
@property (assign,nonatomic) CGPoint contentOrigin;                     //@synthesize contentOrigin=_contentOrigin - In the implementation block
@property (assign,nonatomic) CGSize viewSize;                           //@synthesize viewSize=_viewSize - In the implementation block
@property (nonatomic,readonly) double durationUntilStop; 
-(id)init;
-(CGVector)initialVelocity;
-(CGRect)contentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
-(void)setInitialVelocity:(CGVector)arg1 ;
-(CGSize)viewSize;
-(void)setInitialContentOffset:(CGPoint)arg1 ;
-(void)setContentOrigin:(CGPoint)arg1 ;
-(void)setViewSize:(CGSize)arg1 ;
-(void)setShouldRoundCalculations:(BOOL)arg1 ;
-(void)calculateDecelerationTarget;
-(void)setDecelerationTarget:(CGPoint)arg1 ;
-(void)calculateToReachDecelerationTarget;
-(id)initWithInitialContentOffset:(CGPoint)arg1 velocity:(CGVector)arg2 contentFrame:(CGRect)arg3 viewSize:(CGSize)arg4 screenScale:(double)arg5 ;
-(double)durationUntilStop;
-(double)speedAfterDuration:(double)arg1 ;
-(CGVector)velocityAfterDuration:(double)arg1 ;
-(CGPoint)positionAfterDuration:(double)arg1 ;
-(BOOL)isRubberBandingAfterDuration:(double)arg1 ;
-(void)recalculateForDecelerationTarget:(CGPoint)arg1 ;
-(BOOL)shouldRoundCalculations;
-(CGSize)tolerance;
-(CGPoint)decelerationTarget;
-(CGPoint)initialContentOffset;
-(CGPoint)contentOrigin;
@end

