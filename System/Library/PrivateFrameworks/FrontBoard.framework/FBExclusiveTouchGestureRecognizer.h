/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@interface FBExclusiveTouchGestureRecognizer : UIGestureRecognizer {

	BOOL _achievedMaximumAbsoluteAccumulatedMovement;
	CGPoint _maximumAbsoluteAccumulatedMovement;
	CGPoint _accumulatedMovement;

}

@property (assign,nonatomic,__weak) id<FBExclusiveTouchGestureRecognizerDelegate> delegate; 
@property (assign,nonatomic) CGPoint maximumAbsoluteAccumulatedMovement;                                 //@synthesize maximumAbsoluteAccumulatedMovement=_maximumAbsoluteAccumulatedMovement - In the implementation block
@property (nonatomic,readonly) BOOL achievedMaximumAbsoluteAccumulatedMovement;                          //@synthesize achievedMaximumAbsoluteAccumulatedMovement=_achievedMaximumAbsoluteAccumulatedMovement - In the implementation block
@property (nonatomic,readonly) CGPoint accumulatedMovement;                                              //@synthesize accumulatedMovement=_accumulatedMovement - In the implementation block
-(void)setMaximumAbsoluteAccumulatedMovement:(CGPoint)arg1 ;
-(CGPoint)maximumAbsoluteAccumulatedMovement;
-(BOOL)achievedMaximumAbsoluteAccumulatedMovement;
-(CGPoint)accumulatedMovement;
-(id)description;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
@end
