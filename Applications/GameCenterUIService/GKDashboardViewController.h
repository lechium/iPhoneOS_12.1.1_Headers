//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKDashboardCollectionViewController.h"

@class GKChallengeDataSource, GKCollectionMultiDataSource, GKDashboardHeaderView, GKGameRecord, NSArray, NSMutableDictionary, NSString;

@interface GKDashboardViewController : GKDashboardCollectionViewController
{
    _Bool _shouldShowPlayForChallenge;	// 8 = 0x8
    _Bool _shouldShowPlayForTurnBasedMatch;	// 9 = 0x9
    _Bool _shouldShowQuitForTurnBasedMatch;	// 10 = 0xa
    long long _viewState;	// 16 = 0x10
    NSString *_leaderboardIdentifier;	// 24 = 0x18
    GKGameRecord *_gameRecord;	// 32 = 0x20
    GKDashboardHeaderView *_headerView;	// 40 = 0x28
    GKCollectionMultiDataSource *_multiDataSource;	// 48 = 0x30
    NSMutableDictionary *_viewStateIndexes;	// 56 = 0x38
    NSArray *_titles;	// 64 = 0x40
    GKChallengeDataSource *_challengeDataSource;	// 72 = 0x48
}

@property(nonatomic) GKChallengeDataSource *challengeDataSource; // @synthesize challengeDataSource=_challengeDataSource;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) NSMutableDictionary *viewStateIndexes; // @synthesize viewStateIndexes=_viewStateIndexes;
@property(retain, nonatomic) GKCollectionMultiDataSource *multiDataSource; // @synthesize multiDataSource=_multiDataSource;
@property(retain, nonatomic) GKDashboardHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property(nonatomic) _Bool shouldShowQuitForTurnBasedMatch; // @synthesize shouldShowQuitForTurnBasedMatch=_shouldShowQuitForTurnBasedMatch;
@property(nonatomic) _Bool shouldShowPlayForTurnBasedMatch; // @synthesize shouldShowPlayForTurnBasedMatch=_shouldShowPlayForTurnBasedMatch;
@property(nonatomic) _Bool shouldShowPlayForChallenge; // @synthesize shouldShowPlayForChallenge=_shouldShowPlayForChallenge;
@property(retain, nonatomic) NSString *leaderboardIdentifier; // @synthesize leaderboardIdentifier=_leaderboardIdentifier;
@property(nonatomic) long long viewState; // @synthesize viewState=_viewState;
- (void)selectedSegmentChanged:(id)arg1;	// IMP=0x000000010002344c
- (void)showLeaderboardVC;	// IMP=0x000000010002331c
@property(nonatomic) long long leaderboardTimeScope;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x0000000100022ec8
- (_Bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x0000000100022ea0
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;	// IMP=0x0000000100022e28
- (void)loadData;	// IMP=0x0000000100022d84
- (void)selectDataSourceAtIndex:(long long)arg1 updateCollectionView:(_Bool)arg2;	// IMP=0x0000000100022bb8
- (void)addDataSource:(id)arg1 withTitle:(id)arg2 forViewState:(long long)arg3;	// IMP=0x0000000100022970
- (void)setupSegmentedControl;	// IMP=0x0000000100022788
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100022688
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100022638
- (void)viewDidLoad;	// IMP=0x00000001000222b8
- (void)dealloc;	// IMP=0x00000001000221f8
- (id)initWithGameRecord:(id)arg1;	// IMP=0x0000000100022080

@end

