//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKCollectionDataSource.h"

@class GKTurnBasedMatch;

@interface GKDashboardTurnDetailDataSource : GKCollectionDataSource
{
    GKTurnBasedMatch *_match;	// 8 = 0x8
}

@property(retain, nonatomic) GKTurnBasedMatch *match; // @synthesize match=_match;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010002f58c
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010002f3c0
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000010002f3b8
- (id)sectionHeaderText;	// IMP=0x000000010002f340
- (id)itemForIndexPath:(id)arg1;	// IMP=0x000000010002f290
- (double)preferredCollectionHeight;	// IMP=0x000000010002f27c
- (long long)itemCount;	// IMP=0x000000010002f24c
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010002f230
- (void)setupCollectionView:(id)arg1;	// IMP=0x000000010002f1b8
- (void)dealloc;	// IMP=0x000000010002f160
- (id)initWithMatch:(id)arg1;	// IMP=0x000000010002f0ec

@end

