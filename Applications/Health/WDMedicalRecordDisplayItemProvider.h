//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WDMedicalRecordDaySummaryDelegate.h"

@class NSArray, NSDictionary, NSMapTable, NSMutableArray, NSObject<OS_dispatch_queue>, NSPredicate, WDMedicalRecordPagingContext, WDProfile;

@interface WDMedicalRecordDisplayItemProvider : NSObject <WDMedicalRecordDaySummaryDelegate>
{
    long long _displayItemOptions;	// 8 = 0x8
    NSDictionary *_additionalPredicates;	// 16 = 0x10
    NSPredicate *_filter;	// 24 = 0x18
    WDProfile *_profile;	// 32 = 0x20
    NSMutableArray *_medicalRecordGroups;	// 40 = 0x28
    NSMutableArray *_dateLessGroups;	// 48 = 0x30
    NSArray *_pendingMedicalRecordGroups;	// 56 = 0x38
    NSArray *_pendingDateLessGroups;	// 64 = 0x40
    NSArray *_sampleTypes;	// 72 = 0x48
    NSMapTable *_activeQueries;	// 80 = 0x50
    NSArray *_sortDescriptors;	// 88 = 0x58
    CDUnknownBlockType _updateHandler;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_dataQueryQueue;	// 104 = 0x68
    WDMedicalRecordPagingContext *_pagingContext;	// 112 = 0x70
}

+ (id)unknownRecordCategory;	// IMP=0x00000001001458f8
+ (id)allSupportedSampleTypes;	// IMP=0x000000010014565c
+ (id)allSupportedRecordCategoryTypes;	// IMP=0x000000010014542c
+ (id)supportedRecordCategoriesByCategoryType;	// IMP=0x00000001001451d8
+ (id)allSupportedRecordCategories;	// IMP=0x0000000100144398
@property(retain, nonatomic) WDMedicalRecordPagingContext *pagingContext; // @synthesize pagingContext=_pagingContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueryQueue; // @synthesize dataQueryQueue=_dataQueryQueue;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) NSMapTable *activeQueries; // @synthesize activeQueries=_activeQueries;
@property(retain, nonatomic) NSArray *sampleTypes; // @synthesize sampleTypes=_sampleTypes;
@property(retain, nonatomic) NSArray *pendingDateLessGroups; // @synthesize pendingDateLessGroups=_pendingDateLessGroups;
@property(retain, nonatomic) NSArray *pendingMedicalRecordGroups; // @synthesize pendingMedicalRecordGroups=_pendingMedicalRecordGroups;
@property(retain, nonatomic) NSMutableArray *dateLessGroups; // @synthesize dateLessGroups=_dateLessGroups;
@property(retain, nonatomic) NSMutableArray *medicalRecordGroups; // @synthesize medicalRecordGroups=_medicalRecordGroups;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) NSPredicate *filter; // @synthesize filter=_filter;
@property(readonly, copy, nonatomic) NSDictionary *additionalPredicates; // @synthesize additionalPredicates=_additionalPredicates;
@property(nonatomic) long long displayItemOptions; // @synthesize displayItemOptions=_displayItemOptions;
- (void).cxx_destruct;	// IMP=0x0000000100145b58
- (void)daySummaryHasDisplayItemUpdate:(id)arg1;	// IMP=0x0000000100144198
- (id)_sortedDisplayItemGroupWithDateDisplay:(id)arg1 sourceDaySummaryMapping:(id)arg2;	// IMP=0x0000000100143d24
- (void)_displayItemGroupsForSummaryOfRecords:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010014339c
- (void)_queryForNextBatchOfData;	// IMP=0x0000000100141dcc
- (void)_commitPendingGroupsAndCallUpdateHandler;	// IMP=0x00000001001419c4
- (id)_displayItemGroupAtIndex:(long long)arg1;	// IMP=0x00000001001418c4
- (_Bool)_queue_currentDisplayItemProviderShouldPage;	// IMP=0x0000000100141664
- (void)_queue_pagingPredicateShouldPage:(_Bool)arg1 forCurrentPage:(CDUnknownBlockType)arg2;	// IMP=0x000000010014117c
- (id)_queue_synthesizedPredicatesForMedicalType:(id)arg1;	// IMP=0x0000000100141050
- (void)_populateExpectedRecordCountsIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001405b8
- (void)_resetPagingInformation;	// IMP=0x00000001001403c0
- (id)subtitleForGroupAtIndex:(long long)arg1;	// IMP=0x0000000100140350
- (id)titleForGroupAtIndex:(long long)arg1;	// IMP=0x00000001001402e0
- (id)displayItemForIndexPath:(id)arg1;	// IMP=0x0000000100140228
- (long long)numberOfDisplayItemsForGroupAtIndex:(long long)arg1;	// IMP=0x00000001001401c0
- (long long)numberOfGroups;	// IMP=0x00000001001400e4
- (void)requestDataOfNextPage;	// IMP=0x000000010014006c
- (void)stopCollectingData;	// IMP=0x000000010014005c
- (void)startCollectingDataWithUpdateHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100140004
- (id)initWithProfile:(id)arg1 displayItemOptions:(long long)arg2 sampleTypes:(id)arg3 filter:(id)arg4 additionalPredicates:(id)arg5 sortDescriptors:(id)arg6;	// IMP=0x000000010013fae4

@end
