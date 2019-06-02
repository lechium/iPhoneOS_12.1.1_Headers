//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMIPCommandViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, PasscodeEntryView, UILabel, UIScrollView, UITextField, UIView;

@interface PasscodeViewController : FMIPCommandViewController <UITextFieldDelegate>
{
    UITextField *_hiddenPasscodeField;	// 8 = 0x8
    UILabel *_passcodeEntryDescriptionLabel;	// 16 = 0x10
    UIView *_entryPlaceholder;	// 24 = 0x18
    NSString *_firstPasscode;	// 32 = 0x20
    NSString *_secondPasscode;	// 40 = 0x28
    PasscodeEntryView *_firstEntryView;	// 48 = 0x30
    PasscodeEntryView *_secondEntryView;	// 56 = 0x38
    PasscodeEntryView *_currentEntryView;	// 64 = 0x40
    long long _passcodeLength;	// 72 = 0x48
    UIScrollView *_scrollView;	// 80 = 0x50
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) long long passcodeLength; // @synthesize passcodeLength=_passcodeLength;
@property(nonatomic) __weak PasscodeEntryView *currentEntryView; // @synthesize currentEntryView=_currentEntryView;
@property(retain, nonatomic) PasscodeEntryView *secondEntryView; // @synthesize secondEntryView=_secondEntryView;
@property(retain, nonatomic) PasscodeEntryView *firstEntryView; // @synthesize firstEntryView=_firstEntryView;
@property(retain, nonatomic) NSString *secondPasscode; // @synthesize secondPasscode=_secondPasscode;
@property(retain, nonatomic) NSString *firstPasscode; // @synthesize firstPasscode=_firstPasscode;
@property(retain, nonatomic) UIView *entryPlaceholder; // @synthesize entryPlaceholder=_entryPlaceholder;
@property(retain, nonatomic) UILabel *passcodeEntryDescriptionLabel; // @synthesize passcodeEntryDescriptionLabel=_passcodeEntryDescriptionLabel;
@property(retain, nonatomic) UITextField *hiddenPasscodeField; // @synthesize hiddenPasscodeField=_hiddenPasscodeField;
- (void).cxx_destruct;	// IMP=0x000000010008f5e4
- (void)decrementPasscode;	// IMP=0x000000010008f378
- (void)incrementPasscode;	// IMP=0x000000010008f2a8
- (void)resetAllFields;	// IMP=0x000000010008f008
- (void)proceedToNextStep;	// IMP=0x000000010008ef60
- (void)validatePasscode;	// IMP=0x000000010008ed20
- (void)slideBackForFirstPasscode;	// IMP=0x000000010008eb00
- (void)slideForSecondPasscode;	// IMP=0x000000010008e758
- (void)textChanged:(id)arg1;	// IMP=0x000000010008e3f0
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x000000010008e2c4
- (void)passcodeEntryTapped;	// IMP=0x000000010008e284
- (void)setAccessibilityValueForPasscodeEntry;	// IMP=0x000000010008e02c
- (id)createPasscodeEntryViewForAttempt:(long long)arg1;	// IMP=0x000000010008daec
- (void)recalulateEntryViewCenters;	// IMP=0x000000010008d918
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010008d83c
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000010008d7b8
- (void)viewWillLayoutSubviews;	// IMP=0x000000010008d768
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010008d6f8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010008d688
- (void)viewDidLoad;	// IMP=0x000000010008d1b8
- (id)warningColor;	// IMP=0x000000010008d194
- (id)normalColor;	// IMP=0x000000010008d16c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

