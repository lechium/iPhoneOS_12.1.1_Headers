//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIColor, UILabel, UIView;

@interface PHTableViewCell : UITableViewCell
{
    UIView *_foregroundView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
    UIView *_rootView;	// 32 = 0x20
    double _titleLabelFirstBaselineLayoutConstraintConstant;	// 40 = 0x28
    double _titleLabelLastBaselineLayoutConstraintConstant;	// 48 = 0x30
    double _titleLabelTrailingLayoutConstraintConstant;	// 56 = 0x38
    double _subtitleLabelFirstBaselineLayoutConstraintConstant;	// 64 = 0x40
    double _subtitleLabelLastBaselineLayoutConstraintConstant;	// 72 = 0x48
    double _subtitleLabelLeadingLayoutConstraintConstant;	// 80 = 0x50
    double _subtitleLabelTrailingLayoutConstraintConstant;	// 88 = 0x58
}

+ (struct UIEdgeInsets)separatorInsetForContentSizeCategory:(id)arg1;	// IMP=0x0000000100026428
+ (double)titleLabelLeadingAnchorLayoutConstraintConstantForContentCategorySize:(id)arg1;	// IMP=0x000000010002627c
+ (id)reuseIdentifier;	// IMP=0x0000000100026210
@property(readonly, nonatomic) double subtitleLabelTrailingLayoutConstraintConstant; // @synthesize subtitleLabelTrailingLayoutConstraintConstant=_subtitleLabelTrailingLayoutConstraintConstant;
@property(readonly, nonatomic) double subtitleLabelLeadingLayoutConstraintConstant; // @synthesize subtitleLabelLeadingLayoutConstraintConstant=_subtitleLabelLeadingLayoutConstraintConstant;
@property(readonly, nonatomic) double subtitleLabelLastBaselineLayoutConstraintConstant; // @synthesize subtitleLabelLastBaselineLayoutConstraintConstant=_subtitleLabelLastBaselineLayoutConstraintConstant;
@property(readonly, nonatomic) double subtitleLabelFirstBaselineLayoutConstraintConstant; // @synthesize subtitleLabelFirstBaselineLayoutConstraintConstant=_subtitleLabelFirstBaselineLayoutConstraintConstant;
@property(readonly, nonatomic) double titleLabelTrailingLayoutConstraintConstant; // @synthesize titleLabelTrailingLayoutConstraintConstant=_titleLabelTrailingLayoutConstraintConstant;
@property(readonly, nonatomic) double titleLabelLastBaselineLayoutConstraintConstant; // @synthesize titleLabelLastBaselineLayoutConstraintConstant=_titleLabelLastBaselineLayoutConstraintConstant;
@property(readonly, nonatomic) double titleLabelFirstBaselineLayoutConstraintConstant; // @synthesize titleLabelFirstBaselineLayoutConstraintConstant=_titleLabelFirstBaselineLayoutConstraintConstant;
@property(retain, nonatomic) UIView *rootView; // @synthesize rootView=_rootView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x0000000100026e14
@property(readonly, nonatomic) double titleLabelLeadingLayoutConstraintConstant;
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets rootViewLayoutMargins;
- (void)layoutSubviews;	// IMP=0x0000000100026a60
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010002699c
- (void)updateFontsAndLayoutMetrics;	// IMP=0x00000001000268c0
- (id)loadRootViewAndContentViews;	// IMP=0x00000001000267b4
- (void)commonInit;	// IMP=0x0000000100026734
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001000266dc
- (void)setForegroundView:(id)arg1;	// IMP=0x000000010002665c
@property(readonly, nonatomic) UIView *foregroundView;
@property(copy, nonatomic) UIColor *foregroundColor;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000262c0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100026284

@end

