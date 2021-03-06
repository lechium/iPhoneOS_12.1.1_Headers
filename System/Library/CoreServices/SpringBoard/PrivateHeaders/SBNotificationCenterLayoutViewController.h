//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBBulletinActionHandler.h"
#import "SBModeViewControllerDelegate.h"

@class NSSet, NSString, SBModeViewController, SBNotificationSeparatorView, SBNotificationsViewController;

@interface SBNotificationCenterLayoutViewController : UIViewController <SBBulletinActionHandler, SBModeViewControllerDelegate>
{
    long long _supportedNotificationCenterLayoutModes;	// 8 = 0x8
    long long _lastPresentedNotificationCenterLayoutMode;	// 16 = 0x10
    SBNotificationSeparatorView *_topSeparatorView;	// 24 = 0x18
    id <SBBulletinActionHandler> _bulletinActionHandler;	// 32 = 0x20
    SBNotificationsViewController *_notificationsViewController;	// 40 = 0x28
    SBModeViewController *_modeViewController;	// 48 = 0x30
}

@property(readonly, nonatomic) SBModeViewController *modeViewController; // @synthesize modeViewController=_modeViewController;
@property(readonly, nonatomic) SBNotificationsViewController *notificationsViewController; // @synthesize notificationsViewController=_notificationsViewController;
@property(nonatomic) __weak id <SBBulletinActionHandler> bulletinActionHandler; // @synthesize bulletinActionHandler=_bulletinActionHandler;
- (void).cxx_destruct;	// IMP=0x000000010041b7f0
- (void)runScrollTest:(id)arg1 iterations:(long long)arg2 delta:(long long)arg3 useAAGView:(_Bool)arg4;	// IMP=0x000000010041b638
- (_Bool)handleAction:(id)arg1 forBulletin:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010041b560
- (struct UIEdgeInsets)contentInsetsForModeViewController:(id)arg1;	// IMP=0x000000010041b444
- (void)_backgroundContrastDidChange:(id)arg1;	// IMP=0x000000010041b2dc
@property(readonly, copy, nonatomic) NSSet *visibleContentViewControllers;
- (void)viewWillLayoutSubviews;	// IMP=0x000000010041b074
- (long long)_notificationCenterLayoutModeForCurrentState;	// IMP=0x000000010041b008
- (void)_layoutModeViewController;	// IMP=0x000000010041aecc
- (long long)layoutMode;	// IMP=0x000000010041ae0c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010041add8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010041ad54
- (void)viewDidLoad;	// IMP=0x000000010041acd0
- (void)_loadContentViewControllers;	// IMP=0x000000010041acc4
- (_Bool)_needsLayoutAfterLoadingContentViewControllers;	// IMP=0x000000010041ab20
- (_Bool)_areNotificationsViewControllersAvailable;	// IMP=0x000000010041aa7c
- (_Bool)_isDeviceMoreThanUILocked;	// IMP=0x000000010041aa24
- (id)_notificationsViewControllerCreateIfNecessary:(_Bool)arg1;	// IMP=0x000000010041a9ac
- (void)_setUpColumnViewController:(id)arg1;	// IMP=0x000000010041a920
- (_Bool)_shouldLayoutInTwoColumnsInActiveLayoutMode;	// IMP=0x000000010041a8e8
- (_Bool)_shouldLayoutInTwoColumnsInLayoutMode:(long long)arg1;	// IMP=0x000000010041a88c
- (_Bool)_managesTwoColumns;	// IMP=0x000000010041a874
- (id)_localizableTitleForColumnViewController:(id)arg1;	// IMP=0x000000010041a7e4
- (id)initForNotificationCenterLayoutMode:(long long)arg1;	// IMP=0x000000010041a6dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

