//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardPresentationViewController.h"

#import "SBDashBoardNotificationDestination.h"
#import "SBDashBoardNotificationListViewControllerDelegate.h"
#import "SBDashBoardStatusTextViewControllerDelegate.h"
#import "SBLockScreenNowPlayingControllerDelegate.h"
#import "_UISettingsKeyObserver.h"

@class NSString, SBDashBoardNotificationListViewController, SBDashBoardNowPlayingController, SBDashBoardStatusTextViewController, SBDashBoardUserPictureViewController, SBLockScreenLogoutButtonViewController, SBLockScreenSettings, SBSlideUpAppGrabberView;

@interface SBDashBoardMainPageContentViewController : SBDashBoardPresentationViewController <SBDashBoardStatusTextViewControllerDelegate, SBLockScreenNowPlayingControllerDelegate, _UISettingsKeyObserver, SBDashBoardNotificationListViewControllerDelegate, SBDashBoardNotificationDestination>
{
    SBDashBoardNowPlayingController *_nowPlayingController;	// 8 = 0x8
    long long _nowPlayingState;	// 16 = 0x10
    SBDashBoardUserPictureViewController *_userPictureViewController;	// 24 = 0x18
    SBDashBoardNotificationListViewController *_notificationViewController;	// 32 = 0x20
    SBDashBoardStatusTextViewController *_statusTextViewController;	// 40 = 0x28
    SBLockScreenLogoutButtonViewController *_logoutButtonViewController;	// 48 = 0x30
    SBLockScreenSettings *_testSettings;	// 56 = 0x38
    _Bool _authenticatedSinceFingerOn;	// 64 = 0x40
    NSString *_cachedMesaFailureText;	// 72 = 0x48
    _Bool _temporaryMesaFailureTextActive;	// 80 = 0x50
    _Bool _useFakeBlur;	// 81 = 0x51
}

+ (Class)viewClass;	// IMP=0x000000010027d378
@property(nonatomic) _Bool useFakeBlur; // @synthesize useFakeBlur=_useFakeBlur;
@property(readonly, nonatomic) SBDashBoardNotificationListViewController *notificationListViewController; // @synthesize notificationListViewController=_notificationViewController;
- (void).cxx_destruct;	// IMP=0x000000010027f2d8
- (void)_updateCallToActionTextAnimated:(_Bool)arg1;	// IMP=0x000000010027f0ac
@property(readonly, nonatomic) SBSlideUpAppGrabberView *slideUpAppGrabberView;
- (void)updateSlideUpAppGrabberViewForApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x000000010027efbc
- (void)_updateMediaControlsVisibility;	// IMP=0x000000010027ee9c
- (void)_addOrRemoveViewsAsAppropriate;	// IMP=0x000000010027ee24
- (void)_updateSlideUpGrabberViewVisibilityIfNecesary;	// IMP=0x000000010027ed9c
- (void)_addOrRemoveNotificationsListIfNecessaryAnimated:(_Bool)arg1;	// IMP=0x000000010027ecf8
- (void)_addOrRemoveLogoutButtonViewController;	// IMP=0x000000010027ea00
- (void)_addOrRemoveUserPictureViewController;	// IMP=0x000000010027e90c
- (void)_addStatusTextViewControllerIfNecessary;	// IMP=0x000000010027e758
- (void)_addSlideUpAppGrabberView;	// IMP=0x000000010027e6d8
- (void)_addCallToAction;	// IMP=0x000000010027e660
- (id)_dashBoardMainPageView;	// IMP=0x000000010027e654
- (void)notificationListViewController:(id)arg1 hasContent:(_Bool)arg2;	// IMP=0x000000010027e644
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x000000010027e638
- (void)nowPlayingController:(id)arg1 didChangeToState:(long long)arg2;	// IMP=0x000000010027e608
- (_Bool)isNotificationContentExtensionVisible:(id)arg1;	// IMP=0x000000010027e540
- (void)updateNotificationSectionSettings:(id)arg1;	// IMP=0x000000010027e528
- (void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;	// IMP=0x000000010027e384
- (void)updateNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;	// IMP=0x000000010027e1e0
- (void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;	// IMP=0x000000010027dfe8
@property(nonatomic) __weak id <SBDashBoardNotificationDispatcher> dispatcher; // @dynamic dispatcher;
- (void)dashBoardStatusTextViewControllerContentDidChange:(id)arg1;	// IMP=0x000000010027df64
- (_Bool)handleEvent:(id)arg1;	// IMP=0x000000010027d8d8
- (void)updateForPresentation:(id)arg1;	// IMP=0x000000010027d83c
- (void)aggregateBehavior:(id)arg1;	// IMP=0x000000010027d628
- (void)aggregateAppearance:(id)arg1;	// IMP=0x000000010027d38c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010027d2cc
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010027d228
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010027d190
- (void)viewDidLoad;	// IMP=0x000000010027d028
- (void)setRasterizesNotifications:(_Bool)arg1;	// IMP=0x000000010027cf50
- (void)updateCallToActionForMesaMatchFailure;	// IMP=0x000000010027cc2c
@property(readonly, nonatomic, getter=isShowingMediaControls) _Bool showingMediaControls;
- (void)dealloc;	// IMP=0x000000010027cb3c
- (id)init;	// IMP=0x000000010027c9f8

// Remaining properties
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long participantState;
@property(readonly) Class superclass;

@end

