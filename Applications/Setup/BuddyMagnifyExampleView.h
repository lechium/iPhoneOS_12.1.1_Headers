//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BuddyMagnifyController, UIButton, UIImageView, UILabel;

@interface BuddyMagnifyExampleView : UIView
{
    UIImageView *_exampleImageView;	// 8 = 0x8
    UILabel *_standardExampleLabel;	// 16 = 0x10
    UILabel *_zoomedExampleLabel;	// 24 = 0x18
    UIButton *_standardButton;	// 32 = 0x20
    UIButton *_zoomedButton;	// 40 = 0x28
    BuddyMagnifyController *_controller;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010003e238
- (void)tappedImage:(id)arg1;	// IMP=0x000000010003e1bc
- (void)layoutSubviews;	// IMP=0x000000010003de70
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010003de04
- (id)initWithController:(id)arg1;	// IMP=0x000000010003d6b4

@end
