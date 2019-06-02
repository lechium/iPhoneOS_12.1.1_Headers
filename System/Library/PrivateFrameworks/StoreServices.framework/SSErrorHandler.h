/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SSErrorHandlerDelegate, OS_dispatch_queue;
@class SSXPCConnection, NSObject, NSArray;

@interface SSErrorHandler : NSObject {

	SSXPCConnection* _controlConnection;
	id<SSErrorHandlerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSArray* _failureTypes;
	SSXPCConnection* _observerConnection;

}

@property (assign) id<SSErrorHandlerDelegate> delegate; 
@property (copy) NSArray * failureTypes; 
-(void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2 ;
-(void)_sendDisconnectMessage;
-(void)_tearDownConnections;
-(void)_reconnectToDaemonWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_openSessionWithMessage:(id)arg1 ;
-(void)_dispatchToDelegate:(/*^block*/id)arg1 ;
-(NSArray *)failureTypes;
-(void)setFailureTypes:(NSArray *)arg1 ;
-(void)stopWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<SSErrorHandlerDelegate>)arg1 ;
-(id<SSErrorHandlerDelegate>)delegate;
@end

