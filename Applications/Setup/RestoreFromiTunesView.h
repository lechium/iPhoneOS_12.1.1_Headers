//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface RestoreFromiTunesView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UIImageView *_iTunesLogoView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000571c4
- (void)setTitle:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100056f40
- (void)layoutSubviews;	// IMP=0x0000000100056d54
- (void)animateFadeOut;	// IMP=0x0000000100056c1c
- (void)animateFadeOutForRotate;	// IMP=0x0000000100056b3c
- (void)animateFadeIn;	// IMP=0x0000000100056944
- (void)_addLogoView;	// IMP=0x00000001000565d8
- (void)_removeLogoView;	// IMP=0x000000010005659c
- (id)init;	// IMP=0x000000010005641c

@end

