//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSSceneTransitionContext, FBScene, SBApplication, UIApplicationSceneClientSettings, UIApplicationSceneSettings;

@interface SBAppClientSettingObserverContext : NSObject
{
    FBScene *_scene;	// 8 = 0x8
    SBApplication *_app;	// 16 = 0x10
    UIApplicationSceneSettings *_settings;	// 24 = 0x18
    UIApplicationSceneClientSettings *_oldClientSettings;	// 32 = 0x20
    UIApplicationSceneClientSettings *_updatedClientSettings;	// 40 = 0x28
    FBSSceneTransitionContext *_transition;	// 48 = 0x30
}

@property(retain, nonatomic) FBSSceneTransitionContext *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) UIApplicationSceneClientSettings *updatedClientSettings; // @synthesize updatedClientSettings=_updatedClientSettings;
@property(retain, nonatomic) UIApplicationSceneClientSettings *oldClientSettings; // @synthesize oldClientSettings=_oldClientSettings;
@property(retain, nonatomic) UIApplicationSceneSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) SBApplication *app; // @synthesize app=_app;
@property(retain, nonatomic) FBScene *scene; // @synthesize scene=_scene;
- (void).cxx_destruct;	// IMP=0x000000010049c9cc

@end
