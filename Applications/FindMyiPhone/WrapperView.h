//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint;

@interface WrapperView : UIView
{
    UIView *_contentView;	// 8 = 0x8
    NSLayoutConstraint *_heightConstraint;	// 16 = 0x10
}

@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;	// IMP=0x000000010005c5f0
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000010005c51c
- (void)updateConstraints;	// IMP=0x000000010005c32c
- (void)layoutSubviews;	// IMP=0x000000010005c284

@end

