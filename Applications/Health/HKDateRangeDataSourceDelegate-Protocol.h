//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class HKValueRange, NSArray;

@protocol HKDateRangeDataSourceDelegate
- (void)setUpdateDelegate:(id <HKDateRangeDataUpdateDelegate>)arg1;
- (NSArray *)dataForDateRange:(HKValueRange *)arg1 timeScope:(long long)arg2;
@end

