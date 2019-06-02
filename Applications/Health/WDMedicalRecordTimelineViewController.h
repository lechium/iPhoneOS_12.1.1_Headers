//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKTableViewController.h"

#import "UISearchControllerDelegate.h"
#import "UISearchResultsUpdating.h"
#import "WDUserActivityResponder.h"

@class HKClinicalAccount, HKMedicalRecordSearchController, NSPredicate, NSString, NSTimer, UISearchController, WDMedicalRecordCategory, WDMedicalRecordDisplayItemProvider, WDProfile;

@interface WDMedicalRecordTimelineViewController : HKTableViewController <UISearchControllerDelegate, UISearchResultsUpdating, WDUserActivityResponder>
{
    _Bool _shouldShowTimelineSource;	// 8 = 0x8
    _Bool _loadingNextPage;	// 9 = 0x9
    _Bool _showSearchBar;	// 10 = 0xa
    _Bool _viewAppeared;	// 11 = 0xb
    WDMedicalRecordDisplayItemProvider *_displayItemProvider;	// 16 = 0x10
    WDProfile *_profile;	// 24 = 0x18
    NSPredicate *_accountPredicate;	// 32 = 0x20
    NSPredicate *_searchPredicate;	// 40 = 0x28
    HKClinicalAccount *_account;	// 48 = 0x30
    WDMedicalRecordCategory *_category;	// 56 = 0x38
    HKMedicalRecordSearchController *_medicalRecordSearchController;	// 64 = 0x40
    UISearchController *_navigationSearchController;	// 72 = 0x48
    NSTimer *_searchThrottleTimer;	// 80 = 0x50
}

@property(retain, nonatomic) NSTimer *searchThrottleTimer; // @synthesize searchThrottleTimer=_searchThrottleTimer;
@property(retain, nonatomic) UISearchController *navigationSearchController; // @synthesize navigationSearchController=_navigationSearchController;
@property(retain, nonatomic) HKMedicalRecordSearchController *medicalRecordSearchController; // @synthesize medicalRecordSearchController=_medicalRecordSearchController;
@property(nonatomic) _Bool viewAppeared; // @synthesize viewAppeared=_viewAppeared;
@property(nonatomic) _Bool showSearchBar; // @synthesize showSearchBar=_showSearchBar;
@property(nonatomic) _Bool loadingNextPage; // @synthesize loadingNextPage=_loadingNextPage;
@property(retain, nonatomic) WDMedicalRecordCategory *category; // @synthesize category=_category;
@property(retain, nonatomic) HKClinicalAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) NSPredicate *searchPredicate; // @synthesize searchPredicate=_searchPredicate;
@property(retain, nonatomic) NSPredicate *accountPredicate; // @synthesize accountPredicate=_accountPredicate;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property(nonatomic) _Bool shouldShowTimelineSource; // @synthesize shouldShowTimelineSource=_shouldShowTimelineSource;
@property(retain, nonatomic) WDMedicalRecordDisplayItemProvider *displayItemProvider; // @synthesize displayItemProvider=_displayItemProvider;
- (void).cxx_destruct;	// IMP=0x000000010014e1b8
- (id)applyTransitionActivity:(id)arg1;	// IMP=0x000000010014dff0
- (void)applyChangeActivity:(id)arg1;	// IMP=0x000000010014dfec
- (void)_updateActivityForViewDidAppear;	// IMP=0x000000010014df2c
- (_Bool)_displayItemShouldBeTappable:(id)arg1;	// IMP=0x000000010014dea0
- (void)_troubleConnecting:(id)arg1;	// IMP=0x000000010014dbcc
- (void)_connectGateway:(id)arg1;	// IMP=0x000000010014db64
- (long long)_adjustedSectionForSection:(long long)arg1;	// IMP=0x000000010014db38
- (id)_adjustedIndexPathForIndexPath:(id)arg1;	// IMP=0x000000010014da98
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000010014d92c
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000010014d894
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010014d484
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010014d3f4
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000010014d340
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000010014d28c
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000010014d160
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000010014d118
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000010014cf78
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010014ce14
- (id)_tableView:(id)arg1 sourceCellForRow:(long long)arg2;	// IMP=0x000000010014cb84
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010014cad8
- (long long)_numberOfRowsInTimelineSectionSource;	// IMP=0x000000010014cab0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010014ca4c
- (_Bool)_shouldShowReconnectCell;	// IMP=0x000000010014c9e8
- (id)_indexPathForReconnectCell;	// IMP=0x000000010014c99c
- (id)_indexPathForSourceCell;	// IMP=0x000000010014c950
- (_Bool)_indexPathIsSourceCell:(id)arg1;	// IMP=0x000000010014c8d0
- (void)_uninstallSearchController;	// IMP=0x000000010014c82c
- (void)_installSearchController;	// IMP=0x000000010014c764
- (void)_removeSearchController;	// IMP=0x000000010014c6fc
- (void)_setupSearchController;	// IMP=0x000000010014c43c
- (void)_searchControllerHasQueryChange:(id)arg1;	// IMP=0x000000010014bfb0
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x000000010014becc
- (void)_postAWDMetricForDetailCategory;	// IMP=0x000000010014bebc
- (void)_postAWDMetricForTimelineCategory;	// IMP=0x000000010014beac
- (void)_postAWDMetricForCategoryType:(int)arg1;	// IMP=0x000000010014bcb8
- (void)_updateTableViewGroups;	// IMP=0x000000010014b984
- (void)_startCollectingData;	// IMP=0x000000010014b830
- (id)_sampleTypesToDisplay;	// IMP=0x000000010014b6f4
- (id)_filterFromCurrentPredicates;	// IMP=0x000000010014b5a4
- (void)_setupDisplayItemProvider;	// IMP=0x000000010014b394
- (void)_assertSearchControllerStatus;	// IMP=0x000000010014b0f0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010014b078
- (void)viewDidLoad;	// IMP=0x000000010014ab94
- (void)dealloc;	// IMP=0x000000010014ab18
- (id)initWithProfile:(id)arg1 category:(id)arg2 showInitialSearchBar:(_Bool)arg3;	// IMP=0x000000010014aa14
- (id)initWithProfile:(id)arg1 account:(id)arg2 showInitialSearchBar:(_Bool)arg3;	// IMP=0x000000010014a894
- (id)initWithProfile:(id)arg1 showInitialSearchBar:(_Bool)arg2;	// IMP=0x000000010014a7fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
