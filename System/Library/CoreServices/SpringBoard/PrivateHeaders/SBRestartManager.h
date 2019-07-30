//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSTransaction<SBStartupTransition>, FBSystemService, SBInitialRestartState, SBRestartTransitionRequest, SBStartupTransitionController;

@interface SBRestartManager : NSObject
{
    id <SBRestartManagerDelegate> _delegate;	// 8 = 0x8
    SBInitialRestartState *_initialRestartState;	// 16 = 0x10
    SBStartupTransitionController *_startupController;	// 24 = 0x18
    SBRestartTransitionRequest *_pendingRestartTransitionRequest;	// 32 = 0x20
    _Bool _isShuttingDown;	// 40 = 0x28
    _Bool _isRestartImminent;	// 41 = 0x29
    _Bool _isUserSwitchPending;	// 42 = 0x2a
    FBSystemService *_systemService;	// 48 = 0x30
}

@property(nonatomic, getter=_isUserSwitchPending, setter=_setUserSwitchPending:) _Bool isUserSwitchPending; // @synthesize isUserSwitchPending=_isUserSwitchPending;
@property(readonly, nonatomic) SBRestartTransitionRequest *pendingRestartTransitionRequest; // @synthesize pendingRestartTransitionRequest=_pendingRestartTransitionRequest;
@property(nonatomic) __weak id <SBRestartManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001004be5c0
- (void)___waitForeverTillBackBoarddExits;	// IMP=0x00000001004be53c
- (void)_doRestartForTransition:(int)arg1;	// IMP=0x00000001004be338
- (void)_persistStartupTransitionContextFromRebootContext:(id)arg1;	// IMP=0x00000001004be1f4
- (void)_persistStartupTransitionContextFromRestartRequest:(id)arg1;	// IMP=0x00000001004be048
- (void)_reallyRestartWithTransitionRequest:(id)arg1;	// IMP=0x00000001004bdbe4
- (void)_restartWithTransitionRequest:(id)arg1;	// IMP=0x00000001004bd8d8
- (void)_postShutdownNotification;	// IMP=0x00000001004bd8b0
- (void)_shutdownWithOptions:(unsigned long long)arg1 description:(id)arg2;	// IMP=0x00000001004bd748
- (void)_killAllAppsForPendingExitWithReason:(long long)arg1 description:(id)arg2 expiration:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001004bd42c
- (void)_exitIsImminent;	// IMP=0x00000001004bd3bc
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000001004bd190
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000001004bd13c
- (id)succinctDescriptionBuilder;	// IMP=0x00000001004bd120
- (id)succinctDescription;	// IMP=0x00000001004bd0cc
- (id)description;	// IMP=0x00000001004bd0bc
- (void)restartWithTransitionRequest:(id)arg1;	// IMP=0x00000001004bcf9c
- (void)rebootWithContext:(id)arg1;	// IMP=0x00000001004bcdd4
- (void)rebootForReason:(id)arg1;	// IMP=0x00000001004bcd54
- (void)shutdownForReason:(id)arg1;	// IMP=0x00000001004bcbe0
- (void)initializeAndRunStartupTransition:(CDUnknownBlockType)arg1;	// IMP=0x00000001004bcb94
@property(readonly, nonatomic) BSTransaction<SBStartupTransition> *startupTransition; // @dynamic startupTransition;
@property(readonly, nonatomic, getter=isPendingExit) _Bool pendingExit; // @dynamic pendingExit;
- (id)initWithInitialRestartState:(id)arg1;	// IMP=0x00000001004bca38
- (id)_initWithInitialRestartState:(id)arg1 startupController:(id)arg2 systemService:(id)arg3;	// IMP=0x00000001004bc934

@end

