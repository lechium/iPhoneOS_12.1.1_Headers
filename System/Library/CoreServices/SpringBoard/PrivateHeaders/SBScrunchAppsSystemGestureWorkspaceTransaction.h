//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSystemGestureWorkspaceTransaction.h"

#import "SBUIAnimationControllerObserver.h"

@class FBUIApplicationSceneDeactivationAssertion, NSString, SBUIAnimationController;

@interface SBScrunchAppsSystemGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction <SBUIAnimationControllerObserver>
{
    FBUIApplicationSceneDeactivationAssertion *_resignActiveAssertion;	// 40 = 0x28
    SBUIAnimationController *_animationController;	// 48 = 0x30
    _Bool _ignoringEvents;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001004ab3ac
- (void)_executeUnscatterWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001004ab15c
- (void)_unlockOrientation;	// IMP=0x00000001004ab108
- (void)_lockOrientation:(long long)arg1;	// IMP=0x00000001004ab0b0
- (void)_resumeEventsIfNecessary;	// IMP=0x00000001004ab068
- (void)_ignoreEvents;	// IMP=0x00000001004ab01c
- (void)animationControllerDidFinishAnimation:(id)arg1;	// IMP=0x00000001004aadb4
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;	// IMP=0x00000001004aadb0
- (void)_suspendGestureCancelled;	// IMP=0x00000001004aacf0
- (void)_suspendGestureEndedWithCompletionType:(long long)arg1;	// IMP=0x00000001004aabe8
- (void)_suspendGestureChanged:(double)arg1;	// IMP=0x00000001004aaad4
- (void)_finishWithCompletionType:(long long)arg1;	// IMP=0x00000001004aaa50
- (void)_beginAnimation;	// IMP=0x00000001004aa93c
- (void)_setupAnimation;	// IMP=0x00000001004aa5f4
- (void)systemGestureStateChanged:(id)arg1;	// IMP=0x00000001004aa0fc
- (void)_didComplete;	// IMP=0x00000001004aa058
- (void)_begin;	// IMP=0x00000001004a9ebc
- (void)dealloc;	// IMP=0x00000001004a9da8
- (id)initWithTransitionRequest:(id)arg1;	// IMP=0x00000001004a9cf8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
