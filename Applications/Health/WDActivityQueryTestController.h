//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKActivitySummaryDataProviderObserver.h"

@class HKActivitySummaryDataProvider, NSString, WDProfile;

@interface WDActivityQueryTestController : NSObject <HKActivitySummaryDataProviderObserver>
{
    WDProfile *_profile;	// 8 = 0x8
    HKActivitySummaryDataProvider *_provider;	// 16 = 0x10
}

@property(retain, nonatomic) HKActivitySummaryDataProvider *provider; // @synthesize provider=_provider;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;	// IMP=0x000000010009cab8
- (void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)arg1;	// IMP=0x000000010009ca64
- (void)runTest;	// IMP=0x000000010009c920
- (void)_logTrialQuery;	// IMP=0x000000010009c708
- (void)_hourlyActivityDataForStartDate:(id)arg1 endDate:(id)arg2 healthStore:(id)arg3 calendar:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000010009c368
- (id)_summariesFromStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 moveData:(id)arg4 exerciseData:(id)arg5 standData:(id)arg6;	// IMP=0x000000010009bda4
- (id)_buildActivitySummaryFromDate:(id)arg1 calendar:(id)arg2 moveQuantity:(id)arg3 exerciseQuantity:(id)arg4 standQuantity:(id)arg5;	// IMP=0x000000010009bc3c
- (id)_stringForDate:(id)arg1;	// IMP=0x000000010009bb5c
- (id)_dateDaysAgo:(id)arg1;	// IMP=0x000000010009bad8
- (void)_logDataFromAllTimeScopes;	// IMP=0x000000010009b8bc
- (void)_logDataFromTimeScope:(long long)arg1 title:(id)arg2;	// IMP=0x000000010009b700
- (void)_logActivitySummary:(id)arg1 calendar:(id)arg2;	// IMP=0x000000010009b414
- (id)_stringForDateComponents:(id)arg1;	// IMP=0x000000010009b350
- (id)_quantityValue:(id)arg1 title:(id)arg2;	// IMP=0x000000010009b254
- (id)initWithProfile:(id)arg1;	// IMP=0x000000010009b1c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
