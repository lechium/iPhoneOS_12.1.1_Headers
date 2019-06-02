//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TPView.h"

@class NSLayoutConstraint, UILabel, UIProgressView, UIView;

@interface VMMessageTranscriptionProgressView : TPView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UIProgressView *_progressView;	// 16 = 0x10
    UIView *_foregroundView;	// 24 = 0x18
    NSLayoutConstraint *_titleLabelFirstBaselineLayoutConstraint;	// 32 = 0x20
    NSLayoutConstraint *_titleLabelTrailingLayoutConstraint;	// 40 = 0x28
    NSLayoutConstraint *_titleLabelCenterXLayoutConstraint;	// 48 = 0x30
    NSLayoutConstraint *_titleLabelLeadingLayoutConstraint;	// 56 = 0x38
    NSLayoutConstraint *_progressViewCenterXLayoutConstraint;	// 64 = 0x40
    NSLayoutConstraint *_progressViewLeadingLayoutConstraint;	// 72 = 0x48
    NSLayoutConstraint *_progressViewTrailingLayoutConstraint;	// 80 = 0x50
    NSLayoutConstraint *_progressViewBottomLayoutConstraint;	// 88 = 0x58
    NSLayoutConstraint *_foregroundViewLeadingAnchorLayoutConstraint;	// 96 = 0x60
    NSLayoutConstraint *_foregroundViewTrailingAnchorLayoutConstraint;	// 104 = 0x68
    NSLayoutConstraint *_foregroundViewTopAnchorLayoutConstraint;	// 112 = 0x70
    NSLayoutConstraint *_foregroundViewBottomAnchorLayoutConstraint;	// 120 = 0x78
}

@property(retain, nonatomic) NSLayoutConstraint *foregroundViewBottomAnchorLayoutConstraint; // @synthesize foregroundViewBottomAnchorLayoutConstraint=_foregroundViewBottomAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *foregroundViewTopAnchorLayoutConstraint; // @synthesize foregroundViewTopAnchorLayoutConstraint=_foregroundViewTopAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *foregroundViewTrailingAnchorLayoutConstraint; // @synthesize foregroundViewTrailingAnchorLayoutConstraint=_foregroundViewTrailingAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *foregroundViewLeadingAnchorLayoutConstraint; // @synthesize foregroundViewLeadingAnchorLayoutConstraint=_foregroundViewLeadingAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *progressViewBottomLayoutConstraint; // @synthesize progressViewBottomLayoutConstraint=_progressViewBottomLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *progressViewTrailingLayoutConstraint; // @synthesize progressViewTrailingLayoutConstraint=_progressViewTrailingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *progressViewLeadingLayoutConstraint; // @synthesize progressViewLeadingLayoutConstraint=_progressViewLeadingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *progressViewCenterXLayoutConstraint; // @synthesize progressViewCenterXLayoutConstraint=_progressViewCenterXLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelLeadingLayoutConstraint; // @synthesize titleLabelLeadingLayoutConstraint=_titleLabelLeadingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelCenterXLayoutConstraint; // @synthesize titleLabelCenterXLayoutConstraint=_titleLabelCenterXLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTrailingLayoutConstraint; // @synthesize titleLabelTrailingLayoutConstraint=_titleLabelTrailingLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelFirstBaselineLayoutConstraint; // @synthesize titleLabelFirstBaselineLayoutConstraint=_titleLabelFirstBaselineLayoutConstraint;
@property(readonly, nonatomic) UIView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x0000000100033b84
@property(readonly, nonatomic) double titleLabelFirstBaselineLayoutConstraintConstant;
- (void)updateConstraintsConstants;	// IMP=0x00000001000337d0
- (void)unloadConstraints;	// IMP=0x0000000100033450
- (void)loadConstraints;	// IMP=0x0000000100032808
- (void)commonInit;	// IMP=0x00000001000323a8

@end

