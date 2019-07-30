//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBAlertManager, SBAppStatusBarSettingsAssertion, SBWindowSelfHostWrapper, SBWorkspaceApplication;

@interface SBUIAnimationZoomUpAppsFromAlert : SBUIMainScreenAnimationController
{
    SBAlertManager *_alertManager;	// 32 = 0x20
    SBAlert *_alert;	// 40 = 0x28
    SBWorkspaceApplication *_primaryApp;	// 48 = 0x30
    SBWindowSelfHostWrapper *_appContextHostWrapper;	// 56 = 0x38
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001001f9f48
- (void)_cleanupAnimation;	// IMP=0x00000001001f9e94
- (void)_startAnimation;	// IMP=0x00000001001f9b50
- (void)_prepareAnimation;	// IMP=0x00000001001f98b8
- (id)animationSettings;	// IMP=0x00000001001f9808
- (double)animationDelay;	// IMP=0x00000001001f9800
- (double)animationDuration;	// IMP=0x00000001001f97f4
- (void)dealloc;	// IMP=0x00000001001f9798
- (id)initWithTransitionContextProvider:(id)arg1;	// IMP=0x00000001001f9634

@end

