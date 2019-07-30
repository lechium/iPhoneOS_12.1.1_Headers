//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAlertManager, SBAppStatusBarSettingsAssertion, SBLockScreenViewControllerBase, SBUIFullscreenAlertAdapter;

@interface SBUIAnimationFadeLockscreenToAlert : SBUIMainScreenAnimationController
{
    SBLockScreenViewControllerBase *_lockScreenViewController;	// 32 = 0x20
    SBAlertManager *_alertManager;	// 40 = 0x28
    SBUIFullscreenAlertAdapter *_toAlert;	// 48 = 0x30
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;	// 56 = 0x38
    _Bool _alertViewIsAnimatingItself;	// 64 = 0x40
    _Bool _alertIsTransparent;	// 65 = 0x41
    _Bool _finishedPrimaryFadeAnimation;	// 66 = 0x42
    _Bool _needsLockScreenAlphaRestoredOnCompletion;	// 67 = 0x43
}

- (void).cxx_destruct;	// IMP=0x00000001001e3284
- (void)_cleanupAnimation;	// IMP=0x00000001001e3164
- (void)_startAnimation;	// IMP=0x00000001001e2c3c
- (void)_prepareAnimation;	// IMP=0x00000001001e2a94
- (void)_alertViewFinishedAnimatingItself;	// IMP=0x00000001001e2a7c
- (void)_fadeAnimationFinished;	// IMP=0x00000001001e2a60
- (void)_evaluateTotalAnimationCompletion;	// IMP=0x00000001001e2a30
- (void)_animationFinished;	// IMP=0x00000001001e2944
- (id)animationSettings;	// IMP=0x00000001001e290c
- (double)animationDuration;	// IMP=0x00000001001e2900
- (void)dealloc;	// IMP=0x00000001001e2830
- (id)initWithTransitionContextProvider:(id)arg1;	// IMP=0x00000001001e24dc

@end

