//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKDisplayCategory, NSMutableArray;

@interface WDStoredDataCategory : NSObject
{
    NSMutableArray *_displayTypes;	// 8 = 0x8
    HKDisplayCategory *_category;	// 16 = 0x10
}

@property(retain) HKDisplayCategory *category; // @synthesize category=_category;
- (void).cxx_destruct;	// IMP=0x00000001000a3b50
@property(readonly, nonatomic) NSMutableArray *displayTypes; // @synthesize displayTypes=_displayTypes;

@end
