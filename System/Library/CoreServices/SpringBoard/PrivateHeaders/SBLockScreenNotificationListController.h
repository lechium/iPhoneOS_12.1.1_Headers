//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "BBObserverDelegate.h"
#import "SBAlertItemPresenter.h"
#import "SBCoordinatedPresenting.h"
#import "SBLockScreenActionHandler.h"
#import "SBLockScreenActionProvider.h"
#import "SBLockScreenNotificationBannerItemDelegate.h"
#import "SBLockScreenNotificationModel.h"
#import "SBLockScreenNotificationViewDelegate.h"
#import "SBMotionGestureObserver.h"
#import "SBPresentingDelegate.h"
#import "SBUIBannerSource.h"
#import "SBUIBannerTargetManagerObserver.h"
#import "SBVolumePressBandit.h"

@class BBObserver, BSSerializedRequestQueue, CMPocketStateManager, NSMutableArray, NSSet, NSString, SBLockScreenActionContext, SBLockScreenBounceAnimator, SBLockScreenNotificationCell, SBLockScreenNotificationListView, SBLockScreenPlugin;

@interface SBLockScreenNotificationListController : UIViewController <SBLockScreenNotificationViewDelegate, SBLockScreenNotificationModel, SBVolumePressBandit, SBUIBannerSource, SBUIBannerTargetManagerObserver, SBLockScreenActionHandler, SBLockScreenNotificationBannerItemDelegate, SBPresentingDelegate, SBCoordinatedPresenting, SBMotionGestureObserver, BBObserverDelegate, SBLockScreenActionProvider, SBAlertItemPresenter>
{
    SBLockScreenNotificationListView *_notificationView;	// 8 = 0x8
    id <SBLockScreenNotificationListDelegate> _delegate;	// 16 = 0x10
    BBObserver *_observer;	// 24 = 0x18
    NSMutableArray *_listItems;	// 32 = 0x20
    NSMutableArray *_realertTimers;	// 40 = 0x28
    BSSerializedRequestQueue *_bulletinRequestQueue;	// 48 = 0x30
    _Bool _quietModeEnabled;	// 56 = 0x38
    _Bool _turnOnScreenForOutOfPocketEvent;	// 57 = 0x39
    CDUnknownBlockType _deferredModelUpdateBlock;	// 64 = 0x40
    _Bool _hasDeferredUpdateToClearListItems;	// 72 = 0x48
    SBLockScreenActionContext *_actionContext;	// 80 = 0x50
    id <SBUIBannerTarget> _bannerTarget;	// 88 = 0x58
    NSMutableArray *_listItemsBannerQueue;	// 96 = 0x60
    SBLockScreenPlugin *_activePlugin;	// 104 = 0x68
    _Bool _isOnscreen;	// 112 = 0x70
    _Bool _hasMissedUnreadNotifications;	// 113 = 0x71
    long long _messagePrivacyRevealState;	// 120 = 0x78
    id <SBPresentingDelegate> _presentingDelegate;	// 128 = 0x80
    SBLockScreenBounceAnimator *_bounceAnimator;	// 136 = 0x88
    SBLockScreenNotificationCell *_hintingCell;	// 144 = 0x90
    struct CGPoint _hintingCellOriginalOffset;	// 152 = 0x98
    CMPocketStateManager *_pocketStateManager;	// 168 = 0xa8
    NSString *_powerAssertionName;	// 176 = 0xb0
    unsigned int _powerAssertionID;	// 184 = 0xb8
    _Bool _hasAnyContent;	// 188 = 0xbc
}

+ (id)underlayPropertiesFactory;	// IMP=0x00000001003c7730
@property(nonatomic) _Bool hasAnyContent; // @synthesize hasAnyContent=_hasAnyContent;
@property(retain, nonatomic) SBLockScreenPlugin *activePlugin; // @synthesize activePlugin=_activePlugin;
@property(readonly, nonatomic) _Bool quietModeEnabled; // @synthesize quietModeEnabled=_quietModeEnabled;
@property(nonatomic) __weak id <SBLockScreenNotificationListDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SBLockScreenActionContext *lockScreenActionContext; // @synthesize lockScreenActionContext=_actionContext;
- (void).cxx_destruct;	// IMP=0x00000001003cf72c
- (_Bool)shouldBeginHintForGesture:(id)arg1;	// IMP=0x00000001003cf5bc
- (id)_firstBulletin;	// IMP=0x00000001003cf51c
- (_Bool)_firstBulletinHasRaiseAction;	// IMP=0x00000001003cf4d0
- (void)_updateMotionGestureObservation;	// IMP=0x00000001003cf42c
- (void)didReceiveRaiseGesture;	// IMP=0x00000001003cf328
- (void)presentingControllerDidFinishPresentation:(id)arg1;	// IMP=0x00000001003cf308
- (void)presentingController:(id)arg1 willHandleGesture:(id)arg2;	// IMP=0x00000001003cf2e8
- (_Bool)presentingController:(id)arg1 gestureRecognizerShouldBegin:(id)arg2;	// IMP=0x00000001003cf2c8
- (_Bool)presentingController:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;	// IMP=0x00000001003cf260
- (void)reenableGestureRecognizer:(id)arg1;	// IMP=0x00000001003cf1ac
- (void)cancelGestureRecognizer:(id)arg1;	// IMP=0x00000001003cf068
- (void)abortAnimatedTransition;	// IMP=0x00000001003cf064
- (void)endTransitionWithVelocity:(struct CGPoint)arg1 wasCancelled:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001003cef30
- (void)updateTransitionWithTouchLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;	// IMP=0x00000001003cee60
- (void)beginPresentationWithTouchLocation:(struct CGPoint)arg1 presentationBegunHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001003ced34
- (id)cellAtTouchLocation:(struct CGPoint)arg1;	// IMP=0x00000001003ceb70
- (_Bool)isPresentingControllerTransitioning;	// IMP=0x00000001003ceb58
@property(readonly, nonatomic) NSSet *tapExcludedViews;
@property(readonly, nonatomic) NSSet *conflictingGestures;
@property(readonly, nonatomic) NSSet *gestures;
@property(readonly, nonatomic) unsigned long long hintEdge;
@property(readonly, nonatomic) double hintDisplacement;
@property(nonatomic) id <SBPresentingDelegate> presentingDelegate;
@property(readonly, nonatomic) long long coordinatedPresentingControllerIdentifier;
- (void)handleVolumeIncrease;	// IMP=0x00000001003ce7a8
- (void)handleVolumeDecrease;	// IMP=0x00000001003ce79c
- (void)bannerTargetManager:(id)arg1 didRemoveTarget:(id)arg2;	// IMP=0x00000001003ce6b8
- (void)bannerTargetManager:(id)arg1 didAddTarget:(id)arg2;	// IMP=0x00000001003ce638
- (id)newBannerViewForContext:(id)arg1;	// IMP=0x00000001003ce4f0
- (id)dequeueNextBannerItemForTarget:(id)arg1;	// IMP=0x00000001003ce41c
- (id)peekNextBannerItemForTarget:(id)arg1;	// IMP=0x00000001003ce358
@property(readonly, nonatomic, getter=isUsingBanners) _Bool usingBanners;
- (_Bool)_shouldAddBannerItem:(id)arg1;	// IMP=0x00000001003cddb4
- (void)bannerItemWasTapped:(id)arg1;	// IMP=0x00000001003cdd64
- (void)_showTestBulletin;	// IMP=0x00000001003cd6c0
- (id)listItemAtIndexPath:(id)arg1;	// IMP=0x00000001003cd640
- (unsigned long long)count;	// IMP=0x00000001003cd628
- (void)noteListViewReadyForModelUpdate;	// IMP=0x00000001003cd5e0
- (void)listView:(id)arg1 cellDidEndScrolling:(id)arg2;	// IMP=0x00000001003cd594
- (void)listView:(id)arg1 cellDidBeginScrolling:(id)arg2;	// IMP=0x00000001003cd4cc
- (void)listViewDidEndScrolling:(id)arg1;	// IMP=0x00000001003cd404
- (void)listViewDidBeginScrolling:(id)arg1;	// IMP=0x00000001003cd368
- (id)lockScreenScrollView;	// IMP=0x00000001003cd318
- (void)noteUnlockActionChanged:(id)arg1;	// IMP=0x00000001003cd30c
- (void)_dismissBulletinsForActionContext:(id)arg1;	// IMP=0x00000001003cd130
- (void)handleLockScreenActionWithContext:(id)arg1;	// IMP=0x00000001003ccd54
- (void)lockScreenViewDidEndScrollingOnPage:(long long)arg1;	// IMP=0x00000001003ccd3c
- (void)concealForChangeInMessagePrivacy;	// IMP=0x00000001003cc6ac
- (void)revealForChangeInMessagePrivacy;	// IMP=0x00000001003cc1e0
- (_Bool)removeLockScreenNotificationsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00000001003cbedc
- (_Bool)removeItemsForNotificationCenterPresentation;	// IMP=0x00000001003cbeb4
- (_Bool)removeItemsForUnlock;	// IMP=0x00000001003cbe8c
- (void)_sortItemList:(id)arg1;	// IMP=0x00000001003cbd74
- (void)_updateModelAndViewForRemovalOfItem:(id)arg1;	// IMP=0x00000001003cbd64
- (void)_updateModelForRemovalOfItem:(id)arg1 updateView:(_Bool)arg2;	// IMP=0x00000001003cbaac
- (void)_updateModelAndViewForReplacingItem:(id)arg1 withNewItem:(id)arg2;	// IMP=0x00000001003cb7b4
- (void)_updateModelAndViewForModificationOfItem:(id)arg1;	// IMP=0x00000001003cb5a4
- (void)_updateModelAndViewForAdditionOfItem:(id)arg1;	// IMP=0x00000001003cb228
- (void)_setDeferredModelUpdateBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001003cb1e8
- (void)_scheduledClockPendingNotificationRequestsDidChange:(id)arg1;	// IMP=0x00000001003ca9c8
- (void)_handleClockNotificationUpdate:(id)arg1;	// IMP=0x00000001003ca88c
- (void)updateCardItem:(id)arg1;	// IMP=0x00000001003ca87c
- (void)deactivateCardItem:(id)arg1;	// IMP=0x00000001003ca82c
- (void)activateCardItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001003ca820
- (void)_activateOrUpdateCardItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001003ca744
- (void)dismissAlertItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001003ca468
- (void)presentAlertItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001003ca2c8
- (_Bool)canPresentMultipleAlertItemsSimultaneously;	// IMP=0x00000001003ca2c0
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(_Bool)arg2;	// IMP=0x00000001003ca1a8
- (void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;	// IMP=0x00000001003c9e8c
- (void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned long long)arg2;	// IMP=0x00000001003c9e74
- (void)observer:(id)arg1 removeBulletin:(id)arg2;	// IMP=0x00000001003c9ad0
- (void)observer:(id)arg1 modifyBulletin:(id)arg2;	// IMP=0x00000001003c9858
- (id)_newItemForBulletin:(id)arg1 shouldPlayLightsAndSirens:(_Bool)arg2;	// IMP=0x00000001003c97c0
- (void)_removeCachedBannerForBulletinID:(id)arg1;	// IMP=0x00000001003c9750
- (_Bool)_shouldCacheBannerForBulletin:(id)arg1;	// IMP=0x00000001003c9678
- (void)_addItem:(id)arg1 forBulletin:(id)arg2 playLightsAndSirens:(_Bool)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x00000001003c9290
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x00000001003c8ca8
- (id)_listItemContainingCardItem:(id)arg1;	// IMP=0x00000001003c8ad4
- (id)_listItemContainingSystemAlert:(id)arg1;	// IMP=0x00000001003c8918
- (id)_listItemContainingBulletinID:(id)arg1;	// IMP=0x00000001003c8770
- (id)_coalescableListItemForNewBulletin:(id)arg1;	// IMP=0x00000001003c85c8
- (_Bool)hasMissedUnreadNotifications;	// IMP=0x00000001003c85b8
- (void)setIsOnscreen:(_Bool)arg1;	// IMP=0x00000001003c8598
- (void)setInScreenOffMode:(_Bool)arg1;	// IMP=0x00000001003c8544
- (void)_hardwareButtonPressed:(id)arg1;	// IMP=0x00000001003c8540
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001003c84a8
- (void)loadView;	// IMP=0x00000001003c8340
- (void)_presentFullscreenBulletinAlertIfNeeded;	// IMP=0x00000001003c81e4
- (id)_firstItemWantingFullscreenPresentation;	// IMP=0x00000001003c8030
- (void)_addBounceAnimator;	// IMP=0x00000001003c7a40
- (void)dealloc;	// IMP=0x00000001003c7968
- (void)prepareForTeardown;	// IMP=0x00000001003c7748
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001003c7304

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

