//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SiriUIContentCollectionViewCell.h"

@class NSString, SiriUITextContainerView;

@interface SVSGuideDetailPhraseViewCell : SiriUIContentCollectionViewCell
{
    SiriUITextContainerView *_textContainerView;	// 8 = 0x8
}

+ (id)_font;	// IMP=0x00000001000841dc
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 text:(id)arg2;	// IMP=0x0000000100083e1c
- (void).cxx_destruct;	// IMP=0x00000001000841fc
@property(copy, nonatomic) NSString *text;
- (void)prepareForReuse;	// IMP=0x0000000100084150
- (void)layoutSubviews;	// IMP=0x00000001000840c4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100083f00

@end

