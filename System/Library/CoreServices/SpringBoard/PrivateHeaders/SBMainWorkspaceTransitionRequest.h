//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWorkspaceTransitionRequest.h"

@class SBMainWorkspace;

@interface SBMainWorkspaceTransitionRequest : SBWorkspaceTransitionRequest
{
    long long _source;	// 8 = 0x8
    CDUnknownBlockType _transactionProvider;	// 16 = 0x10
}

@property(copy, nonatomic) CDUnknownBlockType transactionProvider; // @synthesize transactionProvider=_transactionProvider;
@property(nonatomic) long long source; // @synthesize source=_source;
- (void).cxx_destruct;	// IMP=0x00000001004a6114
- (_Bool)isMainWorkspaceTransitionRequest;	// IMP=0x00000001004a60d0
- (id)succinctDescriptionBuilder;	// IMP=0x00000001004a6038
- (void)declineWithReason:(id)arg1;	// IMP=0x00000001004a5fd0
- (id)initWithWorkspace:(id)arg1 display:(id)arg2;	// IMP=0x00000001004a5ecc
- (id)initWithDisplay:(id)arg1;	// IMP=0x00000001004a5de4

// Remaining properties
@property(readonly, nonatomic) SBMainWorkspace *workspace; // @dynamic workspace;

@end

