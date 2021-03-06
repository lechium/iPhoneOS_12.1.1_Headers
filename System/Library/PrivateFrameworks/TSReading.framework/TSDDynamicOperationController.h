/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSDInteractiveCanvasController, NSMutableSet, TSDAutoscroll, NSSet;

@interface TSDDynamicOperationController : NSObject {

	TSDInteractiveCanvasController* mICC;
	BOOL mOperationIsDynamic;
	BOOL mResetGuides;
	BOOL mSupportsAlignmentGuides;
	BOOL mPossibleDynamicOperation;
	NSMutableSet* mReps;
	NSMutableSet* mAllTransformedReps;
	TSDAutoscroll* mAutoscroll;

}

@property (nonatomic,readonly) NSSet * allTransformedReps; 
@property (nonatomic,readonly) NSSet * currentlyTransformingReps; 
-(NSSet *)allTransformedReps;
-(id)initWithInteractiveCanvasController:(id)arg1 ;
-(NSSet *)currentlyTransformingReps;
-(BOOL)isInOperation;
-(void)handleGestureRecognizer:(id)arg1 ;
-(BOOL)isInPossibleDynamicOperation;
-(void)stopTransformingReps:(id)arg1 ;
-(void)beginOperation;
-(void)startTransformingReps:(id)arg1 ;
-(void)p_beginDynamicOperationForReps:(id)arg1 ;
-(void)p_controllingTMDidResetInOperation:(id)arg1 ;
-(void)p_cleanupOperation;
-(void)p_resetGuidesForCleanup:(BOOL)arg1 ;
-(void)endOperation;
-(void)beginPossibleDynamicOperation;
-(BOOL)isOperationDynamic;
-(void)handleTrackerManipulator:(id)arg1 ;
-(void)invalidateGuides;
-(void)dealloc;
-(void)cancelOperation;
@end

