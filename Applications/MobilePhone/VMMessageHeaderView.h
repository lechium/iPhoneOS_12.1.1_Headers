//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, NSString, UILabel;

@interface VMMessageHeaderView : UIView
{
    _Bool _subviewsLoaded;	// 8 = 0x8
    _Bool _subviewsLayoutConstraintsLoaded;	// 9 = 0x9
    UILabel *_dateLabel;	// 16 = 0x10
    UILabel *_headlineLabel;	// 24 = 0x18
    UILabel *_subheadlineLabel;	// 32 = 0x20
    NSLayoutConstraint *_dateLabelFirstBaselineAnchorLayoutConstraint;	// 40 = 0x28
    NSLayoutConstraint *_headlineLabelFirstBaselineAnchorLayoutConstraint;	// 48 = 0x30
    NSLayoutConstraint *_subheadlineLabelFirstBaselineAnchorLayoutConstraint;	// 56 = 0x38
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x0000000100058ce0
@property(nonatomic) _Bool subviewsLayoutConstraintsLoaded; // @synthesize subviewsLayoutConstraintsLoaded=_subviewsLayoutConstraintsLoaded;
@property(nonatomic) _Bool subviewsLoaded; // @synthesize subviewsLoaded=_subviewsLoaded;
@property(retain, nonatomic) NSLayoutConstraint *subheadlineLabelFirstBaselineAnchorLayoutConstraint; // @synthesize subheadlineLabelFirstBaselineAnchorLayoutConstraint=_subheadlineLabelFirstBaselineAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headlineLabelFirstBaselineAnchorLayoutConstraint; // @synthesize headlineLabelFirstBaselineAnchorLayoutConstraint=_headlineLabelFirstBaselineAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *dateLabelFirstBaselineAnchorLayoutConstraint; // @synthesize dateLabelFirstBaselineAnchorLayoutConstraint=_dateLabelFirstBaselineAnchorLayoutConstraint;
@property(retain, nonatomic) UILabel *subheadlineLabel; // @synthesize subheadlineLabel=_subheadlineLabel;
@property(retain, nonatomic) UILabel *headlineLabel; // @synthesize headlineLabel=_headlineLabel;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
- (void).cxx_destruct;	// IMP=0x0000000100059ef8
@property(readonly, nonatomic) double subheadlineLabelFirstBaselineAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double headlineLabelFirstBaselineAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double dateLabelFirstBaselineAnchorLayoutConstraintConstant;
- (void)loadSubviewsLayoutConstraints;	// IMP=0x0000000100059730
- (void)loadSubviews;	// IMP=0x0000000100059248
- (void)commonInit;	// IMP=0x0000000100059224
- (void)updateConstraintsConstants;	// IMP=0x000000010005912c
- (void)updateConstraints;	// IMP=0x00000001000590bc
@property(copy, nonatomic) NSString *localizedSubheadline;
@property(copy, nonatomic) NSString *localizedHeadline;
@property(copy, nonatomic) NSString *localizedDate;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100058d5c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100058d04
- (id)init;	// IMP=0x0000000100058ce8

@end
