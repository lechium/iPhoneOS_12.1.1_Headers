//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "UIKeyInput.h"

@class NSMutableString, NSString, UILabel, UITextInputPasswordRules;

@interface PinEntryField : UIControl <UIKeyInput>
{
    long long _numberOfDigits;	// 8 = 0x8
    id <PinEntryFieldDelegate> _delegate;	// 16 = 0x10
    NSMutableString *_buffer;	// 24 = 0x18
    UILabel *_internalLabel;	// 32 = 0x20
}

@property(retain, nonatomic) UILabel *internalLabel; // @synthesize internalLabel=_internalLabel;
@property(retain, nonatomic) NSMutableString *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) __weak id <PinEntryFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long numberOfDigits; // @synthesize numberOfDigits=_numberOfDigits;
- (void).cxx_destruct;	// IMP=0x000000010007de74
- (void)deleteBackward;	// IMP=0x000000010007dca4
- (void)insertText:(id)arg1;	// IMP=0x000000010007da44
@property(readonly, nonatomic) _Bool hasText;
@property(nonatomic) long long keyboardType;
- (void)updateInternalLabelForText:(id)arg1;	// IMP=0x000000010007d7fc
- (void)reset;	// IMP=0x000000010007d6e8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010007d698
- (void)capFontSize;	// IMP=0x000000010007d4f0
- (_Bool)becomeFirstResponder;	// IMP=0x000000010007d4b8
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000010007d4b0
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000010007d448
- (void)commonSetup;	// IMP=0x000000010007d0d4
- (void)prepareForInterfaceBuilder;	// IMP=0x000000010007d074
- (void)awakeFromNib;	// IMP=0x000000010007d024
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010007cfcc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010007cf74

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

