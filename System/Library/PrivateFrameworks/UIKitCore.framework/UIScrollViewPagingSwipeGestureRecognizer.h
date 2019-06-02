/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UIDelayedAction;

@interface UIScrollViewPagingSwipeGestureRecognizer : UIGestureRecognizer {

	UIDelayedAction* _swipeFailureDelay;
	CGPoint _startLocation;
	CGPoint _lastLocation;
	double _lastTime;
	int _directionalFailureCount;

}
+(BOOL)_shouldDefaultToTouches;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_resetGestureRecognizer;
-(void)clearTimer;
-(void)enoughTimeElapsed:(id)arg1 ;
-(void)_processNewLocation:(CGPoint)arg1 ;
@end

