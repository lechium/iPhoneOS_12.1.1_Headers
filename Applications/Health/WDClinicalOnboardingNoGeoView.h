//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UIButton, UILabel, UILayoutGuide;

@interface WDClinicalOnboardingNoGeoView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_subtitleLabel;	// 16 = 0x10
    UIButton *_locationServicesButton;	// 24 = 0x18
    NSLayoutConstraint *_subtitleBaselineConstraint;	// 32 = 0x20
    NSLayoutConstraint *_locationServicesButtonBaselineConstraint;	// 40 = 0x28
    NSLayoutConstraint *_containerCenterYConstraint;	// 48 = 0x30
    UILayoutGuide *_containerLayoutGuide;	// 56 = 0x38
}

@property(retain, nonatomic) UILayoutGuide *containerLayoutGuide; // @synthesize containerLayoutGuide=_containerLayoutGuide;
@property(retain, nonatomic) NSLayoutConstraint *containerCenterYConstraint; // @synthesize containerCenterYConstraint=_containerCenterYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *locationServicesButtonBaselineConstraint; // @synthesize locationServicesButtonBaselineConstraint=_locationServicesButtonBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleBaselineConstraint; // @synthesize subtitleBaselineConstraint=_subtitleBaselineConstraint;
@property(retain, nonatomic) UIButton *locationServicesButton; // @synthesize locationServicesButton=_locationServicesButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x000000010016c9ec
- (void)_updateForCurrentSizeCategory;	// IMP=0x000000010016c63c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010016c53c
- (void)_tappedLocationServices:(id)arg1;	// IMP=0x000000010016c4b8
- (void)layoutSubviews;	// IMP=0x000000010016c410
- (void)_setupConstraints;	// IMP=0x000000010016ba08
- (void)_setupSubviews;	// IMP=0x000000010016b3a0
- (id)init;	// IMP=0x000000010016b338

@end

