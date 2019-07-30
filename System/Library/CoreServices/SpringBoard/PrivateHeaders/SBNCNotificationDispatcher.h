//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBDashBoardViewControllerObserver.h"
#import "SBNotificationExtensionVisibilityProviding.h"

@class NCBulletinNotificationSource, NCNotificationDispatcher, NSString, SBLockScreenManager, SBLockStateAggregator, SBNCAlertingController, SBNCNotificationDispatcherDelegate, SBNotificationBannerDestination, SBNotificationCenterController, SBNotificationCenterDestination, SBNotificationLegacyCarDestination, SBQuietModeStateAggregator, SBUserAlertNotificationSource, SBWalletNotificationSource;

@interface SBNCNotificationDispatcher : NSObject <SBDashBoardViewControllerObserver, SBNotificationExtensionVisibilityProviding>
{
    SBNotificationBannerDestination *_bannerDestination;	// 8 = 0x8
    id <SBAlertingNotificationDestination> _dashBoardDestination;	// 16 = 0x10
    SBWalletNotificationSource *_walletNotificationSource;	// 24 = 0x18
    SBNotificationCenterDestination *_notificationCenterDestination;	// 32 = 0x20
    NCNotificationDispatcher *_dispatcher;	// 40 = 0x28
    SBNCNotificationDispatcherDelegate *_dispatcherDelegate;	// 48 = 0x30
    NCBulletinNotificationSource *_notificationSource;	// 56 = 0x38
    SBUserAlertNotificationSource *_userNotificationAlertSource;	// 64 = 0x40
    SBLockScreenManager *_lockScreenManager;	// 72 = 0x48
    SBLockStateAggregator *_lockStateAggregator;	// 80 = 0x50
    SBQuietModeStateAggregator *_quietModeStateAggregator;	// 88 = 0x58
    SBNotificationCenterController *_notificationCenterController;	// 96 = 0x60
    SBNotificationLegacyCarDestination *_carDestination;	// 104 = 0x68
    SBNCAlertingController *_alertingController;	// 112 = 0x70
}

@property(retain, nonatomic) SBNCAlertingController *alertingController; // @synthesize alertingController=_alertingController;
@property(retain, nonatomic) SBNotificationLegacyCarDestination *carDestination; // @synthesize carDestination=_carDestination;
@property(retain, nonatomic) SBNotificationCenterController *notificationCenterController; // @synthesize notificationCenterController=_notificationCenterController;
@property(retain, nonatomic) SBQuietModeStateAggregator *quietModeStateAggregator; // @synthesize quietModeStateAggregator=_quietModeStateAggregator;
@property(retain, nonatomic) SBLockStateAggregator *lockStateAggregator; // @synthesize lockStateAggregator=_lockStateAggregator;
@property(retain, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
@property(retain, nonatomic) SBUserAlertNotificationSource *userNotificationAlertSource; // @synthesize userNotificationAlertSource=_userNotificationAlertSource;
@property(retain, nonatomic) NCBulletinNotificationSource *notificationSource; // @synthesize notificationSource=_notificationSource;
@property(retain, nonatomic) SBNCNotificationDispatcherDelegate *dispatcherDelegate; // @synthesize dispatcherDelegate=_dispatcherDelegate;
@property(retain, nonatomic) NCNotificationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly, nonatomic) SBNotificationCenterDestination *notificationCenterDestination; // @synthesize notificationCenterDestination=_notificationCenterDestination;
@property(readonly, nonatomic) SBWalletNotificationSource *walletNotificationSource; // @synthesize walletNotificationSource=_walletNotificationSource;
@property(readonly, nonatomic) id <SBAlertingNotificationDestination> dashBoardDestination; // @synthesize dashBoardDestination=_dashBoardDestination;
@property(readonly, nonatomic) SBNotificationBannerDestination *bannerDestination; // @synthesize bannerDestination=_bannerDestination;
- (void).cxx_destruct;	// IMP=0x000000010057f1b0
- (_Bool)isNotificationContentExtensionVisible:(id)arg1;	// IMP=0x000000010057eda8
- (void)dashBoardController:(id)arg1 didChangeActiveBehavior:(id)arg2;	// IMP=0x000000010057ed9c
- (_Bool)_lockScreenWantsBanners;	// IMP=0x000000010057ed1c
- (_Bool)_areNotificationsAllowedInLockScreen;	// IMP=0x000000010057ec9c
- (_Bool)_isCarPlayActive;	// IMP=0x000000010057ec88
- (_Bool)_isDeviceLocked;	// IMP=0x000000010057ec3c
- (void)_setupNewDestinationsForDispatcher:(id)arg1;	// IMP=0x000000010057e9e4
- (void)_setupLegacyDestinationsForDispatcher:(id)arg1 lockScreenManager:(id)arg2;	// IMP=0x000000010057e958
- (void)_updateActiveDestinations;	// IMP=0x000000010057e66c
- (id)init;	// IMP=0x000000010057e124

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
