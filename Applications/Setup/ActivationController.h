//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ActivationFailurePageDelegate.h"
#import "BFFFlowItem.h"
#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionDelegate.h"
#import "RemoteUIControllerDelegate.h"

@class ActivationFailurePage, BuddyActivationEngine, CoreTelephonyClient, NSData, NSMutableArray, NSObject<OS_xpc_object>, NSString, NSTimer, NSURL, RUIPage, RemoteUIController, SecureBackup, UIActivityIndicatorView, UILabel;

@interface ActivationController : UIViewController <NSURLSessionDelegate, NSURLSessionDataDelegate, RemoteUIControllerDelegate, ActivationFailurePageDelegate, BFFFlowItem>
{
    BuddyActivationEngine *_engine;	// 8 = 0x8
    RemoteUIController *_remoteUIController;	// 16 = 0x10
    NSMutableArray *_objectModels;	// 24 = 0x18
    RUIPage *_loadingPage;	// 32 = 0x20
    SecureBackup *_secureBackup;	// 40 = 0x28
    NSString *_escrowSessionKey;	// 48 = 0x30
    NSData *_srpInitResponse;	// 56 = 0x38
    NSString *_accountDSID;	// 64 = 0x40
    UIViewController *_spinningViewController;	// 72 = 0x48
    void *_otaAssertion;	// 80 = 0x50
    int _activationState;	// 88 = 0x58
    UILabel *_statusLabel;	// 96 = 0x60
    UILabel *_infoLabel;	// 104 = 0x68
    UIActivityIndicatorView *_spinner;	// 112 = 0x70
    _Bool _displayTimerElapsed;	// 120 = 0x78
    _Bool _cellNetworkTimerElapsed;	// 121 = 0x79
    _Bool _nonSilentActivation;	// 122 = 0x7a
    NSTimer *_displayTimer;	// 128 = 0x80
    NSTimer *_cellNetworkTimer;	// 136 = 0x88
    NSTimer *_ticketAcceptedTimer;	// 144 = 0x90
    NSTimer *_waitingForBasebandTimer;	// 152 = 0x98
    int _waitingForBasebandFailureCount;	// 160 = 0xa0
    ActivationFailurePage *_activationFailurePage;	// 168 = 0xa8
    _Bool _connectionFailed;	// 176 = 0xb0
    _Bool _connectionOTA;	// 177 = 0xb1
    NSURL *_agreeURL;	// 184 = 0xb8
    NSURL *_disagreeURL;	// 192 = 0xc0
    _Bool _activationControllerDismissed;	// 200 = 0xc8
    _Bool _appIsSuspended;	// 201 = 0xc9
    NSTimer *_activationLockTimer;	// 208 = 0xd0
    RUIPage *_activationLockPage;	// 216 = 0xd8
    NSObject<OS_xpc_object> *_demoConnection;	// 224 = 0xe0
    CoreTelephonyClient *telephonyClient;	// 232 = 0xe8
    _Bool _cdmaSelectionActivation;	// 240 = 0xf0
    id <BFFFlowItemDelegate> _delegate;	// 248 = 0xf8
    NSURL *_activationURL;	// 256 = 0x100
    NSString *_contentType;	// 264 = 0x108
}

+ (id)cloudConfigSkipKey;	// IMP=0x00000001000424ac
+ (_Bool)controllerNeedsToRun;	// IMP=0x00000001000423bc
@property(readonly, nonatomic) _Bool cdmaSelectionActivation; // @synthesize cdmaSelectionActivation=_cdmaSelectionActivation;
@property(retain, nonatomic) NSURL *disagreeURL; // @synthesize disagreeURL=_disagreeURL;
@property(retain, nonatomic) NSURL *agreeURL; // @synthesize agreeURL=_agreeURL;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSURL *activationURL; // @synthesize activationURL=_activationURL;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010004b528
- (void)_userAgreedToTCs:(_Bool)arg1;	// IMP=0x000000010004b2f8
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2;	// IMP=0x000000010004b170
- (void)remoteUIController:(id)arg1 didRemoveObjectModel:(id)arg2;	// IMP=0x000000010004b018
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;	// IMP=0x000000010004aef0
- (void)_setHandlerForPasscode;	// IMP=0x000000010004aa78
- (void)_activateWithPasscode:(id)arg1 fromObjectModel:(id)arg2;	// IMP=0x0000000100049f98
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;	// IMP=0x0000000100049aac
- (void)_handleEscrowResponse:(id)arg1;	// IMP=0x0000000100049440
- (_Bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;	// IMP=0x0000000100048fc4
- (void)tryAgainOnRemoteUIDialog;	// IMP=0x0000000100048f54
- (void)disagreeToRemoteUIDialog;	// IMP=0x0000000100048f1c
- (void)agreeToRemoteUIDialog;	// IMP=0x0000000100048bd8
- (void)activationFailurePagePopped:(id)arg1;	// IMP=0x0000000100048bc0
- (void)activationFailurePagePressedWifi:(id)arg1;	// IMP=0x0000000100048b7c
- (void)activationFailurePagePressedRetry:(id)arg1;	// IMP=0x0000000100048b1c
- (void)_stopActivationLockExpirationTimer;	// IMP=0x0000000100048a58
- (void)_startActivationLockExpirationTimerForPage:(id)arg1;	// IMP=0x000000010004876c
- (void)_updateStatusLabel;	// IMP=0x0000000100048448
- (void)_dismissRemoteUI;	// IMP=0x0000000100048340
- (void)_sendAck;	// IMP=0x0000000100048274
- (void)_activate;	// IMP=0x0000000100048128
- (void)_systemTimeUpdated;	// IMP=0x0000000100047ffc
- (void)_sanitizeSystemTime;	// IMP=0x0000000100047e60
- (void)_waitingForBasebandTimeout;	// IMP=0x0000000100047e2c
- (void)_clearWaitingForBasebandTimer;	// IMP=0x0000000100047df0
- (void)_checkBasebandStatusBeforeActivation;	// IMP=0x0000000100047a9c
- (void)_startActivation;	// IMP=0x00000001000473e0
- (void)_tryActivateWithOptions:(id)arg1 requestMutator:(CDUnknownBlockType)arg2;	// IMP=0x0000000100046fc8
- (void)_getSRPInitNonceRequestOptionsCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100046c3c
- (void)_handleFailureWithError:(id)arg1;	// IMP=0x0000000100046a0c
- (void)_handleActivationData:(id)arg1 responseHeaders:(id)arg2 baseURL:(id)arg3;	// IMP=0x0000000100045d5c
- (void)startRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004596c
- (void)stopSpinningForIdentifier:(id)arg1;	// IMP=0x00000001000457ec
- (void)startSpinningWithIdentifier:(id)arg1;	// IMP=0x00000001000456a4
- (void)_cleanup;	// IMP=0x000000010004568c
- (void)_displayTimerTimeout;	// IMP=0x00000001000455cc
- (void)didBecomeActive:(id)arg1;	// IMP=0x000000010004553c
- (void)didResignActive:(id)arg1;	// IMP=0x0000000100045528
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000453a8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010004523c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100045188
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000450dc
- (void)_activateIfNecessary;	// IMP=0x0000000100044f18
- (void)_activationStateChanged;	// IMP=0x0000000100044e2c
- (void)_ticketAcceptedDidTimeout;	// IMP=0x0000000100044d84
- (void)_clearTicketAcceptedTimer;	// IMP=0x0000000100044d48
- (void)startOver;	// IMP=0x0000000100044c74
- (void)_checkActivationFailIfBricked:(_Bool)arg1;	// IMP=0x0000000100044a8c
- (void)_clearDisplayTimer;	// IMP=0x0000000100044a50
- (void)back:(id)arg1;	// IMP=0x0000000100044910
- (void)dealloc;	// IMP=0x0000000100044814
- (id)init;	// IMP=0x00000001000442a4
- (_Bool)shouldSuppressExtendedInitializationActivityIndicator;	// IMP=0x0000000100044244
- (void)_enterState:(int)arg1;	// IMP=0x0000000100043d98
- (void)_fetchCloudConfig;	// IMP=0x0000000100043440
- (void)_tryFetchCloudConfigNote:(id)arg1;	// IMP=0x00000001000433b0
- (void)_cellNetworkTimerTimeout;	// IMP=0x000000010004330c
- (void)_clearCellNetworkTimer;	// IMP=0x00000001000432d0
- (void)_stopWaitingForCellNetwork;	// IMP=0x00000001000431d4
- (void)_startWaitingForCellNetwork;	// IMP=0x0000000100043094
- (void)_attemptDismiss;	// IMP=0x00000001000429d0
- (void)_removePagesFromNavStack;	// IMP=0x00000001000428e0
- (id)_demodConnection;	// IMP=0x00000001000426fc
- (void)_releaseOTAAssertion;	// IMP=0x000000010004265c
- (id)_carrierID;	// IMP=0x00000001000424b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

