//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BuddyTableViewController.h"

#import "BFFFlowItem.h"
#import "BuddyAppleIDControllerDelegate.h"

@class AASetupAssistantConfigResponse, BuddyAppleIDController, BuddyAppleIDTableHeaderView, NSArray, NSString, UITableViewCell;

@interface BuddyAppleIDChoiceController : BuddyTableViewController <BFFFlowItem, BuddyAppleIDControllerDelegate>
{
    UITableViewCell *_forgotCell;	// 8 = 0x8
    UITableViewCell *_createNewCell;	// 16 = 0x10
    NSArray *_itemIcons;	// 24 = 0x18
    NSArray *_itemDescriptions;	// 32 = 0x20
    BuddyAppleIDTableHeaderView *_serviceHeaderView;	// 40 = 0x28
    BuddyAppleIDController *_appleIDController;	// 48 = 0x30
    _Bool _allowBack;	// 56 = 0x38
    _Bool _whatIsReady;	// 57 = 0x39
    _Bool _whatIsRequested;	// 58 = 0x3a
    _Bool _didShowWifiAlert;	// 59 = 0x3b
    _Bool _shouldShowWifiIfCancellingSkipAlert;	// 60 = 0x3c
    _Bool _passbookPaymentSupported;	// 61 = 0x3d
    _Bool _runningSpinner;	// 62 = 0x3e
    AASetupAssistantConfigResponse *_urlConfiguration;	// 64 = 0x40
    id <BFFFlowItemDelegate> _delegate;	// 72 = 0x48
}

+ (id)cloudConfigSkipKey;	// IMP=0x000000010006b4f8
+ (void)initialize;	// IMP=0x000000010006b4bc
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010006e578
- (void)appleIDController:(id)arg1 failedWithError:(id)arg2;	// IMP=0x000000010006e4f0
- (void)appleIDControllerFinished:(id)arg1;	// IMP=0x000000010006e460
- (long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2;	// IMP=0x000000010006e458
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000010006e330
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000010006e300
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010006de50
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010006dc78
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010006d808
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000010006d778
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010006d748
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010006d740
- (void)_reallySkip;	// IMP=0x000000010006d544
- (void)_skipPressed:(id)arg1;	// IMP=0x000000010006cf00
- (void)_showOfflineTerms;	// IMP=0x000000010006cda8
- (void)_whatIsPressed:(id)arg1;	// IMP=0x000000010006cd90
- (void)dealloc;	// IMP=0x000000010006cd24
- (_Bool)controllerAllowsNavigatingBack;	// IMP=0x000000010006cd14
- (_Bool)useScreenFooter;	// IMP=0x000000010006cd10
- (void)viewDidLayoutSubviews;	// IMP=0x000000010006cb9c
- (void)loadView;	// IMP=0x000000010006c774
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010006c6a4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010006c5e0
- (_Bool)shouldAllowStartOver;	// IMP=0x000000010006c5c8
- (void)startOver;	// IMP=0x000000010006c5b8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010006c0c0
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x000000010006c06c
- (id)titleText;	// IMP=0x000000010006bff8
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010006be74
- (id)init;	// IMP=0x000000010006b508

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
