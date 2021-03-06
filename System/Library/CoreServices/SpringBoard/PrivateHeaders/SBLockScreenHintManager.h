//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CCUIControlCenterObserver.h"
#import "SBPresentingDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSDate, NSMapTable, NSMutableSet, NSString, SBLockScreenHintLongPressGestureRecognizer, SBLockScreenHintPanGestureRecognizer, SBLockScreenHintTapGestureRecognizer, SBLockScreenView;

@interface SBLockScreenHintManager : NSObject <UIGestureRecognizerDelegate, SBPresentingDelegate, CCUIControlCenterObserver>
{
    _Bool _gestureHandlingEnabled;	// 8 = 0x8
    _Bool _guestGestureActive;	// 9 = 0x9
    _Bool _didEvaluatePressDelay;	// 10 = 0xa
    _Bool _fingerOnMesa;	// 11 = 0xb
    SBLockScreenView *_lockScreenView;	// 16 = 0x10
    SBLockScreenHintTapGestureRecognizer *_tapGesture;	// 24 = 0x18
    SBLockScreenHintLongPressGestureRecognizer *_longPressGesture;	// 32 = 0x20
    SBLockScreenHintPanGestureRecognizer *_panGesture;	// 40 = 0x28
    NSMutableSet *_gestures;	// 48 = 0x30
    NSMapTable *_controllersToGuestGestures;	// 56 = 0x38
    NSMapTable *_controllersToConflictingGuestGestures;	// 64 = 0x40
    long long _gestureState;	// 72 = 0x48
    id <SBCoordinatedPresenting> _previousActiveController;	// 80 = 0x50
    id <SBCoordinatedPresenting> _activeController;	// 88 = 0x58
    unsigned long long _activeHintEdge;	// 96 = 0x60
    NSDate *_initialTouchTimeStamp;	// 104 = 0x68
    struct CGPoint _initialPanLocationInViewSpace;	// 112 = 0x70
}

@property(nonatomic, getter=isFingerOnMesa) _Bool fingerOnMesa; // @synthesize fingerOnMesa=_fingerOnMesa;
@property(nonatomic) _Bool didEvaluatePressDelay; // @synthesize didEvaluatePressDelay=_didEvaluatePressDelay;
@property(nonatomic, getter=isGuestGestureActive) _Bool guestGestureActive; // @synthesize guestGestureActive=_guestGestureActive;
@property(retain, nonatomic) NSDate *initialTouchTimeStamp; // @synthesize initialTouchTimeStamp=_initialTouchTimeStamp;
@property(nonatomic) unsigned long long activeHintEdge; // @synthesize activeHintEdge=_activeHintEdge;
@property(retain, nonatomic) id <SBCoordinatedPresenting> activeController; // @synthesize activeController=_activeController;
@property(retain, nonatomic) id <SBCoordinatedPresenting> previousActiveController; // @synthesize previousActiveController=_previousActiveController;
@property(nonatomic) long long gestureState; // @synthesize gestureState=_gestureState;
@property(retain, nonatomic) NSMapTable *controllersToConflictingGuestGestures; // @synthesize controllersToConflictingGuestGestures=_controllersToConflictingGuestGestures;
@property(retain, nonatomic) NSMapTable *controllersToGuestGestures; // @synthesize controllersToGuestGestures=_controllersToGuestGestures;
@property(retain, nonatomic) NSMutableSet *gestures; // @synthesize gestures=_gestures;
@property(nonatomic) struct CGPoint initialPanLocationInViewSpace; // @synthesize initialPanLocationInViewSpace=_initialPanLocationInViewSpace;
@property(retain, nonatomic) SBLockScreenHintPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) SBLockScreenHintLongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(retain, nonatomic) SBLockScreenHintTapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic, getter=isGestureHandlingEnabled) _Bool gestureHandlingEnabled; // @synthesize gestureHandlingEnabled=_gestureHandlingEnabled;
@property(retain, nonatomic) SBLockScreenView *lockScreenView; // @synthesize lockScreenView=_lockScreenView;
- (void).cxx_destruct;	// IMP=0x0000000100355420
- (void)controlCenterDidFinishTransition;	// IMP=0x0000000100355124
- (void)controlCenterWillBeginTransition;	// IMP=0x0000000100355120
- (void)controlCenterDidDismiss;	// IMP=0x0000000100355064
- (void)controlCenterWillPresent;	// IMP=0x0000000100355060
- (void)notificationCenterDidDismiss:(id)arg1;	// IMP=0x0000000100354fa4
- (void)presentingController:(id)arg1 conflictingGestureDidEnd:(id)arg2;	// IMP=0x0000000100354ee4
- (void)presentingController:(id)arg1 conflictingGestureDidBegin:(id)arg2;	// IMP=0x0000000100354e14
- (void)presentingControllerDidFinishPresentation:(id)arg1;	// IMP=0x0000000100354d80
- (void)presentingController:(id)arg1 willHandleGesture:(id)arg2;	// IMP=0x0000000100354c2c
- (void)_presentingController:(id)arg1 willHandlePan:(id)arg2;	// IMP=0x0000000100354a48
- (void)_presentingController:(id)arg1 willHandleTap:(id)arg2;	// IMP=0x00000001003549e4
- (_Bool)presentingController:(id)arg1 gestureRecognizerShouldBegin:(id)arg2;	// IMP=0x000000010035485c
- (_Bool)presentingController:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;	// IMP=0x00000001003547d0
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000100354370
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000001003542d8
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x0000000100354178
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000100354038
- (void)_handlePan:(id)arg1;	// IMP=0x0000000100353c9c
- (void)_updateGrabberStateForControllerIfNecessary:(id)arg1;	// IMP=0x0000000100353720
- (void)_endControllerPresentationForPanInState:(long long)arg1;	// IMP=0x00000001003534a8
- (void)_updateControllerPresentationForPan;	// IMP=0x0000000100353340
- (void)_beginControllerPresentationForPan;	// IMP=0x00000001003532a8
- (void)_tapPeriodElapsed;	// IMP=0x0000000100353210
- (void)_resetGesture:(id)arg1 forController:(id)arg2;	// IMP=0x000000010035316c
- (void)_handlePress:(id)arg1;	// IMP=0x0000000100352a0c
- (void)_dismissControllerForPress:(id)arg1 abortingCurrentAnimation:(_Bool)arg2;	// IMP=0x0000000100352658
- (void)_updateActiveControllerPresentationForPress:(_Bool)arg1;	// IMP=0x00000001003522d0
- (void)_handleTap:(id)arg1;	// IMP=0x0000000100352138
- (id)_tapGestureForActiveController;	// IMP=0x0000000100352064
- (void)_resetGesture:(id)arg1;	// IMP=0x0000000100351efc
- (_Bool)_hasTapPeriodElapsed;	// IMP=0x0000000100351e8c
- (void)_updateControllerPresentationForTap;	// IMP=0x00000001003514f8
- (double)_elapsedTapPeriod;	// IMP=0x000000010035148c
- (void)_updateControllerPresentationForTapOrPress:(id)arg1 withAnimation:(CDUnknownBlockType)arg2 abortingCurrentAnimation:(_Bool)arg3;	// IMP=0x0000000100351174
- (void)_abortCurrentAnimationForController:(id)arg1;	// IMP=0x0000000100351044
- (_Bool)_hintGestureShouldBegin:(id)arg1;	// IMP=0x0000000100350a90
- (long long)_compareControllerWithIdentifier:(long long)arg1 withControllerWithIdentifier:(long long)arg2;	// IMP=0x0000000100350a2c
- (_Bool)_isPresentationEnabledForController:(id)arg1 locationInWindow:(struct CGPoint)arg2;	// IMP=0x000000010035099c
- (_Bool)_isBounceEnabledForController:(id)arg1 locationInWindow:(struct CGPoint)arg2;	// IMP=0x000000010035090c
- (_Bool)_isController:(id)arg1 excludingViewsUnderGesture:(id)arg2;	// IMP=0x000000010035073c
- (void)_cancelGuestGesturesExcludingController:(id)arg1;	// IMP=0x00000001003503f0
- (void)_initializeInitialTouchTimeStamp;	// IMP=0x000000010035039c
- (void)_resetGestureSequenceAndReenableGestures;	// IMP=0x0000000100350368
- (void)_reenableGestures;	// IMP=0x00000001003500ec
- (void)_resetGestureSequence;	// IMP=0x000000010034ff34
- (void)_resetInitialPanLocation;	// IMP=0x000000010034ff20
- (unsigned long long)_hintEdgeForController:(id)arg1;	// IMP=0x000000010034fc40
- (_Bool)_didActiveControllerChange;	// IMP=0x000000010034fba4
- (id)_controllerForGesture:(id)arg1;	// IMP=0x000000010034f9ac
- (_Bool)_canControllerWithIdentifier:(long long)arg1 becomeActiveWithTouchAtLocation:(struct CGPoint)arg2;	// IMP=0x000000010034f3d0
- (id)_coordinatedPresentingControllerWithIdentifier:(long long)arg1;	// IMP=0x000000010034f1f0
- (id)_lockScreenNotificationListView;	// IMP=0x000000010034f154
- (id)_lockScreenNotificationListController;	// IMP=0x000000010034f100
- (id)_lockScreenBottomLeftController;	// IMP=0x000000010034f0ac
- (id)_lockScreenCameraController;	// IMP=0x000000010034f058
- (id)_lockScreenViewController;	// IMP=0x000000010034efbc
- (struct CGRect)_bottomGrabberZone;	// IMP=0x000000010034ee84
- (struct CGRect)_bottomLeftGrabberZone;	// IMP=0x000000010034ed5c
- (struct CGRect)_cameraGrabberZone;	// IMP=0x000000010034ec34
- (struct CGRect)_topGrabberZone;	// IMP=0x000000010034eb98
- (id)_viewForGestures;	// IMP=0x000000010034eb8c
- (void)_setLocalGesture:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x000000010034e8d4
- (_Bool)_doesController:(id)arg1 manageGestureLikeGesture:(id)arg2;	// IMP=0x000000010034e864
- (id)_controller:(id)arg1 managedGestureLikeGesture:(id)arg2;	// IMP=0x000000010034e5a4
- (void)removeCoordinatedPresentingController:(id)arg1;	// IMP=0x000000010034e3c4
- (void)resetCoordinatedPresentingController:(id)arg1;	// IMP=0x000000010034e358
- (void)addCoordinatedPresentingController:(id)arg1;	// IMP=0x000000010034df3c
- (_Bool)_hasCoordinatedPresentingController:(id)arg1;	// IMP=0x000000010034dee8
- (void)_removeTapGestureFailureRequirementFromGuestGestures:(id)arg1;	// IMP=0x000000010034dc18
- (void)_removeAllGestures;	// IMP=0x000000010034d880
- (void)_installLocalGestures;	// IMP=0x000000010034d518
- (void)dealloc;	// IMP=0x000000010034d430
- (id)init;	// IMP=0x000000010034d314

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

