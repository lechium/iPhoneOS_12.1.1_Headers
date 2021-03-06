//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDMedicalRecordGroupableCell.h"

@class UILabel, UILayoutGuide, WDBrandLogoView, WDHISpecContainerView;

@interface WDClinicalOnboardingGatewayCell : WDMedicalRecordGroupableCell
{
    WDBrandLogoView *_logoView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
    UILabel *_detailLabel;	// 32 = 0x20
    WDHISpecContainerView *_verticalSpecContainerView;	// 40 = 0x28
    UILayoutGuide *_centerLogoInTitlesLayoutGuide;	// 48 = 0x30
}

@property(readonly, nonatomic) UILayoutGuide *centerLogoInTitlesLayoutGuide; // @synthesize centerLogoInTitlesLayoutGuide=_centerLogoInTitlesLayoutGuide;
@property(readonly, nonatomic) WDHISpecContainerView *verticalSpecContainerView; // @synthesize verticalSpecContainerView=_verticalSpecContainerView;
@property(readonly, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) WDBrandLogoView *logoView; // @synthesize logoView=_logoView;
- (void).cxx_destruct;	// IMP=0x00000001000cf890
- (void)_updateBasedOnAccessibilityCategory:(_Bool)arg1;	// IMP=0x00000001000cf768
- (void)_updateForContentSizeCategory:(id)arg1;	// IMP=0x00000001000cf3ac
- (void)_updateLabelVisibility;	// IMP=0x00000001000cf1b8
- (void)configureWithGateway:(id)arg1 dataProvider:(id)arg2;	// IMP=0x00000001000ceffc
- (void)_positionLogoViewContentLeading;	// IMP=0x00000001000cea80
- (id)_contentViewMarginsGuide;	// IMP=0x00000001000cea2c
- (void)_constrainStackViewContainerWithinContentView;	// IMP=0x00000001000ce754
- (void)_configureDistinctIntrinsicLayoutPrioritiesForLabels;	// IMP=0x00000001000ce334
- (void)setUpConstraints;	// IMP=0x00000001000ce2c4
- (void)_createVerticalSpecContainerView;	// IMP=0x00000001000cdea0
- (void)_createDetailLabel;	// IMP=0x00000001000cdd48
- (void)_createSubtitleLabel;	// IMP=0x00000001000cdc20
- (void)_createTitleLabel;	// IMP=0x00000001000cdaf8
- (void)_createCenterLogoInTitlesLayoutGuide;	// IMP=0x00000001000cd978
- (void)_createLogoView;	// IMP=0x00000001000cd878
- (void)setupSubviews;	// IMP=0x00000001000cd798
- (void)prepareForReuse;	// IMP=0x00000001000cd710
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001000cd6b4

@end

