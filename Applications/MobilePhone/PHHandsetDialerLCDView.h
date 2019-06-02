//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "DialerLCDFieldProtocol.h"
#import "PHLCDViewTextFieldDelegate.h"
#import "TPPillViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSArray, NSString, PHLCDViewTextField, TPPillView, UIButton, UILabel;

@interface PHHandsetDialerLCDView : UIView <PHLCDViewTextFieldDelegate, UITextFieldDelegate, TPPillViewDelegate, DialerLCDFieldProtocol>
{
    _Bool _addContactButtonVisible;	// 8 = 0x8
    _Bool _deleteButtonVisible;	// 9 = 0x9
    _Bool _highlighted;	// 10 = 0xa
    _Bool _inCallMode;	// 11 = 0xb
    int _dialerType;	// 12 = 0xc
    UIButton *_addContactButton;	// 16 = 0x10
    UILabel *_contactLabel;	// 24 = 0x18
    id <DialerLCDFieldDelegate> _delegate;	// 32 = 0x20
    PHLCDViewTextField *_numberTextField;	// 40 = 0x28
    NSArray *_numberLabelHorizontalConstraints;	// 48 = 0x30
    TPPillView *_pillView;	// 56 = 0x38
}

@property(retain, nonatomic) TPPillView *pillView; // @synthesize pillView=_pillView;
@property(copy) NSArray *numberLabelHorizontalConstraints; // @synthesize numberLabelHorizontalConstraints=_numberLabelHorizontalConstraints;
@property(retain, nonatomic) PHLCDViewTextField *numberTextField; // @synthesize numberTextField=_numberTextField;
@property(nonatomic) _Bool inCallMode; // @synthesize inCallMode=_inCallMode;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) __weak id <DialerLCDFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) UILabel *contactLabel; // @synthesize contactLabel=_contactLabel;
@property(retain) UIButton *addContactButton; // @synthesize addContactButton=_addContactButton;
@property(nonatomic) int dialerType; // @synthesize dialerType=_dialerType;
- (void).cxx_destruct;	// IMP=0x0000000100086d10
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x0000000100086c0c
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x0000000100086bc4
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x0000000100086b68
- (void)addContactPressed:(id)arg1;	// IMP=0x0000000100086b4c
- (void)textField:(id)arg1 didUpdateString:(id)arg2;	// IMP=0x0000000100086acc
- (void)textField:(id)arg1 didPasteString:(id)arg2;	// IMP=0x00000001000869f4
- (void)updateNumberLabelHorizontalConstraints;	// IMP=0x000000010000d460
- (void)applyLayoutConstraints;	// IMP=0x000000010000cdd0
- (id)newAddContactButton;	// IMP=0x000000010000cb0c
- (id)lcdColor;	// IMP=0x000000010000bd9c
- (void)handleTapGesture:(id)arg1;	// IMP=0x00000001000869bc
- (void)paste:(id)arg1;	// IMP=0x00000001000868d0
- (void)copy:(id)arg1;	// IMP=0x0000000100086858
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000100086790
- (_Bool)resignFirstResponder;	// IMP=0x0000000100086730
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000100086728
- (void)_menuDidHide:(id)arg1;	// IMP=0x0000000100086718
- (void)_requestMakeCutCopyPasteCalloutVisible:(_Bool)arg1;	// IMP=0x000000010008670c
- (void)_makeCalloutVisible:(_Bool)arg1;	// IMP=0x0000000100086560
@property(readonly, nonatomic, getter=isMenuVisible) _Bool menuVisible;
- (void)updateAddAndDeleteButtonForText:(id)arg1 name:(id)arg2 label:(id)arg3 suggestion:(_Bool)arg4 animated:(_Bool)arg5;	// IMP=0x0000000100085e04
- (id)attributedStringForName:(id)arg1 label:(id)arg2;	// IMP=0x0000000100085b78
- (void)updateAddAndDeleteButtonForText:(id)arg1 name:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000001000100b4
- (void)setName:(id)arg1 numberLabel:(id)arg2 suggestion:(_Bool)arg3;	// IMP=0x00000001000107dc
- (void)setName:(id)arg1 numberLabel:(id)arg2;	// IMP=0x0000000100010788
- (void)insertStringAtCurrentPosition:(id)arg1 deletingPreviousCharacter:(_Bool)arg2;	// IMP=0x0000000100085a24
- (void)insertStringAtCurrentPosition:(id)arg1;	// IMP=0x0000000100085a14
- (_Bool)shouldInsertStringAtCurrentPosition:(id)arg1 deletingPreviousCharacter:(_Bool)arg2;	// IMP=0x00000001000857a4
- (void)deleteCharacter;	// IMP=0x00000001000856f8
- (void)setText:(id)arg1 needsFormat:(_Bool)arg2;	// IMP=0x000000010000ffa8
- (void)setText:(id)arg1 needsFormat:(_Bool)arg2 name:(id)arg3 label:(id)arg4;	// IMP=0x0000000100085674
- (id)text;	// IMP=0x000000010000f958
- (void)endEditing;	// IMP=0x0000000100085658
- (void)dealloc;	// IMP=0x00000001000855e0
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000010000ed08
- (void)createPillViewForSenderIdentity:(id)arg1;	// IMP=0x0000000100085024
- (void)setSenderIdentity:(id)arg1;	// IMP=0x0000000100084fb4
- (void)pillViewWasTapped:(id)arg1;	// IMP=0x0000000100084f18
- (id)initWithFrame:(struct CGRect)arg1 forDialerType:(int)arg2;	// IMP=0x000000010000b7b0
- (id)generateNumberLabelHorizontalConstraints;	// IMP=0x000000010000d554
- (float)addNumberFontSize;	// IMP=0x0000000100084ee4
- (double)nameAndLabelFontSize;	// IMP=0x000000010000ca50
- (id)numberLabelFont;	// IMP=0x000000010000be2c
- (float)spacingBetweenNumberBaselineAndNameBaseline;	// IMP=0x0000000100084eac
- (float)numberLabelMinimumFontSize;	// IMP=0x000000010000c204
- (double)numberLabelMaximumFontSize;	// IMP=0x000000010000be90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

