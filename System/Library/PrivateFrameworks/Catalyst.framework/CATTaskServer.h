/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CATTaskSessionDelegate.h>

@protocol OS_dispatch_group, CATTaskServerDelegate;
@class CATStateMachine, NSMutableSet, NSMutableDictionary, NSObject, CATOperationQueue, NSDictionary, NSArray, NSString;

@interface CATTaskServer : NSObject <CATTaskSessionDelegate> {

	CATStateMachine* mFSM;
	NSMutableSet* mSessions;
	NSMutableDictionary* mActiveSessionsByUUID;
	NSMutableDictionary* mInvalidatingSessionsByUUID;
	NSMutableDictionary* mConnectedSessionsByUUID;
	CATTaskServer* mStrongSelf;
	NSObject*<OS_dispatch_group> mAllSessionsDidInvalidateGroup;
	CATOperationQueue* mOrphanedOperationQueue;
	id<CATTaskServerDelegate> _delegate;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic,__weak) id<CATTaskServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                  //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * clientSessions; 
@property (nonatomic,copy,readonly) NSArray * connectedClientSessions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sessionDidConnect:(id)arg1 ;
-(void)sessionDidDisconnect:(id)arg1 ;
-(void)postNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)connectWithClientTransport:(id)arg1 ;
-(void)disconnectAllClientSessions;
-(NSArray *)clientSessions;
-(void)delegateDidInvalidateAndFinalize;
-(void)delegateDidInvalidate;
-(void)makeSessionWithClientTransport:(id)arg1 ;
-(void)startInvalidatingWithError:(id)arg1 ;
-(void)allSessionsDidInvalidate;
-(BOOL)delegateClientSession:(id)arg1 shouldConnectWithTransport:(id)arg2 ;
-(void)delegateClientSessionDidConnect:(id)arg1 ;
-(void)delegateClientSessionDidDisconnect:(id)arg1 ;
-(void)delegateClientSession:(id)arg1 didInterruptWithError:(id)arg2 ;
-(void)delegateSessionDidInvalidate:(id)arg1 ;
-(void)delegateClientSession:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3 ;
-(id)session:(id)arg1 prepareOperationForRequest:(id)arg2 error:(id*)arg3 ;
-(BOOL)session:(id)arg1 shouldAcceptConnectionFromTransport:(id)arg2 ;
-(void)session:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3 ;
-(void)session:(id)arg1 didInterruptWithError:(id)arg2 ;
-(void)sessionWillInvalidate:(id)arg1 ;
-(void)session:(id)arg1 enqueueOperation:(id)arg2 ;
-(NSArray *)connectedClientSessions;
-(void)invalidateAllClientSessions;
-(void)sessionDidInvalidate:(id)arg1 ;
-(void)invalidateWithError:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setDelegate:(id<CATTaskServerDelegate>)arg1 ;
-(id<CATTaskServerDelegate>)delegate;
-(void)invalidate;
@end

