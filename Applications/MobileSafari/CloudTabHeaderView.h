//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface CloudTabHeaderView : UIView
{
    UILabel *_label;	// 8 = 0x8
    UIImageView *_icon;	// 16 = 0x10
    UIView *_separatorView;	// 24 = 0x18
    long long _style;	// 32 = 0x20
    double _bottomPadding;	// 40 = 0x28
    double _paddingBetweenIconAndLabel;	// 48 = 0x30
    double _leftEdgeInset;	// 56 = 0x38
}

+ (double)defaultHeightForStyle:(long long)arg1;	// IMP=0x000000010007d6b8
- (void).cxx_destruct;	// IMP=0x000000010007dafc
@property(copy, nonatomic) NSString *text;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010007d9c8
- (struct CGSize)_iconSizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010007d934
- (void)layoutSubviews;	// IMP=0x000000010007d6e8
@property(readonly, nonatomic) struct CGRect labelFrame;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010007d664
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010007d2a4

@end
