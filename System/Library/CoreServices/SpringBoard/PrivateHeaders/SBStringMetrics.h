//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class NSMutableArray;

@interface SBStringMetrics : NSObject <NSFastEnumeration>
{
    NSMutableArray *_fragments;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001004612d0
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000001004612b8
- (unsigned long long)fragmentCount;	// IMP=0x00000001004612a0
- (id)fragments;	// IMP=0x0000000100461278
- (void)addFragment:(id)arg1;	// IMP=0x0000000100461260
- (id)description;	// IMP=0x00000001004611e0
- (id)init;	// IMP=0x0000000100461160

@end
