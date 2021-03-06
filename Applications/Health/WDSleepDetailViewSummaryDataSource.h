//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WDChartDetailViewDataSource.h"

@class HKSleepAnalysis, HKSleepDay, HKSleepPeriod, NSString;

@interface WDSleepDetailViewSummaryDataSource : NSObject <WDChartDetailViewDataSource>
{
    _Bool _isBlank;	// 8 = 0x8
    HKSleepAnalysis *_sleepAnalysis;	// 16 = 0x10
    HKSleepDay *_sleepDay;	// 24 = 0x18
    HKSleepPeriod *_sleepPeriod;	// 32 = 0x20
}

@property(readonly) _Bool isBlank; // @synthesize isBlank=_isBlank;
@property(readonly, nonatomic) HKSleepPeriod *sleepPeriod; // @synthesize sleepPeriod=_sleepPeriod;
@property(readonly, nonatomic) HKSleepDay *sleepDay; // @synthesize sleepDay=_sleepDay;
@property(readonly, nonatomic) HKSleepAnalysis *sleepAnalysis; // @synthesize sleepAnalysis=_sleepAnalysis;
- (void).cxx_destruct;	// IMP=0x0000000100078f10
- (id)detailSectionForRow:(long long)arg1 column:(long long)arg2;	// IMP=0x0000000100078984
- (id)mainSection;	// IMP=0x00000001000785c8
- (long long)numberOfColumnsForRow:(long long)arg1;	// IMP=0x00000001000785bc
- (long long)numberOfRows;	// IMP=0x00000001000785b4
- (id)initWithSleepAnalysis:(id)arg1;	// IMP=0x0000000100078458

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

