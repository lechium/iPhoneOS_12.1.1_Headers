//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor, UIFont, UIImage, UIImageView, UILabel;

@interface TabIconAndTitleView : UIView
{
    _Bool _horizontallyCenterTitle;	// 8 = 0x8
    UIImageView *_iconImageView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    _Bool _usesAccessibilityContentSizeCategory;	// 32 = 0x20
}

+ (struct CGSize)defaultTabIconSize;	// IMP=0x00000001000907a4
- (void).cxx_destruct;	// IMP=0x0000000100090fc0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100090f04
- (double)_tabIconPadding;	// IMP=0x0000000100090ee4
- (struct CGSize)_tabIconSize;	// IMP=0x0000000100090e54
@property(readonly, nonatomic) double titleOffset;
@property(retain, nonatomic) UIColor *textColor;
@property(nonatomic) long long numberOfLines;
@property(retain, nonatomic) UIFont *titleFont;
@property(retain, nonatomic) UIImage *icon;
@property(copy, nonatomic) NSString *title;
- (void)layoutSubviews;	// IMP=0x000000010009098c
- (id)initWithHorizontallyCenteredTitle:(_Bool)arg1;	// IMP=0x00000001000907b0

@end

