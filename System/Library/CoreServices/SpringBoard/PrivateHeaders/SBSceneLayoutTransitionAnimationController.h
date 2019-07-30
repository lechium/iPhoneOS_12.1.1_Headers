//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIWorkspaceAnimationController.h"

@class SBSceneLayoutViewController, SBUIBlockAnimationController;

@interface SBSceneLayoutTransitionAnimationController : SBUIWorkspaceAnimationController
{
    SBSceneLayoutViewController *_layoutController;	// 32 = 0x20
    SBUIBlockAnimationController *_blockAnimation;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010040fd40
- (id)containerView;	// IMP=0x000000010040fd28
- (id)_getTransitionWindow;	// IMP=0x000000010040fcd4
- (id)animationSettings;	// IMP=0x000000010040fcbc
- (id)initWithWorkspaceTransitionRequest:(id)arg1;	// IMP=0x000000010040fc14
- (id)initWithTransitionContextProvider:(id)arg1 layoutController:(id)arg2 animationSettings:(id)arg3 animationBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000010040fb74
- (id)initWithTransitionContextProvider:(id)arg1 layoutController:(id)arg2 animationSettings:(id)arg3 stepped:(_Bool)arg4 animationBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000010040f788

@end
