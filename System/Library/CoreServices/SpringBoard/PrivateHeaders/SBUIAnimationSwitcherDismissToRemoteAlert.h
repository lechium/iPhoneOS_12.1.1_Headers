//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAlertManager, SBRemoteAlertAdapter;

@interface SBUIAnimationSwitcherDismissToRemoteAlert : SBUIMainScreenAnimationController
{
    SBRemoteAlertAdapter *_alert;	// 32 = 0x20
    SBAlertManager *_alertManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010037ad78
- (void)_cleanupAnimation;	// IMP=0x000000010037ac5c
- (void)_startAnimation;	// IMP=0x000000010037aa48
- (void)_prepareAnimation;	// IMP=0x000000010037a9f4
- (id)animationSettings;	// IMP=0x000000010037a9dc
- (id)initWithTransitionContextProvider:(id)arg1;	// IMP=0x000000010037a7e8

@end
