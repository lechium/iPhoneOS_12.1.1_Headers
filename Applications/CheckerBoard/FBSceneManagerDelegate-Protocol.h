//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSceneManagerObserver.h"

@class FBSDisplayIdentity, FBSSceneClientSettings, FBSSceneClientSettingsDiff, FBSSceneTransitionContext, FBScene, FBSceneManager, NSSet;

@protocol FBSceneManagerDelegate <FBSceneManagerObserver>
- (void)sceneManager:(FBSceneManager *)arg1 scene:(FBScene *)arg2 didReceiveActions:(NSSet *)arg3;
- (void)sceneManager:(FBSceneManager *)arg1 scene:(FBScene *)arg2 didUpdateClientSettingsWithDiff:(FBSSceneClientSettingsDiff *)arg3 oldClientSettings:(FBSSceneClientSettings *)arg4 transitionContext:(FBSSceneTransitionContext *)arg5;

@optional
- (FBSSceneTransitionContext *)sceneManager:(FBSceneManager *)arg1 createDefaultTransitionContextForScene:(FBScene *)arg2;
- (long long)sceneManager:(FBSceneManager *)arg1 hostingPolicyForScene:(FBScene *)arg2;
- (long long)sceneManager:(FBSceneManager *)arg1 hostingPolicyForDisplay:(FBSDisplayIdentity *)arg2;
@end

