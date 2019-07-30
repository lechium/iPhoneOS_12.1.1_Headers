//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBMainWorkspaceTransaction.h"

#import "SBUIAnimationControllerObserver.h"

@class NSString, SBUIAnimationController;

@interface SBSwitcherActivateNoninteractivelyTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver>
{
    SBUIAnimationController *_animationController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001005242c4
- (void)animationControllerDidFinishAnimation:(id)arg1;	// IMP=0x0000000100524198
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;	// IMP=0x0000000100524194
- (void)_releaseOrientationLock;	// IMP=0x00000001005240f8
- (void)_lockOrientation;	// IMP=0x000000010052405c
- (void)_beginAnimation;	// IMP=0x0000000100523ff8
- (void)_setupAnimation;	// IMP=0x0000000100523f58
- (void)_willComplete;	// IMP=0x0000000100523e7c
- (void)_begin;	// IMP=0x0000000100523d58
- (id)initWithTransitionRequest:(id)arg1;	// IMP=0x0000000100523c50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
