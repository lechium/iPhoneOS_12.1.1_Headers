//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UIColor, UILabel, UITextField, UIView;

@interface WDProfileTableViewCell : UITableViewCell <UITextFieldDelegate>
{
    UILabel *_displayNameLabel;	// 8 = 0x8
    UIButton *_clearButton;	// 16 = 0x10
    UIColor *_normalDisplayValueColor;	// 24 = 0x18
    UIColor *_selectedDisplayValueColor;	// 32 = 0x20
    _Bool _shouldUseSelectedColorForDisplayValue;	// 40 = 0x28
    _Bool _shouldDisplayClearButtonDuringEditing;	// 41 = 0x29
    NSString *_displayName;	// 48 = 0x30
    NSString *_displayValue;	// 56 = 0x38
    UIView *_inputView;	// 64 = 0x40
    UIView *_inputAccessoryView;	// 72 = 0x48
    UITextField *_displayValueTextField;	// 80 = 0x50
}

@property(retain, nonatomic) UITextField *displayValueTextField; // @synthesize displayValueTextField=_displayValueTextField;
@property(retain, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) _Bool shouldDisplayClearButtonDuringEditing; // @synthesize shouldDisplayClearButtonDuringEditing=_shouldDisplayClearButtonDuringEditing;
@property(nonatomic) _Bool shouldUseSelectedColorForDisplayValue; // @synthesize shouldUseSelectedColorForDisplayValue=_shouldUseSelectedColorForDisplayValue;
@property(retain, nonatomic) NSString *displayValue; // @synthesize displayValue=_displayValue;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;	// IMP=0x00000001000a2360
- (void)_updateClearButtonState;	// IMP=0x00000001000a21fc
- (void)removeClearButtonTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000001000a21e0
- (void)addClearButtonTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000001000a21c4
- (_Bool)becomeFirstResponder;	// IMP=0x00000001000a2128
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000001000a2120
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x00000001000a2118
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000a2008
- (void)layoutSubviews;	// IMP=0x00000001000a19a4
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000a1954
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000a1844
- (void)_updateForCurrentSizeCategory;	// IMP=0x00000001000a150c
- (void)_setupUI;	// IMP=0x00000001000a1138
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001000a10e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

