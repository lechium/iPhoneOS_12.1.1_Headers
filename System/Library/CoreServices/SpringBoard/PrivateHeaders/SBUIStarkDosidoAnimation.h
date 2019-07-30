//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIStarkScreenAnimationController.h"

@class SBAlert, SBApplication, SBDosidoAnimator, UIView;

@interface SBUIStarkDosidoAnimation : SBUIStarkScreenAnimationController
{
    UIView *_fromView;	// 32 = 0x20
    UIView *_toView;	// 40 = 0x28
    UIView *_viewToHide;	// 48 = 0x30
    SBAlert *_alertImpersonator;	// 56 = 0x38
    SBApplication *_impersonatedApplication;	// 64 = 0x40
    SBDosidoAnimator *_dosidoAnimator;	// 72 = 0x48
    _Bool _animationFinished;	// 80 = 0x50
    _Bool _fromAssistant;	// 81 = 0x51
}

- (void).cxx_destruct;	// IMP=0x00000001004f1248
- (void)noteDependencyDidInvalidate;	// IMP=0x00000001004f1220
- (void)_maybeReportAnimationFinished;	// IMP=0x00000001004f11f8
- (void)_applicationDependencyStateChanged;	// IMP=0x00000001004f1164
- (void)_cleanupHosting;	// IMP=0x00000001004f0f18
- (id)_animationFactory;	// IMP=0x00000001004f0db0
- (double)_animationDelay;	// IMP=0x00000001004f0d28
- (void)_cleanupAnimation;	// IMP=0x00000001004f0cb4
- (void)_startAnimation;	// IMP=0x00000001004f0aa4
- (id)animationSettings;	// IMP=0x00000001004f0a2c
- (void)_willSetupStartDependencies;	// IMP=0x00000001004f08c4
- (id)_animationProgressDependencies;	// IMP=0x00000001004f08b8
- (_Bool)_waitsForApplicationActivationIfNecessary;	// IMP=0x00000001004f08b0
- (void)dealloc;	// IMP=0x00000001004f0860
- (id)initFromAlertImpersonator:(id)arg1 toApp:(id)arg2 starkScreenController:(id)arg3;	// IMP=0x00000001004f0638
- (id)initFromApp:(id)arg1 toAlertImpersonator:(id)arg2 starkScreenController:(id)arg3;	// IMP=0x00000001004f0408
- (id)initFromApp:(id)arg1 toApp:(id)arg2 starkScreenController:(id)arg3;	// IMP=0x00000001004f01a8
- (void)_commonInitFromView:(id)arg1 toView:(id)arg2 alert:(id)arg3 toDisplay:(id)arg4;	// IMP=0x00000001004efecc

@end
