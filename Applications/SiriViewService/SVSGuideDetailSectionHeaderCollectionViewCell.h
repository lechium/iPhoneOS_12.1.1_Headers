//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SiriUIContentCollectionViewCell.h"

@class NSString, SiriUITextContainerView;

@interface SVSGuideDetailSectionHeaderCollectionViewCell : SiriUIContentCollectionViewCell
{
    SiriUITextContainerView *_textContainerView;	// 8 = 0x8
}

+ (double)_trailingHorizontalOffsetWithLayoutMargins:(struct UIEdgeInsets)arg1;	// IMP=0x000000010008083c
+ (double)_leadingHorizontalOffsetWithLayoutMargins:(struct UIEdgeInsets)arg1;	// IMP=0x0000000100080810
+ (id)_font;	// IMP=0x0000000100080750
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 text:(id)arg2;	// IMP=0x0000000100080258
- (void).cxx_destruct;	// IMP=0x0000000100080868
@property(copy, nonatomic) NSString *text;
- (void)prepareForReuse;	// IMP=0x00000001000806c4
- (void)layoutSubviews;	// IMP=0x0000000100080598
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100080398

@end

