//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSProcessAssertion, NSString;

@interface SBBackgroundFetchTask : NSObject
{
    _Bool _finished;	// 8 = 0x8
    int _sequenceNumber;	// 12 = 0xc
    BKSProcessAssertion *_assertion;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    NSString *_bundleID;	// 32 = 0x20
    unsigned long long _trigger;	// 40 = 0x28
}

@property(readonly) _Bool finished; // @synthesize finished=_finished;
@property(readonly) int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly) unsigned long long trigger; // @synthesize trigger=_trigger;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) BKSProcessAssertion *assertion; // @synthesize assertion=_assertion;
- (void).cxx_destruct;	// IMP=0x000000010058edcc
- (id)description;	// IMP=0x000000010058eb68
- (void)dealloc;	// IMP=0x000000010058eadc
- (void)_fireCompletionHandlerWithResult:(unsigned long long)arg1;	// IMP=0x000000010058e914
- (void)finishWithResult:(unsigned long long)arg1;	// IMP=0x000000010058e88c
- (id)initForApplication:(id)arg1 trigger:(unsigned long long)arg2 sequenceNumber:(int)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x000000010058ddb4

@end

