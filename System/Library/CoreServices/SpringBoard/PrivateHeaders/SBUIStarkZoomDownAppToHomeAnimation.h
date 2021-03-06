//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIStarkScreenAnimationController.h"

#import "SBIconAnimatorDelegate.h"

@class NSString, SBAlert, SBIconAnimator, UIView;

@interface SBUIStarkZoomDownAppToHomeAnimation : SBUIStarkScreenAnimationController <SBIconAnimatorDelegate>
{
    UIView *_viewToAnimate;	// 32 = 0x20
    SBIconAnimator *_iconAnimator;	// 40 = 0x28
    SBAlert *_alertImpersonator;	// 48 = 0x30
    _Bool _animationFinished;	// 56 = 0x38
    _Bool _fromAssistant;	// 57 = 0x39
}

- (void).cxx_destruct;	// IMP=0x00000001004c3168
- (void)iconAnimatorWasInvalidated:(id)arg1;	// IMP=0x00000001004c315c
- (void)_noteZoomDidFinish;	// IMP=0x00000001004c3134
- (void)_cleanupHosting;	// IMP=0x00000001004c2fdc
- (void)_animateZoomWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001004c2e14
- (void)_prepareZoom;	// IMP=0x00000001004c2988
- (double)_animationDelay;	// IMP=0x00000001004c2900
- (void)_setReferenceIconViewHiddenIfAppropriate:(_Bool)arg1;	// IMP=0x00000001004c283c
- (void)_noteDependencyDidInvalidate;	// IMP=0x00000001004c2814
- (id)_viewToAnimate;	// IMP=0x00000001004c25f4
- (id)animationSettings;	// IMP=0x00000001004c252c
- (void)_cleanupAnimation;	// IMP=0x00000001004c244c
- (void)_startAnimation;	// IMP=0x00000001004c218c
- (void)_prepareAnimation;	// IMP=0x00000001004c1fd8
- (void)dealloc;	// IMP=0x00000001004c1f88
- (id)initWithDeactivatingApp:(id)arg1 alertImpersonator:(id)arg2 starkScreenController:(id)arg3;	// IMP=0x00000001004c1d8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

