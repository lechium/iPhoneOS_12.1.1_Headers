//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MAGSnapshotCanvasAccessibilityElementDelegate.h"
#import "UIScrollViewDelegate.h"

@class MAGCurrentFilterSetChangeSubscription, MAGFilterSetChangeSubscription, MAGSnapshotCanvasAccessibilityElement, NSObject<MAGSnapshotViewDelegate>, NSString, UIImageView, UILongPressGestureRecognizer, UIScrollView, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface MAGSnapshotView : UIView <UIScrollViewDelegate, MAGSnapshotCanvasAccessibilityElementDelegate>
{
    _Bool _controlsHidden;	// 8 = 0x8
    NSObject<MAGSnapshotViewDelegate> *_delegate;	// 16 = 0x10
    UIImageView *_finalImageView;	// 24 = 0x18
    MAGSnapshotCanvasAccessibilityElement *_canvasAXElement;	// 32 = 0x20
    UIImageView *_startImageView;	// 40 = 0x28
    UIScrollView *_scrollView;	// 48 = 0x30
    UIView *_blackoutView;	// 56 = 0x38
    UIView *_contentContainer;	// 64 = 0x40
    MAGCurrentFilterSetChangeSubscription *_filterChangeSubscription;	// 72 = 0x48
    MAGFilterSetChangeSubscription *_filterSetChangeSubscription;	// 80 = 0x50
    UITapGestureRecognizer *_snapshotTapGestureRecognizer;	// 88 = 0x58
    UILongPressGestureRecognizer *_snapshotLongPressGestureRecognizer;	// 96 = 0x60
    struct CGRect _menuControllerTargetLocation;	// 104 = 0x68
}

@property(retain, nonatomic) UILongPressGestureRecognizer *snapshotLongPressGestureRecognizer; // @synthesize snapshotLongPressGestureRecognizer=_snapshotLongPressGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *snapshotTapGestureRecognizer; // @synthesize snapshotTapGestureRecognizer=_snapshotTapGestureRecognizer;
@property(retain, nonatomic) MAGFilterSetChangeSubscription *filterSetChangeSubscription; // @synthesize filterSetChangeSubscription=_filterSetChangeSubscription;
@property(retain, nonatomic) MAGCurrentFilterSetChangeSubscription *filterChangeSubscription; // @synthesize filterChangeSubscription=_filterChangeSubscription;
@property(retain, nonatomic) UIView *contentContainer; // @synthesize contentContainer=_contentContainer;
@property(retain, nonatomic) UIView *blackoutView; // @synthesize blackoutView=_blackoutView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *startImageView; // @synthesize startImageView=_startImageView;
@property(retain, nonatomic) MAGSnapshotCanvasAccessibilityElement *canvasAXElement; // @synthesize canvasAXElement=_canvasAXElement;
@property struct CGRect menuControllerTargetLocation; // @synthesize menuControllerTargetLocation=_menuControllerTargetLocation;
@property(retain, nonatomic) UIImageView *finalImageView; // @synthesize finalImageView=_finalImageView;
@property(nonatomic) _Bool controlsHidden; // @synthesize controlsHidden=_controlsHidden;
@property(nonatomic) __weak NSObject<MAGSnapshotViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000050d4
- (id)currentZoomedImage;	// IMP=0x0000000100004d84
- (void)zoomOutFromAXDecrement;	// IMP=0x0000000100004d0c
- (void)zoomInFromAXIncrement;	// IMP=0x0000000100004c94
- (id)currentMagnificationFactorAsString;	// IMP=0x0000000100004c14
- (void)scrollViewDidZoom:(id)arg1;	// IMP=0x00000001000049d0
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000100004988
- (double)aspectFitScale;	// IMP=0x0000000100004888
- (double)aspectFillScale;	// IMP=0x0000000100004788
- (id)viewForZoomingInScrollView:(id)arg1;	// IMP=0x000000010000477c
@property(nonatomic) _Bool blackedOut;
- (double)magnificationFactor;	// IMP=0x0000000100004664
- (void)setMagnificationFactor:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000045ec
- (void)setupZoomLimitsForInitialZoomFactor:(double)arg1;	// IMP=0x000000010000438c
- (void)layoutSubviews;	// IMP=0x00000001000042bc
- (void)jettisonStartImage;	// IMP=0x0000000100004264
- (void)setStartImageAlpha:(double)arg1;	// IMP=0x0000000100004220
- (void)didMoveToWindow;	// IMP=0x0000000100004214
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000010000420c
- (_Bool)becomeFirstResponder;	// IMP=0x0000000100004060
- (_Bool)resignFirstResponder;	// IMP=0x0000000100003fbc
- (void)longPressFired:(id)arg1;	// IMP=0x0000000100003b90
- (void)tapGestureFired:(id)arg1;	// IMP=0x0000000100003a70
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000100003a48
- (void)sendShareAction:(id)arg1;	// IMP=0x00000001000039e8
- (void)sendSaveAction:(id)arg1;	// IMP=0x0000000100003988
- (id)initWithLowResolutionStartImage:(id)arg1 highResolutionFinalImage:(id)arg2;	// IMP=0x0000000100002a50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

