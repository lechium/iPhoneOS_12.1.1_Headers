//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@interface SBSetupUpgradeAlertItem : SBAlertItem
{
    _Bool _goingToSetup;	// 8 = 0x8
}

- (void)performUnlockAction;	// IMP=0x0000000100561470
- (int)alertPriority;	// IMP=0x0000000100561468
- (_Bool)shouldShowInLockScreen;	// IMP=0x0000000100561460
- (_Bool)allowInSetup;	// IMP=0x0000000100561458
- (_Bool)unlocksScreen;	// IMP=0x0000000100561450
- (_Bool)allowAutoUnlock;	// IMP=0x0000000100561448
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;	// IMP=0x000000010056109c
- (id)initWithGoingToSetup:(_Bool)arg1;	// IMP=0x0000000100561064

@end

