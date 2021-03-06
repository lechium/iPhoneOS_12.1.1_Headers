//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBStarkNowPlayingServiceDelegate.h"

@class NSMutableArray, NSString, SBSUICarDisplayNowPlayingStateContext, SBStarkNowPlayingService, _UIAsyncInvocation;

@interface SBStarkNowPlayingController : UIViewController <SBStarkNowPlayingServiceDelegate>
{
    _UIAsyncInvocation *_cancelRequest;	// 8 = 0x8
    SBStarkNowPlayingService *_service;	// 16 = 0x10
    unsigned long long _reactivateAttempt;	// 24 = 0x18
    double _lastReactivationAttempt;	// 32 = 0x20
    NSMutableArray *_notifyBlocks;	// 40 = 0x28
    SBSUICarDisplayNowPlayingStateContext *_context;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001001e05ec
- (void)nowPlayingService:(id)arg1 didTerminateWithError:(id)arg2;	// IMP=0x00000001001e0490
- (void)_noteServiceFailure;	// IMP=0x00000001001e0148
- (void)_switchToService:(id)arg1;	// IMP=0x00000001001dfec0
- (void)_reconnect;	// IMP=0x00000001001dfabc
- (void)_notifyTimedOut:(CDUnknownBlockType)arg1;	// IMP=0x00000001001dfa0c
- (void)_notifyActive:(_Bool)arg1;	// IMP=0x00000001001df8e0
- (void)loadView;	// IMP=0x00000001001df868
- (void)switchToState:(id)arg1;	// IMP=0x00000001001df7c0
- (void)notifyWhenActive:(CDUnknownBlockType)arg1 withTimeout:(double)arg2;	// IMP=0x00000001001df5f4
- (_Bool)isActive;	// IMP=0x00000001001df55c
- (void)dealloc;	// IMP=0x00000001001df49c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001001df3dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

