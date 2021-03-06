//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStarkAppToAppWorkspaceTransaction.h"

@class SBWorkspaceAlert, SBWorkspaceApplication;

@interface SBStarkAppToImpersonatedAppWorkspaceTransaction : SBStarkAppToAppWorkspaceTransaction
{
    SBWorkspaceAlert *_activatingAlert;	// 40 = 0x28
    _Bool _animatedAppDeactivation;	// 48 = 0x30
    SBWorkspaceApplication *_mainScreenAppThatWillBeActivated;	// 56 = 0x38
    id _mainScreenAppThatWillBeActivatedObserver;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000f3570
- (void)animationControllerDidFinishAnimation:(id)arg1;	// IMP=0x00000001000f3484
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;	// IMP=0x00000001000f33a8
- (id)_newAnimationFromNowPlayingToApp;	// IMP=0x00000001000f32fc
- (id)_newAnimationFromAppToNowPlaying;	// IMP=0x00000001000f3238
- (id)_newAnimationFromLauncherToApp;	// IMP=0x00000001000f313c
- (id)_newAnimationFromAppToApp;	// IMP=0x00000001000f3040
- (void)_finishCommit;	// IMP=0x00000001000f2f00
- (void)_doCommit;	// IMP=0x00000001000f2880
- (id)_effectiveTopEntity;	// IMP=0x00000001000f2870
- (void)_noteWillActivateApplicationOnMainScreen:(id)arg1 underLock:(_Bool)arg2;	// IMP=0x00000001000f2808
- (void)dealloc;	// IMP=0x00000001000f26f4
- (id)initWithTransitionRequest:(id)arg1;	// IMP=0x00000001000f24f4

@end

