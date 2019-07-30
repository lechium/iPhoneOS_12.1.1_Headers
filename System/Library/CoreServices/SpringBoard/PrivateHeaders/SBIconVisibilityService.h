//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSSet, SBIconModel;

@interface SBIconVisibilityService : NSObject
{
    SBIconModel *_iconModel;	// 8 = 0x8
    NSLock *_iconStateDisplayIdentifiersLock;	// 16 = 0x10
    NSSet *_iconStateDisplayIdentifiers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001002771f8
- (void)_visibleIdentifiersChanged:(id)arg1;	// IMP=0x00000001002767e0
- (id)iconStateDisplayIdentifiers;	// IMP=0x000000010027677c
- (void)dealloc;	// IMP=0x0000000100276700
- (id)initWithIconModel:(id)arg1;	// IMP=0x000000010027653c

@end

