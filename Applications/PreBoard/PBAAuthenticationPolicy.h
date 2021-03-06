//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBFAuthenticationPolicy.h"

@class NSString;

@interface PBAAuthenticationPolicy : NSObject <SBFAuthenticationPolicy>
{
    id <PBAAuthenticationPolicyDelegate> _delegate;	// 8 = 0x8
}

@property(nonatomic) __weak id <PBAAuthenticationPolicyDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100008528
- (void)passcodeAuthenticationFailedWithError:(id)arg1;	// IMP=0x000000010000843c
- (void)wipeDeviceWithReason:(id)arg1;	// IMP=0x00000001000083c0
- (_Bool)usesSecureMode;	// IMP=0x00000001000083b8
- (_Bool)shouldClearBlockStateOnSync;	// IMP=0x00000001000083b0
- (_Bool)allowAuthenticationRevocation;	// IMP=0x00000001000083a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

