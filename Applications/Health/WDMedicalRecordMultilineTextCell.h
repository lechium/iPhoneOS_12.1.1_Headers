//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSAttributedString, UILabel, UIView;

@interface WDMedicalRecordMultilineTextCell : UITableViewCell
{
    NSAttributedString *_text;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
    UIView *_background;	// 24 = 0x18
}

@property(retain, nonatomic) UIView *background; // @synthesize background=_background;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSAttributedString *text; // @synthesize text=_text;
- (void).cxx_destruct;	// IMP=0x000000010006e02c
- (void)_setupSubviews;	// IMP=0x000000010006d6b0
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010006d5a0

@end
