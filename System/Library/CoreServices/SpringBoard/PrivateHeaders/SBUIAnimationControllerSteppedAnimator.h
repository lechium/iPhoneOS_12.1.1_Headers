//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIAnimationControllerAnimator.h"

#import "SBViewControllerInteractiveAnimatedTransitioning.h"

@class NSString, SBAnimationStepper;

@interface SBUIAnimationControllerSteppedAnimator : SBUIAnimationControllerAnimator <SBViewControllerInteractiveAnimatedTransitioning>
{
    SBAnimationStepper *_stepper;	// 8 = 0x8
}

@property(readonly, nonatomic) SBAnimationStepper *stepper; // @synthesize stepper=_stepper;
- (void).cxx_destruct;	// IMP=0x00000001005144f0
- (double)percentComplete;	// IMP=0x000000010051448c
- (void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;	// IMP=0x0000000100514374
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;	// IMP=0x000000010051425c
- (void)updateTransition:(id)arg1 withPercentComplete:(double)arg2;	// IMP=0x0000000100514244
- (id)initWithAnimationController:(id)arg1 stepper:(id)arg2;	// IMP=0x000000010051419c
- (id)initWithAnimationController:(id)arg1;	// IMP=0x0000000100514094

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

