//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBProcessManagerObserver.h"
#import "FBSceneManagerDelegate.h"
#import "FBSceneManagerObserver.h"
#import "FBSystemServiceDelegate.h"

@class NSMutableSet, NSSet, NSString, UIApplicationSceneClientSettingsDiffInspector;

@interface CBAppManager : NSObject <FBSystemServiceDelegate, FBProcessManagerObserver, FBSceneManagerDelegate, FBSceneManagerObserver>
{
    NSMutableSet *_openApps;	// 8 = 0x8
    NSSet *_whitelist;	// 16 = 0x10
    NSSet *_whitelistPrefixes;	// 24 = 0x18
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010000dfa0
@property(retain, nonatomic) UIApplicationSceneClientSettingsDiffInspector *appClientSettingsDiffInspector; // @synthesize appClientSettingsDiffInspector=_appClientSettingsDiffInspector;
@property(readonly, nonatomic) NSSet *whitelistPrefixes; // @synthesize whitelistPrefixes=_whitelistPrefixes;
@property(readonly, nonatomic) NSSet *whitelist; // @synthesize whitelist=_whitelist;
@property(retain, nonatomic) NSMutableSet *openApps; // @synthesize openApps=_openApps;
- (void).cxx_destruct;	// IMP=0x0000000100010740
- (void)systemServicePrepareForExit:(id)arg1 andRelaunch:(_Bool)arg2;	// IMP=0x00000001000106d4
- (void)systemService:(id)arg1 dataReset:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000106bc
- (void)systemService:(id)arg1 handleActions:(id)arg2 origin:(id)arg3 withResult:(CDUnknownBlockType)arg4;	// IMP=0x00000001000106a4
- (void)systemService:(id)arg1 isPasscodeLockedOrBlockedWithResult:(CDUnknownBlockType)arg2;	// IMP=0x000000010001068c
- (void)systemService:(id)arg1 handleOpenApplicationRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001031c
- (void)systemService:(id)arg1 canActivateApplication:(id)arg2 withResult:(CDUnknownBlockType)arg3;	// IMP=0x00000001000101d0
- (id)_appClientSettingsDiffInspector;	// IMP=0x000000010000fd84
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;	// IMP=0x000000010000fd80
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;	// IMP=0x000000010000fd7c
- (void)_updateLevelForScene:(id)arg1 transitionContext:(id)arg2;	// IMP=0x000000010000f9a8
- (double)_effectiveKeyboardSceneLevelForClientSettings:(id)arg1;	// IMP=0x000000010000f874
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 success:(_Bool)arg4;	// IMP=0x000000010000f7e8
- (void)_windowDidBecomeKey:(id)arg1;	// IMP=0x000000010000f758
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;	// IMP=0x000000010000f754
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;	// IMP=0x000000010000f750
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;	// IMP=0x000000010000f74c
- (id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2;	// IMP=0x000000010000f6bc
- (long long)sceneManager:(id)arg1 hostingPolicyForScene:(id)arg2;	// IMP=0x000000010000f6b4
- (void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3;	// IMP=0x000000010000f6b0
- (void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;	// IMP=0x000000010000f468
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;	// IMP=0x000000010000f320
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;	// IMP=0x000000010000f010
- (void)_terminateApps:(id)arg1 reason:(long long)arg2 reportCrash:(_Bool)arg3 description:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010000ea6c
- (void)terminateAppWithBundleID:(id)arg1 reason:(long long)arg2 reportCrash:(_Bool)arg3 description:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010000e634
- (void)launchAppWithBundleID:(id)arg1 suspended:(_Bool)arg2 native:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000e264
- (id)init;	// IMP=0x000000010000e020

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

