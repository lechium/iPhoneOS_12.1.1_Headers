//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface _WDRoundedCornerView : UIView
{
    UIColor *_backgroundColor;	// 8 = 0x8
    double _cornerRadius;	// 16 = 0x10
    struct NSDirectionalEdgeInsets _edgeInsets;	// 24 = 0x18
    UIView *_contentView;	// 56 = 0x38
}

@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;	// IMP=0x000000010000b964
@property(nonatomic) struct NSDirectionalEdgeInsets edgeInsets;
- (void)layoutSubviews;	// IMP=0x000000010000b864
- (id)initWithContentView:(id)arg1;	// IMP=0x000000010000b4dc

@end
