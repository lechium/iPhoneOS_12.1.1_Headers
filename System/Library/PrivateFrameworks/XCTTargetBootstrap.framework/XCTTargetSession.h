/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/XCTTargetBootstrap.framework/XCTTargetBootstrap
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <XCTTargetBootstrap/XCTTarget.h>

@protocol OS_dispatch_queue, XCTConnectionAccepting;
@class NSObject, NSXPCConnection, NSXPCListener, NSString;

@interface XCTTargetSession : NSObject <NSXPCListenerDelegate, XCTTarget> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _daemonConnection;
	NSXPCListener* _clientListener;
	id<XCTConnectionAccepting> _connectionHandler;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (retain) NSXPCConnection * daemonConnection;                        //@synthesize daemonConnection=_daemonConnection - In the implementation block
@property (retain) NSXPCListener * clientListener;                            //@synthesize clientListener=_clientListener - In the implementation block
@property (retain) id<XCTConnectionAccepting> connectionHandler;              //@synthesize connectionHandler=_connectionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCListener *)clientListener;
-(void)setClientListener:(NSXPCListener *)arg1 ;
-(id)initWithDaemonConnection:(id)arg1 ;
-(NSXPCConnection *)daemonConnection;
-(id<XCTConnectionAccepting>)connectionHandler;
-(void)setConnectionHandler:(id<XCTConnectionAccepting>)arg1 ;
-(void)_on_queue_connect;
-(void)_XCT_requestEndpointWithAutomationSupportLibraryPath:(id)arg1 protocolVersion:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)_on_queue_startListeningForClientConnections;
-(BOOL)_on_queue_loadAutomationSupportLibraryFromPath:(id)arg1 error:(id*)arg2 ;
-(id)_on_queue_getListenerEndpoint;
-(void)setDaemonConnection:(NSXPCConnection *)arg1 ;
-(id)init;
-(void)connect;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

