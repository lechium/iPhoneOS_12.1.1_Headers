//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BuddyActivationRecord : NSObject
{
    long long _configurationFlags;	// 8 = 0x8
}

+ (id)_currentActivationRecordDictionary;	// IMP=0x000000010002ed14
@property(readonly, nonatomic) _Bool impliesEarlyExit;
@property(readonly, nonatomic) _Bool impliesDemod;
- (id)initWithActivationRecordDictionary:(id)arg1;	// IMP=0x000000010002ed98
- (id)init;	// IMP=0x000000010002ed38

@end

