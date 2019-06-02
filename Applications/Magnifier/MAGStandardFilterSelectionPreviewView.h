//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAGFilterSelectionPreviewView.h"

#import "UIScrollViewDelegate.h"

@class CABackdropLayer, CALayer, MAGFilterSetChangeSubscription, MAGNamedFilterSet, NSArray, NSString, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface MAGStandardFilterSelectionPreviewView : MAGFilterSelectionPreviewView <UIScrollViewDelegate>
{
    _Bool _dragInProgress;	// 8 = 0x8
    MAGNamedFilterSet *_transitioningFilterSet;	// 16 = 0x10
    CABackdropLayer *_transitioningFilterLayer;	// 24 = 0x18
    CALayer *_imageLayer;	// 32 = 0x20
    UIScrollView *_scrollView;	// 40 = 0x28
    UIView *_filterContainer;	// 48 = 0x30
    UIView *_imageContainer;	// 56 = 0x38
    NSArray *_backdrops;	// 64 = 0x40
    MAGFilterSetChangeSubscription *_filterSetChangeSubscription;	// 72 = 0x48
    MAGNamedFilterSet *_currentBestSetForDrag;	// 80 = 0x50
}

@property(retain, nonatomic) MAGNamedFilterSet *currentBestSetForDrag; // @synthesize currentBestSetForDrag=_currentBestSetForDrag;
@property(nonatomic) _Bool dragInProgress; // @synthesize dragInProgress=_dragInProgress;
@property(retain, nonatomic) MAGFilterSetChangeSubscription *filterSetChangeSubscription; // @synthesize filterSetChangeSubscription=_filterSetChangeSubscription;
@property(retain, nonatomic) NSArray *backdrops; // @synthesize backdrops=_backdrops;
@property(retain, nonatomic) UIView *imageContainer; // @synthesize imageContainer=_imageContainer;
@property(retain, nonatomic) UIView *filterContainer; // @synthesize filterContainer=_filterContainer;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(retain, nonatomic) CABackdropLayer *transitioningFilterLayer; // @synthesize transitioningFilterLayer=_transitioningFilterLayer;
@property(retain, nonatomic) MAGNamedFilterSet *transitioningFilterSet; // @synthesize transitioningFilterSet=_transitioningFilterSet;
- (void).cxx_destruct;	// IMP=0x0000000100009bc4
- (id)currentFilterSetForUnitTesting;	// IMP=0x0000000100009a0c
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000001000099b8
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000100009854
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000001000097bc
- (void)sizeTransitionDidEnd;	// IMP=0x0000000100009580
- (void)sizeTransitionWillBeginToSize:(struct CGSize)arg1;	// IMP=0x00000001000092cc
- (void)informDelegateOfScrollWithEndingContentOffset:(struct CGPoint)arg1;	// IMP=0x0000000100009238
- (id)bestFilterSetForContentOffset:(struct CGPoint)arg1;	// IMP=0x0000000100008f64
- (void)centerFilterSet:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100008e3c
- (void)layoutSubviews;	// IMP=0x0000000100008b64
- (struct CGSize)scrollViewContentSize;	// IMP=0x0000000100008acc
- (void)positionBackdrops;	// IMP=0x00000001000081b4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000078e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

