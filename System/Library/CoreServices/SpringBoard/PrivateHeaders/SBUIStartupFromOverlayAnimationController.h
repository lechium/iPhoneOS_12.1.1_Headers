//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class BKSDisplayRenderOverlay, BSAnimationSettings, SBSceneLayoutAnimationWrapperView;

@interface SBUIStartupFromOverlayAnimationController : SBUIMainScreenAnimationController
{
    BKSDisplayRenderOverlay *_overlay;	// 32 = 0x20
    BSAnimationSettings *_animationSettings;	// 40 = 0x28
    _Bool _waitsForAppActivation;	// 48 = 0x30
    SBSceneLayoutAnimationWrapperView *_layoutWrapperView;	// 56 = 0x38
}

@property(nonatomic) _Bool waitsForAppActivation; // @synthesize waitsForAppActivation=_waitsForAppActivation;
@property(retain, nonatomic) BSAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
- (void).cxx_destruct;	// IMP=0x00000001000a9808
- (void)_cleanupAnimation;	// IMP=0x00000001000a9734
- (void)_startAnimation;	// IMP=0x00000001000a9588
- (void)_prepareAnimation;	// IMP=0x00000001000a92ac
- (_Bool)_shouldDismissBanner;	// IMP=0x00000001000a92a4
- (id)_animationProgressDependencies;	// IMP=0x00000001000a9264
- (_Bool)_waitsForApplicationActivationIfNecessary;	// IMP=0x00000001000a9254
- (id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2;	// IMP=0x00000001000a90f4
- (id)initWithTransitionContextProvider:(id)arg1;	// IMP=0x00000001000a90e4

@end

