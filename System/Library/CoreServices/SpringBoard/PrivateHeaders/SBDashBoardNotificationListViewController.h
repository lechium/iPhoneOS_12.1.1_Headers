//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "NCNotificationListViewControllerDestinationDelegate.h"
#import "NCNotificationListViewControllerUserInteractionDelegate.h"
#import "SBDashBoardNotificationDestination.h"
#import "SBMotionGestureObserver.h"

@class BSTimer, NCNotificationPriorityListViewController, NCNotificationRequest, NSHashTable, NSMutableDictionary, NSMutableSet, NSString, SBDashBoardClippingLine, SBFTouchPassThroughView;

@interface SBDashBoardNotificationListViewController : SBDashBoardViewControllerBase <NCNotificationListViewControllerUserInteractionDelegate, NCNotificationListViewControllerDestinationDelegate, SBMotionGestureObserver, SBDashBoardNotificationDestination>
{
    NCNotificationPriorityListViewController *_listViewController;	// 8 = 0x8
    SBDashBoardClippingLine *_clippingLine;	// 16 = 0x10
    SBFTouchPassThroughView *_clippingView;	// 24 = 0x18
    double _headerOffset;	// 32 = 0x20
    double _footerOffset;	// 40 = 0x28
    _Bool _listPresentingContent;	// 48 = 0x30
    _Bool _listDismissingContent;	// 49 = 0x31
    _Bool _listBeingLaidOut;	// 50 = 0x32
    NSHashTable *_notificationEffectViews;	// 56 = 0x38
    BSTimer *_significantUserInteractionTimer;	// 64 = 0x40
    _Bool _listSuppressLongLookDismissal;	// 72 = 0x48
    id <SBDashBoardNotificationListViewControllerDelegate> _delegate;	// 80 = 0x50
    id <SBDashBoardNotificationDispatcher> _dispatcher;	// 88 = 0x58
    NSMutableDictionary *_staticContentProviders;	// 96 = 0x60
    NSMutableDictionary *_hiddenPreviewContentProviders;	// 104 = 0x68
    NSMutableSet *_phoneCoalescingContentProviders;	// 112 = 0x70
    NCNotificationRequest *_activeRaiseToListenNotificationRequest;	// 120 = 0x78
}

@property(retain, nonatomic) NCNotificationRequest *activeRaiseToListenNotificationRequest; // @synthesize activeRaiseToListenNotificationRequest=_activeRaiseToListenNotificationRequest;
@property(retain, nonatomic) NSMutableSet *phoneCoalescingContentProviders; // @synthesize phoneCoalescingContentProviders=_phoneCoalescingContentProviders;
@property(retain, nonatomic) NSMutableDictionary *hiddenPreviewContentProviders; // @synthesize hiddenPreviewContentProviders=_hiddenPreviewContentProviders;
@property(retain, nonatomic) NSMutableDictionary *staticContentProviders; // @synthesize staticContentProviders=_staticContentProviders;
@property(nonatomic) __weak id <SBDashBoardNotificationDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(nonatomic) __weak id <SBDashBoardNotificationListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool hasContent; // @synthesize hasContent=_listPresentingContent;
- (void).cxx_destruct;	// IMP=0x0000000100477490
- (id)notificationListScrollView;	// IMP=0x00000001004772e0
- (void)_hideOrShowRequestsForParentNotificationSectionSettings:(id)arg1;	// IMP=0x0000000100477188
- (void)_hideOrShowRequestsForNotificationSectionSettings:(id)arg1;	// IMP=0x00000001004770ac
- (_Bool)_notificationSectionSettingsHidesSection:(id)arg1;	// IMP=0x000000010047703c
- (void)_didPresentNotificationCenter;	// IMP=0x0000000100476f14
- (void)_invalidateTimerIfSnoozeAlarmNotificationStaticContentProvider:(id)arg1;	// IMP=0x0000000100476eb0
- (id)_snoozeAlarmNotificationStaticContentProviderForNotificationRequest:(id)arg1 viewController:(id)arg2;	// IMP=0x0000000100476d08
- (void)_coalesceNotificationRequestIfPossible:(id)arg1 forCoalescedNotification:(id)arg2;	// IMP=0x0000000100476a34
- (void)_coalesceHiddenPreviewNotificationRequestIfPossible:(id)arg1 forCoalescedNotification:(id)arg2;	// IMP=0x0000000100476814
- (id)_phoneCoalescingContentProviderWithSameContactAsNotificationRequest:(id)arg1;	// IMP=0x0000000100476690
- (id)_threadIdentifierForNotificationRequest:(id)arg1;	// IMP=0x00000001004765cc
- (id)_identifierForNotificationRequest:(id)arg1;	// IMP=0x0000000100476508
- (struct UIEdgeInsets)_scrollIndicatorInsetsForContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000001004764f8
- (struct UIEdgeInsets)_listViewContentInset;	// IMP=0x0000000100476454
- (struct CGRect)_suggestedListViewFrame;	// IMP=0x0000000100476374
- (void)_clearContentIncludingPersistent:(_Bool)arg1;	// IMP=0x00000001004760ec
- (void)_layoutListView;	// IMP=0x0000000100475e98
- (void)_updatePresentation;	// IMP=0x0000000100475c5c
- (void)_performSelfCorrectingListViewAction:(CDUnknownBlockType)arg1;	// IMP=0x0000000100475b8c
- (void)_setListHasContent:(_Bool)arg1;	// IMP=0x0000000100475afc
- (_Bool)wouldHandleButtonEvent:(id)arg1;	// IMP=0x0000000100475ac8
- (_Bool)handleEvent:(id)arg1;	// IMP=0x00000001004754f0
- (long long)presentationTransition;	// IMP=0x00000001004754e8
- (long long)presentationPriority;	// IMP=0x00000001004754e0
- (long long)presentationType;	// IMP=0x00000001004754d8
- (void)didReceiveRaiseGesture;	// IMP=0x0000000100475354
- (void)notificationListViewController:(id)arg1 setRaiseGestureDetectionEnabled:(_Bool)arg2 forNotificationRequest:(id)arg3;	// IMP=0x0000000100475118
- (void)notificationListViewController:(id)arg1 willDismissRemainingContentWithTransitionCoordinator:(id)arg2;	// IMP=0x0000000100474e74
- (void)notificationListViewControllerIsUpdatingContent:(id)arg1;	// IMP=0x0000000100474e68
- (void)notificationListViewController:(id)arg1 willPresentInitialContentWithTransitionCoordinator:(id)arg2;	// IMP=0x0000000100474ce4
- (_Bool)notificationListViewController:(id)arg1 showSupplementaryActionsForNotificationRequest:(id)arg2;	// IMP=0x0000000100474be4
- (_Bool)notificationListViewController:(id)arg1 shouldAllowInteractionsForNotificationRequest:(id)arg2;	// IMP=0x0000000100474b48
- (void)notificationListViewController:(id)arg1 didEndDisplayingCellForNotificationRequest:(id)arg2;	// IMP=0x0000000100474a6c
- (id)notificationListViewController:(id)arg1 staticContentProviderForNotificationRequest:(id)arg2 viewController:(id)arg3;	// IMP=0x000000010047467c
- (void)notificationListViewController:(id)arg1 requestsClearingNotificationRequests:(id)arg2;	// IMP=0x000000010047460c
- (void)notificationListViewController:(id)arg1 requestsExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100474540
- (void)notificationListViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010047437c
- (void)notificationListViewController:(id)arg1 shouldFinishLongLookTransitionForNotification:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100474214
- (struct CGRect)notificationListViewController:(id)arg1 convertRect:(struct CGRect)arg2 toLocalWindowSpaceFromView:(id)arg3;	// IMP=0x0000000100474200
- (id)notificationListViewController:(id)arg1 preferredViewControllerForPresentingFromViewController:(id)arg2;	// IMP=0x0000000100474158
- (id)customCellBackgroundViewForNotificationListViewController:(id)arg1;	// IMP=0x00000001004740e0
- (void)notificationListViewControllerDidEndScrolling:(id)arg1;	// IMP=0x0000000100473fb4
- (void)notificationListViewControllerDidScroll:(id)arg1;	// IMP=0x0000000100473e04
- (void)notificationListViewControllerDidSignificantUserInteraction:(id)arg1;	// IMP=0x0000000100473bb0
- (_Bool)isNotificationContentExtensionVisible:(id)arg1;	// IMP=0x0000000100473b38
- (void)updateNotificationSectionSettings:(id)arg1;	// IMP=0x0000000100473b2c
- (void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;	// IMP=0x00000001004737d8
- (void)updateNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;	// IMP=0x0000000100473544
- (void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;	// IMP=0x00000001004731d4
- (void)performCustomTransitionToVisible:(_Bool)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001004731c0
- (void)rebuildEverythingForReason:(id)arg1;	// IMP=0x0000000100473148
- (void)updateForPresentation:(id)arg1;	// IMP=0x0000000100473014
- (void)aggregateBehavior:(id)arg1;	// IMP=0x0000000100472f88
- (void)aggregateAppearance:(id)arg1;	// IMP=0x0000000100472eec
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100472da4
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100472bb8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100472b1c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100472974
- (void)viewWillLayoutSubviews;	// IMP=0x00000001004728a4
- (void)viewDidLoad;	// IMP=0x0000000100472560
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001004723d8

// Remaining properties
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long participantState;
@property(readonly) Class superclass;

@end

