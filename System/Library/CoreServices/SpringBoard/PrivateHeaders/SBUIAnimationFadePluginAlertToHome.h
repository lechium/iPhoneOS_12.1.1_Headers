//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBAlertManager, UIView;

@interface SBUIAnimationFadePluginAlertToHome : SBUIMainScreenAnimationController
{
    SBAlertManager *_alertManager;	// 32 = 0x20
    SBAlert *_alert;	// 40 = 0x28
    UIView *_viewToAnimate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010040751c
- (void)_cleanupAnimation;	// IMP=0x00000001004074c0
- (void)_startAnimation;	// IMP=0x0000000100407294
- (void)_prepareAnimation;	// IMP=0x0000000100407290
- (id)animationSettings;	// IMP=0x0000000100407230
- (double)animationDelay;	// IMP=0x00000001004071bc
- (double)animationDuration;	// IMP=0x0000000100407144
- (id)initWithTransitionContextProvider:(id)arg1;	// IMP=0x0000000100407034

@end

