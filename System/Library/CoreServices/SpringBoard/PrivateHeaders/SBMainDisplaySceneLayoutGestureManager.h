//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSTransactionObserver.h"
#import "SBGrabberTongueDelegate.h"
#import "SBSceneResizeSnakebiteGestureRecognizerDelegate.h"
#import "SBSystemGestureRecognizerDelegate.h"

@class NSMutableDictionary, NSString, NSUUID, SBAppResizeGestureWorkspaceTransaction, SBGrabberTongue, SBMainDisplaySceneLayoutViewController, SBSceneResizeSnakebiteGestureRecognizer, SBSideAppSlideGestureWorkspaceTransaction, UILongPressGestureRecognizer, UIView;

@interface SBMainDisplaySceneLayoutGestureManager : NSObject <SBSystemGestureRecognizerDelegate, SBSceneResizeSnakebiteGestureRecognizerDelegate, BSTransactionObserver, SBGrabberTongueDelegate>
{
    SBMainDisplaySceneLayoutViewController *_sceneViewController;	// 8 = 0x8
    SBGrabberTongue *_sideAppGrabberTongue;	// 16 = 0x10
    SBGrabberTongue *_sideSwitcherGrabberTongue;	// 24 = 0x18
    UIView *_adornmentView;	// 32 = 0x20
    _Bool _sideAppRevealGestureIsActive;	// 40 = 0x28
    _Bool _sideSwitcherRevealGestureIsActive;	// 41 = 0x29
    _Bool _sideSwitcherRevealGestureAsOverlayIsActive;	// 42 = 0x2a
    struct CGRect _effectiveKeyboardFrame;	// 48 = 0x30
    NSUUID *_lastSideAppRevealGestureTransactionRequestUUID;	// 80 = 0x50
    NSUUID *_lastSideSwitcherRevealGestureTransactionRequestUUID;	// 88 = 0x58
    NSMutableDictionary *_transactionRequestUUIDToRevealGestureSuccess;	// 96 = 0x60
    SBSideAppSlideGestureWorkspaceTransaction *_currentSideAppRevealWorkspaceTransaction;	// 104 = 0x68
    SBSideAppSlideGestureWorkspaceTransaction *_currentSideSwitcherRevealWorkspaceTransaction;	// 112 = 0x70
    SBSceneResizeSnakebiteGestureRecognizer *_resizeGestureRecognizer;	// 120 = 0x78
    SBAppResizeGestureWorkspaceTransaction *_resizeGestureTransaction;	// 128 = 0x80
    UILongPressGestureRecognizer *_sideSwitcherPressGestureRecognizer;	// 136 = 0x88
}

@property(readonly, nonatomic) UILongPressGestureRecognizer *sideSwitcherPressGestureRecognizer; // @synthesize sideSwitcherPressGestureRecognizer=_sideSwitcherPressGestureRecognizer;
@property(retain, nonatomic) SBAppResizeGestureWorkspaceTransaction *resizeGestureTransaction; // @synthesize resizeGestureTransaction=_resizeGestureTransaction;
@property(readonly, nonatomic) SBSceneResizeSnakebiteGestureRecognizer *resizeGestureRecognizer; // @synthesize resizeGestureRecognizer=_resizeGestureRecognizer;
@property(readonly, nonatomic) SBMainDisplaySceneLayoutViewController *sceneViewController; // @synthesize sceneViewController=_sceneViewController;
- (void).cxx_destruct;	// IMP=0x00000001004491bc
- (void)_keyboardFrameDidChange:(id)arg1;	// IMP=0x0000000100448ff8
- (_Bool)sceneResizeGestureRecognizerShouldOnlyRecognizeForSingleTouch:(id)arg1;	// IMP=0x0000000100448e7c
- (_Bool)sceneResizeGestureRecognizer:(id)arg1 shouldWaitForInvalidSingleTouchToBecomeValidWithDistanceFromDivider:(double)arg2;	// IMP=0x0000000100448db8
- (double)verticalCenterOfSingleTouchRegionForSceneResizeGestureRecognizer:(id)arg1;	// IMP=0x0000000100448c1c
- (double)minimumDistanceForSingleTouchForSceneResizeGestureRecognizer:(id)arg1;	// IMP=0x0000000100448c14
- (double)minimumDurationForSingleTouchForSceneResizeGestureRecognizer:(id)arg1;	// IMP=0x0000000100448b84
- (long long)interfaceOrientationForSceneResizeGestureRecognizer:(id)arg1;	// IMP=0x0000000100448b2c
- (double)heightOfPinningAreaInDividerForSceneResizeGestureRecognizer:(id)arg1;	// IMP=0x0000000100448b20
- (double)heightOfSingleTapAreaInDividerForSceneResizeGestureRecognizer:(id)arg1;	// IMP=0x0000000100448a54
- (double)sceneResizeGestureRecognizer:(id)arg1 viewOffsetForLocation:(double)arg2;	// IMP=0x0000000100448988
- (double)sceneResizeGestureRecognizer:(id)arg1 locationForViewOffset:(double)arg2;	// IMP=0x00000001004488bc
- (double)locationOfDividerForSceneResizeGestureRecognizer:(id)arg1;	// IMP=0x0000000100448724
- (void)_startResizeTransactionWithLabel:(id)arg1 checkGestureStatus:(_Bool)arg2;	// IMP=0x0000000100448290
- (void)_resizeGestureBegan;	// IMP=0x0000000100448278
- (void)_resizeGestureDidUpdate:(id)arg1;	// IMP=0x00000001004481a4
- (void)transactionDidComplete:(id)arg1;	// IMP=0x0000000100447f54
- (void)transactionDidBegin:(id)arg1;	// IMP=0x0000000100447dd0
- (void)_setLastSideAppRevealGestureTransactionRequestUUID:(id)arg1;	// IMP=0x0000000100447d90
- (void)_setLastSideSwitcherRevealGestureTransactionRequestUUID:(id)arg1;	// IMP=0x0000000100447d50
- (void)_setCurrentSideSwitcherRevealTransaction:(id)arg1;	// IMP=0x0000000100447d18
- (void)_setCurrentSideAppRevealTransaction:(id)arg1;	// IMP=0x0000000100447ce0
- (long long)_sidePullGestureSucceededForRequestID:(id)arg1;	// IMP=0x0000000100447c4c
- (void)_sideSwitcherLongPress:(id)arg1;	// IMP=0x0000000100447ad4
- (void)_sideSwitcherRevealGestureUpdatedWithDistance:(double)arg1;	// IMP=0x00000001004479a4
- (void)_sideSwitcherRevealGestureBegan;	// IMP=0x00000001004471d4
- (double)_effectiveValue:(double)arg1;	// IMP=0x00000001004471a0
- (void)_finishSideSwitcherRevealGestureWithVelocity:(double)arg1 distance:(double)arg2;	// IMP=0x0000000100446c84
- (void)_activateSideSwitcherViewWithInitialDistance:(double)arg1;	// IMP=0x0000000100446600
- (double)_progressForSideAppTransitionWithNewDistance:(double)arg1;	// IMP=0x0000000100446570
- (void)_sideAppRevealGestureUpdatedWithDistance:(double)arg1;	// IMP=0x0000000100446288
- (void)_sideAppRevealGestureBeganForActivation:(_Bool)arg1 ofSideSwitcher:(_Bool)arg2;	// IMP=0x0000000100445a60
- (void)_finishSideAppRevealGestureWithVelocity:(double)arg1 distance:(double)arg2 forActivation:(_Bool)arg3;	// IMP=0x0000000100445154
- (void)_activateSideAppViewWithInitialPosition:(double)arg1 forActivation:(_Bool)arg2;	// IMP=0x0000000100444b34
- (void)grabberTongueWillPresent:(id)arg1;	// IMP=0x0000000100444b1c
- (void)grabberTongueCanceledPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;	// IMP=0x0000000100444a7c
- (void)grabberTongueEndedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;	// IMP=0x00000001004449e0
- (void)grabberTongueUpdatedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;	// IMP=0x0000000100444960
- (void)grabberTongueBeganPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;	// IMP=0x00000001004447c4
- (_Bool)grabberTongueRequiredForWholeEdge:(id)arg1;	// IMP=0x00000001004445e4
- (_Bool)grabberTongueRequiredOutsideGrabberFreeRegion:(id)arg1;	// IMP=0x00000001004445cc
- (_Bool)grabberTongueOrPullEnabled:(id)arg1;	// IMP=0x00000001004443c4
- (double)grabberTongueWidthOfActiveEdge:(id)arg1;	// IMP=0x00000001004441f8
- (double)grabberTongueWidthOfGrabberFreeRegion:(id)arg1;	// IMP=0x0000000100444134
- (double)grabberTongueCenterOnEdge:(id)arg1;	// IMP=0x0000000100443f40
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000100443a78
- (_Bool)_disableGestureWithTypeForCommonReasons:(unsigned long long)arg1;	// IMP=0x000000010044381c
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000100443814
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x0000000100443760
- (id)viewForSystemGestureRecognizer:(id)arg1;	// IMP=0x0000000100443758
- (_Bool)sideSwitcherRevealGestureActive;	// IMP=0x0000000100443748
- (_Bool)anyLayoutGestureWaitingToComplete;	// IMP=0x00000001004436f0
- (_Bool)anyLayoutGestureActive;	// IMP=0x00000001004436b0
- (id)sideSwitcherRevealGesture;	// IMP=0x0000000100443698
- (_Bool)dismissGrabbersWithStyle:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100443624
- (void)installAccessoriesInView:(id)arg1;	// IMP=0x0000000100443594
- (void)dealloc;	// IMP=0x00000001004434e0
- (id)init;	// IMP=0x0000000100443410
- (id)initWithSceneLayoutViewController:(id)arg1;	// IMP=0x000000010044310c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
