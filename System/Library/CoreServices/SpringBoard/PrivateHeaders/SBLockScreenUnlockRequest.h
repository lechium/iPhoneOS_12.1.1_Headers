//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class FBSProcessHandle, NSString;

@interface SBLockScreenUnlockRequest : NSObject <NSCopying>
{
    int _source;	// 8 = 0x8
    int _intent;	// 12 = 0xc
    NSString *_name;	// 16 = 0x10
    FBSProcessHandle *_process;	// 24 = 0x18
}

@property(retain, nonatomic) FBSProcessHandle *process; // @synthesize process=_process;
@property(nonatomic) int intent; // @synthesize intent=_intent;
@property(nonatomic) int source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;	// IMP=0x000000010033b470
- (unsigned long long)hash;	// IMP=0x000000010033b2dc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010033afa0
- (id)description;	// IMP=0x000000010033ae24
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010033ad1c

@end

