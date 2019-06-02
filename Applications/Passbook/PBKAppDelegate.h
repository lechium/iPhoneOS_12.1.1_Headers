//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "PKForegroundActiveArbiterObserver.h"
#import "SBSHardwareButtonEventConsuming.h"
#import "UIApplicationDelegate.h"
#import "UNUserNotificationCenterDelegate.h"

@class CLInUseAssertion, CLLocationManager, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, PKPassGroupsViewController, SBSAssertion, UIWindow, UNUserNotificationCenter;

@interface PBKAppDelegate : UIResponder <SBSHardwareButtonEventConsuming, PKForegroundActiveArbiterObserver, UNUserNotificationCenterDelegate, UIApplicationDelegate>
{
    UIWindow *_window;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_backgroundQueue;	// 16 = 0x10
    _Bool _foregroundActive;	// 24 = 0x18
    _Bool _foregroundActiveResourcesCreated;	// 25 = 0x19
    _Bool _fetchingAsynchronousForegroundActiveResources;	// 26 = 0x1a
    _Bool _needsOnScreenPresentation;	// 27 = 0x1b
    _Bool _needsRegionSupportUpdate;	// 28 = 0x1c
    NSMutableArray *_blocksQueuedForForegroundExecution;	// 32 = 0x20
    CLLocationManager *_requestManager;	// 40 = 0x28
    id _staticGlyphResources;	// 48 = 0x30
    CLInUseAssertion *_inUseAssertion;	// 56 = 0x38
    id <BSInvalidatable> _lockButtonObserver;	// 64 = 0x40
    SBSAssertion *_lockButtonAssertion;	// 72 = 0x48
    _Bool _brightnessRampingAllowed;	// 80 = 0x50
    UNUserNotificationCenter *_notificationCenter;	// 88 = 0x58
    _Bool _locationAuthorizationNotNeeded;	// 96 = 0x60
    PKPassGroupsViewController *_cardsViewController;	// 104 = 0x68
}

@property(readonly, nonatomic) PKPassGroupsViewController *cardsViewController; // @synthesize cardsViewController=_cardsViewController;
- (void).cxx_destruct;	// IMP=0x0000000100006000
- (void)_executeWhenApplicationForegroundActive:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005f5c
- (id)applicationDocumentsDirectory;	// IMP=0x0000000100005ed0
- (void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2;	// IMP=0x0000000100005de0
- (void)consumeDoublePressUpForButtonKind:(long long)arg1;	// IMP=0x0000000100005d3c
- (void)_destroyForegroundActiveResources;	// IMP=0x0000000100005bd8
- (void)_createForegroundActiveResources;	// IMP=0x00000001000053c0
- (void)_setForegroundActive:(_Bool)arg1;	// IMP=0x00000001000051ac
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_3d581f42)arg2;	// IMP=0x000000010000519c
- (_Bool)application:(id)arg1 shouldSaveApplicationState:(id)arg2;	// IMP=0x00000001000050c8
- (_Bool)application:(id)arg1 shouldRestoreApplicationState:(id)arg2;	// IMP=0x000000010000506c
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100004ce8
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x0000000100003e0c
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100003c2c
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003a5c
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x0000000100003a00
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x0000000100003798
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x00000001000034fc
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x00000001000034b4
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x000000010000346c
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100003404
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100003214
- (void)dealloc;	// IMP=0x000000010000319c
- (id)init;	// IMP=0x0000000100003080

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
