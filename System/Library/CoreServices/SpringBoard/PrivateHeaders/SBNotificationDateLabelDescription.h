//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSTimeZone;

@interface SBNotificationDateLabelDescription : NSObject
{
    NSDate *_startDate;	// 8 = 0x8
    NSTimeZone *_startDateTimeZone;	// 16 = 0x10
    NSDate *_endDate;	// 24 = 0x18
    NSTimeZone *_endDateTimeZone;	// 32 = 0x20
}

@property(copy, nonatomic) NSTimeZone *endDateTimeZone; // @synthesize endDateTimeZone=_endDateTimeZone;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSTimeZone *startDateTimeZone; // @synthesize startDateTimeZone=_startDateTimeZone;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;	// IMP=0x00000001001e644c

@end

