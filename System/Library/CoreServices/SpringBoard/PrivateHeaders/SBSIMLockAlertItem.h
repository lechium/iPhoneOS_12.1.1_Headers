//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@interface SBSIMLockAlertItem : SBAlertItem
{
    long long _status;	// 8 = 0x8
}

+ (id)alertTitleForStatus:(long long)arg1;	// IMP=0x0000000100110ab0
+ (id)alertTitleForStatus:(long long)arg1 languageCode:(id)arg2;	// IMP=0x00000001001108bc
- (_Bool)reappearsAfterLock;	// IMP=0x00000001001114f8
- (_Bool)reappearsAfterUnlock;	// IMP=0x00000001001114f0
- (_Bool)pendInSetupIfNotAllowed;	// IMP=0x00000001001114e8
- (_Bool)allowInSetup;	// IMP=0x0000000100111470
- (_Bool)forcesModalAlertAppearance;	// IMP=0x00000001001113e8
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;	// IMP=0x0000000100111078
- (_Bool)_canShowOKButton:(_Bool)arg1;	// IMP=0x000000010011101c
- (_Bool)_canShowUnlockButton:(_Bool)arg1;	// IMP=0x0000000100110fd0
- (_Bool)_isBricked;	// IMP=0x0000000100110f7c
- (_Bool)_inSetup;	// IMP=0x0000000100110f28
- (void)performUnlockAction;	// IMP=0x0000000100110eb4
- (void)trySIMUnlock;	// IMP=0x0000000100110e60
- (void)didDeactivateForReason:(int)arg1;	// IMP=0x0000000100110cf8
- (long long)status;	// IMP=0x0000000100110ce8
- (id)alertTextForLanguageCode:(id)arg1;	// IMP=0x0000000100110b34
- (id)alertTitleForLanguageCode:(id)arg1;	// IMP=0x0000000100110ac0
- (_Bool)canSIMUnlock;	// IMP=0x0000000100110828
- (id)initWithStatus:(long long)arg1;	// IMP=0x00000001001107d8

@end

