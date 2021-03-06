//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BuddyRoundedRectImageView, NSString, UIButton, UIColor, UILabel;

@interface BuddyAppleIDTableHeaderView : UIView
{
    double _calculatedHeight;	// 8 = 0x8
    BuddyRoundedRectImageView *_iconView;	// 16 = 0x10
    _Bool _topIconHasRoundedCorners;	// 24 = 0x18
    UILabel *_textLabel;	// 32 = 0x20
    UILabel *_detailTextLabel;	// 40 = 0x28
    double _linkButtonTopPadding;	// 48 = 0x30
    UIButton *_linkButton;	// 56 = 0x38
    NSString *_topIconName;	// 64 = 0x40
    UIColor *_topIconTintColor;	// 72 = 0x48
    struct CGSize _iconSize;	// 80 = 0x50
}

+ (id)defaultDetailTextAttributes;	// IMP=0x00000001000a7a3c
+ (id)defaultTitleTextAttributes;	// IMP=0x00000001000a78b4
+ (void)initialize;	// IMP=0x00000001000a7850
@property(retain, nonatomic) UIColor *topIconTintColor; // @synthesize topIconTintColor=_topIconTintColor;
@property(nonatomic) _Bool topIconHasRoundedCorners; // @synthesize topIconHasRoundedCorners=_topIconHasRoundedCorners;
@property(copy, nonatomic) NSString *topIconName; // @synthesize topIconName=_topIconName;
@property(readonly, nonatomic) UIButton *linkButton; // @synthesize linkButton=_linkButton;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) double linkButtonTopPadding; // @synthesize linkButtonTopPadding=_linkButtonTopPadding;
@property(readonly, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;	// IMP=0x00000001000a8a98
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000a8944
- (void)layoutSubviews;	// IMP=0x00000001000a8904
- (void)_getHeight:(double *)arg1 forWidth:(double)arg2 shouldLayoutViews:(_Bool)arg3;	// IMP=0x00000001000a83bc
@property(copy, nonatomic) NSString *linkButtonTitle;
@property(nonatomic) double rightPadding;
@property(nonatomic) double leftPadding;
@property(nonatomic) double bottomPadding;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000a7bb0

@end

