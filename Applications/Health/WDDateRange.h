//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface WDDateRange : NSObject
{
    NSDate *_startDate;	// 8 = 0x8
    NSDate *_endDate;	// 16 = 0x10
}

+ (id)dateRangeWithTimePeriod:(long long)arg1 anchorDate:(id)arg2;	// IMP=0x000000010008e720
+ (id)dateRangeWithStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x000000010008e6a0
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;	// IMP=0x000000010008f310
- (id)_getEndDateFromStartDate:(id)arg1 timePeriod:(long long)arg2;	// IMP=0x000000010008f0bc
- (id)_getStartDateFromAnchorDate:(id)arg1 timePeriod:(long long)arg2;	// IMP=0x000000010008ea60
- (id)description;	// IMP=0x000000010008e9a8
- (_Bool)dateInRange:(id)arg1;	// IMP=0x000000010008e8f4
- (id)initWithTimePeriod:(long long)arg1 anchorDate:(id)arg2;	// IMP=0x000000010008e82c
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x000000010008e78c

@end

