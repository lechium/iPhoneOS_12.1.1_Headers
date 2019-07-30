//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWorkspaceTransaction.h"

#import "FBSynchronizedTransaction.h"

@class NSString;

@interface SBExternalDisplayWorkspaceSlaveTransaction : SBWorkspaceTransaction <FBSynchronizedTransaction>
{
    id <FBSynchronizedTransactionDelegate> _synchronizationDelegate;	// 8 = 0x8
}

@property(nonatomic) __weak id <FBSynchronizedTransactionDelegate> synchronizationDelegate; // @synthesize synchronizationDelegate=_synchronizationDelegate;
- (void).cxx_destruct;	// IMP=0x00000001002c0328
- (void)_doIt;	// IMP=0x00000001002c02b4
- (void)_doWork;	// IMP=0x00000001002c02b0
- (void)performSynchronizedCommit;	// IMP=0x00000001002c02a4
- (_Bool)isReadyForSynchronizedCommit;	// IMP=0x00000001002c029c
- (void)_begin;	// IMP=0x00000001002c020c
- (id)initWithTransitionRequest:(id)arg1;	// IMP=0x00000001002c01a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
