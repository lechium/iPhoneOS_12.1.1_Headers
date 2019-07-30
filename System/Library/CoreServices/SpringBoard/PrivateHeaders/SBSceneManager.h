//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSceneManagerDelegate.h"
#import "FBSceneManagerObserver.h"
#import "SBSceneLayoutViewControllerDelegate.h"

@class BSCopyingCacheSet, FBSDisplay, FBSceneManager, NSCountedSet, NSMutableSet, NSString, SBPolicyAggregator, SBSceneLayoutViewController, SBSceneLayoutWindow, UIScreen;

@interface SBSceneManager : NSObject <SBSceneLayoutViewControllerDelegate, FBSceneManagerObserver, FBSceneManagerDelegate>
{
    FBSceneManager *_sceneManager;	// 8 = 0x8
    UIScreen *_screen;	// 16 = 0x10
    FBSDisplay *_display;	// 24 = 0x18
    SBSceneLayoutWindow *_window;	// 32 = 0x20
    SBSceneLayoutViewController *_layoutController;	// 40 = 0x28
    SBPolicyAggregator *_policyAggregator;	// 48 = 0x30
    BSCopyingCacheSet *_allScenes;	// 56 = 0x38
    BSCopyingCacheSet *_alertScenes;	// 64 = 0x40
    BSCopyingCacheSet *_windowScenes;	// 72 = 0x48
    BSCopyingCacheSet *_daemonScenes;	// 80 = 0x50
    BSCopyingCacheSet *_pluginScenes;	// 88 = 0x58
    BSCopyingCacheSet *_workspaceScenes;	// 96 = 0x60
    BSCopyingCacheSet *_externalApplicationScenes;	// 104 = 0x68
    BSCopyingCacheSet *_externalForegroundApplicationScenes;	// 112 = 0x70
    BSCopyingCacheSet *_reportedExternalForegroundApplicationScenes;	// 120 = 0x78
    NSCountedSet *_assertedBackgroundScenes;	// 128 = 0x80
    NSMutableSet *_outgoingSnapshots;	// 136 = 0x88
    NSMutableSet *_incomingSnapshots;	// 144 = 0x90
    _Bool _layoutControllerCreationReentrancyGuard;	// 152 = 0x98
    id <SBSceneManagerDelegate> _delegate;	// 160 = 0xa0
}

@property(nonatomic) __weak id <SBSceneManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FBSDisplay *display; // @synthesize display=_display;
- (void).cxx_destruct;	// IMP=0x00000001000b3784
- (void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3;	// IMP=0x00000001000b34a8
- (void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;	// IMP=0x00000001000b33a4
- (id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2;	// IMP=0x00000001000b3314
- (long long)sceneManager:(id)arg1 hostingPolicyForScene:(id)arg2;	// IMP=0x00000001000b3304
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;	// IMP=0x00000001000b3300
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;	// IMP=0x00000001000b2edc
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 success:(_Bool)arg4;	// IMP=0x00000001000b2ed8
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;	// IMP=0x00000001000b2ed4
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;	// IMP=0x00000001000b1ffc
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;	// IMP=0x00000001000b1cbc
- (void)sceneLayoutController:(id)arg1 noteHasVisibleElements:(_Bool)arg2;	// IMP=0x00000001000b1c48
- (void)_updateStateForScene:(id)arg1 withSettings:(id)arg2;	// IMP=0x00000001000b1a20
- (_Bool)_shouldFenceTransitionForScene:(id)arg1 updatedClientSettingsDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;	// IMP=0x00000001000b18e0
- (id)_snapshotRequestsForApplication:(id)arg1 scene:(id)arg2 settings:(id)arg3;	// IMP=0x00000001000b180c
- (void)_scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;	// IMP=0x00000001000b1808
- (_Bool)_handleAction:(id)arg1 forScene:(id)arg2;	// IMP=0x00000001000b0b04
- (long long)_hostingPolicyForScene:(id)arg1;	// IMP=0x00000001000b0afc
- (void)_screenDidDisconnect:(id)arg1;	// IMP=0x00000001000b0a94
- (_Bool)_isStarkActivelyConnected;	// IMP=0x00000001000b0a14
- (id)_newPolicyAggregatorForDisplay:(id)arg1;	// IMP=0x00000001000b09ac
- (id)_sceneWindowLayoutStrategy;	// IMP=0x00000001000b0998
- (id)_newLayoutControllerForDisplay:(id)arg1;	// IMP=0x00000001000b0930
@property(readonly, copy) NSString *description;
- (id)additionalActionsForApplication:(id)arg1 withTransitionContext:(id)arg2;	// IMP=0x00000001000b0534
- (void)destroyAllScenes;	// IMP=0x00000001000b043c
- (id)assertBackgroundedStatusForScenes:(id)arg1;	// IMP=0x00000001000aff18
- (id)scenesForWorkspaceWithID:(id)arg1;	// IMP=0x00000001000afd40
- (id)pluginScenes;	// IMP=0x00000001000afd28
- (id)daemonScenes;	// IMP=0x00000001000afd10
- (id)externalForegroundApplicationScenes;	// IMP=0x00000001000afcf8
- (id)externalApplicationScenes;	// IMP=0x00000001000afce0
- (id)windowScenes;	// IMP=0x00000001000afcc8
- (id)alertScenes;	// IMP=0x00000001000afcb0
- (id)allScenes;	// IMP=0x00000001000afc98
@property(readonly, nonatomic) SBPolicyAggregator *policyAggregator;
@property(readonly, nonatomic) SBSceneLayoutViewController *layoutController;
@property(readonly, nonatomic) SBSceneLayoutWindow *window;
- (void)_invalidate;	// IMP=0x00000001000af79c
- (void)dealloc;	// IMP=0x00000001000af514
- (id)init;	// IMP=0x00000001000af504
- (id)initWithDisplay:(id)arg1;	// IMP=0x00000001000af0b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

