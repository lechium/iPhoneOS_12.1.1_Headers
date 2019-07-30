//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBBannerContextView;

@interface SBBannerContainerView : UIView
{
    _Bool _modal;	// 8 = 0x8
    _Bool _highlighted;	// 9 = 0x9
    SBBannerContextView *_bannerView;	// 16 = 0x10
    UIView *_backgroundView;	// 24 = 0x18
    UIView *_inlayView;	// 32 = 0x20
    double _maximumHeight;	// 40 = 0x28
    UIView *_inlayContainerView;	// 48 = 0x30
}

@property(retain, nonatomic) UIView *inlayContainerView; // @synthesize inlayContainerView=_inlayContainerView;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) double maximumHeight; // @synthesize maximumHeight=_maximumHeight;
@property(nonatomic) __weak UIView *inlayView; // @synthesize inlayView=_inlayView;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak SBBannerContextView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic, getter=isModal) _Bool modal; // @synthesize modal=_modal;
- (void).cxx_destruct;	// IMP=0x0000000100425328
- (double)_bannerBottomY;	// IMP=0x00000001004251a4
- (struct CGRect)_inlineContainerFrame;	// IMP=0x0000000100425140
- (struct CGRect)_backgroundFrame;	// IMP=0x00000001004250dc
- (void)_layoutBackgroundView;	// IMP=0x0000000100425080
- (void)_layoutInlayContainerView;	// IMP=0x0000000100424edc
- (void)layoutSubviews;	// IMP=0x0000000100424e7c
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000100424a7c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001004249f8

@end
