//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "NSCopying.h"
#import "SBDashBoardBehaviorProviding.h"

@class NSString;

@interface SBDashBoardBehavior : NSObject <BSDescriptionProviding, SBDashBoardBehaviorProviding, NSCopying>
{
    long long _idleTimerDuration;	// 8 = 0x8
    long long _idleTimerMode;	// 16 = 0x10
    long long _idleWarnMode;	// 24 = 0x18
    long long _scrollingStrategy;	// 32 = 0x20
    unsigned long long _restrictedCapabilities;	// 40 = 0x28
    long long _notificationBehavior;	// 48 = 0x30
}

+ (id)behaviorForProvider:(id)arg1;	// IMP=0x00000001001f4280
+ (id)behavior;	// IMP=0x00000001001f4258
@property(nonatomic) unsigned long long restrictedCapabilities; // @synthesize restrictedCapabilities=_restrictedCapabilities;
@property(nonatomic) long long notificationBehavior; // @synthesize notificationBehavior=_notificationBehavior;
@property(nonatomic) long long scrollingStrategy; // @synthesize scrollingStrategy=_scrollingStrategy;
@property(nonatomic) long long idleWarnMode; // @synthesize idleWarnMode=_idleWarnMode;
@property(nonatomic) long long idleTimerMode; // @synthesize idleTimerMode=_idleTimerMode;
@property(nonatomic) long long idleTimerDuration; // @synthesize idleTimerDuration=_idleTimerDuration;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000001001f49e8
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000001001f4994
- (id)succinctDescriptionBuilder;	// IMP=0x00000001001f47a8
- (id)succinctDescription;	// IMP=0x00000001001f4754
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001f4718
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001f46f4
- (void)removeRestrictedCapabilities:(unsigned long long)arg1;	// IMP=0x00000001001f46dc
- (void)addRestrictedCapabilities:(unsigned long long)arg1;	// IMP=0x00000001001f46c4
- (_Bool)areRestrictedCapabilities:(unsigned long long)arg1;	// IMP=0x00000001001f4690
- (void)unionBehavior:(id)arg1;	// IMP=0x00000001001f455c
- (void)reset;	// IMP=0x00000001001f4510
- (_Bool)isEqualToBehavior:(id)arg1;	// IMP=0x00000001001f43b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

