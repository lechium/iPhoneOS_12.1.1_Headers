//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

#import "UITextFieldDelegate.h"

@class NSString;

@interface SBPasscodeAlertItem : SBAlertItem <UITextFieldDelegate>
{
    int _mode;	// 8 = 0x8
    int _unlockScreenType;	// 12 = 0xc
    int _simplePasscodeType;	// 16 = 0x10
    NSString *_errorString;	// 24 = 0x18
    _Bool _hasEmergencyCall;	// 32 = 0x20
    _Bool _alreadySubmittedPassword;	// 33 = 0x21
}

- (void).cxx_destruct;	// IMP=0x000000010019c120
- (void)didEndCall;	// IMP=0x000000010019bea4
- (void)_setErrorString:(id)arg1;	// IMP=0x000000010019be6c
- (_Bool)shouldShowInLockScreen;	// IMP=0x000000010019be64
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x000000010019bd08
- (void)configureTextField:(id)arg1;	// IMP=0x000000010019bc48
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;	// IMP=0x000000010019b670
- (void)_clearAlertController;	// IMP=0x000000010019b4d0
- (void)makeEmergencyCall;	// IMP=0x000000010019b170
- (void)submitPassword;	// IMP=0x000000010019b080
- (void)dealloc;	// IMP=0x000000010019af9c
- (id)initWithPasscodeMode:(int)arg1 unlockScreenType:(int)arg2 simplePasscodeType:(int)arg3;	// IMP=0x000000010019aed0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

