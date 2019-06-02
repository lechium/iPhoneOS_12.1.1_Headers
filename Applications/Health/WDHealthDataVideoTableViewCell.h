//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, NSString, UIActivityIndicatorView, UIImageView, UILabel, UIStackView;

@interface WDHealthDataVideoTableViewCell : UITableViewCell
{
    UIStackView *_cellStackView;	// 8 = 0x8
    NSString *_descriptionText;	// 16 = 0x10
    UILabel *_descriptionLabel;	// 24 = 0x18
    UIImageView *_smallPlayButtonImageView;	// 32 = 0x20
    UIActivityIndicatorView *_activityIndicator;	// 40 = 0x28
    NSLayoutConstraint *_descriptionLabelWidthConstraint;	// 48 = 0x30
    NSLayoutConstraint *_smallPlayButtonImageHeightConstraint;	// 56 = 0x38
    NSLayoutConstraint *_smallPlayButtonImageWidthConstraint;	// 64 = 0x40
    long long _state;	// 72 = 0x48
}

@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;	// IMP=0x0000000100079b98
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100079a88
- (void)_updateForCurrentSizeCategory;	// IMP=0x00000001000799c8
- (void)_updateFont;	// IMP=0x00000001000798bc
- (void)setupUI;	// IMP=0x0000000100079230
- (void)layoutSubviews;	// IMP=0x00000001000791a4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000790e0
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100079048
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100079014
- (id)initWithText:(id)arg1;	// IMP=0x0000000100078f64

@end
