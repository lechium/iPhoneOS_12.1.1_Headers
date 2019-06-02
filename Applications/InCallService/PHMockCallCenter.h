//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TUCallCenter.h"

@interface PHMockCallCenter : TUCallCenter
{
    _Bool ambiguous;	// 8 = 0x8
    _Bool addCallAllowed;	// 9 = 0x9
    _Bool _didSwapCalls;	// 10 = 0xa
    _Bool _didGroupCallWithOtherCall;	// 11 = 0xb
    _Bool _didDisconnectCall;	// 12 = 0xc
}

@property(nonatomic) _Bool didDisconnectCall; // @synthesize didDisconnectCall=_didDisconnectCall;
@property(nonatomic) _Bool didGroupCallWithOtherCall; // @synthesize didGroupCallWithOtherCall=_didGroupCallWithOtherCall;
@property(nonatomic) _Bool didSwapCalls; // @synthesize didSwapCalls=_didSwapCalls;
@property(nonatomic, getter=isAddCallAllowed) _Bool addCallAllowed; // @synthesize addCallAllowed;
@property(nonatomic, getter=isAmbiguous) _Bool ambiguous; // @synthesize ambiguous;
- (void)unholdCall:(id)arg1;	// IMP=0x000000010003c104
- (void)holdCall:(id)arg1;	// IMP=0x000000010003c0ec
- (void)disconnectCall:(id)arg1 withReason:(int)arg2;	// IMP=0x000000010003c0dc
- (void)groupCall:(id)arg1 withOtherCall:(id)arg2;	// IMP=0x000000010003c0cc
- (void)swapCalls;	// IMP=0x000000010003c0bc

@end

