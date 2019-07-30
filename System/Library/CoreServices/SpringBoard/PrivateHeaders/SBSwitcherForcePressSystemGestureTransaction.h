//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSystemGestureWorkspaceTransaction.h"

#import "SBSceneLayoutWorkspaceTransactionDelegate.h"
#import "SBUIAnimationControllerObserver.h"
#import "UIInteractionProgressObserver.h"

@class NSString, SBAppSwitcherSettings, SBMainWorkspaceTransitionRequest, SBSceneLayoutWorkspaceTransaction, SBUIDismissSwitcherAnimationController, SBUIPresentSwitcherAnimationController, SBWorkspaceAlert, UIPreviewForceInteractionProgress;

@interface SBSwitcherForcePressSystemGestureTransaction : SBSystemGestureWorkspaceTransaction <SBUIAnimationControllerObserver, SBSceneLayoutWorkspaceTransactionDelegate, UIInteractionProgressObserver>
{
    SBAppSwitcherSettings *_switcherSettings;	// 40 = 0x28
    UIPreviewForceInteractionProgress *_forceObserver;	// 48 = 0x30
    _Bool _isPanning;	// 56 = 0x38
    _Bool _didAnimateToInitialPosition;	// 57 = 0x39
    _Bool _didFinishAnimatingToInitialPosition;	// 58 = 0x3a
    _Bool _didPop;	// 59 = 0x3b
    _Bool _didBump;	// 60 = 0x3c
    _Bool _didCommitToSwitcher;	// 61 = 0x3d
    _Bool _didCommitToNextDisplayItem;	// 62 = 0x3e
    _Bool _didPerformPresentLayoutCompletion;	// 63 = 0x3f
    double _minNormalizedTranslation;	// 64 = 0x40
    CDStruct_efa48ab2 _currentTransitionParameters;	// 72 = 0x48
    struct CGPoint _currentVelocity;	// 104 = 0x68
    SBUIPresentSwitcherAnimationController *_presentAnimationController;	// 120 = 0x78
    SBUIDismissSwitcherAnimationController *_dismissAnimationController;	// 128 = 0x80
    SBSceneLayoutWorkspaceTransaction *_sceneLayoutTransaction;	// 136 = 0x88
    CDUnknownBlockType _presentLayoutCompletion;	// 144 = 0x90
    CDUnknownBlockType _dismissLayoutCompletion;	// 152 = 0x98
    SBMainWorkspaceTransitionRequest *_dismissTransitionRequest;	// 160 = 0xa0
    SBWorkspaceAlert *_alertToGoTo;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000010037842c
- (void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(CDUnknownBlockType)arg2;	// IMP=0x0000000100377dec
- (void)transaction:(id)arg1 performTransitionWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100377cc8
- (void)transactionWillBeginLayoutTransition:(id)arg1;	// IMP=0x0000000100377cc4
- (void)_runDismissLayoutCompletionIfPossible;	// IMP=0x0000000100377c7c
- (void)_runPresentLayoutCompletionIfPossible;	// IMP=0x0000000100377c2c
- (void)animationControllerDidFinishAnimation:(id)arg1;	// IMP=0x0000000100377b54
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;	// IMP=0x0000000100377b50
- (void)interactionProgressDidUpdate:(id)arg1;	// IMP=0x00000001003779c8
- (double)_currentProgressForForceObserver:(id)arg1 withMaxProgress:(double)arg2;	// IMP=0x000000010037789c
- (void)_cancelInteractionWithGesture:(id)arg1;	// IMP=0x000000010037782c
- (void)_endInteractionWithGesture:(id)arg1;	// IMP=0x0000000100377778
- (void)_updateInteractionProgressWithGesture:(id)arg1;	// IMP=0x000000010037761c
- (double)_currentProgressForGesture:(id)arg1 rawNormalizedTranslation:(double *)arg2 normalizedTranslation:(double *)arg3;	// IMP=0x00000001003773c8
- (void)_noteInteractionProgressWithGesture:(id)arg1 orForceObserver:(id)arg2;	// IMP=0x0000000100377198
- (void)_tearDownForceObserver;	// IMP=0x0000000100377158
- (void)_endInteractionWithParameters:(CDStruct_efa48ab2)arg1 velocity:(struct CGPoint)arg2;	// IMP=0x0000000100376bbc
- (void)_crossFadeToEndInteraction;	// IMP=0x00000001003769bc
- (_Bool)_requiresAdditionalAnimation;	// IMP=0x000000010037698c
- (void)_beginDismissalWithCurrentTranslation:(double)arg1;	// IMP=0x0000000100376634
- (id)_transitionRequestForPresentationWithCommitment:(_Bool)arg1 toNextDisplayItem:(_Bool)arg2;	// IMP=0x0000000100376488
- (double)_translationWithVelocity:(struct CGPoint)arg1 acceleration:(double)arg2;	// IMP=0x000000010037643c
- (void)_noteDidCommitToActivatingSwitcher:(_Bool)arg1 didCommitToNextDisplayItem:(_Bool)arg2;	// IMP=0x00000001003763e8
- (double)_initialSpringVelocityForVelocity:(struct CGPoint)arg1 withTranslation:(double)arg2;	// IMP=0x0000000100376300
- (void)_updateInteractionParameters:(CDStruct_efa48ab2)arg1;	// IMP=0x0000000100375f2c
- (void)_releaseOrientationLock;	// IMP=0x0000000100375e90
- (void)_lockOrientation;	// IMP=0x0000000100375df4
- (void)systemGestureStateChanged:(id)arg1;	// IMP=0x0000000100375b24
- (void)_finishWithCompletionType:(long long)arg1;	// IMP=0x0000000100375ab4
- (void)_beginAnimation;	// IMP=0x0000000100375a58
- (void)_setupAnimation;	// IMP=0x000000010037598c
- (void)_didComplete;	// IMP=0x00000001003758f4
- (void)_begin;	// IMP=0x00000001003757e0
- (void)dealloc;	// IMP=0x00000001003756bc
- (id)initWithTransitionRequest:(id)arg1;	// IMP=0x00000001003754fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

