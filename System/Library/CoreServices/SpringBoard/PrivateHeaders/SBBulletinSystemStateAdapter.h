//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BBSystemStateProvider;

@interface SBBulletinSystemStateAdapter : NSObject
{
    BBSystemStateProvider *_stateProvider;	// 8 = 0x8
    _Bool _quietModeEnabled;	// 16 = 0x10
}

+ (id)sharedInstanceIfExists;	// IMP=0x000000010045c720
+ (id)sharedInstance;	// IMP=0x000000010045c68c
- (void).cxx_destruct;	// IMP=0x000000010045cb70
- (void)_lostModeStateChanged;	// IMP=0x000000010045caf8
- (void)_screenDimmed:(id)arg1;	// IMP=0x000000010045cadc
- (void)_lockStateChanged:(id)arg1;	// IMP=0x000000010045ca3c
- (void)dealloc;	// IMP=0x000000010045c9a8
- (id)init;	// IMP=0x000000010045c72c

@end

