//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BuddyTableViewController.h"

#import "BFFFlowItem.h"
#import "BuddyPasscodeEntryDelegate.h"
#import "PSUISoftwareUpdateManagerDelegate.h"

@class NSString, PSSoftwareUpdateTitleCell, PSUISoftwareUpdateManager, SUDescriptor, UIActivityIndicatorView, UIButton, UILabel, UITableViewCell;

@interface BuddySoftwareUpdateController : BuddyTableViewController <PSUISoftwareUpdateManagerDelegate, BuddyPasscodeEntryDelegate, BFFFlowItem>
{
    PSUISoftwareUpdateManager *_manager;	// 8 = 0x8
    PSSoftwareUpdateTitleCell *_titleCell;	// 16 = 0x10
    UITableViewCell *_learnMoreCell;	// 24 = 0x18
    UIActivityIndicatorView *_actionSpinner;	// 32 = 0x20
    UIButton *_actionButton;	// 40 = 0x28
    UIButton *_installTonightButton;	// 48 = 0x30
    UIButton *_skipButton;	// 56 = 0x38
    UILabel *_errorLabel;	// 64 = 0x40
    CDUnknownBlockType _devicePasscodeCompletion;	// 72 = 0x48
    unsigned long long _userChoice;	// 80 = 0x50
    _Bool _allowUserToSkip;	// 88 = 0x58
    _Bool _allowUserToInstallTonight;	// 89 = 0x59
    _Bool _scannedForUpdate;	// 90 = 0x5a
    id <BFFFlowItemDelegate> _delegate;	// 96 = 0x60
    id <BuddySoftwareUpdateControllerDelegate> _softwareUpdateDelegate;	// 104 = 0x68
    SUDescriptor *_update;	// 112 = 0x70
}

+ (id)cloudConfigSkipKey;	// IMP=0x00000001000a59d0
@property(retain) SUDescriptor *update; // @synthesize update=_update;
@property _Bool scannedForUpdate; // @synthesize scannedForUpdate=_scannedForUpdate;
@property _Bool allowUserToInstallTonight; // @synthesize allowUserToInstallTonight=_allowUserToInstallTonight;
@property _Bool allowUserToSkip; // @synthesize allowUserToSkip=_allowUserToSkip;
@property(nonatomic) __weak id <BuddySoftwareUpdateControllerDelegate> softwareUpdateDelegate; // @synthesize softwareUpdateDelegate=_softwareUpdateDelegate;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000a7360
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000a7190
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000a70a8
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000a6e24
- (void)detailedReleaseNotesDonePressed:(id)arg1;	// IMP=0x00000001000a6e10
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001000a6d68
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001000a6d60
- (void)manager:(id)arg1 installFailedWithError:(id)arg2;	// IMP=0x00000001000a6d50
- (void)manager:(id)arg1 installStartedForUpdate:(id)arg2;	// IMP=0x00000001000a6ce0
- (void)manager:(id)arg1 downloadFinished:(id)arg2;	// IMP=0x00000001000a6b1c
- (void)manager:(id)arg1 downloadProgressChanged:(id)arg2 displayStyle:(int)arg3;	// IMP=0x00000001000a6a14
- (void)manager:(id)arg1 didTransitionToState:(int)arg2 fromState:(int)arg3 error:(id)arg4;	// IMP=0x00000001000a61c4
- (void)setButtonTitle:(id)arg1;	// IMP=0x00000001000a6160
- (void)setErrorText:(id)arg1;	// IMP=0x00000001000a5e88
- (void)manager:(id)arg1 promptForDevicePasscodeWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a5b90
- (void)_cancelDevicePasscodePicker:(id)arg1;	// IMP=0x00000001000a5b3c
- (void)passcodeEntryController:(id)arg1 didEnterPasscode:(id)arg2;	// IMP=0x00000001000a5ab8
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a59d8
- (void)installTonightPressed:(id)arg1;	// IMP=0x00000001000a560c
- (void)downloadAndInstallTonightPressed:(id)arg1;	// IMP=0x00000001000a55f4
- (void)skipPressed:(id)arg1;	// IMP=0x00000001000a55b0
- (void)resumePressed:(id)arg1;	// IMP=0x00000001000a5598
- (void)installNowPressed:(id)arg1;	// IMP=0x00000001000a5230
- (void)_installFailedWithError:(id)arg1;	// IMP=0x00000001000a512c
- (void)downloadAndInstallPressed:(id)arg1;	// IMP=0x00000001000a5114
- (void)beginDownloadingUpdate;	// IMP=0x00000001000a4f78
- (void)setButtonState:(_Bool)arg1;	// IMP=0x00000001000a4f08
- (void)didBecomeActive:(id)arg1;	// IMP=0x00000001000a4ef0
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000a4570
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000a446c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000a43a8
- (void)scanForUpdateCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a4244
- (void)loadView;	// IMP=0x00000001000a3a1c
- (void)dealloc;	// IMP=0x00000001000a39a4
- (id)init;	// IMP=0x00000001000a380c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
