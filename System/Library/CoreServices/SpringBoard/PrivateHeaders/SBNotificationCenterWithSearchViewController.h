//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSearchEtceteraMultiplexingViewController.h"

@class NCNotificationListViewController, SBSearchEtceteraNavigationController, UIPageControl, UIView;

@interface SBNotificationCenterWithSearchViewController : SBSearchEtceteraMultiplexingViewController
{
    id <SBNotificationCenterWithSearchViewControllerPresentationDelegate> _presentationDelegate;	// 32 = 0x20
}

@property(nonatomic) __weak id <SBNotificationCenterWithSearchViewControllerPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (void).cxx_destruct;	// IMP=0x0000000100500a44
- (void)performScrollTest:(id)arg1 iterations:(long long)arg2 delta:(long long)arg3;	// IMP=0x0000000100500924
- (void)willActivateHosting;	// IMP=0x000000010050071c
- (id)customAnimator;	// IMP=0x00000001005006a8
- (id)requestedLegibilitySettings;	// IMP=0x0000000100500674
- (unsigned long long)presentationMode;	// IMP=0x000000010050066c
- (unsigned long long)initialPresentationMode;	// IMP=0x0000000100500664
- (unsigned long long)defaultSearchViewDismissalReason;	// IMP=0x000000010050065c
- (unsigned long long)defaultSearchViewPresentationSource;	// IMP=0x0000000100500654
- (_Bool)_todayViewWantsClippingLine;	// IMP=0x0000000100500588
- (_Bool)_wantsSeparatorForScrollView:(id)arg1;	// IMP=0x0000000100500504
- (id)_todayViewController;	// IMP=0x00000001005004b0
- (void)_updateClippingLineVisibilityForVisibleModes:(unsigned long long)arg1;	// IMP=0x00000001005003cc
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000001005003c0
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000001005003b4
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000001005003a0
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000100500394
- (void)didChangeToMode:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100500388
- (void)willChangeToMode:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000010050034c
@property(readonly, nonatomic) UIPageControl *pageControl;
- (void)updateClippingLineVisibility;	// IMP=0x0000000100500298
- (void)exitSpotlightAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100500278
- (void)enterSpotlightAnimated:(_Bool)arg1 fromPartialPulldown:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010050025c
@property(readonly, nonatomic) UIView *contentContainerView;
@property(readonly, nonatomic) UIView *notificationContentView;
@property(readonly, nonatomic) NCNotificationListViewController *notificationListViewController;
@property(readonly, nonatomic) SBSearchEtceteraNavigationController *navigationController;
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100500010
- (id)init;	// IMP=0x00000001004fffd8

@end
