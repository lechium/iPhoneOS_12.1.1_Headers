//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BFFFlow.h"

#import "BuddyAppleIDControllerDelegate.h"
#import "BuddySoftwareUpdateControllerDelegate.h"
#import "BuddyTCSubControllerDelegate.h"

@class BYBackupMetadata, BackupRestoreProgressController, BuddyAppleIDAuthManager, BuddyAppleIDController, BuddySoftwareUpdateController, MBManager, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, RestorableBackupItem, SSAccount, SSTermsAndConditions, UIViewController;

@interface BuddyiCloudRestoreFlow : BFFFlow <BuddyAppleIDControllerDelegate, BuddyTCSubControllerDelegate, BuddySoftwareUpdateControllerDelegate>
{
    MBManager *_backupManager;	// 8 = 0x8
    BackupRestoreProgressController *_restoreProgressController;	// 16 = 0x10
    BuddyAppleIDController *_iTunesAppleIDController;	// 24 = 0x18
    BuddyAppleIDController *_softwareUpdateAppleIDController;	// 32 = 0x20
    UIViewController *_spinningViewController;	// 40 = 0x28
    NSString *_activeStoreAccount;	// 48 = 0x30
    NSMutableArray *_storeAccountsToSignIn;	// 56 = 0x38
    NSDictionary *_storeAccountMap;	// 64 = 0x40
    SSAccount *_currentStoreAccount;	// 72 = 0x48
    SSTermsAndConditions *_currentStoreTerms;	// 80 = 0x50
    _Bool _signInWasSilent;	// 88 = 0x58
    NSString *_appleIDPassword;	// 96 = 0x60
    NSMutableDictionary *_authManagers;	// 104 = 0x68
    BuddyAppleIDAuthManager *_softwareUpdateAuthManager;	// 112 = 0x70
    BuddySoftwareUpdateController *_softwareUpdateController;	// 120 = 0x78
    UIViewController *_firstFlowViewController;	// 128 = 0x80
    _Bool _requireInteractiveAuth;	// 136 = 0x88
    RestorableBackupItem *_pendingBackupItem;	// 144 = 0x90
    RestorableBackupItem *_attemptedBackupItem;	// 152 = 0x98
    BYBackupMetadata *_pendingBackupMetadata;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_metadataQueue;	// 168 = 0xa8
    RestorableBackupItem *_backupItem;	// 176 = 0xb0
}

+ (_Bool)controllerNeedsToRun;	// IMP=0x000000010002650c
+ (id)sharedFlow;	// IMP=0x0000000100026488
@property(retain) RestorableBackupItem *backupItem; // @synthesize backupItem=_backupItem;
- (void).cxx_destruct;	// IMP=0x000000010002dc14
- (void)softwareUpdateController:(id)arg1 didFailToInstallUpdateWithError:(id)arg2;	// IMP=0x000000010002da10
- (void)softwareUpdateController:(id)arg1 didStartInstallForUpdate:(id)arg2;	// IMP=0x000000010002d8c8
- (void)softwareUpdateController:(id)arg1 prepareToInstallUpdate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002d878
- (void)_prepareForSoftwareUpdate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002d2d8
- (void)appleIDControllerFinished:(id)arg1;	// IMP=0x000000010002d1e8
- (void)backNavigationButtonTappedPostSoftwareUpdate:(id)arg1;	// IMP=0x000000010002d0c8
- (void)startPostSoftwareUpdateRestore;	// IMP=0x000000010002cdb4
- (_Bool)needsToRunPostSoftwareUpdateRestore;	// IMP=0x000000010002cd58
- (id)_validatedRestorableMarker;	// IMP=0x000000010002c940
- (id)signInPageForPostRestoreAuthenticationWithNavigationController:(id)arg1;	// IMP=0x000000010002bc14
- (void)buddyTCSubController:(id)arg1 didFinishWithAgree:(_Bool)arg2;	// IMP=0x000000010002b554
- (void)upgradeStoreAccountSignInPageDidSkip;	// IMP=0x000000010002b548
- (void)upgradeStoreAccountSignInPageDidSignInWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4;	// IMP=0x000000010002ab60
- (void)_showStoreTermsForAccount:(id)arg1;	// IMP=0x000000010002a820
- (void)_showNextStoreAccountTerms;	// IMP=0x0000000100029fd4
- (void)showStoreTermsIfNeeded;	// IMP=0x00000001000293a4
- (void)stopSpinningForIdentifier:(id)arg1;	// IMP=0x0000000100029224
- (void)startSpinningWithIdentifier:(id)arg1;	// IMP=0x00000001000290dc
- (void)willResignActive;	// IMP=0x0000000100028f9c
- (void)controllerWasPopped;	// IMP=0x0000000100028f2c
- (void)showStoreSignIn;	// IMP=0x00000001000278d8
- (id)_localizedExtraStoresSignInTextForStoreContentMap:(id)arg1;	// IMP=0x0000000100027768
- (void)_removeOldStoreSignInAndTermsPages;	// IMP=0x0000000100027608
- (void)startRestore;	// IMP=0x00000001000274e4
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100027448
- (void)startFlowAnimated:(_Bool)arg1;	// IMP=0x0000000100026e60
- (id)initWithNavigationController:(id)arg1;	// IMP=0x0000000100026d68
- (void)preScanForSoftwareUpdateCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100026cfc
- (id)softwareUpdateController;	// IMP=0x0000000100026ca4
- (void)getPendingBackupMetadataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100026aa0
- (void)setPendingBackupMetadata:(id)arg1;	// IMP=0x00000001000269ac
- (id)attemptedBackupItem;	// IMP=0x000000010002699c
- (void)setAttemptedBackupItem:(id)arg1;	// IMP=0x0000000100026988
- (id)pendingBackupItem;	// IMP=0x0000000100026978
- (void)setPendingBackupItem:(id)arg1;	// IMP=0x0000000100026968
- (void)setPendingBackupItem:(id)arg1 invalidateStash:(_Bool)arg2;	// IMP=0x0000000100026568

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
