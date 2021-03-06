//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "CLLocationManagerDelegate.h"
#import "UIApplicationDelegate.h"
#import "UNUserNotificationCenterDelegate.h"

@class CLLocationManager, DarwinNotificationObsever, DeviceDetailViewController, FMDistanceCalculator, FMIPAccount, FMIPCommandContext, FMIPDevice, FMNetworkMonitor, FMReachability, HLPHelpViewController, MKMapView, MainViewController, NSDictionary, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString, NSTimer, NSURL, NSValue, Session, SplitViewController, UIColor, UIWindow;

@interface AppDelegate : UIResponder <UNUserNotificationCenterDelegate, UIApplicationDelegate, CLLocationManagerDelegate>
{
    _Bool _needToPreloadImages;	// 8 = 0x8
    _Bool _wasStateRestored;	// 9 = 0x9
    _Bool _isForeground;	// 10 = 0xa
    _Bool _requiresLightStatusBar;	// 11 = 0xb
    _Bool _blockLoginUsername;	// 12 = 0xc
    int _authorizationStatus;	// 16 = 0x10
    int _daemonAuthorizationStatus;	// 20 = 0x14
    UIWindow *_window;	// 24 = 0x18
    MKMapView *_sharedMapView;	// 32 = 0x20
    DeviceDetailViewController *_deviceDetailViewController;	// 40 = 0x28
    unsigned long long _mapType;	// 48 = 0x30
    Session *_session;	// 56 = 0x38
    FMReachability *_legacyReachability;	// 64 = 0x40
    FMNetworkMonitor *_networkMonitor;	// 72 = 0x48
    id _reachabilityNotificationToken;	// 80 = 0x50
    SplitViewController *_splitViewController;	// 88 = 0x58
    FMDistanceCalculator *_distanceCalculator;	// 96 = 0x60
    NSURL *_urlToOpen;	// 104 = 0x68
    long long _notificationAuthStatus;	// 112 = 0x70
    NSString *_currentLanguage;	// 120 = 0x78
    FMIPDevice *_soundPendingDevice;	// 128 = 0x80
    FMIPCommandContext *_soundCommandContext;	// 136 = 0x88
    NSTimer *_soundPendingTimer;	// 144 = 0x90
    NSManagedObjectContext *_managedObjectContext;	// 152 = 0x98
    NSManagedObjectModel *_managedObjectModel;	// 160 = 0xa0
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 168 = 0xa8
    NSDictionary *_configuration;	// 176 = 0xb0
    NSString *_currentRootViewControllerIdentifier;	// 184 = 0xb8
    DarwinNotificationObsever *_dno;	// 192 = 0xc0
    CDStruct_b7cb895d _lastCoordinateRegion;	// 200 = 0xc8
}

+ (id)uniqueIdentifier;	// IMP=0x00000001000028c4
+ (id)sharedInstance;	// IMP=0x0000000100002798
+ (id)satelliteOfflineAccuracyCircleColor;	// IMP=0x00000001000544b4
+ (id)satelliteOnlineAccuracyCircleColor;	// IMP=0x0000000100054450
+ (id)satelliteLostModeFrameTintColor;	// IMP=0x00000001000543f4
+ (id)satelliteOfflineFrameTintColor;	// IMP=0x00000001000543d4
+ (id)satelliteOnlineFrameTintColor;	// IMP=0x00000001000543a8
+ (id)satelliteLostModeFrameBorderColor;	// IMP=0x000000010005438c
+ (id)satelliteOfflineFrameBorderColor;	// IMP=0x0000000100054370
+ (id)satelliteOnlineFrameBorderColor;	// IMP=0x0000000100054354
+ (id)satelliteLostModeFrameBackgroundColor;	// IMP=0x0000000100054338
+ (id)satelliteOfflineFrameBackgroundColor;	// IMP=0x000000010005431c
+ (id)satelliteOnlineFrameBackgroundColor;	// IMP=0x0000000100054300
+ (id)standardOfflineAccuracyCircleColor;	// IMP=0x000000010005429c
+ (id)standardOnlineAccuracyCircleColor;	// IMP=0x0000000100054238
+ (id)standardLostModeFrameTintColor;	// IMP=0x00000001000541dc
+ (id)standardOfflineFrameTintColor;	// IMP=0x00000001000541b8
+ (id)standardOnlineFrameTintColor;	// IMP=0x0000000100054188
+ (id)standardLostModeFrameBorderColor;	// IMP=0x000000010005416c
+ (id)standardOfflineFrameBorderColor;	// IMP=0x0000000100054150
+ (id)standardOnlineFrameBorderColor;	// IMP=0x0000000100054134
+ (id)standardLostModeFrameBackgroundColor;	// IMP=0x0000000100054114
+ (id)standardOfflineFrameBackgroundColor;	// IMP=0x00000001000540f4
+ (id)standardOnlineFrameBackgroundColor;	// IMP=0x00000001000540d4
+ (id)meTintColor;	// IMP=0x0000000100053fd4
@property(retain, nonatomic) DarwinNotificationObsever *dno; // @synthesize dno=_dno;
@property(nonatomic) int daemonAuthorizationStatus; // @synthesize daemonAuthorizationStatus=_daemonAuthorizationStatus;
@property(nonatomic) int authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property(retain, nonatomic) NSString *currentRootViewControllerIdentifier; // @synthesize currentRootViewControllerIdentifier=_currentRootViewControllerIdentifier;
@property(retain, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(retain, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) NSTimer *soundPendingTimer; // @synthesize soundPendingTimer=_soundPendingTimer;
@property(retain, nonatomic) FMIPCommandContext *soundCommandContext; // @synthesize soundCommandContext=_soundCommandContext;
@property(retain, nonatomic) FMIPDevice *soundPendingDevice; // @synthesize soundPendingDevice=_soundPendingDevice;
@property(readonly, copy, nonatomic) NSString *currentLanguage; // @synthesize currentLanguage=_currentLanguage;
@property(nonatomic) _Bool blockLoginUsername; // @synthesize blockLoginUsername=_blockLoginUsername;
@property(nonatomic) long long notificationAuthStatus; // @synthesize notificationAuthStatus=_notificationAuthStatus;
@property(nonatomic) _Bool requiresLightStatusBar; // @synthesize requiresLightStatusBar=_requiresLightStatusBar;
@property(nonatomic) _Bool isForeground; // @synthesize isForeground=_isForeground;
@property(copy, nonatomic) NSURL *urlToOpen; // @synthesize urlToOpen=_urlToOpen;
@property(retain, nonatomic) FMDistanceCalculator *distanceCalculator; // @synthesize distanceCalculator=_distanceCalculator;
@property(retain, nonatomic) SplitViewController *splitViewController; // @synthesize splitViewController=_splitViewController;
@property(nonatomic) CDStruct_b7cb895d lastCoordinateRegion; // @synthesize lastCoordinateRegion=_lastCoordinateRegion;
@property(retain, nonatomic) id reachabilityNotificationToken; // @synthesize reachabilityNotificationToken=_reachabilityNotificationToken;
@property(retain, nonatomic) FMNetworkMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property(retain, nonatomic) FMReachability *legacyReachability; // @synthesize legacyReachability=_legacyReachability;
@property(nonatomic) _Bool wasStateRestored; // @synthesize wasStateRestored=_wasStateRestored;
@property(retain, nonatomic) Session *session; // @synthesize session=_session;
@property(nonatomic) _Bool needToPreloadImages; // @synthesize needToPreloadImages=_needToPreloadImages;
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
@property(nonatomic) __weak DeviceDetailViewController *deviceDetailViewController; // @synthesize deviceDetailViewController=_deviceDetailViewController;
@property(nonatomic) __weak MKMapView *sharedMapView; // @synthesize sharedMapView=_sharedMapView;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;	// IMP=0x000000010000ef10
- (void)processNotificationInfo:(id)arg1 andAction:(id)arg2;	// IMP=0x000000010000e7b0
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e4ec
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e374
- (void)setupUserNotifications;	// IMP=0x000000010000dcf4
- (void)showSafetyWarningWithConfirmActionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000d978
- (void)showBluetoothAlertIfNeeded;	// IMP=0x000000010000d330
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010000ce28
- (void)soundPendingTimerFired;	// IMP=0x000000010000ccc4
- (void)removeSoundPendingObserversForDevice:(id)arg1;	// IMP=0x000000010000cb20
- (void)setSoundPendingObserversForDevice:(id)arg1;	// IMP=0x000000010000c948
- (void)setPendingPlaysoundViewControllerWithDevice:(id)arg1 andCommandContext:(id)arg2;	// IMP=0x000000010000c7bc
- (void)startEraseFlowForDevice:(id)arg1;	// IMP=0x000000010000c744
- (void)startLockForDevice:(id)arg1;	// IMP=0x000000010000c6cc
- (void)startLostModeFlowForDevice:(id)arg1;	// IMP=0x000000010000c654
- (void)startLockFlowForDevice:(id)arg1;	// IMP=0x000000010000c5dc
- (void)startPlaySoundFlowForDevice:(id)arg1 channels:(id)arg2 stop:(_Bool)arg3;	// IMP=0x000000010000c3e4
- (void)startPlaySoundFlowForDevice:(id)arg1;	// IMP=0x000000010000c3d0
- (id)deviceForId:(id)arg1;	// IMP=0x000000010000c20c
- (void)aggregateReportForKey:(id)arg1;	// IMP=0x000000010000c200
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000be80
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x000000010000bb70
- (void)cancelModalFlowIfNecessary;	// IMP=0x000000010000b97c
- (void)pushTokenChanged:(id)arg1;	// IMP=0x000000010000b8f0
- (void)pushNotificationReceived:(id)arg1;	// IMP=0x000000010000b864
- (void)cleanupExternalState;	// IMP=0x000000010000b6e0
- (id)defaultUsername;	// IMP=0x000000010000b65c
- (void)destroySessionAndDeleteAccount:(_Bool)arg1;	// IMP=0x000000010000adb8
- (void)createSessionForUsername:(id)arg1 personId:(id)arg2;	// IMP=0x000000010000a3a8
- (void)createSessionForAccount:(id)arg1;	// IMP=0x000000010000a30c
@property(readonly, nonatomic) FMIPAccount *ownerAccount;
@property(readonly, nonatomic) CLLocationManager *locationManager;
- (void)updateCurrentSecurityState;	// IMP=0x0000000100009998
@property(readonly, nonatomic) _Bool useLocationManagerFeatures;
@property(readonly, nonatomic) _Bool isFMIPSystemServicesEnabled;
- (void)checkDaemonAuthorizationStatus;	// IMP=0x00000001000097b0
- (void)userIsActive;	// IMP=0x0000000100009748
@property(readonly, nonatomic, getter=isRTL) _Bool RTL;
- (void)hideNoNetworkView;	// IMP=0x0000000100009508
- (void)showNoNetworkView;	// IMP=0x0000000100009148
- (void)stopMonitoringReachability;	// IMP=0x0000000100008fc4
- (void)startMonitoringReachability;	// IMP=0x0000000100008c38
- (long long)twoFactorFamilyActionsOverride;	// IMP=0x0000000100008bac
- (long long)twoFactorFamilyRemoveOverride;	// IMP=0x0000000100008b20
- (long long)twoFactorEraseOverride;	// IMP=0x0000000100008a94
- (_Bool)enableLongPressGesture;	// IMP=0x0000000100008a38
- (void)installDevelopmentNotificationHandlers;	// IMP=0x000000010000866c
- (void)migrateFromVersion:(id)arg1 toVersion:(id)arg2;	// IMP=0x0000000100008514
- (void)migrateToFirstPartyFromVersion:(id)arg1 toVersion:(id)arg2;	// IMP=0x0000000100008420
- (void)initialLaunchProcessing;	// IMP=0x00000001000083a8
- (void)versionCheckProcessing;	// IMP=0x0000000100008174
@property(readonly, copy, nonatomic) NSURL *applicationDocumentsDirectory;
- (void)saveContext;	// IMP=0x0000000100007e20
- (void)protectFileAtURL:(id)arg1;	// IMP=0x0000000100007350
- (_Bool)addSkipBackupAttributeToItemAtURL:(id)arg1;	// IMP=0x00000001000071c8
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x0000000100006d98
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;	// IMP=0x0000000100006b78
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000068fc
- (void)displayUserNotificationWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x0000000100006830
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;	// IMP=0x0000000100006708
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x0000000100005b28
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000100005ae8
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x0000000100005908
- (id)cacheDir;	// IMP=0x000000010000574c
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00000001000056a8
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;	// IMP=0x000000010000507c
- (void)getDirectionsToDevice:(id)arg1;	// IMP=0x0000000100004e14
- (void)dismissSplitViewOverlay;	// IMP=0x0000000100004d14
- (void)showServerAlert:(id)arg1;	// IMP=0x0000000100004064
- (void)signoutClearingUsername:(_Bool)arg1;	// IMP=0x0000000100003ed4
- (void)signout:(id)arg1;	// IMP=0x0000000100003a8c
- (void)displayHelp:(id)arg1;	// IMP=0x0000000100003918
- (id)helpControllerForAPDID:(id)arg1;	// IMP=0x0000000100003884
@property(readonly, nonatomic) HLPHelpViewController *helpController;
- (id)localizedStringForKey:(id)arg1;	// IMP=0x00000001000037bc
- (void)showCustomAppDeprecatedViewHierarchy;	// IMP=0x00000001000037a0
- (void)showSiteDownViewHierarchy;	// IMP=0x0000000100003784
- (void)showSplitViewHierarchy;	// IMP=0x0000000100003768
- (void)showLoadingViewHierarchy;	// IMP=0x000000010000374c
- (void)showLoginViewHierarchy;	// IMP=0x00000001000035bc
- (void)showViewControllerFromStoryboard:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00000001000032e8
- (void)installRootViewController:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000100002fdc
- (void)_installRootViewController:(id)arg1;	// IMP=0x0000000100002d18
- (void)chooseInitialRootViewController;	// IMP=0x0000000100002a70
@property(readonly) MainViewController *mainViewController;
@property(readonly, copy, nonatomic) UIColor *offlineAccuracyColor;
@property(readonly, copy, nonatomic) UIColor *onlineAccuracyColor;
@property(readonly, copy, nonatomic) UIColor *warningTextColor;
@property(readonly, copy, nonatomic) UIColor *lostModeTintColor;
@property(readonly, copy, nonatomic) UIColor *primaryTintColor;
@property(readonly, nonatomic) NSValue *doneTextShadowOffset;
@property(readonly, nonatomic) UIColor *doneTextShadowColor;
@property(readonly, nonatomic) UIColor *doneTextColor;
@property(readonly, nonatomic) NSValue *secondaryTextShadowOffset;
@property(readonly, nonatomic) UIColor *secondaryTextShadowColor;
@property(readonly, nonatomic) UIColor *secondaryTextColor;
@property(readonly, nonatomic) UIColor *disabledTitleTextColor;
@property(readonly, nonatomic) UIColor *titleTextColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

