//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface BuddyAppleIDLinkView : UIView
{
    UIButton *_linkButton;	// 8 = 0x8
    double _buttonTopPadding;	// 16 = 0x10
    double _sidePadding;	// 24 = 0x18
}

@property(nonatomic) double sidePadding; // @synthesize sidePadding=_sidePadding;
@property(nonatomic) double buttonTopPadding; // @synthesize buttonTopPadding=_buttonTopPadding;
@property(readonly, nonatomic) UIButton *linkButton; // @synthesize linkButton=_linkButton;
- (void).cxx_destruct;	// IMP=0x00000001000a783c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000a7754
- (void)layoutSubviews;	// IMP=0x00000001000a7670
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000a7500

@end
