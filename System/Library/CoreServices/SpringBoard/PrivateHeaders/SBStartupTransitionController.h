//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "BSTransactionObserver.h"

@class BSTransaction<SBStartupTransition>, BSTransactionBlockObserver, NSSet, NSString, SBInitialRestartState, SBStartupTransitionContextPersistence, SBStartupTransitionFactory;

@interface SBStartupTransitionController : NSObject <BSTransactionObserver, BSDescriptionProviding>
{
    SBInitialRestartState *_initialRestartState;	// 8 = 0x8
    SBStartupTransitionContextPersistence *_transitionContextPersistence;	// 16 = 0x10
    SBStartupTransitionFactory *_transitionFactory;	// 24 = 0x18
    BSTransaction<SBStartupTransition> *_transition;	// 32 = 0x20
    BSTransactionBlockObserver *_transitionObserver;	// 40 = 0x28
    _Bool _ranOnce;	// 48 = 0x30
    NSSet *_renderOverlayDismissActions;	// 56 = 0x38
}

@property(retain, nonatomic, getter=_transitionFactory, setter=_setTransitionFactory:) SBStartupTransitionFactory *transitionFactory; // @synthesize transitionFactory=_transitionFactory;
@property(retain, nonatomic, getter=_transitionContextPersistence, setter=_setTransitionContextPersistence:) SBStartupTransitionContextPersistence *transitionContextPersistence; // @synthesize transitionContextPersistence=_transitionContextPersistence;
@property(readonly, nonatomic) BSTransaction<SBStartupTransition> *startupTransition; // @synthesize startupTransition=_transition;
- (void).cxx_destruct;	// IMP=0x00000001002244a0
- (void)transactionDidComplete:(id)arg1;	// IMP=0x0000000100223e84
- (void)transactionDidBegin:(id)arg1;	// IMP=0x0000000100223cc4
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100223b40
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100223aec
- (id)succinctDescriptionBuilder;	// IMP=0x0000000100223ad0
- (id)succinctDescription;	// IMP=0x0000000100223a7c
@property(readonly, copy) NSString *description;
- (void)_saveContextFromTransitionContext:(id)arg1;	// IMP=0x0000000100223a54
- (void)initializeAndRunStartupTransition:(CDUnknownBlockType)arg1;	// IMP=0x00000001002233e4
- (id)initWithInitialRestartState:(id)arg1;	// IMP=0x00000001002231c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

