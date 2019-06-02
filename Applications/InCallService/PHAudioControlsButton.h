//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class PHRoundView, UIImage;

@interface PHAudioControlsButton : UIButton
{
    UIImage *_controlImage;	// 8 = 0x8
    unsigned long long _controlType;	// 16 = 0x10
    PHRoundView *_roundView;	// 24 = 0x18
    struct UIEdgeInsets _contentInsets;	// 32 = 0x20
}

@property(retain) PHRoundView *roundView; // @synthesize roundView=_roundView;
@property struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) unsigned long long controlType; // @synthesize controlType=_controlType;
@property(retain, nonatomic) UIImage *controlImage; // @synthesize controlImage=_controlImage;
- (void).cxx_destruct;	// IMP=0x0000000100022f3c
- (double)_titleOffset;	// IMP=0x00000001000194f8
- (struct CGSize)_buttonSize;	// IMP=0x00000001000195f8
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000010001a220
- (id)disabledImage;	// IMP=0x00000001000569f8
- (id)highlightedImage;	// IMP=0x0000000100056964
- (id)selectedImage;	// IMP=0x00000001000568d8
- (id)normalImage;	// IMP=0x0000000100056844
- (void)updateImage;	// IMP=0x0000000100056730
- (void)updateRoundViewColor;	// IMP=0x0000000100056554
- (void)updateViews;	// IMP=0x0000000100056500
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000010001b650
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000010001bab8
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000100056428
- (void)setContentRect:(struct CGRect)arg1;	// IMP=0x000000010005639c
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;	// IMP=0x000000010001b7d0
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;	// IMP=0x000000010001931c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100018c68

@end

