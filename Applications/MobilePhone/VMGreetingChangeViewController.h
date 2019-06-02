//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VMNavigationController.h"

#import "PHVoicemailGreetingViewControllerDelegate.h"
#import "VMAccountsViewDataSource.h"
#import "VMAccountsViewDelegate.h"

@class NSArray, NSString, VMAccount, VMAccountsViewController;

@interface VMGreetingChangeViewController : VMNavigationController <VMAccountsViewDataSource, VMAccountsViewDelegate, PHVoicemailGreetingViewControllerDelegate>
{
    NSArray *_accounts;	// 8 = 0x8
    VMAccount *_selectedAccount;	// 16 = 0x10
    VMAccountsViewController *_accountsViewController;	// 24 = 0x18
}

@property(retain, nonatomic) VMAccountsViewController *accountsViewController; // @synthesize accountsViewController=_accountsViewController;
@property(retain, nonatomic) VMAccount *selectedAccount; // @synthesize selectedAccount=_selectedAccount;
@property(copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
- (void).cxx_destruct;	// IMP=0x00000001000ca638
- (void)voicemailGreetingViewControllerFinished:(id)arg1;	// IMP=0x00000001000ca5c8
- (void)accountsView:(id)arg1 buttonTappedForRowWithIndex:(unsigned long long)arg2;	// IMP=0x00000001000ca488
- (id)titleForAccountsView:(id)arg1;	// IMP=0x00000001000ca3f8
- (unsigned long long)numberOfRowsForAccountsView:(id)arg1;	// IMP=0x00000001000ca3ac
- (id)accountsView:(id)arg1 buttonForRowAtIndex:(unsigned long long)arg2;	// IMP=0x00000001000ca21c
- (void)cancelAction:(id)arg1;	// IMP=0x00000001000ca1d4
- (id)greetingViewControllerForAccount:(id)arg1;	// IMP=0x00000001000ca154
- (void)updateView;	// IMP=0x00000001000c9d9c
- (void)updateAccounts;	// IMP=0x00000001000c9b68
- (id)accountAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000c9aec
- (void)viewDidLoad;	// IMP=0x00000001000c99d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

