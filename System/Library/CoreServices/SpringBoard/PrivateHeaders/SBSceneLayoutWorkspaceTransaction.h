//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWorkspaceTransaction.h"

#import "FBApplicationUpdateScenesTransactionObserver.h"
#import "FBSynchronizedTransaction.h"
#import "FBSynchronizedTransactionGroupDelegate.h"

@class FBDisplayLayoutTransition, FBSynchronizedTransactionGroup, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, SBAlertManager, SBSceneBackgroundedStatusAssertion, SBWorkspaceApplicationTransitionContext;

@interface SBSceneLayoutWorkspaceTransaction : SBWorkspaceTransaction <FBSynchronizedTransactionGroupDelegate, FBApplicationUpdateScenesTransactionObserver, FBSynchronizedTransaction>
{
    id <SBSceneLayoutWorkspaceTransactionDelegate> _delegate;	// 40 = 0x28
    unsigned long long _options;	// 48 = 0x30
    FBDisplayLayoutTransition *_fbLayoutTransition;	// 56 = 0x38
    _Bool _isTransitioning;	// 64 = 0x40
    _Bool _transitionFailed;	// 65 = 0x41
    _Bool _delegateTransitionComplete;	// 66 = 0x42
    _Bool _synchronizeLayoutTransitionWithSceneUpdates;	// 67 = 0x43
    _Bool _performSceneUpdates;	// 68 = 0x44
    _Bool _waitForSceneUpdates;	// 69 = 0x45
    SBAlertManager *_alertManager;	// 72 = 0x48
    SBWorkspaceApplicationTransitionContext *_transitionContext;	// 80 = 0x50
    FBSynchronizedTransactionGroup *_sceneUpdateTransactionGroup;	// 88 = 0x58
    SBSceneBackgroundedStatusAssertion *_scenesBackgroundedStatusAssertion;	// 96 = 0x60
    NSMutableSet *_updateTransactions;	// 104 = 0x68
    NSMutableDictionary *_appsBySceneID;	// 112 = 0x70
    NSMutableDictionary *_activatingAppsBySceneID;	// 120 = 0x78
    NSMutableDictionary *_deactivatingAppsBySceneID;	// 128 = 0x80
    NSMutableSet *_scenesToBackground;	// 136 = 0x88
    id <FBSynchronizedTransactionDelegate> _synchronizationDelegate;	// 144 = 0x90
}

@property(readonly, nonatomic) SBWorkspaceApplicationTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) __weak id <FBSynchronizedTransactionDelegate> synchronizationDelegate; // @synthesize synchronizationDelegate=_synchronizationDelegate;
@property(readonly, nonatomic) NSDictionary *deactivatingApplications; // @synthesize deactivatingApplications=_deactivatingAppsBySceneID;
@property(readonly, nonatomic) NSDictionary *activatingApplications; // @synthesize activatingApplications=_activatingAppsBySceneID;
@property(readonly, nonatomic) NSDictionary *applications; // @synthesize applications=_appsBySceneID;
@property(readonly, nonatomic) NSSet *sceneUpdateTransactions; // @synthesize sceneUpdateTransactions=_updateTransactions;
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_isTransitioning;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) __weak id <SBSceneLayoutWorkspaceTransactionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100370664
- (_Bool)synchronizedTransactionGroup:(id)arg1 shouldFailForSynchronizedTransaction:(id)arg2;	// IMP=0x00000001003704cc
- (void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;	// IMP=0x000000010037045c
- (void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;	// IMP=0x0000000100370388
- (void)synchronizedTransactionReadyToCommit:(id)arg1;	// IMP=0x0000000100370318
- (void)performSynchronizedCommit;	// IMP=0x00000001003702c8
- (_Bool)isReadyForSynchronizedCommit;	// IMP=0x0000000100370294
- (void)transaction:(id)arg1 didCommitSceneUpdate:(id)arg2;	// IMP=0x000000010037011c
- (void)transaction:(id)arg1 willCommitSceneUpdate:(id)arg2;	// IMP=0x000000010036ffa4
- (void)transaction:(id)arg1 willUpdateScene:(id)arg2;	// IMP=0x000000010036fe2c
- (void)transaction:(id)arg1 didCreateScene:(id)arg2;	// IMP=0x000000010036fcb4
- (void)transaction:(id)arg1 didLaunchProcess:(id)arg2;	// IMP=0x000000010036fb3c
- (void)transaction:(id)arg1 willLaunchProcess:(id)arg2;	// IMP=0x000000010036f980
- (void)_sendActivationResultWithSuccess:(_Bool)arg1;	// IMP=0x000000010036f868
- (_Bool)_overrideInterfaceOrientationForOrientationMismatch:(long long *)arg1;	// IMP=0x000000010036f330
- (void)_updateScenesForTransitionCompletion;	// IMP=0x000000010036ee38
- (void)_teardownKeyboardSuppression;	// IMP=0x000000010036ede8
- (void)_setupKeyboardSuppression;	// IMP=0x000000010036eb84
- (void)_prepareScenesForTransition;	// IMP=0x000000010036e650
- (void)_updateAggregateDictionary;	// IMP=0x000000010036e438
- (void)_mainDisplayUpdateAggregateDictionaryForLayoutRoleWithApplication:(id)arg1;	// IMP=0x000000010036e288
- (void)_prepareSynchronizedSceneUpdates;	// IMP=0x000000010036e188
- (void)_synchronizeSceneUpdatesNow;	// IMP=0x000000010036de10
- (void)_performSynchronizedCommit;	// IMP=0x000000010036dd90
- (void)_beginLayoutTransitionNow;	// IMP=0x000000010036dc98
- (void)_completeTransition;	// IMP=0x000000010036d510
- (void)_evaluateTransitionCompletion;	// IMP=0x000000010036d490
- (void)_performTransition;	// IMP=0x000000010036cbc0
- (void)_captureAppsForTransition;	// IMP=0x000000010036c368
- (void)_childTransactionDidComplete:(id)arg1;	// IMP=0x000000010036c2e8
- (void)_willFailWithReason:(id)arg1;	// IMP=0x000000010036c298
- (void)_willInterruptWithReason:(id)arg1;	// IMP=0x000000010036c248
- (_Bool)_canBeInterrupted;	// IMP=0x000000010036c240
- (void)_didComplete;	// IMP=0x000000010036c0c0
- (void)_begin;	// IMP=0x000000010036c070
- (void)_willBegin;	// IMP=0x000000010036c018
- (void)dealloc;	// IMP=0x000000010036bfbc
- (id)initWithTransitionRequest:(id)arg1;	// IMP=0x000000010036bb34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
