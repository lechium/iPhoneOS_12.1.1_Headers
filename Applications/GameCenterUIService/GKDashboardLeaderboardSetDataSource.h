//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKCollectionDataSource.h"

@class GKGameRecord, NSArray, NSDictionary;

@interface GKDashboardLeaderboardSetDataSource : GKCollectionDataSource
{
    NSDictionary *_leaderboardSetAssetNames;	// 8 = 0x8
    NSDictionary *_leaderboardAssetNames;	// 16 = 0x10
    GKGameRecord *_gameRecord;	// 24 = 0x18
    NSArray *_leaderboardSets;	// 32 = 0x20
}

@property(retain, nonatomic) NSArray *leaderboardSets; // @synthesize leaderboardSets=_leaderboardSets;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property(retain, nonatomic) NSDictionary *leaderboardAssetNames; // @synthesize leaderboardAssetNames=_leaderboardAssetNames;
@property(retain, nonatomic) NSDictionary *leaderboardSetAssetNames; // @synthesize leaderboardSetAssetNames=_leaderboardSetAssetNames;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010002716c
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100027138
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000100027128
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100026f48
- (id)sectionHeaderText;	// IMP=0x0000000100026ea8
- (id)itemForIndexPath:(id)arg1;	// IMP=0x0000000100026e08
- (double)preferredCollectionHeight;	// IMP=0x0000000100026dfc
- (long long)itemCount;	// IMP=0x0000000100026de4
- (void)removeLeaderboardSetsWithoutImages;	// IMP=0x0000000100026c48
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000267f8
- (void)setupCollectionView:(id)arg1;	// IMP=0x0000000100026760
- (void)dealloc;	// IMP=0x00000001000266c8
- (id)initWithGameRecord:(id)arg1;	// IMP=0x0000000100026654

@end
