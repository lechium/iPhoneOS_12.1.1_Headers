//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDMedicalRecordGroupableCell.h"

@class NSLayoutConstraint, NSString, UIColor, UIFont, UILabel;

@interface WDMedicalRecordTimelinePanelTitleCell : WDMedicalRecordGroupableCell
{
    NSString *_title;	// 136 = 0x88
    UIColor *_categoryColor;	// 144 = 0x90
    UILabel *_titleLabel;	// 152 = 0x98
    NSLayoutConstraint *_titleBottomConstraint;	// 160 = 0xa0
    UIFont *_subheadlineFont;	// 168 = 0xa8
}

@property(retain, nonatomic) UIFont *subheadlineFont; // @synthesize subheadlineFont=_subheadlineFont;
@property(retain, nonatomic) NSLayoutConstraint *titleBottomConstraint; // @synthesize titleBottomConstraint=_titleBottomConstraint;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIColor *categoryColor; // @synthesize categoryColor=_categoryColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x00000001000620d8
- (void)_updateForCurrentSizeCategory;	// IMP=0x0000000100061f60
- (void)setupSubviews;	// IMP=0x00000001000618b4

@end

