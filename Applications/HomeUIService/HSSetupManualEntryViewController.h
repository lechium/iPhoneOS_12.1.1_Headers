//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "HFSetupPairingObserver.h"
#import "HSPairingSetupStep.h"
#import "HSSetupCodeFieldDelegate.h"

@class HSPairingStatusViewController, HSSetupCodeField, NAFuture, NSLayoutConstraint, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, UIButton, UIScrollView, UIVisualEffectView;

@interface HSSetupManualEntryViewController : UIViewController <HSSetupCodeFieldDelegate, HFSetupPairingObserver, HSPairingSetupStep>
{
    id <HSSetupStepDelegate> _delegate;	// 8 = 0x8
    UIButton *_cameraButton;	// 16 = 0x10
    HSPairingStatusViewController *_statusViewController;	// 24 = 0x18
    id <HFSetupPairingController> _pairingController;	// 32 = 0x20
    UIScrollView *_statusContainerView;	// 40 = 0x28
    unsigned long long _manualEntryState;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_updateManualEntryStateSerialQueue;	// 56 = 0x38
    NSObject<OS_dispatch_semaphore> *_updateManualEntryStateSemaphore;	// 64 = 0x40
    HSSetupCodeField *_codeField;	// 72 = 0x48
    UIButton *_actionButton;	// 80 = 0x50
    UIVisualEffectView *_blurView;	// 88 = 0x58
    NSLayoutConstraint *_actionButtonBottomConstraint;	// 96 = 0x60
}

@property(retain, nonatomic) NSLayoutConstraint *actionButtonBottomConstraint; // @synthesize actionButtonBottomConstraint=_actionButtonBottomConstraint;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) HSSetupCodeField *codeField; // @synthesize codeField=_codeField;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *updateManualEntryStateSemaphore; // @synthesize updateManualEntryStateSemaphore=_updateManualEntryStateSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *updateManualEntryStateSerialQueue; // @synthesize updateManualEntryStateSerialQueue=_updateManualEntryStateSerialQueue;
@property(nonatomic) unsigned long long manualEntryState; // @synthesize manualEntryState=_manualEntryState;
@property(retain, nonatomic) UIScrollView *statusContainerView; // @synthesize statusContainerView=_statusContainerView;
@property(retain, nonatomic) id <HFSetupPairingController> pairingController; // @synthesize pairingController=_pairingController;
@property(readonly, nonatomic) HSPairingStatusViewController *statusViewController; // @synthesize statusViewController=_statusViewController;
@property(retain, nonatomic) UIButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(nonatomic) __weak id <HSSetupStepDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010001800c
@property(readonly, nonatomic) long long setupState;
- (void)setupDidFailWithError:(id)arg1 forDiscoveredAccessory:(id)arg2;	// IMP=0x0000000100017e4c
- (void)didUpdatePairingController:(id)arg1;	// IMP=0x0000000100017c58
- (void)setupCodeFieldDidReturn:(id)arg1;	// IMP=0x0000000100017c4c
- (void)setupCodeFieldDidBecomeIncomplete:(id)arg1;	// IMP=0x0000000100017c48
- (void)setupCodeFieldDidBecomeComplete:(id)arg1;	// IMP=0x0000000100017bb0
- (void)pairingController:(id)arg1 didTransitionToPhase:(unsigned long long)arg2 statusTitle:(id)arg3 statusDescription:(id)arg4;	// IMP=0x00000001000177ac
- (void)showCameraScanUI:(id)arg1;	// IMP=0x00000001000176b0
- (void)retryPairing:(id)arg1;	// IMP=0x0000000100017668
- (void)reenterCode:(id)arg1;	// IMP=0x0000000100017548
- (void)pair:(id)arg1;	// IMP=0x0000000100017420
- (void)cancel:(id)arg1;	// IMP=0x00000001000173d8
- (double)_actionButtonBottomConstraintConstantForKeyboardHeight:(double)arg1;	// IMP=0x00000001000173a8
- (double)_containerVerticalPadding;	// IMP=0x0000000100017384
- (void)_updateManualEntryState:(unsigned long long)arg1;	// IMP=0x0000000100016788
- (void)_handleSetupFailedForDiscoveredAccessory:(id)arg1;	// IMP=0x00000001000165d0
- (void)_configureCameraButton;	// IMP=0x0000000100016430
- (void)_configureCloseButton;	// IMP=0x0000000100016290
- (void)_configureRetryButton;	// IMP=0x00000001000160f0
- (void)_configureEnterCodeAgainButton;	// IMP=0x0000000100015f50
- (void)_prepareConstraints;	// IMP=0x0000000100014e38
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x0000000100014c54
- (void)_keyboardWillShow:(id)arg1;	// IMP=0x000000010001489c
- (void)_bringUpCodeField;	// IMP=0x000000010001485c
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000146dc
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001000145c4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010001432c
- (void)viewDidLoad;	// IMP=0x0000000100013c18
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100013b3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NAFuture *readyToDisplayFuture;
@property(readonly) Class superclass;

@end

