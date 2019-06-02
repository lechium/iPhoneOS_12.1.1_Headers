//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKTableViewController.h"

#import "HKSwitchTableViewCellDelegate.h"
#import "WDFavoriteDisplayTypesControllerObserver.h"
#import "WDUserActivityResponder.h"

@class HKDisplayType, NSString, WDProfile;

@interface WDHeartEventOverviewViewController : HKTableViewController <HKSwitchTableViewCellDelegate, WDFavoriteDisplayTypesControllerObserver, WDUserActivityResponder>
{
    HKDisplayType *_displayType;	// 8 = 0x8
    WDProfile *_profile;	// 16 = 0x10
    id <WDDataListViewControllerDataProvider> _dataProvider;	// 24 = 0x18
    long long _visibleSampleCount;	// 32 = 0x20
    long long _totalSampleCount;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000ad088
- (void)switchCellValueChanged:(id)arg1 value:(_Bool)arg2;	// IMP=0x00000001000ad01c
- (void)_addActivityForAction:(long long)arg1 newResponder:(id)arg2;	// IMP=0x00000001000acee4
- (id)applyTransitionActivity:(id)arg1;	// IMP=0x00000001000ace58
- (void)applyChangeActivity:(id)arg1;	// IMP=0x00000001000ace54
- (void)_updateActivityForViewDidAppear;	// IMP=0x00000001000acd98
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000001000acd70
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000acce0
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000001000acca4
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000001000acc64
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000acb40
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001000acb10
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001000acb08
- (_Bool)_doesActiveWatchSupportHeartRateMotionContexts;	// IMP=0x00000001000acaf4
- (void)_recomputeTotalSampleCount;	// IMP=0x00000001000ac740
- (id)_pushShowAllViewController;	// IMP=0x00000001000ac628
- (void)_pushSampleDetailViewControllerForIndexPath:(id)arg1;	// IMP=0x00000001000ac5ac
- (id)_cellForDescription;	// IMP=0x00000001000ac538
- (_Bool)_isDisplayTypeFavorited;	// IMP=0x00000001000ac4d0
- (id)_cellForFavoriteSwitch;	// IMP=0x00000001000ac3b8
- (id)_cellForShowAll;	// IMP=0x00000001000ac1a4
- (id)_cellForSampleAtIndexPath:(id)arg1;	// IMP=0x00000001000ac0c0
- (void)_reloadAllData;	// IMP=0x00000001000ac034
- (id)_heartEventType;	// IMP=0x00000001000abff4
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000abfa0
- (void)viewDidLoad;	// IMP=0x00000001000abd08
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;	// IMP=0x00000001000abbac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

