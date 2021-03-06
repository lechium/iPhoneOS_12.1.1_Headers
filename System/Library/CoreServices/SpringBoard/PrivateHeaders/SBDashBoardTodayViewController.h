//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSearchEtceteraMultiplexingViewController.h"

#import "SBDashBoardAppearanceProviding.h"
#import "SBDashBoardBehaviorProviding.h"
#import "SBDashBoardEventHandling.h"
#import "SPUISearchViewControllerDelegate.h"

@class NSMutableSet, NSSet, NSString, SBDashBoardComponent, SBDashBoardPageViewController, UIColor, _UILegibilitySettings;

@interface SBDashBoardTodayViewController : SBSearchEtceteraMultiplexingViewController <SPUISearchViewControllerDelegate, SBDashBoardAppearanceProviding, SBDashBoardBehaviorProviding, SBDashBoardEventHandling>
{
    _Bool _isAuthenticated;	// 32 = 0x20
    SBDashBoardComponent *_dateViewComponent;	// 40 = 0x28
    id <SBDashBoardTodayViewControllerDelegate> _todayViewControllerDelegate;	// 48 = 0x30
    _Bool _showingMultiColumnLayout;	// 56 = 0x38
    _Bool _disableScrollingForModalPresentation;	// 57 = 0x39
    NSSet *_contentViews;	// 64 = 0x40
    NSMutableSet *_scrollingDisabledReasons;	// 72 = 0x48
    SBDashBoardPageViewController *_pageController;	// 80 = 0x50
}

@property(nonatomic) __weak SBDashBoardPageViewController *pageController; // @synthesize pageController=_pageController;
@property(nonatomic) __weak id <SBDashBoardTodayViewControllerDelegate> todayViewControllerDelegate; // @synthesize todayViewControllerDelegate=_todayViewControllerDelegate;
- (void).cxx_destruct;	// IMP=0x00000001003a4768
- (id)_dateMovingScrollView;	// IMP=0x00000001003a4630
- (double)_restingValueForDateMovingScrollView;	// IMP=0x00000001003a45a8
- (double)_maxClippingOffset;	// IMP=0x00000001003a40bc
- (id)_searchNavigationBar;	// IMP=0x00000001003a4040
- (id)_contentView;	// IMP=0x00000001003a3fec
- (id)_todayViewController;	// IMP=0x00000001003a3f98
- (_Bool)_shouldHideDateTimeForZeroWidgetDisplay;	// IMP=0x00000001003a3f48
- (double)_desiredAlphaForScrollView:(id)arg1;	// IMP=0x00000001003a3ed8
- (void)_updateAppearanceForScrollView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001003a3d14
- (void)_updateAppearanceForScrollView:(id)arg1;	// IMP=0x00000001003a3d04
- (struct CGPoint)_offsetForScrollView:(id)arg1;	// IMP=0x00000001003a3bf4
- (void)_updateAppearance;	// IMP=0x00000001003a3bb4
- (void)_updateBehavior;	// IMP=0x00000001003a3b74
- (void)_evaluateContentViews;	// IMP=0x00000001003a3914
- (void)_hitCancelButtonWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001003a38c4
- (void)_focusSearchFieldWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001003a3878
- (long long)requestedWallpaperVariantForWidgetBackgroundViews;	// IMP=0x00000001003a3870
- (id)requestedLegibilitySettings;	// IMP=0x00000001003a37f8
- (void)_changeSpotlightVisible:(_Bool)arg1 animationBegan:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001003a3668
- (void)_changeSpotlightVisible:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001003a3650
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000001003a3644
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000001003a3638
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000001003a3624
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000001003a3618
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000001003a360c
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000001003a35d8
- (void)dismissSearchViewWithReason:(unsigned long long)arg1;	// IMP=0x00000001003a3588
- (void)searchFieldDidFocus;	// IMP=0x00000001003a3538
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) long long scrollingStrategy;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
- (_Bool)wouldHandleButtonEvent:(id)arg1;	// IMP=0x00000001003a33e8
- (_Bool)handleEvent:(id)arg1;	// IMP=0x00000001003a32f0
- (void)didChangeToMode:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000001003a3288
- (void)willChangeToMode:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000001003a31dc
- (void)textSelectionInteractionDidEnd;	// IMP=0x00000001003a31c4
- (void)textSelectionInteractionWillBegin;	// IMP=0x00000001003a31ac
- (void)presentationControllerDidEndDismissing:(id)arg1;	// IMP=0x00000001003a3194
- (void)presentationControllerDidEndPresenting:(id)arg1;	// IMP=0x00000001003a317c
- (void)_setDashBoardScrollingDisabled:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x00000001003a30b8
- (_Bool)_isDashBoardScrollingDisabled;	// IMP=0x00000001003a3088
- (void)willDeactivateHosting;	// IMP=0x00000001003a3054
- (void)willActivateHosting;	// IMP=0x00000001003a2fe0
- (unsigned long long)initialPresentationMode;	// IMP=0x00000001003a2fd8
- (unsigned long long)defaultSearchViewDismissalReason;	// IMP=0x00000001003a2fd0
- (unsigned long long)defaultSearchViewPresentationSource;	// IMP=0x00000001003a2fc8
- (_Bool)isWidgetVisible:(id)arg1;	// IMP=0x00000001003a2f50
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000001003a2d3c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001003a2ce0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001003a2c90
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001003a2a8c
- (void)viewDidLoad;	// IMP=0x00000001003a2a3c
- (id)init;	// IMP=0x00000001003a2930

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

