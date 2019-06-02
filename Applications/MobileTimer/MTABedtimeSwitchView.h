//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSLayoutConstraint, UILabel, UISwitch, UIView;

@interface MTABedtimeSwitchView : UIControl
{
    UILabel *_enableLabel;	// 8 = 0x8
    UILabel *_repeatLabel;	// 16 = 0x10
    UISwitch *_enableSwitch;	// 24 = 0x18
    UIView *_keylineView;	// 32 = 0x20
    NSLayoutConstraint *_enableLabelLeadingConstraint;	// 40 = 0x28
    NSLayoutConstraint *_repeatLabelLeadingConstraint;	// 48 = 0x30
    NSLayoutConstraint *_enableLabelBaseLineConstraint;	// 56 = 0x38
    NSLayoutConstraint *_repeatLabelBaselineConstraint;	// 64 = 0x40
    NSLayoutConstraint *_repeatLabelBottomConstraint;	// 72 = 0x48
    NSLayoutConstraint *_switchTrailingConstraint;	// 80 = 0x50
    NSLayoutConstraint *_keylineLeadingConstraint;	// 88 = 0x58
    NSLayoutConstraint *_keylineTrailingConstraint;	// 96 = 0x60
    struct UIEdgeInsets _contentInset;	// 104 = 0x68
    struct UIEdgeInsets _separatorInset;	// 136 = 0x88
}

+ (double)switchViewHeight;	// IMP=0x0000000100047d98
@property(retain, nonatomic) NSLayoutConstraint *keylineTrailingConstraint; // @synthesize keylineTrailingConstraint=_keylineTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *keylineLeadingConstraint; // @synthesize keylineLeadingConstraint=_keylineLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *switchTrailingConstraint; // @synthesize switchTrailingConstraint=_switchTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *repeatLabelBottomConstraint; // @synthesize repeatLabelBottomConstraint=_repeatLabelBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *repeatLabelBaselineConstraint; // @synthesize repeatLabelBaselineConstraint=_repeatLabelBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *enableLabelBaseLineConstraint; // @synthesize enableLabelBaseLineConstraint=_enableLabelBaseLineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *repeatLabelLeadingConstraint; // @synthesize repeatLabelLeadingConstraint=_repeatLabelLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *enableLabelLeadingConstraint; // @synthesize enableLabelLeadingConstraint=_enableLabelLeadingConstraint;
@property(retain, nonatomic) UIView *keylineView; // @synthesize keylineView=_keylineView;
@property(retain, nonatomic) UISwitch *enableSwitch; // @synthesize enableSwitch=_enableSwitch;
@property(retain, nonatomic) UILabel *repeatLabel; // @synthesize repeatLabel=_repeatLabel;
@property(retain, nonatomic) UILabel *enableLabel; // @synthesize enableLabel=_enableLabel;
@property(nonatomic) struct UIEdgeInsets separatorInset; // @synthesize separatorInset=_separatorInset;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;	// IMP=0x00000001000481fc
- (void)updateRepeatLabelForSchedule:(unsigned long long)arg1;	// IMP=0x0000000100047fa0
@property(nonatomic, getter=isOn) _Bool on;
- (void)switchToggled:(id)arg1;	// IMP=0x0000000100047e6c
- (void)updateConstraints;	// IMP=0x0000000100047b28
- (double)repeatLabelBottomPadding;	// IMP=0x0000000100047abc
- (double)repeatLabelBaselineTopOffset;	// IMP=0x0000000100047a50
- (double)enableLabelBaselineTopOffset;	// IMP=0x00000001000479e4
- (void)setupConstraints;	// IMP=0x0000000100046cd0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000465a0

@end

