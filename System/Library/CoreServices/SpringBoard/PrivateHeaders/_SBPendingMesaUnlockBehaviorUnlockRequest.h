//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBAuthenticationFeedback;

@interface _SBPendingMesaUnlockBehaviorUnlockRequest : NSObject
{
    id <SBMesaUnlockBehavior> _behavior;	// 8 = 0x8
    id _request;	// 16 = 0x10
    SBAuthenticationFeedback *_feedback;	// 24 = 0x18
}

@property(readonly, nonatomic) SBAuthenticationFeedback *feedback; // @synthesize feedback=_feedback;
@property(readonly, nonatomic) id request; // @synthesize request=_request;
@property(readonly, nonatomic) id <SBMesaUnlockBehavior> behavior; // @synthesize behavior=_behavior;
- (void).cxx_destruct;	// IMP=0x00000001002df3d0
- (id)initWithBehavior:(id)arg1 request:(id)arg2 feedback:(id)arg3;	// IMP=0x00000001002df2b0

@end
