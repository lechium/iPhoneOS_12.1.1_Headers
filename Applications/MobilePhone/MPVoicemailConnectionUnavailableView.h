//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPVoicemailTableHeaderView.h"

@class NSLayoutConstraint, UIButton;

@interface MPVoicemailConnectionUnavailableView : MPVoicemailTableHeaderView
{
    UIButton *_button;	// 8 = 0x8
    NSLayoutConstraint *_buttonCenterXLayoutConstraint;	// 16 = 0x10
    NSLayoutConstraint *_buttonLeadingLayoutConstraint;	// 24 = 0x18
    NSLayoutConstraint *_buttonTrailingLayoutConstraint;	// 32 = 0x20
    NSLayoutConstraint *_buttonTitleLabelFirstBaselineLayoutConstraint;	// 40 = 0x28
    NSLayoutConstraint *_buttonTitleLabelLastBaselineLayoutConstraint;	// 48 = 0x30
}

@property(retain, nonatomic) NSLayoutConstraint *buttonTitleLabelLastBaselineLayoutConstraint; // @synthesize buttonTitleLabelLastBaselineLayoutConstraint=_buttonTitleLabelLastBaselineLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *buttonTitleLabelFirstBaselineLayoutConstraint; // @synthesize buttonTitleLabelFirstBaselineLayoutConstraint=_buttonTitleLabelFirstBaselineLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *buttonTrailingLayoutConstraint; // @synthesize buttonTrailingLayoutConstraint=_buttonTrailingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *buttonLeadingLayoutConstraint; // @synthesize buttonLeadingLayoutConstraint=_buttonLeadingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *buttonCenterXLayoutConstraint; // @synthesize buttonCenterXLayoutConstraint=_buttonCenterXLayoutConstraint;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;	// IMP=0x00000001000d3824
- (double)titleLabelLastBaselineLayoutConstraintConstant;	// IMP=0x00000001000d36d4
- (double)titleLabelFirstBaselineLayoutConstraintConstant;	// IMP=0x00000001000d35ec
@property(readonly, nonatomic) double buttonTitleLabelLastBaselineLayoutConstraintConstant;
@property(readonly, nonatomic) double buttonTitleLabelFirstBaselineLayoutConstraintConstant;
- (void)setButtonHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000d32c8
- (void)setButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000d32b8
@property(nonatomic, getter=isButtonHidden) _Bool buttonHidden;
- (void)updateFonts;	// IMP=0x00000001000d3198
- (void)updateConstraintsConstants;	// IMP=0x00000001000d30b8
- (void)loadConstraints;	// IMP=0x00000001000d288c
- (void)loadView;	// IMP=0x00000001000d2600

@end

