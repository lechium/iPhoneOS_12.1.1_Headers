//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableDictionary, NSString, SBAppSwitcherScrollView, SBDisplayItem, SBUIChevronView;

@interface SBSideSwitcherScrollingItemViewController : UIViewController <UIScrollViewDelegate>
{
    SBAppSwitcherScrollView *_scrollView;	// 8 = 0x8
    NSArray *_displayItems;	// 16 = 0x10
    NSMutableDictionary *_visiblePageViews;	// 24 = 0x18
    SBDisplayItem *_transitioningDisplayItem;	// 32 = 0x20
    double _transitionProgress;	// 40 = 0x28
    double _interactiveTransitionProgress;	// 48 = 0x30
    double _displayItemContentTransitionProgress;	// 56 = 0x38
    _Bool _isAnimatingDisplayItemContentTransition;	// 64 = 0x40
    _Bool _transitionPresenting;	// 65 = 0x41
    unsigned long long _transitionState;	// 72 = 0x48
    SBUIChevronView *_grabberView;	// 80 = 0x50
    long long _sideSwitcherGrabberStyle;	// 88 = 0x58
    _Bool _sideSwitcherGrabberPressed;	// 96 = 0x60
    struct CGPoint _beginningOfDismissalContentOffset;	// 104 = 0x68
    _Bool _shouldResetContentOffset;	// 120 = 0x78
    id <SBSideSwitcherScrollingItemViewDelegate> _delegate;	// 128 = 0x80
}

@property(nonatomic) __weak id <SBSideSwitcherScrollingItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long sideSwitcherGrabberStyle; // @synthesize sideSwitcherGrabberStyle=_sideSwitcherGrabberStyle;
@property(nonatomic) double transitionProgress; // @synthesize transitionProgress=_transitionProgress;
@property(nonatomic) unsigned long long transitionState; // @synthesize transitionState=_transitionState;
@property(copy, nonatomic) NSArray *displayItems; // @synthesize displayItems=_displayItems;
- (void).cxx_destruct;	// IMP=0x000000010058231c
- (void)replaceItemAtIndex:(unsigned long long)arg1 withNewItem:(id)arg2 duration:(double)arg3;	// IMP=0x0000000100582170
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100582130
- (void)removeItem:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001005820f0
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled;
- (void)endTransitionWithSuccess:(_Bool)arg1;	// IMP=0x0000000100581f4c
- (void)prepareToEndTransitionAnimated:(_Bool)arg1;	// IMP=0x0000000100581d70
- (void)startTransitionWithDisplayItem:(id)arg1 presenting:(_Bool)arg2;	// IMP=0x00000001005818fc
- (struct CGPoint)_contentOffsetOnRotationToSize:(struct CGSize)arg1 oldViewHeight:(double)arg2 oldOffsetY:(double)arg3;	// IMP=0x0000000100581784
- (void)_updateVisiblePageViews;	// IMP=0x0000000100580fb0
- (void)_applyStyleToPageView:(id)arg1;	// IMP=0x0000000100580e48
- (void)_applyPageViewStyleToVisiblePageViews;	// IMP=0x0000000100580ca8
- (struct CGSize)_scrollViewContentSizeForProgress:(double)arg1;	// IMP=0x0000000100580b88
- (struct CGPoint)_scrollViewContentOffsetForProgress:(double)arg1;	// IMP=0x0000000100580a40
- (void)_updateScrollViewLayoutForPresentationOrDismissal;	// IMP=0x00000001005809e4
- (void)_startUpdatingScrollViewForPresentationOrDismissal;	// IMP=0x0000000100580964
- (void)_layoutGrabber;	// IMP=0x00000001005805c4
- (_Bool)_isItemVisible:(id)arg1 withSidePadding:(double)arg2 progress:(double)arg3;	// IMP=0x0000000100580468
- (struct CGRect)_frameForItem:(unsigned long long)arg1 progressPresented:(double)arg2;	// IMP=0x00000001005803d8
- (struct CGRect)_frameForItem:(unsigned long long)arg1;	// IMP=0x0000000100580358
- (struct CGPoint)_centerOfIndex:(long long)arg1 forProgress:(double)arg2;	// IMP=0x00000001005801e4
- (struct CGPoint)_centerOfIndex:(long long)arg1;	// IMP=0x0000000100580190
- (double)_distanceBetweenItems;	// IMP=0x0000000100580138
- (struct CGSize)_itemSizeForProgress:(double)arg1;	// IMP=0x000000010057ffdc
- (struct CGSize)_itemSize;	// IMP=0x000000010057ff90
- (unsigned long long)_itemsPerScreen;	// IMP=0x000000010057ff20
- (double)contentOffsetSpeedInScrollingDirection;	// IMP=0x000000010057fef4
- (double)heightFromTopForFinalItemSize;	// IMP=0x000000010057fe6c
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000010057fccc
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x000000010057fcc8
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000010057fcc4
- (void)scrollViewDidBeginDragging:(id)arg1;	// IMP=0x000000010057fcc0
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000010057fc68
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000010057fad8
- (void)viewWillLayoutSubviews;	// IMP=0x000000010057f8bc
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010057f888
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010057f838
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010057f7d8
- (void)_updateScrollViewFrameAndContentSize;	// IMP=0x000000010057f6cc
- (void)viewDidLoad;	// IMP=0x000000010057f340
- (void)dealloc;	// IMP=0x000000010057f2e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

