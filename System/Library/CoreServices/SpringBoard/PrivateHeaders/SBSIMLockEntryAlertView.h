//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBPasscodeEntryAlertView.h"

#import "SBSIMLockEntryViewInterface.h"
#import "SBUIPasscodeLockViewDelegate.h"

@class NSString;

@interface SBSIMLockEntryAlertView : SBPasscodeEntryAlertView <SBUIPasscodeLockViewDelegate, SBSIMLockEntryViewInterface>
{
    NSString *_languageCode;	// 8 = 0x8
    NSString *_code;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001157c4
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;	// IMP=0x00000001001157b8
- (void)passcodeLockViewPasscodeEntered:(id)arg1;	// IMP=0x00000001001157ac
- (void)_doUnlock;	// IMP=0x0000000100115738
- (id)_failureLabel;	// IMP=0x000000010011569c
- (id)_failureTitle;	// IMP=0x00000001001155f0
- (id)_pinAttemptsRemainingLabel;	// IMP=0x0000000100115490
- (void)_unlock;	// IMP=0x0000000100115348
- (id)_passcodeView;	// IMP=0x000000010011533c
- (void)alertDisplayWillBecomeVisible;	// IMP=0x00000001001152ec
- (CDUnknownBlockType)_passcodeViewGenerator;	// IMP=0x000000010011529c
- (void)setupUnlockAttemptState;	// IMP=0x00000001001151b8
- (void)setupSuccess;	// IMP=0x0000000100115104
- (void)setupCurrentLockAttemptState;	// IMP=0x0000000100115020
- (void)setupFailureState;	// IMP=0x0000000100114f2c
- (id)label;	// IMP=0x0000000100114dd8
- (id)titleText;	// IMP=0x0000000100114d2c
- (id)localizedStringWithKey:(id)arg1;	// IMP=0x0000000100114c28
- (id)initWithFrame:(struct CGRect)arg1 languageCode:(id)arg2;	// IMP=0x0000000100114b24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

