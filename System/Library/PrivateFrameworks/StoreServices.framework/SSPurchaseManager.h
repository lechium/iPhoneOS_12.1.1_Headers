/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, SSPurchaseManagerDelegate;
@class NSObject, NSString, SSXPCConnection;

@interface SSPurchaseManager : NSObject {

	NSObject*<OS_dispatch_queue> _completionBlockQueue;
	id<SSPurchaseManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _managerIdentifier;
	SSXPCConnection* _requestConnection;
	SSXPCConnection* _responseConnection;

}

@property (readonly) NSString * managerIdentifier; 
@property (assign) id<SSPurchaseManagerDelegate> delegate; 
-(id)_requestConnection;
-(id)_responseConnection;
-(void)_connectToDaemon;
-(void)_sendMessage:(long long)arg1 withPurchases:(id)arg2 afterPurchase:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_sendMessage:(long long)arg1 withPurchaseIdentifiers:(id)arg2 afterPurchase:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_sendCompletionBlock:(/*^block*/id)arg1 forGetPurchasesReply:(id)arg2 ;
-(void)_handleAuthenticateRequest:(id)arg1 fromConnection:(id)arg2 ;
-(void)_handlePurchasesFinished:(id)arg1 fromConnection:(id)arg2 ;
-(BOOL)_shouldInvalidateSubscriptionStatusForPurchaseResponse:(id)arg1 ;
-(void)_handleMessage:(id)arg1 fromConnection:(id)arg2 ;
-(BOOL)_resultForReply:(id)arg1 error:(id*)arg2 ;
-(id)_newEncodedArrayWithPurchaseIdentifiers:(id)arg1 ;
-(void)_sendCompletionBlock:(/*^block*/id)arg1 forStandardReply:(id)arg2 ;
-(id)_newEncodedArrayWithPurchases:(id)arg1 ;
-(void)insertPurchases:(id)arg1 afterPurchase:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(NSString *)managerIdentifier;
-(void)_reconnectForDaemonLaunch;
-(id)initWithManagerIdentifier:(id)arg1 ;
-(void)getPurchasesUsingBlock:(/*^block*/id)arg1 ;
-(void)addPurchases:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)cancelPurchases:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)movePurchases:(id)arg1 afterPurchase:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<SSPurchaseManagerDelegate>)arg1 ;
-(id<SSPurchaseManagerDelegate>)delegate;
@end

