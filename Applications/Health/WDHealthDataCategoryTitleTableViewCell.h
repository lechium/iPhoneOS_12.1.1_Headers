//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, NSString, UILabel;

@interface WDHealthDataCategoryTitleTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    NSLayoutConstraint *_topLayoutConstraint;	// 16 = 0x10
    NSLayoutConstraint *_bottomLayoutConstraint;	// 24 = 0x18
    long long _headerType;	// 32 = 0x20
    double _lastBaselineToBottomDistance;	// 40 = 0x28
    NSString *_titleText;	// 48 = 0x30
}

@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;	// IMP=0x0000000100119880
- (void)setLastBaselineToBottomDistance:(double)arg1;	// IMP=0x0000000100119828
- (void)setHeaderType:(long long)arg1;	// IMP=0x00000001001197e0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100119680
- (void)_updateForCurrentSizeCategory;	// IMP=0x000000010011960c
- (double)_titleLabelLastBaselineToBottom;	// IMP=0x00000001001195a8
- (double)_titleLabelTopToFirstBaseline;	// IMP=0x0000000100119530
- (id)_titleLabelFont;	// IMP=0x000000010011950c
- (void)_updateFont;	// IMP=0x00000001001194b8
- (void)_setupUI;	// IMP=0x00000001001190ac
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100119014
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100118f7c
- (id)initWithHeaderType:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100118f00

@end

