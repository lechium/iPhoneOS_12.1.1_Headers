//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBApplicationTerminationAssertionServiceDelegate.h"
#import "FBUIApplicationServiceDelegate.h"
#import "SBApplicationLifecycleObserver.h"
#import "SBApplicationRestrictionDataSource.h"

@class BKSApplicationStateMonitor, FBApplicationLibrary, NSDictionary, NSLock, NSMutableDictionary, NSMutableSet, NSSet, NSString, SBApplicationInfo, SBApplicationLibraryObserver, SBApplicationRestrictionController, SBReverseCountedSemaphore;

@interface SBApplicationController : NSObject <SBApplicationRestrictionDataSource, SBApplicationLifecycleObserver, FBUIApplicationServiceDelegate, FBApplicationTerminationAssertionServiceDelegate>
{
    NSMutableDictionary *_applicationsByBundleIdentifer;	// 8 = 0x8
    NSMutableSet *_applicationsPlayingMutedAudioSinceLastLock;	// 16 = 0x10
    NSDictionary *_backgroundDisplayDict;	// 24 = 0x18
    NSLock *_applicationsLock;	// 32 = 0x20
    NSMutableDictionary *_systemAppsVisibilityOverrides;	// 40 = 0x28
    NSSet *_cachedSystemAppsWithVisibilityOverrideHidden;	// 48 = 0x30
    BKSApplicationStateMonitor *_appStateMonitor;	// 56 = 0x38
    _Bool _booting;	// 64 = 0x40
    NSMutableSet *_appsToAutoLaunchAfterBoot;	// 72 = 0x48
    SBApplicationRestrictionController *_restrictionController;	// 80 = 0x50
    SBApplicationLibraryObserver *_appLibraryObserver;	// 88 = 0x58
    FBApplicationLibrary *_appLibrary;	// 96 = 0x60
    SBApplicationInfo *_systemAppInfo;	// 104 = 0x68
    SBReverseCountedSemaphore *_uninstallationReverseSemaphore;	// 112 = 0x70
}

+ (void)_setClearAllLegacySnapshotsWhenLoaded:(_Bool)arg1;	// IMP=0x00000001001951c0
+ (void)_setClearSystemAppSnapshotsWhenLoaded:(_Bool)arg1;	// IMP=0x00000001001951b4
+ (id)sharedInstanceIfExists;	// IMP=0x0000000100193d20
+ (id)sharedInstance;	// IMP=0x0000000100193d10
+ (id)_sharedInstanceCreateIfNecessary:(_Bool)arg1;	// IMP=0x0000000100193c40
- (void).cxx_destruct;	// IMP=0x0000000100199418
- (void)service:(id)arg1 didRelinquishTerminationAssertion:(id)arg2;	// IMP=0x0000000100199288
- (void)service:(id)arg1 didAcquireTerminationAssertion:(id)arg2;	// IMP=0x00000001001990a0
- (void)service:(id)arg1 canAcquireTerminationAssertion:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001989ec
- (id)bundleIdentifiersWithVisibilityOverrideHidden;	// IMP=0x00000001001987f0
- (void)noteNeedsToRefreshVisiblityOverrides;	// IMP=0x00000001001987e4
- (void)applicationService:(id)arg1 suspendApplicationWithBundleIdentifier:(id)arg2;	// IMP=0x00000001001987a8
- (void)applicationService:(id)arg1 setNextWakeDate:(id)arg2 forBundleIdentifier:(id)arg3;	// IMP=0x0000000100198738
- (void)applicationService:(id)arg1 deleteAllSnapshotsForBundleIdentifier:(id)arg2;	// IMP=0x00000001001986f4
- (void)applicationService:(id)arg1 getBadgeValueForBundleIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100198640
- (void)applicationService:(id)arg1 setBadgeValue:(id)arg2 forBundleIdentifier:(id)arg3;	// IMP=0x00000001001985d0
- (void)applicationsDemoted:(id)arg1;	// IMP=0x0000000100198278
- (void)applicationsRemoved:(id)arg1;	// IMP=0x0000000100198064
- (void)applicationsModified:(id)arg1;	// IMP=0x0000000100198018
- (void)applicationsAdded:(id)arg1;	// IMP=0x0000000100197d38
- (void)_updateVisibilityOverrides;	// IMP=0x0000000100197ba0
- (void)_loadApplicationsAndIcons:(id)arg1 removed:(id)arg2 reveal:(_Bool)arg3;	// IMP=0x0000000100197ac4
- (void)_updateIconControllerAndModelForLoadedApplications:(id)arg1 reveal:(_Bool)arg2 popIn:(_Bool)arg3 reloadAllIcons:(_Bool)arg4;	// IMP=0x000000010019748c
- (void)_removeApplicationsFromModelWithBundleIdentifier:(id)arg1 forInstall:(_Bool)arg2 withReason:(id)arg3;	// IMP=0x0000000100197280
- (id)_loadApplications:(id)arg1 removed:(id)arg2;	// IMP=0x0000000100196924
- (id)_appInfosToBundleIDs:(id)arg1;	// IMP=0x0000000100196798
- (void)_loadApplicationFromApplicationInfo:(id)arg1;	// IMP=0x0000000100196188
- (Class)_appClassForInfo:(id)arg1;	// IMP=0x0000000100196040
- (void)_sendInstalledAppsDidChangeNotification:(id)arg1 removed:(id)arg2 modified:(id)arg3;	// IMP=0x0000000100195cc8
- (void)_preLoadApplications;	// IMP=0x0000000100195cc4
- (void)_memoryWarningReceived;	// IMP=0x0000000100195ba8
- (void)_lockStateChanged:(id)arg1;	// IMP=0x0000000100195b00
- (void)_unusuallyMutedAudioPlaying:(id)arg1;	// IMP=0x0000000100195958
- (void)_mediaServerConnectionDied:(id)arg1;	// IMP=0x0000000100195924
- (void)_registerForAVSystemControllerNotifications;	// IMP=0x00000001001957c8
- (void)_unregisterForAVSystemControllerNotifications;	// IMP=0x000000010019573c
- (void)_deviceFirstUnlocked;	// IMP=0x0000000100195730
- (void)_finishDeferredMajorVersionMigrationTasks_FlushLegacySnapshots;	// IMP=0x0000000100195614
- (void)_finishDeferredMajorVersionMigrationTasks_FlushSystemSnapshots;	// IMP=0x00000001001954b8
- (id)_lock_applicationWithBundleIdentifier:(id)arg1;	// IMP=0x00000001001954a0
- (_Bool)_loadApplicationWithoutMutatingIconState:(id)arg1;	// IMP=0x00000001001953a8
- (void)_autoLaunchAppsIfNecessaryAfterBoot;	// IMP=0x00000001001951cc
- (id)restrictionController;	// IMP=0x00000001001951a4
- (id)testFlightApplication;	// IMP=0x000000010019518c
- (id)loginApplication;	// IMP=0x0000000100195174
- (id)webApplications;	// IMP=0x0000000100194fec
- (id)iPodOutApplication;	// IMP=0x0000000100194fd4
- (id)cameraApplication;	// IMP=0x0000000100194fbc
- (id)clockApplication;	// IMP=0x0000000100194fa4
- (id)inCallServiceApp;	// IMP=0x0000000100194f8c
- (id)faceTimeApp;	// IMP=0x0000000100194f74
- (id)mobilePhone;	// IMP=0x0000000100194f5c
- (id)setupApplication;	// IMP=0x0000000100194f44
- (id)dataActivationApplication;	// IMP=0x0000000100194f2c
- (id)musicApplication;	// IMP=0x0000000100194f14
- (id)alwaysAvailableApplicationBundleIdentifiers;	// IMP=0x0000000100194d10
- (void)waitForUninstallsToComplete;	// IMP=0x0000000100194cf8
- (void)uninstallApplication:(id)arg1;	// IMP=0x0000000100194af8
- (id)applicationWithPid:(int)arg1;	// IMP=0x00000001001948d8
- (id)applicationWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100194840
- (id)runningApplications;	// IMP=0x00000001001946b8
- (id)allApplications;	// IMP=0x0000000100194644
- (id)allBundleIdentifiers;	// IMP=0x00000001001945d0
- (void)dealloc;	// IMP=0x00000001001944cc
- (id)init;	// IMP=0x0000000100193d30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

