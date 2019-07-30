//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAppStatusBarSettingsAssertion, SBMainAlertManager, SBRemoteAlertAdapter, SBWindowSelfHostWrapper;

@interface SBUIAnimationFadeRemoteAlertToHome : SBUIMainScreenAnimationController
{
    SBMainAlertManager *_alertManager;	// 32 = 0x20
    SBRemoteAlertAdapter *_alert;	// 40 = 0x28
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;	// 48 = 0x30
    SBWindowSelfHostWrapper *_appHostWrapper;	// 56 = 0x38
    long long _targetStatusBarStyle;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001004a8b34
- (_Bool)_shouldDismissBanner;	// IMP=0x00000001004a8b2c
- (void)_cleanupAnimation;	// IMP=0x00000001004a8a78
- (void)_startAnimation;	// IMP=0x00000001004a8570
- (void)_prepareAnimation;	// IMP=0x00000001004a836c
- (id)animationSettings;	// IMP=0x00000001004a8334
- (double)animationDuration;	// IMP=0x00000001004a828c
- (void)dealloc;	// IMP=0x00000001004a8230
- (id)initWithTransitionContextProvider:(id)arg1;	// IMP=0x00000001004a8028

@end
