//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBIdleTimer.h"
#import "SBUserEventInterfaceObserver.h"

@class NSString, SBUserEventInterface;

@interface SBManualIdleTimer : NSObject <SBUserEventInterfaceObserver, SBIdleTimer>
{
    id <SBIdleTimerDelegate> _delegate;	// 8 = 0x8
    SBUserEventInterface *_userEventTimer;	// 16 = 0x10
    double _interval;	// 24 = 0x18
}

@property(nonatomic) __weak id <SBIdleTimerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010045a488
- (id)idleTimerForExtension;	// IMP=0x000000010045a3f8
- (_Bool)isEqualToTimer:(id)arg1;	// IMP=0x000000010045a208
- (void)reset;	// IMP=0x000000010045a174
- (void)userEventTimerPresenceTriggered:(id)arg1;	// IMP=0x000000010045a10c
- (void)userEventTimerPresenceExpired:(id)arg1;	// IMP=0x000000010045a0a4
- (void)userEventTimerUserUnidled:(id)arg1;	// IMP=0x000000010045a0a0
- (void)userEventTimerUserIdled:(id)arg1;	// IMP=0x000000010045a09c
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000010045a090
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000010045a03c
- (id)succinctDescriptionBuilder;	// IMP=0x0000000100459fcc
- (id)succinctDescription;	// IMP=0x0000000100459f78
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100459f24
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100459f08
- (id)initWithInterval:(double)arg1 userEventInterface:(id)arg2;	// IMP=0x0000000100459e64
- (id)initWithInterval:(double)arg1;	// IMP=0x0000000100459df4
- (id)init;	// IMP=0x0000000100459de4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

