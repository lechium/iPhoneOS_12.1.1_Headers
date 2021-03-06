//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBToAppsWorkspaceTransaction.h"

#import "SBAlertChangeTransactionDelegate.h"

@class NSString, SBAlertChangeTransaction, SBDisableActiveInterfaceOrientationChangeAssertion, SBLockScreenViewControllerBase;

@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppsWorkspaceTransaction <SBAlertChangeTransactionDelegate>
{
    SBLockScreenViewControllerBase *_lockScreenController;	// 40 = 0x28
    SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;	// 48 = 0x30
    SBAlertChangeTransaction *_toLockscreenAlertTransaction;	// 56 = 0x38
    CDUnknownBlockType _alertActivationCompletion;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010043d03c
- (void)alert:(id)arg1 didActivateWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010043cfec
- (_Bool)_shouldUpdateUnderLockStateForForegroundScenes;	// IMP=0x000000010043ceb8
- (void)_callAndClearAlertActivationCompletionIfNecessary;	// IMP=0x000000010043ce70
- (void)_endTransition;	// IMP=0x000000010043ce64
- (void)_didComplete;	// IMP=0x000000010043ce00
- (void)_alertDidActivate;	// IMP=0x000000010043cdf4
- (void)_setupAndActivate;	// IMP=0x000000010043cd8c
- (void)_kickoffAlertActivation;	// IMP=0x000000010043cad4
- (void)_begin;	// IMP=0x000000010043ca84
- (_Bool)shouldPlaceOutgoingScenesUnderLockOnCompletion;	// IMP=0x000000010043ca7c
- (_Bool)shouldPerformToAppStateCleanupOnCompletion;	// IMP=0x000000010043ca74
- (void)dealloc;	// IMP=0x000000010043c9ec
- (id)initWithTransitionRequest:(id)arg1 lockScreenController:(id)arg2;	// IMP=0x000000010043c85c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

