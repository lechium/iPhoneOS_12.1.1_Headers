//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSHashTable;

@interface SBDateTimeController : NSObject
{
    NSDate *_overrideDate;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000001000e4710
- (void).cxx_destruct;	// IMP=0x00000001000e4a40
- (void)removeObserver:(id)arg1;	// IMP=0x00000001000e4a28
- (void)addObserver:(id)arg1;	// IMP=0x00000001000e4a10
@property(copy, nonatomic) NSDate *overrideDate;
@property(readonly, copy, nonatomic) NSDate *currentDate;
- (id)init;	// IMP=0x00000001000e4790

@end

