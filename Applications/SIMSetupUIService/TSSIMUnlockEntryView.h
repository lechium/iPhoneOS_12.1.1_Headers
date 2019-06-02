//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UILabel, UITextField;

@interface TSSIMUnlockEntryView : UIView <UITextFieldDelegate>
{
    UIView *_containerView;	// 8 = 0x8
    UILabel *_detailLabel;	// 16 = 0x10
    UITextField *_entryField;	// 24 = 0x18
    UIButton *_okButton;	// 32 = 0x20
    _Bool _unlocking;	// 40 = 0x28
    _Bool _pinMismatch;	// 41 = 0x29
    unsigned long long _attemptsRemaining;	// 48 = 0x30
    id <TSSIMUnlockEntryViewDelegate> _delegate;	// 56 = 0x38
    long long _actionType;	// 64 = 0x40
    long long _actionSubtype;	// 72 = 0x48
}

@property(readonly, nonatomic) long long actionSubtype; // @synthesize actionSubtype=_actionSubtype;
@property(readonly, nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(nonatomic) __weak id <TSSIMUnlockEntryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long attemptsRemaining; // @synthesize attemptsRemaining=_attemptsRemaining;
@property(nonatomic) _Bool pinMismatch; // @synthesize pinMismatch=_pinMismatch;
@property(nonatomic) _Bool unlocking; // @synthesize unlocking=_unlocking;
- (void).cxx_destruct;	// IMP=0x00000001000091b4
- (void)_configureDetailLabelText;	// IMP=0x0000000100008f24
- (void)_configureOKButtonWithEnteredText:(id)arg1;	// IMP=0x0000000100008ec4
- (void)_okButtonPressed:(id)arg1;	// IMP=0x0000000100008e44
@property(readonly, copy, nonatomic) NSString *enteredText;
- (void)resetEnteredTextWithShakeAnimation:(_Bool)arg1;	// IMP=0x000000010000889c
- (_Bool)isFirstResponder;	// IMP=0x0000000100008884
- (_Bool)resignFirstResponder;	// IMP=0x000000010000886c
- (_Bool)canResignFirstResponder;	// IMP=0x0000000100008854
- (_Bool)becomeFirstResponder;	// IMP=0x000000010000883c
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000100008824
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x000000010000878c
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x00000001000085f0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000085e4
- (void)layoutSubviews;	// IMP=0x0000000100008420
- (id)initWithActionType:(long long)arg1 actionSubtype:(long long)arg2;	// IMP=0x0000000100007f94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

