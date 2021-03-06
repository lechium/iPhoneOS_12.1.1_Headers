//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDMedicalRecordGroupableCell.h"

@class UIImageView, UIStackView, UIView, WDBrandLogoView, WDClinicalSourcesDataProvider;

@interface WDMedicalRecordBrandLogoCell : WDMedicalRecordGroupableCell
{
    _Bool _showDisclosureChevron;	// 8 = 0x8
    UIStackView *_stackView;	// 16 = 0x10
    id <HKClinicalBrandable> _brandable;	// 24 = 0x18
    WDClinicalSourcesDataProvider *_dataProvider;	// 32 = 0x20
    UIView *_logoAlignedContentView;	// 40 = 0x28
    UIImageView *_disclosureChevronView;	// 48 = 0x30
    WDBrandLogoView *_logoView;	// 56 = 0x38
}

@property(readonly, nonatomic) WDBrandLogoView *logoView; // @synthesize logoView=_logoView;
@property(readonly, nonatomic) UIImageView *disclosureChevronView; // @synthesize disclosureChevronView=_disclosureChevronView;
@property(nonatomic, getter=showsDisclosureChevron) _Bool showDisclosureChevron; // @synthesize showDisclosureChevron=_showDisclosureChevron;
@property(readonly, nonatomic) UIView *logoAlignedContentView; // @synthesize logoAlignedContentView=_logoAlignedContentView;
@property(readonly, nonatomic) WDClinicalSourcesDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(readonly, nonatomic) id <HKClinicalBrandable> brandable; // @synthesize brandable=_brandable;
@property(readonly, nonatomic) UIStackView *_stackView; // @synthesize _stackView;
- (void).cxx_destruct;	// IMP=0x00000001000c0ba4
@property(nonatomic) double logoSize;
- (void)setBrandable:(id)arg1 dataProvider:(id)arg2;	// IMP=0x00000001000c09f4
- (void)_updateBasedOnAccessibilityCategory:(_Bool)arg1;	// IMP=0x00000001000c08e8
- (void)_updateContentWithBrandable:(id)arg1 dataProvider:(id)arg2;	// IMP=0x00000001000c082c
- (id)_contentViewMarginsGuide;	// IMP=0x00000001000c07d8
- (void)updateConstraints;	// IMP=0x00000001000c04a4
- (void)prepareForReuse;	// IMP=0x00000001000c044c
- (void)setUpConstraints;	// IMP=0x00000001000c0148
- (void)setupSubviews;	// IMP=0x00000001000bfe2c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001000bfdd0

@end

