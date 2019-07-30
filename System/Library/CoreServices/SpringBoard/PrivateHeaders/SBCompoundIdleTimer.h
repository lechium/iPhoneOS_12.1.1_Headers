//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBIdleTimer.h"
#import "SBIdleTimerDelegate.h"

@class NSArray, NSString;

@interface SBCompoundIdleTimer : NSObject <SBIdleTimerDelegate, SBIdleTimer>
{
    id <SBIdleTimerDelegate> _delegate;	// 8 = 0x8
    NSArray *_timers;	// 16 = 0x10
    unsigned long long _currentTimerIdx;	// 24 = 0x18
}

@property(nonatomic) __weak id <SBIdleTimerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010026e384
- (_Bool)isTimerCurrent:(id)arg1;	// IMP=0x000000010026e2cc
- (void)idleTimerDidWarn:(id)arg1;	// IMP=0x000000010026e234
- (void)idleTimerDidReceiveUserEvent:(id)arg1;	// IMP=0x000000010026e19c
- (void)idleTimerDidExpire:(id)arg1;	// IMP=0x000000010026dfcc
- (void)idleTimerDidRefresh:(id)arg1;	// IMP=0x000000010026df38
- (id)idleTimerForExtension;	// IMP=0x000000010026dd28
- (_Bool)isEqualToTimer:(id)arg1;	// IMP=0x000000010026dbc8
- (void)reset;	// IMP=0x000000010026da8c
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000010026da80
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000010026da2c
- (id)succinctDescriptionBuilder;	// IMP=0x000000010026d878
- (id)succinctDescription;	// IMP=0x000000010026d824
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010026d7dc
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010026d7c0
- (id)initWithTimers:(id)arg1 copy:(_Bool)arg2;	// IMP=0x000000010026d618
- (id)initWithTimers:(id)arg1;	// IMP=0x000000010026d608
- (id)init;	// IMP=0x000000010026d5f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

