//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SBLockScreenActionManager : NSObject
{
    NSMutableDictionary *_actionProviders;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableDictionary *actionProviders; // @synthesize actionProviders=_actionProviders;
- (void).cxx_destruct;	// IMP=0x00000001001f7bc4
- (void)_clearActionOnAllProviders;	// IMP=0x00000001001f7b0c
- (void)runUnlockAction;	// IMP=0x00000001001f7a7c
- (id)currentLockScreenActionContextActionSource:(unsigned long long *)arg1;	// IMP=0x00000001001f7940
- (id)currentLockScreenActionContext;	// IMP=0x00000001001f7930
- (void)registerLockScreenActionProvider:(id)arg1 forSource:(unsigned long long)arg2;	// IMP=0x00000001001f77c8
- (id)init;	// IMP=0x00000001001f7748

@end

