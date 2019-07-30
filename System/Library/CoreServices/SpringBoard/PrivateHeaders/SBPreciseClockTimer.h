//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, NSCalendar, NSMutableDictionary;

@interface SBPreciseClockTimer : NSObject
{
    CADisplayLink *_displayLink;	// 8 = 0x8
    NSMutableDictionary *_minuteUpdateHandlers;	// 16 = 0x10
    unsigned long long _nextToken;	// 24 = 0x18
    NSCalendar *_calendar;	// 32 = 0x20
    long long _lastHour;	// 40 = 0x28
    long long _lastMinute;	// 48 = 0x30
}

+ (id)now;	// IMP=0x00000001002c16b0
+ (id)sharedInstance;	// IMP=0x00000001002c1630
- (void).cxx_destruct;	// IMP=0x00000001002c1d14
- (void)_updateDisplayLinkFrameIntervalForSecondsPastMinute:(double)arg1;	// IMP=0x00000001002c1c98
- (void)_handleTimePassed;	// IMP=0x00000001002c1aa0
- (void)_onDisplayLink:(id)arg1;	// IMP=0x00000001002c1a94
- (void)_updateDisplayLink;	// IMP=0x00000001002c1964
- (void)stopMinuteUpdatesForToken:(struct NSNumber *)arg1;	// IMP=0x00000001002c1924
- (struct NSNumber *)startMinuteUpdatesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001002c1840
- (void)dealloc;	// IMP=0x00000001002c17e4
- (id)init;	// IMP=0x00000001002c1714

@end
