//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BuddyPasscodeCacheManager : NSObject
{
    int _stashedFd;	// 8 = 0x8
    _Bool _retrievable;	// 12 = 0xc
    _Bool _isCached;	// 13 = 0xd
}

+ (id)sharedManager;	// IMP=0x00000001000a2648
@property _Bool isCached; // @synthesize isCached=_isCached;
- (id)cachedPasscode;	// IMP=0x00000001000a329c
- (_Bool)storePasscode:(id)arg1;	// IMP=0x00000001000a2a54
- (void)uncachePasscode;	// IMP=0x00000001000a28c8
- (void)cachePasscode:(id)arg1 retrievable:(_Bool)arg2;	// IMP=0x00000001000a26f8
- (void)cachePasscode:(id)arg1;	// IMP=0x00000001000a26e8
- (id)init;	// IMP=0x00000001000a26a0

@end
