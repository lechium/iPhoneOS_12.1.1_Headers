//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSMutableSet;

@interface SBHomeScreenViewController : UIViewController
{
    NSMutableSet *_iconRotationPreventionReasons;	// 8 = 0x8
    _Bool _disableAnimationForNextIconRotation;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001004191ac
- (void)disableAnimationForNextIconRotation;	// IMP=0x0000000100419198
- (void)setAllowIconRotation:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x0000000100418da0
- (void)forceIconInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x0000000100418cec
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100418a88
- (void)_cleanupAfterTransitionToSize:(struct CGSize)arg1 fromInterfaceOrientation:(long long)arg2 withTransitionContext:(id)arg3;	// IMP=0x00000001004189bc
- (void)_animateTransitionToSize:(struct CGSize)arg1 andInterfaceOrientation:(long long)arg2 withTransitionContext:(id)arg3;	// IMP=0x0000000100418948
- (void)_prepareForTransitionToSize:(struct CGSize)arg1 andInterfaceOrientation:(long long)arg2 withTransitionCoordinator:(id)arg3;	// IMP=0x0000000100418864
- (_Bool)shouldAutorotate;	// IMP=0x00000001004186c0
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000100418658
- (void)loadView;	// IMP=0x00000001004185f0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010041857c

@end

