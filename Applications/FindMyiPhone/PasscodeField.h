//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, PSPasscodeField;

@interface PasscodeField : UIView
{
    PSPasscodeField *_psPasscodeField;	// 8 = 0x8
}

@property(retain, nonatomic) PSPasscodeField *psPasscodeField; // @synthesize psPasscodeField=_psPasscodeField;
- (void).cxx_destruct;	// IMP=0x0000000100020518
@property(nonatomic) unsigned long long numberOfEntryFields;
@property(nonatomic) __weak id <PSPasscodeFieldDelegate> delegate;
@property(retain, nonatomic) NSArray *fieldSpacing;
- (_Bool)becomeFirstResponder;	// IMP=0x0000000100020294
- (_Bool)canResignFirstResponder;	// IMP=0x0000000100020248
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000001000201fc
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000100020194
- (void)commonSetup;	// IMP=0x000000010001ff04
- (void)awakeFromNib;	// IMP=0x000000010001feb4
- (void)prepareForInterfaceBuilder;	// IMP=0x000000010001fe64
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010001fe0c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010001fdb4

@end
