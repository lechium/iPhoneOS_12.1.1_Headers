//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHPreferences.h"

@class NSString;

@interface MPPreferences : PHPreferences
{
    NSString *_domain;	// 8 = 0x8
}

+ (id)sharedPreferences;	// IMP=0x000000010009aa78
- (void)setDomain:(id)arg1;	// IMP=0x000000010009acb8
- (void).cxx_destruct;	// IMP=0x000000010009acc4
- (void)setPreferencesValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010009ab88
- (id)domain;	// IMP=0x000000010009ab30

@end

