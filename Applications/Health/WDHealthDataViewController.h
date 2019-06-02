//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKTableViewController.h"

#import "HKScrollPerformanceTestable.h"
#import "HKTabBarTapObserver.h"
#import "UISearchControllerDelegate.h"
#import "UISearchResultsUpdating.h"
#import "WDHealthDataTopLevelCategoryTableViewCellDelegate.h"
#import "WDUserActivityResponder.h"

@class AVPlayer, HKBadge, HKDisplayCategory, NSArray, NSDate, NSMutableArray, NSString, UIColor, UIFont, UIImage, UISearchBar, WDHealthDataTopLevelCategoryTableViewCell, WDHealthDataVideoTableViewCell, WDProfile;

@interface WDHealthDataViewController : HKTableViewController <UISearchResultsUpdating, UISearchControllerDelegate, WDHealthDataTopLevelCategoryTableViewCellDelegate, HKTabBarTapObserver, WDUserActivityResponder, HKScrollPerformanceTestable>
{
    WDProfile *_profile;	// 8 = 0x8
    NSString *_searchString;	// 16 = 0x10
    NSMutableArray *_searchResults;	// 24 = 0x18
    UIImage *_allIcon;	// 32 = 0x20
    UISearchBar *_searchBar;	// 40 = 0x28
    UIColor *_healthKeyColor;	// 48 = 0x30
    WDHealthDataTopLevelCategoryTableViewCell *_topLevelCategoryCell;	// 56 = 0x38
    WDHealthDataVideoTableViewCell *_videoTableViewCell;	// 64 = 0x40
    AVPlayer *_player;	// 72 = 0x48
    HKDisplayCategory *_displayedCategory;	// 80 = 0x50
    NSDate *_initialStartDate;	// 88 = 0x58
    NSArray *_prearrangedTopLevelDataCategories;	// 96 = 0x60
    NSArray *_sortedSecondaryDataCategories;	// 104 = 0x68
    UIFont *_bodyFont;	// 112 = 0x70
    HKBadge *_healthRecordsBadge;	// 120 = 0x78
}

+ (id)activitiesForLevelLocators:(id)arg1 startAt:(unsigned long long)arg2;	// IMP=0x0000000100104828
@property(copy, nonatomic) HKBadge *healthRecordsBadge; // @synthesize healthRecordsBadge=_healthRecordsBadge;
@property(retain, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property(copy, nonatomic) NSArray *sortedSecondaryDataCategories; // @synthesize sortedSecondaryDataCategories=_sortedSecondaryDataCategories;
@property(copy, nonatomic) NSArray *prearrangedTopLevelDataCategories; // @synthesize prearrangedTopLevelDataCategories=_prearrangedTopLevelDataCategories;
@property(retain, nonatomic) NSDate *initialStartDate; // @synthesize initialStartDate=_initialStartDate;
@property(readonly, nonatomic) HKDisplayCategory *displayedCategory; // @synthesize displayedCategory=_displayedCategory;
- (void).cxx_destruct;	// IMP=0x0000000100104d4c
- (void)testScrollPerformanceWithTestName:(id)arg1 iterations:(int)arg2 delta:(int)arg3 options:(id)arg4;	// IMP=0x00000001001049c8
- (id)_handlePushDisplayTypeActivity:(id)arg1;	// IMP=0x00000001001046a8
- (id)_handlePushCategoryActivity:(id)arg1;	// IMP=0x0000000100104574
- (id)applyTransitionActivity:(id)arg1;	// IMP=0x000000010010448c
- (void)applyChangeActivity:(id)arg1;	// IMP=0x0000000100104488
- (void)_addActivityForDisplayType:(id)arg1 newResponder:(id)arg2;	// IMP=0x0000000100104324
- (void)_addActivityForDisplayCategory:(id)arg1 newResponder:(id)arg2;	// IMP=0x00000001001041c4
- (void)_updateActivityForViewDidAppear;	// IMP=0x0000000100104134
- (id)uniqueUserActivityType;	// IMP=0x0000000100104108
- (void)didChangeToAnotherTab;	// IMP=0x0000000100104024
- (void)topLevelCategoryCell:(id)arg1 showHealthDataCategory:(id)arg2;	// IMP=0x0000000100103ff8
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x0000000100103468
- (_Bool)_filterDisplayTypeForSearching:(id)arg1;	// IMP=0x0000000100103418
- (void)willDismissSearchController:(id)arg1;	// IMP=0x00000001001033a4
- (id)_pushDisplayCategoryViewControllerForDisplayCategory:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100103280
- (id)_pushDisplayCategoryViewControllerWithDisplayTypes:(id)arg1 title:(id)arg2 showListIcon:(_Bool)arg3 category:(id)arg4 animated:(_Bool)arg5;	// IMP=0x000000010010310c
- (id)_viewControllerForCategory:(id)arg1 displayTypes:(id)arg2 title:(id)arg3;	// IMP=0x0000000100102e50
- (id)_pushDisplayTypeDetailViewControllerForDisplayType:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100102d30
- (void)_presentProfileViewController;	// IMP=0x0000000100102cc4
- (id)_indexPathForCategory:(id)arg1;	// IMP=0x0000000100102afc
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100102904
- (void)_postAWDMetricForTappingIntoHealthRecords;	// IMP=0x00000001001028a4
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0000000100102858
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000001001026c8
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000001001025e8
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000001001025d0
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000001001025c4
- (id)_videoTableViewCell;	// IMP=0x00000001001024e8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100102050
- (id)tableView:(id)arg1 searchCellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100101b78
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100101a80
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100101a4c
@property(readonly, nonatomic, getter=shouldShowSearchResults) _Bool showSearchResults;
- (id)_categoryTitleForDisplayCategory:(id)arg1;	// IMP=0x0000000100101968
- (id)listIconForDisplayCategory:(id)arg1;	// IMP=0x00000001001018b0
- (id)_badgeForDisplayCategory:(id)arg1;	// IMP=0x000000010010185c
- (_Bool)_shouldShowHealthRecords;	// IMP=0x00000001001017e0
- (id)_createSortedSecondaryDataCategories;	// IMP=0x00000001001014f4
- (id)_createPrearrangedTopLevelDataCategories;	// IMP=0x0000000100101304
- (id)_prearrangedTopLevelDisplayCategoryIdentifiers;	// IMP=0x00000001001012f0
- (void)_updateHealthRecordsBadge;	// IMP=0x0000000100100e58
- (void)_registerForBadgesDidUpdateNotification;	// IMP=0x0000000100100df0
- (id)_findCategoryViewController;	// IMP=0x0000000100100cdc
- (void)_replaceGatewayAccount:(id)arg1 withCredentialPersistentID:(id)arg2;	// IMP=0x0000000100100814
- (void)_reconnectGatewayAccount:(id)arg1;	// IMP=0x0000000100100498
- (void)askToReplaceAccountIniCloud:(id)arg1 withCredentialPersistentID:(id)arg2;	// IMP=0x00000001000ffe34
- (void)askToReplaceAccount:(id)arg1 withCredentialPersistentID:(id)arg2;	// IMP=0x00000001000ff990
- (void)playButtonTapped:(id)arg1;	// IMP=0x00000001000ff528
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000ff454
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000ff340
- (void)setupSearchResultsController;	// IMP=0x00000001000ff1b0
- (void)viewDidLoad;	// IMP=0x00000001000fecb0
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000001000fec54
- (void)_localeDidChange:(id)arg1;	// IMP=0x00000001000febd8
- (void)_displayTypeStringsChanged:(id)arg1;	// IMP=0x00000001000feb98
- (void)dealloc;	// IMP=0x00000001000feb20
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000fea88
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000fea54
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000001000fe9bc
- (id)initWithProfile:(id)arg1;	// IMP=0x00000001000fe640

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
