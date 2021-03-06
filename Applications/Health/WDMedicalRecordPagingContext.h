//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateComponents, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface WDMedicalRecordPagingContext : NSObject
{
    _Bool _shouldClearDisplayItemGroups;	// 8 = 0x8
    _Bool _hasMoreData;	// 9 = 0x9
    _Bool _fetchingCurrentPage;	// 10 = 0xa
    _Bool _pagingContextIsLoading;	// 11 = 0xb
    _Bool _pagingContextReady;	// 12 = 0xc
    long long _numberOfEmptyPages;	// 16 = 0x10
    NSMutableDictionary *_expectedRecordCounts;	// 24 = 0x18
    NSMutableDictionary *_accumulatedRecordCounts;	// 32 = 0x20
    NSMutableSet *_computingDaySummaries;	// 40 = 0x28
    NSMutableArray *_unprocessedRecords;	// 48 = 0x30
    NSMutableArray *_contextDependentBlockQueue;	// 56 = 0x38
    NSDateComponents *_currentPageEndDate;	// 64 = 0x40
}

+ (id)sortDateComponentsOfDateComponents:(id)arg1 withDayOffset:(long long)arg2;	// IMP=0x000000010013f7d4
+ (id)sortDateComponentsOfDate:(id)arg1;	// IMP=0x000000010013f74c
@property(retain, nonatomic) NSDateComponents *currentPageEndDate; // @synthesize currentPageEndDate=_currentPageEndDate;
@property(retain, nonatomic) NSMutableArray *contextDependentBlockQueue; // @synthesize contextDependentBlockQueue=_contextDependentBlockQueue;
@property(retain, nonatomic) NSMutableArray *unprocessedRecords; // @synthesize unprocessedRecords=_unprocessedRecords;
@property(retain, nonatomic) NSMutableSet *computingDaySummaries; // @synthesize computingDaySummaries=_computingDaySummaries;
@property(retain, nonatomic) NSMutableDictionary *accumulatedRecordCounts; // @synthesize accumulatedRecordCounts=_accumulatedRecordCounts;
@property(retain, nonatomic) NSMutableDictionary *expectedRecordCounts; // @synthesize expectedRecordCounts=_expectedRecordCounts;
@property(nonatomic) long long numberOfEmptyPages; // @synthesize numberOfEmptyPages=_numberOfEmptyPages;
@property(nonatomic) _Bool pagingContextReady; // @synthesize pagingContextReady=_pagingContextReady;
@property(nonatomic) _Bool pagingContextIsLoading; // @synthesize pagingContextIsLoading=_pagingContextIsLoading;
@property(nonatomic) _Bool fetchingCurrentPage; // @synthesize fetchingCurrentPage=_fetchingCurrentPage;
@property(nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(nonatomic) _Bool shouldClearDisplayItemGroups; // @synthesize shouldClearDisplayItemGroups=_shouldClearDisplayItemGroups;
- (void).cxx_destruct;	// IMP=0x000000010013fa54
- (void)resetPagingContext;	// IMP=0x000000010013f5d4
- (long long)totalExpectedRecords;	// IMP=0x000000010013f458
- (_Bool)shouldQueryForNextBatch;	// IMP=0x000000010013f350
- (id)init;	// IMP=0x000000010013f2f8

@end

