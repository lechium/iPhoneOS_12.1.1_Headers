//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIWorkspaceAnimationController.h"

#import "SBViewControllerReversibleAnimatedTransitioning.h"

@class BSAnimationSettings, NSString;

@interface SBUIAnimationSideAppSlide : SBUIWorkspaceAnimationController <SBViewControllerReversibleAnimatedTransitioning>
{
    id <SBViewControllerContextTransitioning> _transitionContext;	// 32 = 0x20
    unsigned long long _transitionToken;	// 40 = 0x28
    BSAnimationSettings *_animationSettings;	// 48 = 0x30
    _Bool _presentingSideApp;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100116144
- (void)finishSteppingBackwardToStart;	// IMP=0x0000000100116114
- (void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;	// IMP=0x0000000100116110
- (void)updateTransition:(id)arg1 withPercentComplete:(double)arg2;	// IMP=0x000000010011610c
- (_Bool)supportsRestarting;	// IMP=0x0000000100116104
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;	// IMP=0x0000000100115d98
- (void)animateTransition:(id)arg1;	// IMP=0x000000010011598c
- (id)transitionAnimationFactory:(id)arg1;	// IMP=0x0000000100115914
- (double)transitionDuration:(id)arg1;	// IMP=0x00000001001158c0
- (id)_transitionAnimator;	// IMP=0x00000001001158bc
- (id)animationSettings;	// IMP=0x00000001001158ac
- (id)initWithWorkspaceTransitionRequest:(id)arg1 animationSettings:(id)arg2;	// IMP=0x0000000100115804

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

