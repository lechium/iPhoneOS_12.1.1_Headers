//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSystemApp.h"

#import "MCProfileConnectionObserver.h"
#import "SBModalAlertPresentationCoordinatorDelegate.h"
#import "SBPowerDownControllerDelegate.h"
#import "SBRestartManagerDelegate.h"
#import "UIApplicationDelegate.h"

@class BBDataProviderConnection, NSDate, NSHashTable, NSMutableArray, NSMutableSet, NSNumberFormatter, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSSet, NSString, NSTimer, SBAccountStoreManager, SBAppStatusBarSettingsAssertion, SBApplication, SBBluetoothAccessoryBatteryMonitor, SBCardItemsController, SBCombinationHardwareButton, SBFUserAuthenticationController, SBHomeHardwareButton, SBLockHardwareButton, SBMainDisplayInterfaceOrientationAggregator, SBModalAlertPresentationCoordinator, SBModalAlertPresenter, SBNCNotificationDispatcher, SBPowerDownController, SBRestartManager, SBSStatusBarStyleOverridesAssertion, SBScreenshotManager, SBSynchronizeCloudCriticalDataOperation, SBUIController, SBUserSessionController, SBWidgetController, UIWindow;

@interface SpringBoard : FBSystemApp <MCProfileConnectionObserver, SBPowerDownControllerDelegate, SBRestartManagerDelegate, SBModalAlertPresentationCoordinatorDelegate, UIApplicationDelegate>
{
    SBUIController *_uiController;	// 8 = 0x8
    double _headsetButtonDownTime;	// 16 = 0x10
    struct __IOHIDEvent *_headsetDownEvent;	// 24 = 0x18
    int _headsetClickCount;	// 32 = 0x20
    int _ringerSwitchState;	// 36 = 0x24
    unsigned int _headsetButtonClickCount:8;	// 40 = 0x28
    unsigned int _menuButtonClickCount:8;	// 41 = 0x29
    unsigned int _screenWasDimOnMenuDown:1;	// 42 = 0x2a
    unsigned int _screenshotWasTaken:1;	// 42 = 0x2a
    unsigned int _dontLockOnNextLockUp:1;	// 42 = 0x2a
    unsigned int _headsetDownDelayedActionPerformed:1;	// 42 = 0x2a
    unsigned int _isSeekingInMedia:1;	// 42 = 0x2a
    unsigned int _ignoringCurrentLockButtonPress:1;	// 42 = 0x2a
    int _mediaSeekDirection;	// 44 = 0x2c
    unsigned int _springBoardRequestsAccelerometerEvents;	// 48 = 0x30
    long long _activeInterfaceOrientation;	// 56 = 0x38
    int _lastRequestedStatusBarStyleOverrides;	// 64 = 0x40
    NSMutableSet *_activeInterfaceOrientationObservers;	// 72 = 0x48
    NSMutableArray *_activeInterfaceOrientationOverrideStack;	// 80 = 0x50
    _Bool _wantsOrientationEvents;	// 88 = 0x58
    int _notifyDontAnimateREOToken;	// 92 = 0x5c
    int _notifyDontAllowMediaHUDToken;	// 96 = 0x60
    _Bool _expectsFaceContact;	// 100 = 0x64
    _Bool _expectsFaceContactInLandscape;	// 101 = 0x65
    _Bool _proximityEventsEnabled;	// 102 = 0x66
    _Bool _smartCoverClosed;	// 103 = 0x67
    _Bool _keybagRefetchTransactionIsActive;	// 104 = 0x68
    _Bool _menuButtonDown;	// 105 = 0x69
    NSSet *_restrictionDisabledApplications;	// 112 = 0x70
    SBApplication *_nowRecordingApp;	// 120 = 0x78
    SBApplication *_menuButtonInterceptApp;	// 128 = 0x80
    _Bool _menuButtonInterceptAppEnabledForever;	// 136 = 0x88
    NSMutableArray *_disableNowPlayingHUDAssertionBundleIds;	// 144 = 0x90
    NSMutableArray *_appsRegisteredForVolumeEvents;	// 152 = 0x98
    NSMutableArray *_appsRegisteredForLockButtonEvents;	// 160 = 0xa0
    SBApplication *_lastLockButtonEventRecipient;	// 168 = 0xa8
    NSNumberFormatter *_decimalFormatter;	// 176 = 0xb0
    NSNumberFormatter *_percentFormatter;	// 184 = 0xb8
    NSTimer *_midnightTimer;	// 192 = 0xc0
    NSDate *_midnightFireDate;	// 200 = 0xc8
    struct _opaque_pthread_t *_backgroundMIGServerThread;	// 208 = 0xd0
    struct _opaque_pthread_t *_iconGenerationMIGServerThread;	// 216 = 0xd8
    NSObject<OS_dispatch_source> *_memoryPressureSource;	// 224 = 0xe0
    unsigned int _memoryPressureStatus;	// 232 = 0xe8
    NSMutableArray *_blocksAwaitingAvailableMemory;	// 240 = 0xf0
    BBDataProviderConnection *_bulletinBoardConnection;	// 248 = 0xf8
    NSObject<OS_dispatch_queue> *_bulletinBoardQueue;	// 256 = 0x100
    SBCardItemsController *_cardItemsController;	// 264 = 0x108
    SBNCNotificationDispatcher *_notificationDispatcher;	// 272 = 0x110
    struct __CFBoolean *_shouldDelaySleepForHeadsetClick;	// 280 = 0x118
    NSHashTable *_volumePressBandits;	// 288 = 0x120
    _Bool _didPlayLockSound;	// 296 = 0x128
    unsigned long long _volumeAndLockButtonPrecedence;	// 304 = 0x130
    SBUserSessionController *_userSessionController;	// 312 = 0x138
    id <SBFLockOutStatusProvider> _lockOutController;	// 320 = 0x140
    SBFUserAuthenticationController *_authenticationController;	// 328 = 0x148
    NSHashTable *_disableActiveOrientationChangeAssertions;	// 336 = 0x150
    _Bool _hasFinishedLaunching;	// 344 = 0x158
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;	// 352 = 0x160
    SBAppStatusBarSettingsAssertion *_showStatusBarAssertion;	// 360 = 0x168
    SBSStatusBarStyleOverridesAssertion *_recordingStatusBarStyleOverrideAssertion;	// 368 = 0x170
    _Bool _atHomescreen;	// 376 = 0x178
    NSObject<OS_dispatch_queue> *_volumePowerQueue;	// 384 = 0x180
    NSString *_logFile;	// 392 = 0x188
    SBBluetoothAccessoryBatteryMonitor *_bluetoothBatteryMonitor;	// 400 = 0x190
    SBScreenshotManager *_screenshotManager;	// 408 = 0x198
    SBSynchronizeCloudCriticalDataOperation *_synchronizeCloudCriticalDataOperation;	// 416 = 0x1a0
    SBRestartManager *_restartManager;	// 424 = 0x1a8
    struct __GSEvent *_pendingDeviceOrientationChangeEventDuringStartupTransition;	// 432 = 0x1b0
    SBModalAlertPresenter *_systemModalAlertPresenter;	// 440 = 0x1b8
    SBModalAlertPresentationCoordinator *_modalAlertPresentationCoordinator;	// 448 = 0x1c0
    SBMainDisplayInterfaceOrientationAggregator *_orientationAggregator;	// 456 = 0x1c8
    _Bool _inUserTransition;	// 464 = 0x1d0
    _Bool _determiningBootTransition;	// 465 = 0x1d1
    _Bool _dontLockEver;	// 466 = 0x1d2
    unsigned long long _volumeUpAggdStartTime;	// 472 = 0x1d8
    unsigned long long _volumeDownAggdStartTime;	// 480 = 0x1e0
    _Bool _typingActive;	// 488 = 0x1e8
    _Bool _batterySaverModeActive;	// 489 = 0x1e9
    int _nowPlayingProcessPID;	// 492 = 0x1ec
    NSMutableArray *_nowLocatingApps;	// 496 = 0x1f0
    SBWidgetController *_widgetController;	// 504 = 0x1f8
    SBHomeHardwareButton *_homeHardwareButton;	// 512 = 0x200
    SBLockHardwareButton *_lockHardwareButton;	// 520 = 0x208
    SBAccountStoreManager *_accountStoreController;	// 528 = 0x210
    SBPowerDownController *_powerDownController;	// 536 = 0x218
    NSTimer *_daylightSavingsTimer;	// 544 = 0x220
    SBCombinationHardwareButton *_combinationHardwareButton;	// 552 = 0x228
}

+ (Class)_applicationInfoClass;	// IMP=0x0000000100012a88
+ (void)initializeSystemServices;	// IMP=0x00000001000125a0
+ (void)preFrontBoardInitializationHook;	// IMP=0x000000010001259c
+ (long long)startupInterfaceOrientation;	// IMP=0x00000001000121dc
+ (_Bool)supportsAsynchronousApplicationLoading;	// IMP=0x00000001000121d4
+ (_Bool)shouldFixMainThreadPriority;	// IMP=0x00000001000121cc
@property(readonly, nonatomic) SBCombinationHardwareButton *combinationHardwareButton; // @synthesize combinationHardwareButton=_combinationHardwareButton;
@property(retain, nonatomic) NSTimer *daylightSavingsTimer; // @synthesize daylightSavingsTimer=_daylightSavingsTimer;
@property(retain, nonatomic) SBPowerDownController *powerDownController; // @synthesize powerDownController=_powerDownController;
@property(nonatomic, getter=isBatterySaverModeActive) _Bool batterySaverModeActive; // @synthesize batterySaverModeActive=_batterySaverModeActive;
@property(nonatomic) int nowPlayingProcessPID; // @synthesize nowPlayingProcessPID=_nowPlayingProcessPID;
@property(readonly, nonatomic) SBAccountStoreManager *accountStoreController; // @synthesize accountStoreController=_accountStoreController;
@property(readonly, nonatomic) SBNCNotificationDispatcher *notificationDispatcher; // @synthesize notificationDispatcher=_notificationDispatcher;
@property(readonly, nonatomic) SBFUserAuthenticationController *authenticationController; // @synthesize authenticationController=_authenticationController;
@property(readonly, nonatomic) id <SBFLockOutStatusProvider> lockOutController; // @synthesize lockOutController=_lockOutController;
@property(readonly, nonatomic) SBLockHardwareButton *lockHardwareButton; // @synthesize lockHardwareButton=_lockHardwareButton;
@property(readonly, nonatomic) SBHomeHardwareButton *homeHardwareButton; // @synthesize homeHardwareButton=_homeHardwareButton;
@property(nonatomic, getter=isTypingActive) _Bool typingActive; // @synthesize typingActive=_typingActive;
@property(readonly, nonatomic) SBModalAlertPresentationCoordinator *modalAlertPresentationCoordinator; // @synthesize modalAlertPresentationCoordinator=_modalAlertPresentationCoordinator;
@property(readonly, nonatomic) SBRestartManager *restartManager; // @synthesize restartManager=_restartManager;
@property(readonly, nonatomic) SBUserSessionController *userSessionController; // @synthesize userSessionController=_userSessionController;
@property(readonly, nonatomic) SBScreenshotManager *screenshotManager; // @synthesize screenshotManager=_screenshotManager;
@property(retain, nonatomic) NSMutableArray *nowLocatingApps; // @synthesize nowLocatingApps=_nowLocatingApps;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *bulletinBoardQueue; // @synthesize bulletinBoardQueue=_bulletinBoardQueue;
@property(readonly, nonatomic) BBDataProviderConnection *bulletinBoardConnection; // @synthesize bulletinBoardConnection=_bulletinBoardConnection;
- (void).cxx_destruct;	// IMP=0x0000000100027dd0
- (void)_batterySaverModeChanged:(int)arg1;	// IMP=0x0000000100027b18
- (_Bool)hasDisableActiveInterfaceOrientationChangeAssertions;	// IMP=0x0000000100027ae8
- (void)removeDisableActiveInterfaceOrientationChangeAssertion:(id)arg1;	// IMP=0x00000001000279f0
- (void)addDisableActiveInterfaceOrientationChangeAssertion:(id)arg1;	// IMP=0x0000000100027914
- (void)_sendBanditsVolumeDecreased;	// IMP=0x00000001000277e8
- (void)_sendBanditsVolumeIncreased;	// IMP=0x00000001000276bc
- (void)removeVolumePressBandit:(id)arg1;	// IMP=0x00000001000276a4
- (void)addVolumePressBandit:(id)arg1;	// IMP=0x0000000100027620
- (_Bool)_hasVolumeBandits;	// IMP=0x00000001000275f0
- (void)noteKeybagRefetchTransactionIsActive:(_Bool)arg1;	// IMP=0x0000000100027574
- (_Bool)isKeybagRefetchTransactionActive;	// IMP=0x0000000100027564
- (_Bool)underMemoryPressure;	// IMP=0x000000010002754c
- (void)_setStatusBarShowsProgress:(_Bool)arg1;	// IMP=0x00000001000274fc
- (void)_accessibilityDeactivationAnimationWillBegin;	// IMP=0x00000001000274f8
- (double)_accessibilityDeactivationAnimationStartDelay;	// IMP=0x00000001000274f0
- (void)_accessibilityActivationAnimationWillBegin;	// IMP=0x00000001000274ec
- (double)_accessibilityActivationAnimationStartDelay;	// IMP=0x00000001000274e4
- (_Bool)_accessibilityObjectWithinProximity;	// IMP=0x00000001000274e0
- (_Bool)_accessibilityIsSystemGestureActive;	// IMP=0x000000010002748c
- (void)_accessibilitySetSystemGesturesDisabledByAccessibility:(_Bool)arg1;	// IMP=0x000000010002743c
- (_Bool)_accessibilitySystemGesturesDisabledByAccessibility;	// IMP=0x00000001000273e8
- (_Bool)_accessibilityShouldAllowIconLaunch;	// IMP=0x00000001000273e0
- (_Bool)_accessibilityShouldAllowAppLaunch;	// IMP=0x00000001000273dc
- (id)_accessibilityRunningApplications;	// IMP=0x0000000100027380
- (id)_accessibilityTopDisplay;	// IMP=0x000000010002732c
- (id)_accessibilityFrontMostApplication;	// IMP=0x0000000100027328
- (id)formattedPercentStringForNumber:(id)arg1;	// IMP=0x00000001000271b8
- (id)formattedDecimalStringForNumber:(id)arg1;	// IMP=0x00000001000270c0
- (void)_deactivateReachability;	// IMP=0x0000000100027074
- (void)_setReachabilitySupported:(_Bool)arg1;	// IMP=0x0000000100027070
- (void)setSuspensionAnimationDelay:(double)arg1;	// IMP=0x000000010002706c
- (void)setNowPlayingInfo:(id)arg1 forProcessWithPID:(int)arg2;	// IMP=0x0000000100026eb0
- (_Bool)isNowPlayingAppPlaying;	// IMP=0x0000000100026e44
@property(readonly, nonatomic) SBApplication *leastRecentlyForegroundLocatingApp;
- (void)nowLocatingAppDidEnterForeground:(id)arg1;	// IMP=0x0000000100026b48
- (void)removeNowLocatingApp:(id)arg1;	// IMP=0x0000000100026ad4
- (void)addNowLocatingApp:(id)arg1;	// IMP=0x0000000100026a48
- (id)nowRecordingApp;	// IMP=0x0000000100026a38
- (_Bool)isMusicPlayerInNowPlayingView;	// IMP=0x0000000100026968
- (void)_nowPlayingAppDidChangeNotification:(id)arg1;	// IMP=0x0000000100026940
- (_Bool)hasFinishedLaunching;	// IMP=0x00000001000268f0
- (_Bool)launchApplicationWithIdentifier:(id)arg1 suspended:(_Bool)arg2;	// IMP=0x0000000100026724
- (void)launchMusicPlayerSuspended;	// IMP=0x0000000100026720
- (long long)alertInterfaceOrientation;	// IMP=0x00000001000266d4
- (_Bool)isLocked;	// IMP=0x0000000100026680
- (_Bool)canShowAlerts;	// IMP=0x0000000100026678
- (void)didDismissActionSheet;	// IMP=0x0000000100026674
- (void)didDismissMiniAlert;	// IMP=0x0000000100026670
- (void)willDismissMiniAlert;	// IMP=0x0000000100026658
- (void)willDisplayMiniAlert;	// IMP=0x0000000100026640
- (void)frontDisplayDidChange:(id)arg1;	// IMP=0x0000000100026448
- (void)noteSceneLayoutDidUpdateOnDisplay:(id)arg1;	// IMP=0x00000001000262e0
- (void)noteSubstantialTransitionOccured;	// IMP=0x0000000100026278
- (void)_setAmbiguousControlCenterActivationMargin:(double)arg1;	// IMP=0x000000010002621c
- (void)updateOrientationDetectionSettings;	// IMP=0x00000001000257e4
- (void)setExpectsFaceContact:(_Bool)arg1;	// IMP=0x00000001000257d4
- (void)setExpectsFaceContact:(_Bool)arg1 inLandscape:(_Bool)arg2;	// IMP=0x0000000100025778
- (_Bool)expectsFaceContactInLandscape;	// IMP=0x0000000100025748
- (_Bool)expectsFaceContact;	// IMP=0x0000000100025738
- (void)updateProximitySettings;	// IMP=0x0000000100025434
- (void)setProximityEventsEnabled:(_Bool)arg1;	// IMP=0x000000010002540c
- (_Bool)proximityEventsEnabled;	// IMP=0x00000001000253fc
- (void)setSystemVolumeHUDEnabled:(_Bool)arg1 forAudioCategory:(id)arg2;	// IMP=0x0000000100025374
- (double)windowRotationDuration;	// IMP=0x000000010002531c
- (_Bool)homeScreenSupportsRotation;	// IMP=0x00000001000252f8
- (_Bool)homeScreenRotationStyleWantsUIKitRotation;	// IMP=0x00000001000252d0
- (long long)homeScreenRotationStyle;	// IMP=0x0000000100025078
- (void)_removeDefaultInterfaceOrientatationOverride;	// IMP=0x0000000100025074
- (void)_overrideDefaultInterfaceOrientationWithOrientation:(long long)arg1;	// IMP=0x0000000100025070
- (long long)interfaceOrientationForCurrentDeviceOrientation;	// IMP=0x0000000100024ee0
- (long long)_currentNonFlatDeviceOrientation;	// IMP=0x0000000100024db0
- (_Bool)supportsPortraitUpsideDownOrientation;	// IMP=0x0000000100024d1c
- (void)_postActiveInterfaceOrientationChangedNotificationAnimated:(_Bool)arg1;	// IMP=0x0000000100024c34
- (void)_updateNativeOrientationWithOrientation:(long long)arg1 updateMirroredDisplays:(_Bool)arg2 animated:(_Bool)arg3 logMessage:(id)arg4;	// IMP=0x0000000100024be4
- (void)updateNativeOrientationWithOrientation:(long long)arg1 logMessage:(id)arg2;	// IMP=0x0000000100024bc8
- (void)updateNativeOrientationAndMirroredDisplays:(_Bool)arg1 logMessage:(id)arg2;	// IMP=0x0000000100024b48
- (void)updateNativeOrientationAnimated:(_Bool)arg1 logMessage:(id)arg2;	// IMP=0x0000000100024adc
- (void)updateNativeOrientationWithLogMessage:(id)arg1;	// IMP=0x0000000100024ac4
- (void)setWantsOrientationEvents:(_Bool)arg1 logMessage:(id)arg2;	// IMP=0x0000000100024970
@property(readonly, nonatomic) _Bool wantsOrientationEvents;
- (_Bool)_statusBarOrientationFollowsWindow:(id)arg1;	// IMP=0x00000001000248d0
- (id)orientationAggregator;	// IMP=0x00000001000248c0
- (long long)_frontMostAppOrientation;	// IMP=0x0000000100024844
- (void)_removeTransientActiveInterfaceOrientationOverrideForReason:(id)arg1;	// IMP=0x0000000100024708
- (void)popTransientActiveInterfaceOrientationForReason:(id)arg1;	// IMP=0x00000001000246fc
- (void)pushTransientActiveInterfaceOrientation:(long long)arg1 forReason:(id)arg2;	// IMP=0x000000010002465c
- (long long)activeInterfaceOrientationWithoutConsideringAlerts;	// IMP=0x000000010002464c
- (long long)activeInterfaceOrientation;	// IMP=0x00000001000245c4
- (void)removeActiveOrientationObserver:(id)arg1;	// IMP=0x00000001000245ac
- (void)addActiveOrientationObserver:(id)arg1;	// IMP=0x0000000100024594
- (void)noteAlertView:(id)arg1 willChangeInterfaceOrientation:(long long)arg2 duration:(double)arg3;	// IMP=0x000000010002428c
- (void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 updateMirroredDisplays:(_Bool)arg3 force:(_Bool)arg4 logMessage:(id)arg5;	// IMP=0x00000001000239dc
- (void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 updateMirroredDisplays:(_Bool)arg3 logMessage:(id)arg4;	// IMP=0x00000001000239c4
- (void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 logMessage:(id)arg3;	// IMP=0x00000001000239a8
- (void)noteInterfaceOrientationChanged:(long long)arg1 force:(_Bool)arg2 logMessage:(id)arg3;	// IMP=0x0000000100023984
- (void)noteInterfaceOrientationChanged:(long long)arg1 logMessage:(id)arg2;	// IMP=0x0000000100023964
- (void)_setDeviceOrientation:(long long)arg1 animated:(_Bool)arg2 logMessage:(id)arg3;	// IMP=0x00000001000236ec
- (void)_setStatusBarOrientation:(long long)arg1 animated:(_Bool)arg2 logMessage:(id)arg3;	// IMP=0x00000001000235b4
- (void)_setStatusBarOrientation:(long long)arg1 logMessage:(id)arg2;	// IMP=0x0000000100023484
- (void)updateMirroredDisplayOrientationWithLogMessage:(id)arg1;	// IMP=0x0000000100023354
- (void)_handleDeviceOrientationChangedEvent:(struct __GSEvent *)arg1;	// IMP=0x0000000100022e58
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100022e54
- (void)handleStatusBarTapWithEvent:(id)arg1;	// IMP=0x0000000100022dd8
- (void)_application:(id)arg1 statusBarTouchesEnded:(id)arg2;	// IMP=0x0000000100022dc8
- (void)_caseLatchWantsToAttemptLock;	// IMP=0x0000000100022920
- (void)noteCaseHardwarePresent;	// IMP=0x0000000100022880
- (void)_keyboardOrCaseLatchWantsToAttemptUnlock:(int)arg1;	// IMP=0x0000000100022634
- (_Bool)allowCaseLatchLockAndUnlock;	// IMP=0x00000001000225b8
- (_Bool)caseIsEnabledAndLatched;	// IMP=0x0000000100022584
- (_Bool)smartCoverIsClosed;	// IMP=0x0000000100022574
- (void)_enqueueWorkspaceEvent:(CDUnknownBlockType)arg1 withName:(id)arg2 ifSatisfiesCondition:(CDUnknownBlockType)arg3 cancelingEventsWithNames:(id)arg4;	// IMP=0x00000001000222a8
- (void)_smartCoverDidClose:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010002228c
- (void)_smartCoverDidOpen:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100022270
- (void)_proximityChanged:(id)arg1;	// IMP=0x00000001000220bc
- (void)resetIdleTimerAndUndim;	// IMP=0x0000000100022070
- (void)lockAfterCall;	// IMP=0x00000001000217e8
- (void)noteBacklightFadeFinished;	// IMP=0x0000000100021748
- (void)noteBacklightLevelChanged;	// IMP=0x00000001000216a8
- (void)noteBacklightControllerUndimming:(id)arg1;	// IMP=0x0000000100021658
- (void)_adjustSignificantTimersAfterSleep;	// IMP=0x0000000100021624
- (void)_adjustDaylightSavingsTimerAfterSleep;	// IMP=0x0000000100021544
- (void)_daylightSavingsTimeChanged;	// IMP=0x0000000100021530
- (void)setUpDaylightSavingsTimer;	// IMP=0x0000000100021264
- (void)_adjustMidnightTimerAfterSleep;	// IMP=0x0000000100021190
- (void)_postSpringBoardSignificantTimeChangedNotificationWithLogMessage:(id)arg1;	// IMP=0x0000000100020fa8
- (void)_midnightPassed;	// IMP=0x0000000100020f94
- (void)setupMidnightTimer;	// IMP=0x0000000100020ba4
- (_Bool)_handlePhysicalButtonEvent:(id)arg1;	// IMP=0x0000000100020b50
- (void)_reportAggdLoggingForVolumeChangedEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100020a34
- (_Bool)_volumeChanged:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000205d4
- (id)appsRegisteredForLockButtonEvents;	// IMP=0x00000001000205c4
- (void)setAppRegisteredForLockButtonEvents:(id)arg1 isActive:(_Bool)arg2;	// IMP=0x0000000100020510
- (id)appsRegisteredForVolumeEvents;	// IMP=0x0000000100020500
- (void)setAppRegisteredForVolumeEvents:(id)arg1 isActive:(_Bool)arg2;	// IMP=0x000000010002044c
- (void)setWantsVolumeButtonEvents:(_Bool)arg1;	// IMP=0x0000000100020448
- (_Bool)menuButtonInterceptAppEnabledForever;	// IMP=0x0000000100020438
- (id)menuButtonInterceptApp;	// IMP=0x0000000100020428
- (void)setMenuButtonInterceptApp:(id)arg1 forever:(_Bool)arg2;	// IMP=0x00000001000203b4
- (void)_relockUIIfNecessaryAfterTelephonyURLFailed;	// IMP=0x0000000100020160
- (void)_openURLCore:(id)arg1 display:(id)arg2 animating:(_Bool)arg3 activationSettings:(id)arg4 withResult:(CDUnknownBlockType)arg5;	// IMP=0x000000010001fd70
- (void)_applicationOpenURL:(id)arg1 withApplication:(id)arg2 publicURLsOnly:(_Bool)arg3 animating:(_Bool)arg4 activationSettings:(id)arg5 withResult:(CDUnknownBlockType)arg6;	// IMP=0x000000010001f130
- (void)applicationOpenURL:(id)arg1 withApplication:(id)arg2 publicURLsOnly:(_Bool)arg3 animating:(_Bool)arg4 needsPermission:(_Bool)arg5 activationSettings:(id)arg6 withResult:(CDUnknownBlockType)arg7;	// IMP=0x000000010001e664
- (void)handleDocumentsAndDataURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001db08
- (void)applicationOpenURL:(id)arg1;	// IMP=0x000000010001dad0
- (_Bool)_requestPermissionToOpenURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001d8c8
- (void)showAlertForUnhandledURL:(id)arg1 error:(int)arg2;	// IMP=0x000000010001d5f8
- (_Bool)shouldShowAlertForUnhandledURL:(id)arg1 error:(int)arg2;	// IMP=0x000000010001d5ec
- (long long)currentHomescreenStatusBarStyleWithoutConsideringAlerts;	// IMP=0x000000010001d548
- (long long)currentHomescreenStatusBarStyle;	// IMP=0x000000010001d4bc
- (_Bool)isSpringBoardStatusBarHidden;	// IMP=0x000000010001d468
- (long long)_statusBar:(id)arg1 styleForRequestedStyle:(long long)arg2 overrides:(int)arg3;	// IMP=0x000000010001d3e8
- (long long)statusBar:(id)arg1 styleForRequestedStyle:(long long)arg2 overrides:(int)arg3;	// IMP=0x000000010001d324
- (_Bool)handleDoubleHeightStatusBarTap:(long long)arg1;	// IMP=0x000000010001d2d4
- (void)_updateRingerState:(int)arg1 withVisuals:(_Bool)arg2 updatePreferenceRegister:(_Bool)arg3;	// IMP=0x000000010001d074
- (void)_ringerChanged:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010001cf7c
- (void)profileConnectionDidReceivePasscodePolicyChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010001cef0
- (void)localeChanged;	// IMP=0x000000010001ce6c
- (void)_localeChanged;	// IMP=0x000000010001cd90
- (_Bool)isBundleIdentifierRestrictionDisabled:(id)arg1;	// IMP=0x000000010001ccf4
- (void)_headsetButtonUp:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010001c79c
- (void)_headsetButtonDown:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010001c494
- (void)_setDeferredHeadsetButtonDownEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010001c448
- (void)_imagesMounted;	// IMP=0x000000010001c38c
- (void)_iapExtendedModeReset;	// IMP=0x000000010001c388
- (void)_iapServerConnectionDiedNotification:(id)arg1;	// IMP=0x000000010001c36c
- (void)_performDelayedHeadsetClickTimeout;	// IMP=0x000000010001c35c
- (void)powerDownCanceled:(id)arg1;	// IMP=0x000000010001c334
- (void)powerDownRequested:(id)arg1;	// IMP=0x000000010001c29c
- (void)dismissPowerDownAlertWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001c230
- (void)showPowerDownAlert;	// IMP=0x000000010001c164
- (_Bool)isPowerDownAlertFrontmost;	// IMP=0x000000010001c0e8
- (_Bool)shouldNeverLock;	// IMP=0x000000010001c0d8
- (void)_startSeekWithDirection:(id)arg1;	// IMP=0x000000010001c028
- (void)_keyboardAvailabilityChanged;	// IMP=0x000000010001bebc
- (_Bool)_isDim;	// IMP=0x000000010001bea0
- (id)_keyWindowForScreen:(id)arg1;	// IMP=0x000000010001bc34
- (id)_windowForSystemAppButtonEventsForScreen:(id)arg1;	// IMP=0x000000010001bbd8
- (void)_handleScreenShotShortcut:(id)arg1;	// IMP=0x000000010001bb18
- (void)_handleGotoHomeScreenShortcut:(id)arg1;	// IMP=0x000000010001b964
- (void)_handleShiftCommandTab:(id)arg1;	// IMP=0x000000010001b8f4
- (void)_handleCommandTab:(id)arg1;	// IMP=0x000000010001b884
- (id)keyCommands;	// IMP=0x000000010001b548
- (void)_handleHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010001b4ec
- (void)_logReliabilityInfoForEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010001b32c
- (void)_handleKeyUIEvent:(id)arg1;	// IMP=0x000000010001af88
- (_Bool)__handleHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100019d30
- (void)setAppDisabledNowPlayingHUD:(_Bool)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0000000100019c50
- (_Bool)canShowLockScreenCameraGrabber;	// IMP=0x0000000100019adc
- (_Bool)lockScreenCameraSupported;	// IMP=0x0000000100019a5c
- (_Bool)iapIsInExtendedMode;	// IMP=0x0000000100019a50
- (void)batteryStatusDidChange:(id)arg1;	// IMP=0x00000001000199e0
- (void)significantTimeChange;	// IMP=0x000000010001990c
- (void)_significantTimeChangeNotificationReceived;	// IMP=0x00000001000198fc
- (void)_significantTimeDidChange:(_Bool)arg1;	// IMP=0x0000000100019870
- (void)runFieldTestScript;	// IMP=0x0000000100019768
- (void)_lockdownActivationChanged:(id)arg1;	// IMP=0x0000000100019678
- (void)userDefaultsDidChange:(id)arg1;	// IMP=0x00000001000195b8
- (void)wipeDeviceNowWithReason:(id)arg1;	// IMP=0x0000000100019524
- (void)_rotateView:(id)arg1 toOrientation:(long long)arg2;	// IMP=0x0000000100019324
- (void)requestDeviceUnlock;	// IMP=0x000000010001926c
- (void)languageChanged;	// IMP=0x0000000100018e2c
- (id)_settingLanguageStringForNewLanguage;	// IMP=0x0000000100018cd0
- (_Bool)launchedForUserTransition;	// IMP=0x0000000100018cc0
- (void)_toggleSearch;	// IMP=0x00000001000187ac
- (void)_recordingStateChanged:(id)arg1;	// IMP=0x0000000100018248
- (void)_removeRecordingStatusBarStyleOverrideAssertion;	// IMP=0x00000001000181fc
- (void)_mediaServerConnectionDied:(id)arg1;	// IMP=0x00000001000181c8
- (void)_registerForAVSystemControllerNotifications;	// IMP=0x0000000100018000
- (void)_unregisterForAVSystemControllerNotifications;	// IMP=0x0000000100017f74
- (void)_updateVolumeAndPowerButtonPrioritiesForNotification:(id)arg1;	// IMP=0x0000000100017e54
- (void)_initializeVolumeAndPowerButtonPriorities;	// IMP=0x0000000100017cd8
- (void)_mainQueue_applyVolumeAndPowerButtonPriorities:(unsigned long long)arg1;	// IMP=0x0000000100017cc4
- (void)_computeVolumeButtonsHavePrecedenceWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100017810
- (_Bool)_shouldHandleVolumeAndPowerButtonPriorities;	// IMP=0x0000000100017804
- (void)_showStartupAlertItemIfNecessary:(id)arg1;	// IMP=0x00000001000176f0
- (void)_initializeAndStartObservingDefaultsIfNecessary;	// IMP=0x0000000100017434
- (void)_updateHomeScreenPresenceNotification:(id)arg1;	// IMP=0x00000001000172ec
- (_Bool)isShowingHomescreen;	// IMP=0x0000000100017240
- (void)systemControllerRouteChanged:(id)arg1;	// IMP=0x00000001000171f8
- (void)_initializeDeferredItems;	// IMP=0x00000001000169a8
- (void)applicationDidFinishLaunching:(id)arg1;	// IMP=0x0000000100013618
- (_Bool)isDeterminingBootTransition;	// IMP=0x0000000100013608
- (void)_performDeferredLaunchWork;	// IMP=0x0000000100013540
- (void)_startBulletinBoardServer;	// IMP=0x0000000100013294
- (id)_defaultExpirationComponents;	// IMP=0x0000000100013244
- (void)handleKeyHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010001315c
- (_Bool)_shouldSwallowHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100012e28
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2;	// IMP=0x0000000100012e20
- (_Bool)application:(id)arg1 canOpenURL:(id)arg2;	// IMP=0x0000000100012da4
- (_Bool)applicationIsAliveForSystemWatchdog:(id)arg1;	// IMP=0x0000000100012d9c
- (void)modalAlertPresentationCoordinator:(id)arg1 didChangeShowingSystemModalAlert:(_Bool)arg2;	// IMP=0x0000000100012d98
- (void)restartManagerExitImminent:(id)arg1;	// IMP=0x0000000100012c98
- (void)restartManager:(id)arg1 willRestartWithTransitionRequest:(id)arg2;	// IMP=0x0000000100012c80
- (void)restartManagerWillReboot:(id)arg1;	// IMP=0x0000000100012c74
- (void)restartManagerWillShutdown:(id)arg1;	// IMP=0x0000000100012c68
- (void)_handleShutDownAndReboot;	// IMP=0x0000000100012ba8
- (void)handleSignal:(int)arg1;	// IMP=0x0000000100012a9c
@property(readonly, copy) NSString *debugDescription;
- (id)init;	// IMP=0x0000000100012670
@property(readonly, nonatomic) SBWidgetController *widgetController; // @synthesize widgetController=_widgetController;
- (void)setNextAssistantRecognitionStrings:(id)arg1;	// IMP=0x0000000100028370
- (id)setNextVoiceRecognitionAudioInputPaths:(id)arg1;	// IMP=0x000000010002816c
- (void)rotateIfNeeded:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007a390
- (void)failedTest:(id)arg1 withResults:(id)arg2;	// IMP=0x000000010007a2ac
- (void)finishedTest:(id)arg1 extraResults:(id)arg2 waitForNotification:(id)arg3 withTeardownBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000010007a154
- (void)startedTest:(id)arg1;	// IMP=0x000000010007a080
- (void)_publishFakeNotificationsWithCount:(unsigned long long)arg1 requestDestination:(id)arg2 notificationScrollView:(id)arg3 publishBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100079ddc
- (void)_handleApplicationExit:(id)arg1;	// IMP=0x0000000100079944
- (_Bool)_shouldPendAlertsForTest:(id)arg1;	// IMP=0x0000000100079914
- (void)_basicRotationTestForCurrentConfigurationWithTeardown:(CDUnknownBlockType)arg1;	// IMP=0x000000010007956c
- (void)_rotateFromPortrait:(CDUnknownBlockType)arg1 toLandscape:(CDUnknownBlockType)arg2 andFromLandscape:(CDUnknownBlockType)arg3 andBackToPortrait:(CDUnknownBlockType)arg4;	// IMP=0x0000000100078b84
- (void)_presentTodayViewSpotlightWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100078a5c
- (void)_setupKeyboardAnimationSubTestsForTestName:(id)arg1;	// IMP=0x000000010007867c
- (id)_applicationToUseForOpenAndCloseTesting;	// IMP=0x0000000100078618
- (id)_todayControllerForTestingIfExists;	// IMP=0x000000010007856c
- (id)_dashBoardControllerForTesting;	// IMP=0x00000001000784c8
- (void)_activateSafariWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100077e94
- (void)_returnToHomeScreenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100077c44
- (void)_turnScreenOnOnDashBoardWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100077a58
- (void)_simulateHomeButtonPressWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100077998
- (void)_simulateHomeButtonPress;	// IMP=0x0000000100077980
- (void)_simulateLockButtonPress;	// IMP=0x00000001000778ec
- (void)_performAfterDelay:(double)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100077890
- (void)_runAppClose;	// IMP=0x00000001000773e8
- (void)_runAppOpen;	// IMP=0x0000000100077070
- (void)_runDisplayAlertTest:(id)arg1;	// IMP=0x0000000100076de8
- (void)_runDashBoardPresentDismissPasscode;	// IMP=0x0000000100076530
- (void)_runDashBoardDismissTestFromPageIndex:(unsigned long long)arg1 showPasscodeView:(_Bool)arg2;	// IMP=0x0000000100075f3c
- (void)_runDashBoardDismissFromPasscodeViewAfterAuthenticationTest;	// IMP=0x0000000100075f28
- (void)_runDashBoardDismissFromTodayViewWhileAuthenticatedTest;	// IMP=0x0000000100075f14
- (void)_runDashBoardDismissWhileAuthenticatedTest;	// IMP=0x0000000100075f00
- (void)_runDashBoardEnterSpotlightLaunchNullAppDismissUnlockToHomeTest;	// IMP=0x0000000100074b2c
- (void)_launchFullscreenApplication:(id)arg1 withLaunchResult:(CDUnknownBlockType)arg2 transactionCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100074738
- (void)_returnToHomescreenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100074730
- (void)_resetForceRotate;	// IMP=0x00000001000746e8
- (void)_rotationCompletion:(id)arg1;	// IMP=0x0000000100074650
- (void)_forceRotateToOrientation:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007453c
- (void)_runDashBoardRotationTestOnPageAtIndex:(unsigned long long)arg1 showSpotlight:(_Bool)arg2;	// IMP=0x0000000100073878
- (void)_runDashBoardRotationTestOnPageAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100073868
- (void)_runDashBoardRotationTestOnTodayViewPageInSpotlight;	// IMP=0x0000000100073854
- (void)_runDashBoardRotationTestOnTodayViewPage;	// IMP=0x0000000100073844
- (void)_runDashBoardRotationTestOnMainPage;	// IMP=0x0000000100073834
- (void)_runDashBoardRotationTestOnCameraPage;	// IMP=0x0000000100073824
- (void)_runDashBoardScrollTestFromPageIndex:(unsigned long long)arg1 toPageWithIndex:(unsigned long long)arg2 subTestName:(id)arg3 backSubTestName:(id)arg4 withBlur:(_Bool)arg5;	// IMP=0x0000000100072bbc
- (void)_runDashBoardScrollFromLeftToRightPageTestWithBlur:(_Bool)arg1;	// IMP=0x0000000100072b94
- (void)_runDashBoardScrollToRightPageTestWithBlur:(_Bool)arg1;	// IMP=0x0000000100072b68
- (void)_runDashBoardScrollToLeftPageTestWithBlur:(_Bool)arg1;	// IMP=0x0000000100072b3c
- (void)assistant:(id)arg1 viewDidAppear:(long long)arg2;	// IMP=0x00000001000727a8
- (void)assistant:(id)arg1 viewWillAppear:(long long)arg2;	// IMP=0x00000001000726fc
- (void)_runSiriBringUpTest:(id)arg1;	// IMP=0x0000000100072630
- (void)_runPresentBannerTest;	// IMP=0x00000001000721cc
- (void)_runPresentLongLookTest;	// IMP=0x0000000100071d68
- (void)_runControlCenterDismissOrbActionsTest;	// IMP=0x0000000100071888
- (void)_runControlCenterShowOrbActionsTest;	// IMP=0x0000000100071414
- (void)_runControlCenterShowAirDropSheetTest;	// IMP=0x0000000100070e3c
- (void)_runControlCenterScrollAmongstPagesTest;	// IMP=0x0000000100070788
- (void)_bringUpControlCenter;	// IMP=0x00000001000704e4
- (void)_runControlCenterBringupOnLockScreenTest;	// IMP=0x00000001000703d8
- (void)_runControlCenterBringupOverSafariTest;	// IMP=0x0000000100070260
- (void)_runControlCenterBringupTest;	// IMP=0x0000000100070154
- (void)_runControlCenterDismissTest;	// IMP=0x000000010006fdc4
- (void)_runLockScreenScrollNotificationsTestWithOptions:(id)arg1;	// IMP=0x000000010006f5c0
- (void)_publishFakeLockScreenNotificationsWithCount:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010006f414
- (void)_runNotificationCenterWidgetLaunchTestNamed:(id)arg1 options:(id)arg2;	// IMP=0x000000010006ed70
- (void)_runTodayViewEditTest;	// IMP=0x000000010006e8e4
- (void)_runDashboardTodayViewScrollWidgetsTestWithOptions:(id)arg1;	// IMP=0x000000010006e6ac
- (void)_runTodayViewScrollWidgetsTestWithOptions:(id)arg1;	// IMP=0x000000010006e4c4
- (void)_runWidgetsScrollTestWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010006e1d0
- (void)_runNotificationCenterScrollTestWithOptions:(id)arg1;	// IMP=0x000000010006dbe4
- (void)_runNotificationCenterDismissTest;	// IMP=0x000000010006d8e8
- (void)_runNotificationCenterBringupTest;	// IMP=0x000000010006d640
- (void)_runAppSwitcherBringupTest;	// IMP=0x000000010006d478
- (void)_runAppSwitcherDismissTest;	// IMP=0x000000010006d234
- (void)_continueRunningScrollAppSwitcherTest:(id)arg1 runColdTest:(_Bool)arg2;	// IMP=0x000000010006ccd4
- (void)_startScrollAppSwitcherTest:(id)arg1 runColdTest:(_Bool)arg2;	// IMP=0x000000010006caac
- (void)_runScrollAppSwitcherLandscapeTest:(id)arg1;	// IMP=0x000000010006c7a8
- (void)_runScrollAppSwitcherTest:(id)arg1;	// IMP=0x000000010006c524
- (void)_runSearchTest:(id)arg1;	// IMP=0x000000010006c520
- (void)_runScrollSearchResultsTest:(id)arg1;	// IMP=0x000000010006c51c
- (void)_runSearch:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010006c518
- (void)_runSpotlightTodayViewRotation;	// IMP=0x000000010006c1b4
- (void)_runSpotlightPulldownRotation;	// IMP=0x000000010006bf6c
- (void)exitSpotlight:(id)arg1;	// IMP=0x000000010006be74
- (void)_bringUPSpotlight:(CDUnknownBlockType)arg1;	// IMP=0x000000010006bd3c
- (void)_runSpotlightScrollTest:(id)arg1;	// IMP=0x000000010006b768
- (void)_runSpotlightLeftOfHomeRotation;	// IMP=0x000000010006b4a0
- (void)_doCommonSpotlightTestForNotificationCenter:(id)arg1 forSearchFieldFocusWithTeardown:(CDUnknownBlockType)arg2;	// IMP=0x000000010006acf4
- (void)_presentNotificationCenterForSpotlightTestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010006a82c
- (void)_runNotificationCenterPartialPullDownToSpotlightOverSafari;	// IMP=0x000000010006a5f8
- (void)_runNotificationCenterFocusSearchFieldToSpotlightOverSafari;	// IMP=0x000000010006a218
- (void)_runNotificationCenterPartialPullDownToSpotlightOverLockScreen;	// IMP=0x000000010006a0b4
- (void)_runNotificationCenterFocusSearchFieldToSpotlightOverLockScreen;	// IMP=0x0000000100069efc
- (void)_runNotificationCenterPartialPullDownToSpotlightOverHomeScreen;	// IMP=0x0000000100069d14
- (void)_activatePartialPulldownSpotlightForTest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010006992c
- (void)_runNotificationCenterFocusSearchFieldToSpotlightOverHomeScreen;	// IMP=0x0000000100069548
- (void)_publishFakeNCNotificationsWithCount:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000693bc
- (void)_runLockScreenSwipeLeftIsShowingSpotlight:(_Bool)arg1;	// IMP=0x0000000100068864
- (void)_runLockScreenSwipeLeftToSpotlight;	// IMP=0x0000000100068854
- (void)_runLockScreenSwipeLeftToTodayView;	// IMP=0x0000000100068844
- (void)_runLockScreenTodayViewPullDownToSpotlight;	// IMP=0x0000000100067e78
- (void)_runLockScreenTodayViewFocusSearchFieldToSpotlight;	// IMP=0x00000001000670d8
- (void)_runTodayViewPullDownToSpotlight;	// IMP=0x0000000100066938
- (void)_runTodayViewFocusSearchFieldToSpotlight;	// IMP=0x00000001000661b8
- (void)_runHomeScreenIconPullToSpotlightDismiss;	// IMP=0x0000000100065cc4
- (void)_runHomeScreenIconPullToSpotlight;	// IMP=0x00000001000657d0
- (void)_runHomeScreenSwipeLeftToSpotlight;	// IMP=0x00000001000652e8
- (void)_runHomeScreenSwipeRightFromTodayView;	// IMP=0x0000000100064e74
- (void)_runHomeScreenSwipeLeftToTodayView;	// IMP=0x0000000100064a00
- (void)_runScrollIconListTest;	// IMP=0x0000000100064774
- (void)runRotationTest:(int)arg1;	// IMP=0x00000001000642c0
- (void)endLaunchTest;	// IMP=0x00000001000642a4
- (void)startResumeTestNamed:(id)arg1 options:(id)arg2;	// IMP=0x0000000100064128
- (void)startLaunchTestNamed:(id)arg1 options:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000638ac
- (void)startLaunchTestNamed:(id)arg1 options:(id)arg2;	// IMP=0x0000000100063858
- (void)_cleanUpLaunchTestState;	// IMP=0x00000001000637f0
- (void)_retryLaunchTestWithOptions:(id)arg1;	// IMP=0x0000000100063760
- (void)_workspaceTransactionCompleted:(id)arg1;	// IMP=0x0000000100063430
- (void)_unscatterWillBegin:(id)arg1;	// IMP=0x00000001000633b0
- (_Bool)runTest:(id)arg1 options:(id)arg2;	// IMP=0x0000000100061364
- (void)installNotificationObserverForNotificationName:(id)arg1 forOneNotification:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010006109c

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
