//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBMainWorkspaceTransaction.h"

#import "FBSynchronizedTransactionDelegate.h"

@class FBSynchronizedTransactionGroup, NSString;

@interface SBSuspendedWorkspaceTransaction : SBMainWorkspaceTransaction <FBSynchronizedTransactionDelegate>
{
    FBSynchronizedTransactionGroup *_synchronizedGroup;	// 40 = 0x28
    _Bool _notifiedSlaves;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001002c2328
- (void)_notifySlavesIfNecessary;	// IMP=0x00000001002c2274
- (void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;	// IMP=0x00000001002c2210
- (void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;	// IMP=0x00000001002c220c
- (void)synchronizedTransactionReadyToCommit:(id)arg1;	// IMP=0x00000001002c21ac
- (void)addSlaveTransaction:(id)arg1;	// IMP=0x00000001002c2124
- (void)_childTransactionDidComplete:(id)arg1;	// IMP=0x00000001002c2088
- (void)_begin;	// IMP=0x00000001002c1dfc
- (id)initWithTransitionRequest:(id)arg1;	// IMP=0x00000001002c1d68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

