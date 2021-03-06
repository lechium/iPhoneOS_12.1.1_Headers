//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CoreTelephonyClientSubscriberDelegate.h"
#import "TSSIMUnlockDetailViewControllerDelegate.h"
#import "TSSIMUnlockListFooterViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CoreTelephonyClient, NSMutableArray, NSMutableDictionary, NSString, TSSIMUnlockListFooterView, TSSIMUnlockListHeaderView, TSSIMUnlockListTableFooterView, UIBarButtonItem, UITableView;

@interface TSSIMUnlockListViewController : UIViewController <CoreTelephonyClientSubscriberDelegate, UITableViewDataSource, UITableViewDelegate, TSSIMUnlockDetailViewControllerDelegate, TSSIMUnlockListFooterViewDelegate>
{
    _Bool _suppressCancellation;	// 8 = 0x8
    CoreTelephonyClient *_telephonyClient;	// 16 = 0x10
    UIBarButtonItem *_cancelButtonItem;	// 24 = 0x18
    UITableView *_tableView;	// 32 = 0x20
    TSSIMUnlockListHeaderView *_headerView;	// 40 = 0x28
    TSSIMUnlockListFooterView *_footerView;	// 48 = 0x30
    TSSIMUnlockListTableFooterView *_tableFooterView;	// 56 = 0x38
    NSMutableArray *_subscriptionContexts;	// 64 = 0x40
    NSMutableDictionary *_subscriptionActions;	// 72 = 0x48
    id <TSSIMUnlockListViewControllerDelegate> _delegate;	// 80 = 0x50
}

@property(nonatomic) __weak id <TSSIMUnlockListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSMutableDictionary *subscriptionActions; // @synthesize subscriptionActions=_subscriptionActions;
@property(readonly, copy, nonatomic) NSMutableArray *subscriptionContexts; // @synthesize subscriptionContexts=_subscriptionContexts;
- (void).cxx_destruct;	// IMP=0x000000010000b708
- (id)_containerView;	// IMP=0x000000010000b6a8
- (id)_nameForSIMWithSubscriptionContext:(id)arg1;	// IMP=0x000000010000b490
- (_Bool)_anESIMExistsInSubscriptionContexts;	// IMP=0x000000010000b370
- (void)_cancelButtonItemPressed:(id)arg1;	// IMP=0x000000010000b32c
- (unsigned long long)_numberOfLockedSubscriptionContexts;	// IMP=0x000000010000b1e4
- (void)_configureFooterView;	// IMP=0x000000010000b154
- (void)_configureTableFooterView;	// IMP=0x000000010000b094
- (void)_configureHeaderView;	// IMP=0x000000010000af50
- (void)_configureNavigationItem;	// IMP=0x000000010000ae50
- (void)_configureAncillaryViews;	// IMP=0x000000010000adfc
- (void)removeSubscriptionContextAtIndex:(unsigned long long)arg1;	// IMP=0x000000010000abe4
- (void)updateSubscriptionContext:(id)arg1 withSubscriptionAction:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000010000a954
- (void)addSubscriptionContext:(id)arg1 withSubscriptionAction:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000010000a6c4
- (void)unlockListFooterViewContinueButtonWasPressed:(id)arg1;	// IMP=0x000000010000a680
- (void)unlockDetailViewController:(id)arg1 didCompleteWithResult:(long long)arg2;	// IMP=0x000000010000a510
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010000a3a0
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010000a394
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010000a37c
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000010000a2a8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100009ef0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100009e5c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100009e0c
- (void)viewDidLoad;	// IMP=0x0000000100009a94
- (void)loadView;	// IMP=0x0000000100009a2c
- (id)initWithSubscriptionContexts:(id)arg1 subscriptionActions:(id)arg2 suppressCancellation:(_Bool)arg3 delegate:(id)arg4;	// IMP=0x000000010000986c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

