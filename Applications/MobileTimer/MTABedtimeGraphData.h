//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTAlarm, NSArray, NSCalendar, NSDate;

@interface MTABedtimeGraphData : NSObject
{
    MTAlarm *_sleepAlarm;	// 8 = 0x8
    NSArray *_allColumnData;	// 16 = 0x10
    NSCalendar *_calendar;	// 24 = 0x18
}

@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) NSArray *allColumnData; // @synthesize allColumnData=_allColumnData;
@property(retain, nonatomic) MTAlarm *sleepAlarm; // @synthesize sleepAlarm=_sleepAlarm;
- (void).cxx_destruct;	// IMP=0x000000010002a7d0
- (id)sleepAlarmIntervalForDay:(long long)arg1;	// IMP=0x000000010002a4ac
- (id)objectAtIndexedSubscript:(long long)arg1;	// IMP=0x000000010002a450
@property(readonly, nonatomic) double wakeTimeOriginY;
@property(readonly, nonatomic) double bedtimeOriginY;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) long long columnCount;
@property(readonly, nonatomic) NSDate *latestEndOnFirstDay;
@property(readonly, nonatomic) NSDate *earliestStartOnFirstDay;
- (id)initWithSleepData:(id)arg1 sleepAlarm:(id)arg2;	// IMP=0x0000000100029580

@end
