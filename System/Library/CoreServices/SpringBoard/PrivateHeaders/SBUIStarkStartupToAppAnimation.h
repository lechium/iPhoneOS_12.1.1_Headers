//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIAnimationController.h"

@class SBStarkScreenController, UIView, _SBUIStarkStartupToAppAnimation;

@interface SBUIStarkStartupToAppAnimation : SBUIAnimationController
{
    _SBUIStarkStartupToAppAnimation *_animation;	// 32 = 0x20
    SBStarkScreenController *_screenController;	// 40 = 0x28
}

@property(readonly, nonatomic) _SBUIStarkStartupToAppAnimation *animation; // @synthesize animation=_animation;
- (void).cxx_destruct;	// IMP=0x00000001001ea96c
- (id)_waitToStartTransaction;	// IMP=0x00000001001ea598
- (id)_animationWithActivatingApp:(id)arg1 fromLockoutView:(id)arg2 starkScreenController:(id)arg3;	// IMP=0x00000001001ea4f0
- (void)_cleanupAnimation;	// IMP=0x00000001001ea438
- (void)_prepareAnimation;	// IMP=0x00000001001ea348
- (void)_applicationDependencyStateChanged;	// IMP=0x00000001001ea2a8
- (id)_animationProgressDependencies;	// IMP=0x00000001001ea29c
@property(readonly, nonatomic) UIView *fromLockoutView;
- (id)initWithActivatingApp:(id)arg1 fromLockoutView:(id)arg2 starkScreenController:(id)arg3;	// IMP=0x00000001001ea0e4
- (id)initFromLockoutView:(id)arg1 starkScreenController:(id)arg2;	// IMP=0x00000001001ea084

@end

