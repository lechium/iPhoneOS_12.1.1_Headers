//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCalendar, NSDate, NSDateFormatter, NSString, SUAutoInstallForecast;

@interface _SBAutoInstallForecastDateCache : NSObject
{
    unsigned long long _scheduleType;	// 8 = 0x8
    SUAutoInstallForecast *_forecast;	// 16 = 0x10
    NSCalendar *_calendar;	// 24 = 0x18
    NSDate *_roundedStartDate;	// 32 = 0x20
    NSDate *_roundedEndDate;	// 40 = 0x28
    NSDateFormatter *_timeFormatter;	// 48 = 0x30
    _Bool _parsed;	// 56 = 0x38
    NSString *_roundedStartTimeString;	// 64 = 0x40
    NSString *_roundedEndTimeString;	// 72 = 0x48
}

@property(retain, nonatomic) NSString *roundedEndTimeString; // @synthesize roundedEndTimeString=_roundedEndTimeString;
@property(retain, nonatomic) NSString *roundedStartTimeString; // @synthesize roundedStartTimeString=_roundedStartTimeString;
@property(nonatomic) unsigned long long scheduleType; // @synthesize scheduleType=_scheduleType;
- (void).cxx_destruct;	// IMP=0x00000001001a88f4
- (id)formatCardinalityForDate:(id)arg1;	// IMP=0x00000001001a87d0
- (_Bool)_uses24HourTimeForLocale;	// IMP=0x00000001001a8720
- (id)_componentsFromDate:(id)arg1;	// IMP=0x00000001001a86fc
- (void)_computeTonightRangeRelativeToDate:(id)arg1 extraDayOffset:(long long)arg2 outStart:(id *)arg3 outEnd:(id *)arg4;	// IMP=0x00000001001a8404
- (_Bool)_isStart:(id)arg1 end:(id)arg2 withinDateRange:(id)arg3 end:(id)arg4;	// IMP=0x00000001001a8330
- (void)_parseForecast;	// IMP=0x00000001001a7c94
- (id)_timeFormatter;	// IMP=0x00000001001a7b84
- (id)description;	// IMP=0x00000001001a782c
- (id)formatCardinalityForEndTime;	// IMP=0x00000001001a7814
- (id)formatCardinalityForStartTime;	// IMP=0x00000001001a77fc
- (id)initWithForecast:(id)arg1;	// IMP=0x00000001001a7614

@end

