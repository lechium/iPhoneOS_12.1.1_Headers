//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBAppSwitcherRemoteAlertSet;

@interface SBAppSwitcherRemoteAlertManager : NSObject
{
    SBAppSwitcherRemoteAlertSet *_remoteAlerts;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010045f460
- (void).cxx_destruct;	// IMP=0x000000010045f8a0
- (id)currentRemoteAlerts;	// IMP=0x000000010045f878
- (void)removePlaceholderForIdentifier:(id)arg1;	// IMP=0x000000010045f7f0
- (void)addPlaceholderForIdentifier:(id)arg1;	// IMP=0x000000010045f768
- (void)removeRemoteAlert:(id)arg1;	// IMP=0x000000010045f660
- (void)addRemoteAlert:(id)arg1;	// IMP=0x000000010045f524

@end

