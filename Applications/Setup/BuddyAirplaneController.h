//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BuddyTableViewController.h"

#import "BFFFlowItem.h"

@class NSString;

@interface BuddyAirplaneController : BuddyTableViewController <BFFFlowItem>
{
    id <BFFFlowItemDelegate> _delegate;	// 8 = 0x8
}

+ (id)cloudConfigSkipKey;	// IMP=0x00000001000bc7a0
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000bcbc0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000bcb04
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x00000001000bca4c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000bc9cc
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001000bc9c0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001000bc9b8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000bc898
- (id)titleText;	// IMP=0x00000001000bc824
- (id)init;	// IMP=0x00000001000bc7a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

