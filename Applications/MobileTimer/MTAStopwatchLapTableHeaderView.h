//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UILabel;

@interface MTAStopwatchLapTableHeaderView : UIView
{
    UILabel *_lapNumberLabel;	// 8 = 0x8
    UILabel *_splitLabel;	// 16 = 0x10
    UILabel *_totalLabel;	// 24 = 0x18
    UIView *_bottomKeylineView;	// 32 = 0x20
    NSLayoutConstraint *_lapNumberLabelBaselineTopOffsetConstraint;	// 40 = 0x28
    NSLayoutConstraint *_lapNumberLabelBaselineBottomOffsetConstraint;	// 48 = 0x30
}

@property(retain, nonatomic) NSLayoutConstraint *lapNumberLabelBaselineBottomOffsetConstraint; // @synthesize lapNumberLabelBaselineBottomOffsetConstraint=_lapNumberLabelBaselineBottomOffsetConstraint;
@property(retain, nonatomic) NSLayoutConstraint *lapNumberLabelBaselineTopOffsetConstraint; // @synthesize lapNumberLabelBaselineTopOffsetConstraint=_lapNumberLabelBaselineTopOffsetConstraint;
@property(retain, nonatomic) UIView *bottomKeylineView; // @synthesize bottomKeylineView=_bottomKeylineView;
@property(retain, nonatomic) UILabel *totalLabel; // @synthesize totalLabel=_totalLabel;
@property(retain, nonatomic) UILabel *splitLabel; // @synthesize splitLabel=_splitLabel;
@property(retain, nonatomic) UILabel *lapNumberLabel; // @synthesize lapNumberLabel=_lapNumberLabel;
- (void).cxx_destruct;	// IMP=0x0000000100053ed0
- (void)setupConstraints;	// IMP=0x00000001000534fc
- (id)labelFont;	// IMP=0x000000010005340c
- (void)_updateForContentSizeChange;	// IMP=0x000000010005328c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100052ba8

@end
