/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/CXCallControllerHostConnectionDelegate.h>

@protocol OS_dispatch_queue, CXCallControllerHostDelegate;
@class NSObject, NSXPCListener, NSMutableDictionary, NSMutableSet, NSString;

@interface CXCallControllerHost : NSObject <NSXPCListenerDelegate, CXCallControllerHostConnectionDelegate> {

	int _clientsShouldConnectToken;
	NSObject*<OS_dispatch_queue> _queue;
	id<CXCallControllerHostDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSXPCListener* _xpcListener;
	NSMutableDictionary* _callUUIDToCallMap;
	NSMutableSet* _connections;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<CXCallControllerHostDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                    //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSXPCListener * xpcListener;                                   //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * callUUIDToCallMap;                       //@synthesize callUUIDToCallMap=_callUUIDToCallMap - In the implementation block
@property (nonatomic,retain) NSMutableSet * connections;                                    //@synthesize connections=_connections - In the implementation block
@property (nonatomic,readonly) int clientsShouldConnectToken;                               //@synthesize clientsShouldConnectToken=_clientsShouldConnectToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableSet *)connections;
-(NSMutableDictionary *)callUUIDToCallMap;
-(void)addOrUpdateCall:(id)arg1 ;
-(void)removeCall:(id)arg1 ;
-(id)_callsForCallControllerHostConnection:(id)arg1 ;
-(void)callControllerHostConnectionInvalidated:(id)arg1 ;
-(void)callControllerHostConnection:(id)arg1 requestCalls:(/*^block*/id)arg2 ;
-(void)callControllerHostConnection:(id)arg1 requestTransaction:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithCalls:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(void)setCallUUIDToCallMap:(NSMutableDictionary *)arg1 ;
-(int)clientsShouldConnectToken;
-(void)setConnections:(NSMutableSet *)arg1 ;
-(NSXPCListener *)xpcListener;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(void)_performDelegateCallback:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<CXCallControllerHostDelegate>)arg1 ;
-(id<CXCallControllerHostDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

