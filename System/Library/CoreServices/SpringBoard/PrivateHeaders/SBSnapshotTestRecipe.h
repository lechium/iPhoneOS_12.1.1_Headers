//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBTestRecipe.h"

@class NSString;

@interface SBSnapshotTestRecipe : NSObject <SBTestRecipe>
{
}

+ (id)title;	// IMP=0x00000001001a8e5c
- (void)_sendRequestWithType:(unsigned long long)arg1;	// IMP=0x00000001001a8ea8
- (void)handleVolumeDecrease;	// IMP=0x00000001001a8e98
- (void)handleVolumeIncrease;	// IMP=0x00000001001a8e88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

