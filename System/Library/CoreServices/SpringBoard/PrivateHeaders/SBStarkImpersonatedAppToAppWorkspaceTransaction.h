//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStarkAppToAppWorkspaceTransaction.h"

@class SBAlert, SBAlertChangeTransaction;

@interface SBStarkImpersonatedAppToAppWorkspaceTransaction : SBStarkAppToAppWorkspaceTransaction
{
    SBAlertChangeTransaction *_deactivateAlertTransaction;	// 40 = 0x28
    SBAlert *_deactivatingAlert;	// 48 = 0x30
    _Bool _animatedAppActivation;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001004ea02c
- (void)animationControllerDidFinishAnimation:(id)arg1;	// IMP=0x00000001004e9fec
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;	// IMP=0x00000001004e9ed0
- (void)_deactivateAlertIfPossible;	// IMP=0x00000001004e9d0c
- (void)_handleFailureToLaunch;	// IMP=0x00000001004e9c68
- (void)mainScreenApplicationUpdateScenesTransactionCompleted:(id)arg1;	// IMP=0x00000001004e9bec
- (id)_newAnimationFromAppToLauncher;	// IMP=0x00000001004e9b10
- (id)_newAnimationFromAppToNowPlaying;	// IMP=0x00000001004e9a84
- (id)_newAnimationFromAppToApp;	// IMP=0x00000001004e99a8
- (void)_didComplete;	// IMP=0x00000001004e9898
- (void)_doCommit;	// IMP=0x00000001004e9848
- (id)initWithTransitionRequest:(id)arg1;	// IMP=0x00000001004e9660

@end
