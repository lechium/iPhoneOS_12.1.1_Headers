//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKSampleTypeUpdateControllerObserver.h"

@class NSArray, NSHashTable, NSMutableDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSString, WDProfile;

@interface WDMedicalRecordCountProvider : NSObject <HKSampleTypeUpdateControllerObserver>
{
    NSNumber *_allRecordsCount;	// 8 = 0x8
    CDUnknownBlockType _unitTesting_allObserversReadyCallback;	// 16 = 0x10
    WDProfile *_profile;	// 24 = 0x18
    NSMutableDictionary *_countByCategory;	// 32 = 0x20
    NSMutableDictionary *_countBySampleType;	// 40 = 0x28
    NSArray *_supportedCategories;	// 48 = 0x30
    NSHashTable *_observers;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_clientQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_countingQueue;	// 72 = 0x48
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *countingQueue; // @synthesize countingQueue=_countingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSArray *supportedCategories; // @synthesize supportedCategories=_supportedCategories;
@property(retain, nonatomic) NSMutableDictionary *countBySampleType; // @synthesize countBySampleType=_countBySampleType;
@property(retain, nonatomic) NSMutableDictionary *countByCategory; // @synthesize countByCategory=_countByCategory;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property(copy, nonatomic) CDUnknownBlockType unitTesting_allObserversReadyCallback; // @synthesize unitTesting_allObserversReadyCallback=_unitTesting_allObserversReadyCallback;
@property(retain, nonatomic) NSNumber *allRecordsCount; // @synthesize allRecordsCount=_allRecordsCount;
- (void).cxx_destruct;	// IMP=0x0000000100123568
- (_Bool)_areAllObserverQueriesRunning;	// IMP=0x0000000100123250
- (void)_sampleCountForSampleTypes:(id)arg1 predicate:(id)arg2 healthStore:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100122e24
- (void)loadCountOfSamplesForCategories:(id)arg1 additionalSampleTypes:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100121954
- (_Bool)_includeCategoryInAllRecordCount:(id)arg1;	// IMP=0x000000010012192c
- (void)_queue_updateAllCategoryRecordCount;	// IMP=0x0000000100121654
- (void)_queue_incorporateAndNotifyObserversWithCategoryCounts:(id)arg1 sampleTypeCounts:(id)arg2;	// IMP=0x0000000100121044
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;	// IMP=0x0000000100120b78
- (void)_loadInitialCounts;	// IMP=0x0000000100120558
- (void)removeObserver:(id)arg1;	// IMP=0x00000001001203dc
- (void)addObserver:(id)arg1;	// IMP=0x0000000100120260
- (id)CDASampleCount;	// IMP=0x0000000100120038
- (id)numberOfRecordsForSampleType:(id)arg1;	// IMP=0x000000010011fe10
- (id)numberOfRecordsForCategory:(id)arg1;	// IMP=0x000000010011fbd0
- (void)_callAllObserversReadyCallbackIfNecessary;	// IMP=0x000000010011fb48
- (void)_setupSampleUpdateObserver;	// IMP=0x000000010011f8dc
- (void)dealloc;	// IMP=0x000000010011f6f4
- (id)initWithProfile:(id)arg1;	// IMP=0x000000010011f52c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

