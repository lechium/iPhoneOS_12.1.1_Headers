//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@interface PillBackgroundLabel : UILabel
{
    struct UIEdgeInsets _insets;	// 8 = 0x8
}

@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010001c6d4
- (void)capFontSize;	// IMP=0x000000010001c588
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000010001c4f8
- (void)layoutSubviews;	// IMP=0x000000010001c468
- (void)commonSetup;	// IMP=0x000000010001c3ac
- (void)awakeFromNib;	// IMP=0x000000010001c35c
- (void)prepareForInterfaceBuilder;	// IMP=0x000000010001c30c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010001c2b4

@end

