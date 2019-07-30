//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSystemGestureWorkspaceTransaction.h"

#import "BSTransactionObserver.h"

@class NSString, SBMainWorkspaceTransaction;

@interface SBSideAppSlideGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction <BSTransactionObserver>
{
    _Bool _waitingForGestureToComplete;	// 40 = 0x28
    SBMainWorkspaceTransaction *_activateSideAppTransaction;	// 48 = 0x30
    _Bool _activatedSideApp;	// 56 = 0x38
    _Bool _updateWhitePointAdaptationStrengthOnComplete;	// 57 = 0x39
}

@property(readonly, nonatomic) _Bool waitingForGestureToComplete; // @synthesize waitingForGestureToComplete=_waitingForGestureToComplete;
- (void).cxx_destruct;	// IMP=0x00000001001f94b8
- (void)_cleanupSideApp;	// IMP=0x00000001001f9350
- (void)_activateSideApp;	// IMP=0x00000001001f91ec
- (void)_childTransactionDidComplete:(id)arg1;	// IMP=0x00000001001f9130
- (void)_didComplete;	// IMP=0x00000001001f8fec
- (void)_finishWithCompletionType:(long long)arg1;	// IMP=0x00000001001f8d90
- (void)_begin;	// IMP=0x00000001001f8c0c
- (void)notePassedSideAppActivationThreshold;	// IMP=0x00000001001f8be4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

