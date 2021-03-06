//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBLayoutElementAdornmentView, SBOrientationTransformWrapperView, UIGestureRecognizer, UISwipeGestureRecognizer;

@interface SBLayoutElementContainerView : UIView
{
    SBLayoutElementAdornmentView *_adornmentView;	// 8 = 0x8
    UIView *_contentView;	// 16 = 0x10
    SBOrientationTransformWrapperView *_contentWrapperView;	// 24 = 0x18
    UIGestureRecognizer *_dismissTapRecognizer;	// 32 = 0x20
    UISwipeGestureRecognizer *_dismissSwipeRecognizer;	// 40 = 0x28
    id <SBLayoutElementContainerViewDelegate> _delegate;	// 48 = 0x30
    _Bool _transitioning;	// 56 = 0x38
    long long _orientation;	// 64 = 0x40
    _Bool _keyboardVisible;	// 72 = 0x48
    struct CGRect _keyboardFrame;	// 80 = 0x50
    _Bool _resizing;	// 112 = 0x70
    double _pinResizeGrabberHorizontalOffset;	// 120 = 0x78
}

@property(nonatomic, getter=isResizing) _Bool resizing; // @synthesize resizing=_resizing;
@property(nonatomic) double pinResizeGrabberHorizontalOffset; // @synthesize pinResizeGrabberHorizontalOffset=_pinResizeGrabberHorizontalOffset;
@property(nonatomic) __weak id <SBLayoutElementContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100237970
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000100237820
- (void)updateVibrancyForPinResizeGrabberView;	// IMP=0x00000001002376f4
- (void)_updatePinResizeGrabberVerticalOffsetWithAnimationDuration:(double)arg1;	// IMP=0x00000001002375ec
- (void)_keyboardFrameWillChange:(id)arg1;	// IMP=0x0000000100237410
- (void)_handleDimmingViewGesture:(id)arg1;	// IMP=0x00000001002373c8
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x0000000100237344
- (void)layoutSubviews;	// IMP=0x0000000100237294
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100237250
- (id)_contentWrapperView;	// IMP=0x0000000100237240
@property(retain, nonatomic) UIView *contentView;
@property(nonatomic) long long orientation;
- (unsigned long long)_supportedOrientations;	// IMP=0x0000000100237108
- (void)setLayoutElementViewAlpha:(double)arg1;	// IMP=0x00000001002370f4
- (struct CGRect)pinResizeGrabberFrame;	// IMP=0x00000001002370b0
- (void)setWantsPinResizeGrabber:(_Bool)arg1 withPercent:(double)arg2;	// IMP=0x0000000100236fcc
@property(nonatomic) _Bool wantsPinResizeGrabber;
- (void)didEndResize;	// IMP=0x0000000100236f58
- (void)willBeginResize;	// IMP=0x0000000100236f20
- (_Bool)_isTransitioning;	// IMP=0x0000000100236f10
- (void)didEndTransition;	// IMP=0x0000000100236ef8
- (void)willBeginTransition;	// IMP=0x0000000100236edc
- (void)prepareForReuse;	// IMP=0x0000000100236e08
@property(nonatomic, getter=isSideSwitcherGrabberPressed) _Bool sideSwitcherGrabberPressed;
@property(nonatomic) long long sideSwitcherGrabberStyle;
- (void)setDimmingLevel:(long long)arg1 withPercent:(double)arg2;	// IMP=0x0000000100236d90
@property(nonatomic) long long dimmingLevel;
- (void)dealloc;	// IMP=0x0000000100236c2c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010023694c

@end

