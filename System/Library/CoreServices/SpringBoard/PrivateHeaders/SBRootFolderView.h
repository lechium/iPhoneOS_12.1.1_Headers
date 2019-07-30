//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFolderView.h"

#import "SBFramewiseInteractiveTransitionAnimatorDelegate.h"
#import "SBSearchEtceteraMultiplexingViewControllerAppearanceDelegate.h"
#import "SBSearchGestureObserver.h"
#import "SBViewControllerTransitionContextDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "_UISettingsKeyObserver.h"

@class NSMutableSet, NSString, SBDockIconListView, SBDockView, SBFParallaxSettings, SBFramewiseInteractiveTransitionAnimator, SBHomeScreenPullDownSearchViewController, SBHomeScreenSearchableTodayViewController, SBPercentPassthroughInteractiveTransition, SBRootFolder, SBSearchBackdropView, SBSearchBlurEffectView, SBViewControllerTransitionContext, UILabel, _SBMinusPageStepper, _SBRootFolderLayoutWrapperView;

@interface SBRootFolderView : SBFolderView <_UISettingsKeyObserver, SBSearchGestureObserver, UIGestureRecognizerDelegate, SBViewControllerTransitionContextDelegate, SBFramewiseInteractiveTransitionAnimatorDelegate, SBSearchEtceteraMultiplexingViewControllerAppearanceDelegate>
{
    SBDockView *_dockView;	// 72 = 0x48
    SBDockIconListView *_dockListView;	// 80 = 0x50
    _Bool _dockViewBorrowed;	// 88 = 0x58
    UILabel *_idleTextView;	// 96 = 0x60
    SBFParallaxSettings *_parallaxSettings;	// 104 = 0x68
    NSMutableSet *_parallaxDisabledReasons;	// 112 = 0x70
    double _reachabilityYOffset;	// 120 = 0x78
    _Bool _layingOutForReachability;	// 128 = 0x80
    _SBRootFolderLayoutWrapperView *_searchPulldownWrapperView;	// 136 = 0x88
    _SBRootFolderLayoutWrapperView *_searchableTodayWrapperView;	// 144 = 0x90
    SBSearchBlurEffectView *_searchBlurEffectView;	// 152 = 0x98
    SBSearchBackdropView *_searchBackdropView;	// 160 = 0xa0
    _SBMinusPageStepper *_minusPageAnimationStepper;	// 168 = 0xa8
    double _baseOffsetForDeterminingScrollToSearchThreshold;	// 176 = 0xb0
    struct CGPoint _contentOffsetWhenScrollToSearchBeganDragging;	// 184 = 0xb8
    long long _currentPageIndexWhenScrollToSearchBeganDragging;	// 200 = 0xc8
    double _dockListHeightWhenScrollToSearchBeganDragging;	// 208 = 0xd0
    double _pageWidthWhenScrollToSearchBeganDragging;	// 216 = 0xd8
    _Bool _retryingAutoScrollToSearchDueToUnexpectedContentOffset;	// 224 = 0xe0
    _Bool _scrollToSearchIsDraggingOrAnimating;	// 225 = 0xe1
    _Bool _scrollToSearchIsBeingPresentedOrDismissedAutomatically;	// 226 = 0xe2
    _Bool _searchWasVisibleWhenScrollToSearchBeganDragging;	// 227 = 0xe3
    long long _targetPageIndexForAutoScrollToSearch;	// 232 = 0xe8
    double _doNotUseThisDirectlyPlease_dockOffscreenProgress;	// 240 = 0xf0
    NSMutableSet *_dockOffscreenProgressSettingReasons;	// 248 = 0xf8
    SBHomeScreenPullDownSearchViewController *_pullDownSearchViewController;	// 256 = 0x100
    SBHomeScreenSearchableTodayViewController *_searchableTodayViewController;	// 264 = 0x108
    SBViewControllerTransitionContext *_currentPullDownTransition;	// 272 = 0x110
    SBFramewiseInteractiveTransitionAnimator *_currentPullDownAnimator;	// 280 = 0x118
    SBPercentPassthroughInteractiveTransition *_currentPullDownInteractor;	// 288 = 0x120
    SBViewControllerTransitionContext *_currentSlideOverTransition;	// 296 = 0x128
    SBFramewiseInteractiveTransitionAnimator *_currentSlideOverAnimator;	// 304 = 0x130
    SBPercentPassthroughInteractiveTransition *_currentSlideOverInteractor;	// 312 = 0x138
    _Bool _spotlightTransitioningFromBreadcrumb;	// 320 = 0x140
    unsigned long long _dockEdge;	// 328 = 0x148
}

@property(nonatomic, getter=isDockViewBorrowed) _Bool dockViewBorrowed; // @synthesize dockViewBorrowed=_dockViewBorrowed;
@property(nonatomic) unsigned long long dockEdge; // @synthesize dockEdge=_dockEdge;
@property(nonatomic, getter=isSpotlightTransitioningFromBreadcrumb) _Bool spotlightTransitioningFromBreadcrumb; // @synthesize spotlightTransitioningFromBreadcrumb=_spotlightTransitioningFromBreadcrumb;
@property(readonly, nonatomic) SBFParallaxSettings *parallaxSettings; // @synthesize parallaxSettings=_parallaxSettings;
- (void).cxx_destruct;	// IMP=0x000000010050fe74
- (id)interactionControllerForDismissal:(id)arg1;	// IMP=0x000000010050fde4
- (id)interactionControllerForPresentation:(id)arg1;	// IMP=0x000000010050fdb4
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x000000010050fd4c
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x000000010050fce4
- (void)_kickoffTransitionWithViewController:(id)arg1 presenting:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x000000010050f9dc
- (void)transitionDidFinish:(id)arg1;	// IMP=0x000000010050f61c
- (void)transitionWillFinish:(id)arg1;	// IMP=0x000000010050f4fc
- (void)transitionDidReverse:(id)arg1;	// IMP=0x000000010050f4f0
- (void)transitionWillReverse:(id)arg1;	// IMP=0x000000010050f434
- (void)transitionDidBegin:(id)arg1;	// IMP=0x000000010050f428
- (void)transitionWillBegin:(id)arg1;	// IMP=0x000000010050eccc
- (void)transitionContext:(id)arg1 updateTransitionProgress:(double)arg2;	// IMP=0x000000010050eb48
- (_Bool)searchEtceteraViewController:(id)arg1 shouldDelaySearchWillDismissWithReason:(unsigned long long)arg2;	// IMP=0x000000010050eb38
- (_Bool)searchEtceteraViewController:(id)arg1 shouldPresentSearchFromSource:(unsigned long long)arg2;	// IMP=0x000000010050eb20
- (void)searchEtceteraViewController:(id)arg1 didChangeToMode:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x000000010050e9f4
- (void)searchEtceteraViewController:(id)arg1 willChangeToMode:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x000000010050e8c8
- (double)_pullDownSearchVisiblilityProgress;	// IMP=0x000000010050e85c
- (_Bool)isPullDownSearchVisibleOrTransitioning;	// IMP=0x000000010050e818
- (_Bool)_pullDownSearchIsTransitioning;	// IMP=0x000000010050e800
- (_Bool)isPullDownSearchVisible;	// IMP=0x000000010050e7b0
- (id)_activeVCForPullDownSearch;	// IMP=0x000000010050e7a0
- (void)searchGesture:(id)arg1 resetAnimated:(_Bool)arg2;	// IMP=0x000000010050e6ec
- (void)searchGesture:(id)arg1 completedShowing:(_Bool)arg2;	// IMP=0x000000010050e59c
- (void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2;	// IMP=0x000000010050e508
- (void)searchGesture:(id)arg1 startedShowing:(_Bool)arg2;	// IMP=0x000000010050e474
- (double)_searchableTodayViewDockOffscreenProgress;	// IMP=0x000000010050e418
- (double)_searchableTodayViewVisiblilityProgress;	// IMP=0x000000010050e3ac
- (_Bool)_searchableTodayViewModeWantsBlur;	// IMP=0x000000010050e37c
- (_Bool)_searchableTodayViewIsTransitioning;	// IMP=0x000000010050e364
- (_Bool)isSearchableTodayViewVisible;	// IMP=0x000000010050e314
- (id)_activeVCForSearchableTodayView;	// IMP=0x000000010050e304
- (void)handleReachabilityModeDeactivated;	// IMP=0x000000010050e2ec
- (void)handleReachabilityModeActivated;	// IMP=0x000000010050e2a0
- (void)_animateViewsForScrollingToSearchableTodayViewWithPercent:(double)arg1;	// IMP=0x000000010050df0c
- (void)_animateViewsForPullingToSearchWithPercent:(double)arg1;	// IMP=0x000000010050dca4
- (void)_handleReachabilityDectivatedAnimate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010050d8bc
- (void)_handleReachabilityActivatedAnimate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010050d350
- (double)reachabilityYOffset;	// IMP=0x000000010050d340
- (void)handleReachabilityActivated:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010050d31c
- (void)handleCancelReachabilityGesture:(id)arg1;	// IMP=0x000000010050d27c
- (void)_setReachabilityTemporarilyDisabled:(_Bool)arg1;	// IMP=0x000000010050d224
- (void)_setParallaxDisabled:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x000000010050d174
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x000000010050d168
- (void)_removeParallax;	// IMP=0x000000010050d140
- (void)_configureParallax;	// IMP=0x000000010050d11c
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000010050cfe0
- (void)_resetSearchScrollTrackingState;	// IMP=0x000000010050cf50
- (void)_captureInitialSearchScrollTrackingState;	// IMP=0x000000010050ce4c
- (void)_cleanUpAfterScrolling;	// IMP=0x000000010050cad4
- (struct UIEdgeInsets)_searchableTodayViewInsetsForPageControl;	// IMP=0x000000010050ca88
- (void)_updateStatusBarInsetsToPercent:(double)arg1;	// IMP=0x000000010050c9e0
- (struct UIEdgeInsets)_statusBarInsetsForDockEdge:(unsigned long long)arg1 dockOffscreenPercentage:(double)arg2;	// IMP=0x000000010050c95c
- (double)_offsetForSearchableTodayViewPage;	// IMP=0x000000010050c888
- (double)_pageWidth;	// IMP=0x000000010050c784
- (void)setScrolling:(_Bool)arg1;	// IMP=0x000000010050c6bc
- (double)_scrollOffsetForPageAtIndex:(long long)arg1;	// IMP=0x000000010050c674
- (void)_currentPageIndexDidChange;	// IMP=0x000000010050c4bc
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010050c388
- (void)updateIconListIndexAndVisibility:(_Bool)arg1;	// IMP=0x000000010050c0d8
- (void)iconScrollViewDidCancelTouchTracking:(id)arg1;	// IMP=0x000000010050bf6c
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x000000010050befc
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000010050be8c
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x000000010050be34
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000010050bd74
- (void)setIdleText:(id)arg1;	// IMP=0x000000010050b870
- (_Bool)_updatesWallpaperRelativeCenter;	// IMP=0x000000010050b810
- (void)cleanUpAfterTransition;	// IMP=0x000000010050b7b4
- (void)prepareForTransition;	// IMP=0x000000010050b758
- (void)layoutIconLists:(double)arg1 domino:(_Bool)arg2 forceRelayout:(_Bool)arg3;	// IMP=0x000000010050b6c8
- (void)tearDownListViews;	// IMP=0x000000010050b66c
- (void)_updateEditingStateAnimated:(_Bool)arg1;	// IMP=0x000000010050b5dc
- (void)resetIconListViews;	// IMP=0x000000010050b508
- (id)iconListViewAtPoint:(struct CGPoint)arg1;	// IMP=0x000000010050b43c
- (id)iconListViewAtIndex:(unsigned long long)arg1;	// IMP=0x000000010050b3d4
- (id)searchableTodayViewController;	// IMP=0x000000010050b3c4
- (id)pullDownSearchViewController;	// IMP=0x000000010050b3b4
- (struct UIEdgeInsets)statusBarInsetsForDockEdge:(unsigned long long)arg1;	// IMP=0x000000010050b378
- (void)returnDockView;	// IMP=0x000000010050b2f8
- (void)borrowDockView;	// IMP=0x000000010050b2e8
- (void)_enableUserInteractionAfterSignificantAnimation;	// IMP=0x000000010050b26c
- (void)_disableUserInteractionBeforeSignificantAnimation;	// IMP=0x000000010050b1f0
- (void)setContentAlpha:(double)arg1;	// IMP=0x000000010050b170
- (void)fadeContentForMinificationFraction:(double)arg1;	// IMP=0x000000010050b0b0
- (void)_updateDockViewZOrdering;	// IMP=0x000000010050aff0
- (void)updateDockViewOrientation;	// IMP=0x000000010050af94
- (_Bool)_isExternallyAnimatingDockOffscreenFraction;	// IMP=0x000000010050aec4
- (void)endAnimatingDockOffscreenFractionForReason:(id)arg1;	// IMP=0x000000010050aeac
- (void)_setDockOffscreenFraction:(double)arg1;	// IMP=0x000000010050ac6c
- (void)setDockOffscreenFraction:(double)arg1;	// IMP=0x000000010050ac14
- (void)beginAnimatingDockOffscreenFractionForReason:(id)arg1;	// IMP=0x000000010050abfc
- (id)dockView;	// IMP=0x000000010050abec
- (void)_layoutSubviews;	// IMP=0x000000010050aa60
- (void)layoutDockView;	// IMP=0x000000010050a9c4
- (struct CGRect)effectivePageControlFrame;	// IMP=0x000000010050a6d4
- (struct CGRect)_scrollViewFrameForDockEdge:(unsigned long long)arg1;	// IMP=0x000000010050a574
- (void)layoutSearchableViews;	// IMP=0x000000010050a480
- (void)_layoutSubviewsForSearchableTodayView;	// IMP=0x000000010050a360
- (void)_layoutSubviewsForPulldownSearch;	// IMP=0x000000010050a320
- (void)setStatusBarHeight:(double)arg1;	// IMP=0x000000010050a248
- (unsigned long long)_minusPageCount;	// IMP=0x000000010050a1f8
- (struct CGRect)effectiveDockFrame;	// IMP=0x000000010050a054
- (double)effectiveStatusBarHeight;	// IMP=0x000000010050a010
- (void)setLegibilitySettings:(id)arg1;	// IMP=0x0000000100509f7c
- (void)setOrientation:(long long)arg1;	// IMP=0x0000000100509ef0
- (void)setNeedsLayout;	// IMP=0x0000000100509e94
- (void)returnScalingView;	// IMP=0x0000000100509e38
- (void)dealloc;	// IMP=0x0000000100509d8c
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 forSnapshot:(_Bool)arg4;	// IMP=0x0000000100509764
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 context:(id)arg4;	// IMP=0x00000001005096e8
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3;	// IMP=0x0000000100509680

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) SBRootFolder *folder; // @dynamic folder;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
