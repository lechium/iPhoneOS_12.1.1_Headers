//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class NSDate, NSMutableSet;

@interface MTABedtimeGraphColumnData : NSObject <NSFastEnumeration>
{
    NSMutableSet *_intervals;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableSet *intervals; // @synthesize intervals=_intervals;
- (void).cxx_destruct;	// IMP=0x000000010003d2e4
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000010003d254
- (id)orderedIntervals;	// IMP=0x000000010003d1d0
- (void)addInterval:(id)arg1;	// IMP=0x000000010003d160
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) long long intervalCount;
- (id)init;	// IMP=0x000000010003cfa8

@end

