/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBApplicationProcessLaunchTransactionObserver.h>
#import <libobjc.A.dylib/FBUISceneClientDelegate.h>
#import <libobjc.A.dylib/FBUISceneClientWorkspace.h>
#import <libobjc.A.dylib/FBSceneClientProvider.h>

@class FBUISceneClientIdentity, FBWorkspace, NSMutableDictionary, FBApplicationProcessLaunchTransaction, FBSceneClientProviderInvalidationAction, NSString;

@interface FBRemoteSceneClientWorkspace : NSObject <FBApplicationProcessLaunchTransactionObserver, FBUISceneClientDelegate, FBUISceneClientWorkspace, FBSceneClientProvider> {

	FBUISceneClientIdentity* _clientIdentity;
	FBWorkspace* _processWorkspace;
	NSMutableDictionary* _hostsByIdentifer;
	NSMutableDictionary* _clientsByIdentifier;
	NSMutableDictionary* _handlerByIdentifier;
	FBApplicationProcessLaunchTransaction* _launchTransaction;
	FBSceneClientProviderInvalidationAction* _invalidationAction;
	BOOL _invalidated;

}

@property (nonatomic,copy,readonly) FBUISceneClientIdentity * clientIdentity;              //@synthesize clientIdentity=_clientIdentity - In the implementation block
@property (nonatomic,retain) FBWorkspace * processWorkspace;                               //@synthesize processWorkspace=_processWorkspace - In the implementation block
@property (nonatomic,readonly) FBProcess*<FBUIProcess> clientProcess; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transaction:(id)arg1 willLaunchProcess:(id)arg2 ;
-(void)transactionDidComplete:(id)arg1 ;
-(void)registerInvalidationAction:(id)arg1 ;
-(id)registerHost:(id)arg1 ;
-(void)unregisterHost:(id)arg1 ;
-(void)didInvalidateSceneClient:(id)arg1 ;
-(FBProcess*<FBUIProcess>)clientProcess;
-(FBUISceneClientIdentity *)clientIdentity;
-(id)createHostForSceneWithIdentifier:(id)arg1 initialParameters:(id)arg2 ;
-(void)registerSceneWithIdentifier:(id)arg1 specification:(id)arg2 acquisitionHandler:(/*^block*/id)arg3 ;
-(id)initWithClientIdentity:(id)arg1 ;
-(id)_createSceneClientForIdentifier:(id)arg1 withSpecification:(id)arg2 ;
-(FBWorkspace *)processWorkspace;
-(id)clientForSceneIdentifier:(id)arg1 ;
-(id)_processWorkspace;
-(void)_processLaunched:(id)arg1 ;
-(void)setProcessWorkspace:(FBWorkspace *)arg1 ;
-(void)endTransaction;
-(void)beginTransaction;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(void)initialize;
-(NSString *)description;
-(void)invalidate;
@end

