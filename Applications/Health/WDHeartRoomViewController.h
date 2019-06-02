//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDHealthDataCategoryViewController.h"

#import "HKDisplayTypeContextViewDelegate.h"
#import "WDInteractiveChartViewObserver.h"

@class HKDisplayType, HKHeartRateQueryUtility, NSArray, NSDate, NSDateInterval, NSString, NSUUID;

@interface WDHeartRoomViewController : WDHealthDataCategoryViewController <HKDisplayTypeContextViewDelegate, WDInteractiveChartViewObserver>
{
    HKDisplayType *_preferredSelectedDisplayType;	// 8 = 0x8
    NSArray *_heartRateContextResults;	// 16 = 0x10
    NSArray *_heartRateContextItems;	// 24 = 0x18
    HKHeartRateQueryUtility *_heartRateQueryUtility;	// 32 = 0x20
    NSUUID *_heartRateQueryUUID;	// 40 = 0x28
    long long _currentHeartChartTimeScope;	// 48 = 0x30
    NSDateInterval *_currentHeartChartDateInterval;	// 56 = 0x38
    long long _currentSelectedContextIndex;	// 64 = 0x40
    NSDate *_displayDate;	// 72 = 0x48
}

@property(copy, nonatomic) NSDate *displayDate; // @synthesize displayDate=_displayDate;
@property(nonatomic) long long currentSelectedContextIndex; // @synthesize currentSelectedContextIndex=_currentSelectedContextIndex;
@property(copy, nonatomic) NSDateInterval *currentHeartChartDateInterval; // @synthesize currentHeartChartDateInterval=_currentHeartChartDateInterval;
@property(nonatomic) long long currentHeartChartTimeScope; // @synthesize currentHeartChartTimeScope=_currentHeartChartTimeScope;
@property(copy, nonatomic) NSUUID *heartRateQueryUUID; // @synthesize heartRateQueryUUID=_heartRateQueryUUID;
@property(retain, nonatomic) HKHeartRateQueryUtility *heartRateQueryUtility; // @synthesize heartRateQueryUtility=_heartRateQueryUtility;
@property(retain, nonatomic) NSArray *heartRateContextItems; // @synthesize heartRateContextItems=_heartRateContextItems;
@property(retain, nonatomic) NSArray *heartRateContextResults; // @synthesize heartRateContextResults=_heartRateContextResults;
@property(retain, nonatomic) HKDisplayType *preferredSelectedDisplayType; // @synthesize preferredSelectedDisplayType=_preferredSelectedDisplayType;
- (void).cxx_destruct;	// IMP=0x00000001001514d4
- (void)sampleTypeDateRangeController:(id)arg1 didUpdateDateRanges:(struct NSDictionary *)arg2;	// IMP=0x000000010015100c
- (void)didUpdateVisibleValueRange:(id)arg1 changeContext:(long long)arg2;	// IMP=0x0000000100150e10
- (void)didUpdateFromDateZoom:(long long)arg1 toDateZoom:(long long)arg2 newVisibleRange:(id)arg3;	// IMP=0x0000000100150c40
- (void)contextView:(id)arg1 didTapOnInfoButtonAtIndex:(long long)arg2;	// IMP=0x0000000100150a2c
- (void)contextView:(id)arg1 didSelectItemAtIndex:(long long)arg2;	// IMP=0x00000001001509cc
- (void)pushControllerForSessionType:(long long)arg1 title:(id)arg2;	// IMP=0x000000010015087c
- (id)dateStringForContextResult:(id)arg1;	// IMP=0x000000010015052c
- (_Bool)infoButtonHiddenForTimeScope:(long long)arg1 contextResult:(id)arg2;	// IMP=0x0000000100150424
- (id)valueForDisplayTypeContextResult:(id)arg1;	// IMP=0x000000010015006c
- (id)titleForDisplayTypeContextResult:(id)arg1;	// IMP=0x000000010014ff30
- (void)updateChartForCurrentlySelectedOverlay;	// IMP=0x000000010014fc7c
- (id)contextItemsFromDisplayTypeContextResults:(id)arg1;	// IMP=0x000000010014f964
- (void)fetchContextItemsIfNeededWithDateInterval:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010014f37c
- (id)_allContextSampleTypes;	// IMP=0x000000010014f1f4
- (id)_chartedHeartRateTypes;	// IMP=0x000000010014f0d8
- (id)_displayTypeForContext:(long long)arg1;	// IMP=0x000000010014f00c
- (void)selectContextItemAtIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000010014ef34
- (void)setupHeartChartViewController;	// IMP=0x000000010014eda4
- (_Bool)_shouldShowChartSection;	// IMP=0x000000010014ebe0
- (void)applyPreferredDisplayType;	// IMP=0x000000010014ea74
- (void)_showChartRowIfNecessary;	// IMP=0x000000010014e98c
- (void)viewDidLoad;	// IMP=0x000000010014e904
@property(readonly, nonatomic) NSArray *defaultHeartRateContextResults;
@property(readonly, copy) NSString *description;
- (id)initWithProfile:(id)arg1 displayDate:(id)arg2;	// IMP=0x000000010014e2c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

