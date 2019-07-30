//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBIconImageView, UILabel;

@interface SBSceneViewAppIconView : UIView
{
    _Bool _showsAppIconBorder;	// 8 = 0x8
    SBIconImageView *_imageView;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
    UIView *_iconBorderView;	// 32 = 0x20
}

@property(retain, nonatomic) UIView *iconBorderView; // @synthesize iconBorderView=_iconBorderView;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) SBIconImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool showsAppIconBorder; // @synthesize showsAppIconBorder=_showsAppIconBorder;
- (void).cxx_destruct;	// IMP=0x00000001005025c0
- (void)layoutSubviews;	// IMP=0x0000000100502300
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100502234
- (void)dealloc;	// IMP=0x0000000100501ee8
- (id)initWithIcon:(id)arg1;	// IMP=0x0000000100501d60

@end

