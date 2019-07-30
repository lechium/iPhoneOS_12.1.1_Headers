//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBAppSwitcherSoftOutlineShadowView, SBDisplayItem, UIView<SBAppSwitcherPageContentView>;

@interface SBAppSwitcherPageView : UIView
{
    UIView *_hitTestBlocker;	// 8 = 0x8
    UIView<SBAppSwitcherPageContentView> *_view;	// 16 = 0x10
    UIView *_overlayView;	// 24 = 0x18
    SBDisplayItem *_displayItem;	// 32 = 0x20
    UIView *_contentDarkeningView;	// 40 = 0x28
    long long _shadowStyle;	// 48 = 0x30
    double _shadowAlpha;	// 56 = 0x38
    double _cornerRadius;	// 64 = 0x40
    SBAppSwitcherSoftOutlineShadowView *_shadowView;	// 72 = 0x48
    UIView *auxiliaryView;	// 80 = 0x50
    id <SBAppSwitcherPageViewDelegate> _delegate;	// 88 = 0x58
}

+ (double)shadowOutset;	// IMP=0x00000001000606b4
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double shadowAlpha; // @synthesize shadowAlpha=_shadowAlpha;
@property(nonatomic) long long shadowStyle; // @synthesize shadowStyle=_shadowStyle;
@property(retain, nonatomic) SBDisplayItem *displayItem; // @synthesize displayItem=_displayItem;
@property(nonatomic) __weak id <SBAppSwitcherPageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIView *auxiliaryView; // @synthesize auxiliaryView;
@property(retain, nonatomic) UIView *overlay; // @synthesize overlay=_overlayView;
@property(retain, nonatomic) UIView<SBAppSwitcherPageContentView> *view; // @synthesize view=_view;
- (void).cxx_destruct;	// IMP=0x00000001000607a8
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x0000000100060630
- (struct CGAffineTransform)_overlayTransform;	// IMP=0x0000000100060624
- (struct CGAffineTransform)_scaleTransform;	// IMP=0x0000000100060570
- (struct CGPoint)_centerForSubviewLayout;	// IMP=0x0000000100060554
- (struct CGRect)_viewFrame;	// IMP=0x0000000100060548
- (void)_updateCornerRadius;	// IMP=0x00000001000603fc
- (void)_setupShadowImage;	// IMP=0x0000000100060358
- (void)_updateShadow;	// IMP=0x0000000100060278
- (void)transitionDidEnd:(_Bool)arg1 forPresentation:(_Bool)arg2;	// IMP=0x00000001000601a8
- (void)interactionDidEnd:(_Bool)arg1;	// IMP=0x00000001000600f8
- (void)updateTransitionProgress:(double)arg1;	// IMP=0x000000010006003c
- (void)viewDismissing:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;	// IMP=0x000000010005ff50
- (void)viewPresenting:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;	// IMP=0x000000010005fe64
- (void)invalidate;	// IMP=0x000000010005fe0c
@property(nonatomic) struct CGRect shadowClippingFrame;
@property(nonatomic) _Bool shouldClipShadow;
@property(nonatomic) double darkeningAlpha;
@property(nonatomic) double contentAlpha;
@property(nonatomic) double overlayAlpha;
- (void)setBlocksTouches:(_Bool)arg1;	// IMP=0x000000010005f910
- (void)respondToBecomingInvisibleIfNecessary;	// IMP=0x000000010005f868
- (void)prepareToBecomeVisibleIfNecessary;	// IMP=0x000000010005f7c0
- (void)setView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010005f3a4
- (void)layoutSubviews;	// IMP=0x000000010005f06c
- (void)_orderSubviews;	// IMP=0x000000010005efd8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010005ee78

@end
