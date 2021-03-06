/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIDragInteractionDelegate_Private <UIDragInteractionDelegate>
@optional
-(id)_dragInteraction:(id)arg1 viewToSnapshotItem:(id)arg2;
-(BOOL)_dragInteractionAllowsDragOverridingMasterSwitch:(id)arg1;
-(BOOL)_dragInteraction:(id)arg1 shouldCancelOnAppDeactivationWithDefault:(BOOL)arg2;
-(void)_dragInteraction:(id)arg1 liftAnimationDidChangeDirection:(long long)arg2;
-(void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg1;
-(BOOL)_dragInteraction:(id)arg1 shouldDelayCompetingGestureRecognizer:(id)arg2;
-(BOOL)_dragInteraction:(id)arg1 canExcludeCompetingGestureRecognizer:(id)arg2;
-(BOOL)_dragInteraction:(id)arg1 competingGestureRecognizerShouldDelayLift:(id)arg2;
-(long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
-(long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3;

@end

