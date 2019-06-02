//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDMedicalRecordGroupableCell.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface WDMedicalRecordStandaloneImageCell : WDMedicalRecordGroupableCell
{
    _Bool _showDisclosureIndicator;	// 136 = 0x88
    UILabel *_titleLabel;	// 144 = 0x90
    UILabel *_detailLabel;	// 152 = 0x98
    UIImageView *_disclosureChevronView;	// 160 = 0xa0
    UIImageView *_titleImageView;	// 168 = 0xa8
}

@property(retain, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(retain, nonatomic) UIImageView *disclosureChevronView; // @synthesize disclosureChevronView=_disclosureChevronView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool showDisclosureIndicator; // @synthesize showDisclosureIndicator=_showDisclosureIndicator;
- (void).cxx_destruct;	// IMP=0x000000010005c080
- (void)_updateForCurrentSizeCategory;	// IMP=0x000000010005bec0
@property(copy, nonatomic) UIImage *titleImage;
@property(copy, nonatomic) NSString *detail;
@property(copy, nonatomic) NSString *title;
- (void)setupSubviews;	// IMP=0x000000010005ae70

@end

