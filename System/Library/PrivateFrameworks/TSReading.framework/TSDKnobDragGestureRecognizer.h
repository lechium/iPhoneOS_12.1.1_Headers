/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <TSReading/TSDAutoscrollDelegate.h>
#import <TSReading/TSDTrackerManipulator.h>

@class TSDInteractiveCanvasController, TSDAutoscroll, TSDiOSCanvasViewController, UITouch, TSDKnobTracker, TSDRep;

@interface TSDKnobDragGestureRecognizer : UIGestureRecognizer <TSDAutoscrollDelegate, TSDTrackerManipulator> {

	TSDiOSCanvasViewController* mCVC;
	TSDInteractiveCanvasController* mICC;
	UITouch* mTouch;
	CGPoint mKnobToTouchOffset;
	TSDKnobTracker* mTracker;
	BOOL mKnobTouchHasMoved;
	BOOL mDelayHasElapsed;
	CGPoint mOriginalPointInWindow;
	UITouch* mSecondTouch;
	TSDRep* mLastHitRep;
	BOOL mTouchesMoved;
	TSDAutoscroll* mAutoscroll;
	CGPoint mAutoscrollPoint;

}

@property (nonatomic,readonly) TSDInteractiveCanvasController * interactiveCanvasController; 
@property (nonatomic,readonly) TSDInteractiveCanvasController * icc; 
@property (nonatomic,retain) TSDAutoscroll * autoscroll; 
@property (assign,nonatomic) CGPoint autoscrollPoint; 
-(id)initWithInteractiveCanvasController:(id)arg1 ;
-(TSDInteractiveCanvasController *)interactiveCanvasController;
-(void)p_cancelDelayedKnobTracking;
-(CGPoint)p_pointInUnscaledCanvas;
-(void)p_requestDelayedKnobTracking:(double)arg1 ;
-(void)p_triggerDelayedKnobTracking:(id)arg1 ;
-(void)updateAfterAutoscroll:(id)arg1 ;
-(double)unscaledStartAutoscrollThreshold;
-(int)allowedAutoscrollDirections;
-(TSDInteractiveCanvasController *)icc;
-(CGPoint)autoscrollPoint;
-(void)setAutoscrollPoint:(CGPoint)arg1 ;
-(BOOL)allowTrackerManipulatorToTakeControl:(id)arg1 ;
-(id)tracker;
-(BOOL)readyToEndOperation;
-(void)operationDidEnd;
-(void)cancelBecauseOfRotation;
-(BOOL)p_hitRepIsValid:(id)arg1 ;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setState:(long long)arg1 ;
-(void)reset;
-(TSDAutoscroll *)autoscroll;
-(void)setAutoscroll:(TSDAutoscroll *)arg1 ;
-(void)autoscrollWillNotStart;
@end

