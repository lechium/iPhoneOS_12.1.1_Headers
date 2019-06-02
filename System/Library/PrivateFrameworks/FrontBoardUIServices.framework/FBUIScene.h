/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBUISceneContentManager.h>
#import <libobjc.A.dylib/FBUISceneSurrogate.h>

@protocol FBUISceneHostProxy, FBUISceneClientProxy, FBUISceneUpdater, FBUISceneDelegate;
@class NSString, FBSSceneSpecification, FBSSceneSettings, FBSSceneClientSettings, FBUISceneWorkspace, UIView, NSMutableArray;

@interface FBUIScene : NSObject <FBUISceneContentManager, FBUISceneSurrogate> {

	NSString* _name;
	NSString* _identifier;
	FBSSceneSpecification* _specification;
	FBSSceneSettings* _settings;
	FBSSceneClientSettings* _clientSettings;
	FBUISceneWorkspace* _workspace;
	id<FBUISceneHostProxy> _sceneHost;
	id<FBUISceneClientProxy> _sceneClient;
	id<FBUISceneUpdater> _sceneUpdater;
	id<FBUISceneDelegate> _delegate;
	UIView* _contentView;
	NSMutableArray* _pendingUpdateBlocks;
	BOOL _activated;
	BOOL _deactivating;
	BOOL _invalidated;
	unsigned long long _layerCount;

}

@property (nonatomic,copy) FBSSceneSettings * settings;                                 //@synthesize settings=_settings - In the implementation block
@property (nonatomic,copy) FBSSceneClientSettings * clientSettings;                     //@synthesize clientSettings=_clientSettings - In the implementation block
@property (__weak) id<FBUISceneHostProxy> sceneHost;                                    //@synthesize sceneHost=_sceneHost - In the implementation block
@property (retain) id<FBUISceneClientProxy> sceneClient;                                //@synthesize sceneClient=_sceneClient - In the implementation block
@property (assign,nonatomic,__weak) FBUISceneWorkspace * workspace;                     //@synthesize workspace=_workspace - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneSpecification * specification;              //@synthesize specification=_specification - In the implementation block
@property (assign,nonatomic,__weak) id<FBUISceneDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<FBUISceneContentManager> contentManager; 
@property (getter=isActivated,nonatomic,readonly) BOOL activated;                       //@synthesize activated=_activated - In the implementation block
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated;                   //@synthesize invalidated=_invalidated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasContent; 
-(id)sceneIdentifier;
-(BOOL)isActivated;
-(void)_performSceneUpdate:(/*^block*/id)arg1 ;
-(void)updateSettingsWithTransitionBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_isReallyActive;
-(void)_performPendingUpdates;
-(id)initWithName:(id)arg1 identifier:(id)arg2 specification:(id)arg3 ;
-(void)updateSettingsWithBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setClientSettings:(FBSSceneClientSettings *)arg1 ;
-(FBSSceneSpecification *)specification;
-(void)setSceneClient:(id<FBUISceneClientProxy>)arg1 ;
-(id<FBUISceneClientProxy>)sceneClient;
-(void)didInvalidateSceneHost:(id)arg1 ;
-(void)sceneHost:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)sceneHost:(id)arg1 destroySceneWithTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sceneHost:(id)arg1 didReceiveActions:(id)arg2 ;
-(id)sceneSpecification;
-(void)sceneClient:(id)arg1 didAttachLayer:(id)arg2 ;
-(void)sceneClient:(id)arg1 didUpdateLayer:(id)arg2 ;
-(void)sceneClient:(id)arg1 didDetachLayer:(id)arg2 ;
-(void)sceneClient:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneClient:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)didInvalidateSceneClient:(id)arg1 ;
-(void)setSceneHost:(id<FBUISceneHostProxy>)arg1 ;
-(id<FBUISceneHostProxy>)sceneHost;
-(FBUISceneWorkspace *)workspace;
-(void)sceneHost:(id)arg1 registerSceneClient:(id)arg2 withInitialParameters:(id)arg3 ;
-(void)registerSceneUpdater:(id)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)setWorkspace:(FBUISceneWorkspace *)arg1 ;
-(id<FBUISceneContentManager>)contentManager;
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)name;
-(NSString *)description;
-(void)setDelegate:(id<FBUISceneDelegate>)arg1 ;
-(id)contentView;
-(id<FBUISceneDelegate>)delegate;
-(void)invalidate;
-(id)configure;
-(FBSSceneSettings *)settings;
-(FBSSceneClientSettings *)clientSettings;
-(void)deactivate;
-(void)setSettings:(FBSSceneSettings *)arg1 ;
-(BOOL)hasContent;
-(void)sendActions:(id)arg1 ;
-(BOOL)isInvalidated;
@end

