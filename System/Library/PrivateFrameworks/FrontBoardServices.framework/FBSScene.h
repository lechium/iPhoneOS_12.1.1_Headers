/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSSceneUpdaterDelegate.h>
#import <libobjc.A.dylib/FBSSceneLayerDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, FBSSceneSettings, FBSSceneClientSettings, NSArray;

@interface FBSScene : NSObject <FBSSceneUpdaterDelegate, FBSSceneLayerDelegate, BSDescriptionProviding>

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (assign,nonatomic,__weak) id<FBSSceneDelegate> delegate; 
@property (nonatomic,readonly) FBSSceneSettings * settings; 
@property (nonatomic,readonly) FBSSceneClientSettings * clientSettings; 
@property (nonatomic,readonly) NSArray * layers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updater:(id)arg1 didReceiveMessage:(id)arg2 withResponse:(/*^block*/id)arg3 ;
-(BOOL)sceneLayerShouldObserveUpdates:(id)arg1 ;
-(void)sceneLayerDidUpdate:(id)arg1 ;
-(void)sceneLayerDidInvalidate:(id)arg1 ;
-(BOOL)_hasAgent;
-(void)_didCreateWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_willDestroyWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)contexts;
-(void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)updater:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)attachSceneContext:(id)arg1 ;
-(void)detachSceneContext:(id)arg1 ;
-(id)snapshotRequest;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)init;
-(NSString *)identifier;
-(void)setDelegate:(id<FBSSceneDelegate>)arg1 ;
-(id<FBSSceneDelegate>)delegate;
-(void)invalidate;
-(void)detachContext:(id)arg1 ;
-(void)attachContext:(id)arg1 ;
-(FBSSceneSettings *)settings;
-(void)attachLayer:(id)arg1 ;
-(void)detachLayer:(id)arg1 ;
-(FBSSceneClientSettings *)clientSettings;
-(NSArray *)layers;
-(id)_init;
-(void)updateClientSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)updateClientSettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5 ;
-(id)fbsDisplay;
-(id)initWithCallOutQueue:(id)arg1 identifier:(id)arg2 parameters:(id)arg3 ;
-(void)sendActions:(id)arg1 ;
-(BOOL)invalidateSnapshotWithContext:(id)arg1 ;
-(BOOL)performSnapshotWithContext:(id)arg1 ;
-(id)display;
@end

