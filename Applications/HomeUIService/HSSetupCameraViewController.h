//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CRCameraReaderDelegate.h"
#import "HFItemManagerDelegate.h"
#import "HFSetupPairingObserver.h"
#import "HSNFCManagerDelegate.h"
#import "HSPairingSetupStep.h"

@class CRCameraReader, HFAccessoryBrowsingManager, HFSimpleItemManager, HSEntitlementContext, HSNFCManager, HSPairingStatusViewController, HSSetupPairingHeaderView, NAFuture, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, UIButton, UILabel, UIStackView, UIView, UIVisualEffectView;

@interface HSSetupCameraViewController : UIViewController <CRCameraReaderDelegate, HFSetupPairingObserver, HSNFCManagerDelegate, HFItemManagerDelegate, HSPairingSetupStep>
{
    _Bool _codeScanningRequired;	// 8 = 0x8
    _Bool _cameraReaderIsRunning;	// 9 = 0x9
    id <HSSetupStepDelegate> _delegate;	// 16 = 0x10
    HFAccessoryBrowsingManager *_accessoryBrowsingManager;	// 24 = 0x18
    HSEntitlementContext *_entitlementContext;	// 32 = 0x20
    NAFuture *_readyToDisplayFuture;	// 40 = 0x28
    HFSimpleItemManager *_itemManager;	// 48 = 0x30
    UIView *_cameraContainerView;	// 56 = 0x38
    HSSetupPairingHeaderView *_pairingHeaderView;	// 64 = 0x40
    CRCameraReader *_cameraReader;	// 72 = 0x48
    HSNFCManager *_nfcManager;	// 80 = 0x50
    NAFuture *_nfcAvailableFuture;	// 88 = 0x58
    UILabel *_interruptionLabel;	// 96 = 0x60
    UIStackView *_buttonContainerView;	// 104 = 0x68
    UIButton *_actionButton;	// 112 = 0x70
    UIButton *_learnButton;	// 120 = 0x78
    UIVisualEffectView *_actionButtonBackgroundView;	// 128 = 0x80
    unsigned long long _actionButtonType;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_updateActionButtonTypeSerialQueue;	// 144 = 0x90
    NSObject<OS_dispatch_semaphore> *_updateActionButtonTypeSemaphore;	// 152 = 0x98
    HSPairingStatusViewController *_statusViewController;	// 160 = 0xa0
    id <HFSetupPairingController> _pairingController;	// 168 = 0xa8
    id <NACancelable> _delayedSetupCodeHandler;	// 176 = 0xb0
    unsigned long long _mode;	// 184 = 0xb8
}

@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) id <NACancelable> delayedSetupCodeHandler; // @synthesize delayedSetupCodeHandler=_delayedSetupCodeHandler;
@property(nonatomic) _Bool cameraReaderIsRunning; // @synthesize cameraReaderIsRunning=_cameraReaderIsRunning;
@property(retain, nonatomic) id <HFSetupPairingController> pairingController; // @synthesize pairingController=_pairingController;
@property(readonly, nonatomic) HSPairingStatusViewController *statusViewController; // @synthesize statusViewController=_statusViewController;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *updateActionButtonTypeSemaphore; // @synthesize updateActionButtonTypeSemaphore=_updateActionButtonTypeSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *updateActionButtonTypeSerialQueue; // @synthesize updateActionButtonTypeSerialQueue=_updateActionButtonTypeSerialQueue;
@property(nonatomic) unsigned long long actionButtonType; // @synthesize actionButtonType=_actionButtonType;
@property(retain, nonatomic) UIVisualEffectView *actionButtonBackgroundView; // @synthesize actionButtonBackgroundView=_actionButtonBackgroundView;
@property(retain, nonatomic) UIButton *learnButton; // @synthesize learnButton=_learnButton;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIStackView *buttonContainerView; // @synthesize buttonContainerView=_buttonContainerView;
@property(retain, nonatomic) UILabel *interruptionLabel; // @synthesize interruptionLabel=_interruptionLabel;
@property(retain, nonatomic) NAFuture *nfcAvailableFuture; // @synthesize nfcAvailableFuture=_nfcAvailableFuture;
@property(retain, nonatomic) HSNFCManager *nfcManager; // @synthesize nfcManager=_nfcManager;
@property(retain, nonatomic) CRCameraReader *cameraReader; // @synthesize cameraReader=_cameraReader;
@property(retain, nonatomic) HSSetupPairingHeaderView *pairingHeaderView; // @synthesize pairingHeaderView=_pairingHeaderView;
@property(retain, nonatomic) UIView *cameraContainerView; // @synthesize cameraContainerView=_cameraContainerView;
@property(retain, nonatomic) HFSimpleItemManager *itemManager; // @synthesize itemManager=_itemManager;
@property(nonatomic) _Bool codeScanningRequired; // @synthesize codeScanningRequired=_codeScanningRequired;
@property(readonly, nonatomic) NAFuture *readyToDisplayFuture; // @synthesize readyToDisplayFuture=_readyToDisplayFuture;
@property(readonly, nonatomic) HSEntitlementContext *entitlementContext; // @synthesize entitlementContext=_entitlementContext;
@property(readonly, nonatomic) HFAccessoryBrowsingManager *accessoryBrowsingManager; // @synthesize accessoryBrowsingManager=_accessoryBrowsingManager;
@property(nonatomic) __weak id <HSSetupStepDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010003268c
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;	// IMP=0x00000001000322f0
@property(readonly, nonatomic) long long setupState;
- (void)setupDidFailWithError:(id)arg1 forDiscoveredAccessory:(id)arg2;	// IMP=0x00000001000322d8
- (void)didUpdatePairingController:(id)arg1;	// IMP=0x00000001000320e4
- (void)pairingController:(id)arg1 didTransitionToPhase:(unsigned long long)arg2 statusTitle:(id)arg3 statusDescription:(id)arg4;	// IMP=0x0000000100031c28
- (void)nfcManager:(id)arg1 didReadSetupResult:(id)arg2;	// IMP=0x0000000100031ad8
- (_Bool)cameraReader:(id)arg1 shouldReturnQRCode:(id)arg2;	// IMP=0x0000000100031908
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;	// IMP=0x0000000100031530
- (void)cameraReaderDidDisplayMessage:(id)arg1;	// IMP=0x000000010003152c
- (void)cameraReaderDidFindTarget:(id)arg1;	// IMP=0x0000000100031528
- (void)cameraReaderDidEnd:(id)arg1;	// IMP=0x00000001000313ec
- (void)cameraReaderDidCancel:(id)arg1;	// IMP=0x0000000100031288
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001000310f4
- (void)_updatePairingSessionForViewPresented:(_Bool)arg1;	// IMP=0x0000000100030ec0
- (void)_handleSetupFailedForDiscoveredAccessory:(id)arg1;	// IMP=0x0000000100030c18
- (void)_configureLearnButton;	// IMP=0x0000000100030a88
- (void)_configureCloseButton;	// IMP=0x00000001000308e8
- (void)_configureWifiSettingsButton;	// IMP=0x0000000100030748
- (void)_configureTroubleshootingButton;	// IMP=0x00000001000305a8
- (void)_configureRetryButton;	// IMP=0x0000000100030408
- (void)_configureManualEntryButton;	// IMP=0x0000000100030268
- (void)_handleSetupURLString:(id)arg1;	// IMP=0x00000001000301a0
- (void)_handleSetupCode:(id)arg1;	// IMP=0x000000010002ffa0
- (void)_updateActionButtonType:(unsigned long long)arg1;	// IMP=0x000000010002f5dc
- (void)openStoreLink:(id)arg1;	// IMP=0x000000010002f560
- (void)showTroubleshootingTips:(id)arg1;	// IMP=0x000000010002f440
- (void)showWifiSettings:(id)arg1;	// IMP=0x000000010002f3c4
- (void)retryPairing:(id)arg1;	// IMP=0x000000010002f37c
- (void)showManualCodeUI:(id)arg1;	// IMP=0x000000010002f204
- (void)cancel:(id)arg1;	// IMP=0x000000010002f18c
- (void)_addInterruptionLabel;	// IMP=0x000000010002ebd8
- (void)_cameraWasInterrupted:(id)arg1;	// IMP=0x000000010002ea50
- (void)_prepareConstraints;	// IMP=0x000000010002d9dc
- (long long)preferredStatusBarStyle;	// IMP=0x000000010002d9d4
- (void)_stopReaders;	// IMP=0x000000010002d834
- (void)_startReaders;	// IMP=0x000000010002d718
- (void)_unloadCameraReader;	// IMP=0x000000010002d4cc
- (void)_loadCameraReader;	// IMP=0x000000010002cda4
- (void)viewDidLayoutSubviews;	// IMP=0x000000010002cc78
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010002cbf4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010002cb3c
- (void)viewDidLoad;	// IMP=0x000000010002c2b4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010002c1a4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010002c094
- (id)initWithAccessoryBrowsingManager:(id)arg1 entitlementContext:(id)arg2 mode:(unsigned long long)arg3 codeScanningRequired:(_Bool)arg4;	// IMP=0x000000010002b8d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
