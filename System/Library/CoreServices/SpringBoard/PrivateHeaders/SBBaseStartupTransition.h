//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBTransaction.h"

#import "SBStartupTransition.h"

@class SBMainWorkspace, SBStartupTransitionContext;

@interface SBBaseStartupTransition : SBTransaction <SBStartupTransition>
{
    unsigned long long _destination;	// 8 = 0x8
    SBStartupTransitionContext *_context;	// 16 = 0x10
    SBMainWorkspace *_mainWorkspace;	// 24 = 0x18
}

@property(readonly, nonatomic) unsigned long long destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) SBStartupTransitionContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) SBMainWorkspace *mainWorkspace; // @synthesize mainWorkspace=_mainWorkspace;
- (void).cxx_destruct;	// IMP=0x00000001001a5cd4
- (void)_begin;	// IMP=0x00000001001a5b4c
- (void)performTransitionWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a5b38
- (id)initWithDestination:(unsigned long long)arg1 context:(id)arg2;	// IMP=0x00000001001a5a68

@end

