/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_connection, OS_dispatch_queue;
@class NEAppProxyFlow, NWEndpoint, NSObject, NSError;

@interface NPAppProxyFlowBridge : NSObject {

	int _currentState;
	NEAppProxyFlow* _flow;
	NWEndpoint* _remoteEndpoint;
	NSObject*<OS_nw_connection> _connection;
	NSError* _connectionError;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NEAppProxyFlow * flow;                               //@synthesize flow=_flow - In the implementation block
@property (retain) NWEndpoint * remoteEndpoint;                         //@synthesize remoteEndpoint=_remoteEndpoint - In the implementation block
@property (retain) NSObject*<OS_nw_connection> connection;              //@synthesize connection=_connection - In the implementation block
@property (retain) NSError * connectionError;                           //@synthesize connectionError=_connectionError - In the implementation block
@property (assign) int currentState;                                    //@synthesize currentState=_currentState - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
-(NEAppProxyFlow *)flow;
-(void)setFlow:(NEAppProxyFlow *)arg1 ;
-(void)setRemoteEndpoint:(NWEndpoint *)arg1 ;
-(void)readDataFromClient;
-(void)readMultipleFromClient;
-(void)readMultipleFromConnection;
-(void)readDataFromConnection;
-(void)writeMultipleToConnection:(id*)arg1 count:(unsigned)arg2 ;
-(void)writeDataToConnection:(id)arg1 ;
-(id)initWithAppProxyFlow:(id)arg1 ;
-(void)setConnectionError:(NSError *)arg1 ;
-(NSError *)connectionError;
-(NWEndpoint *)remoteEndpoint;
-(int)currentState;
-(void)setCurrentState:(int)arg1 ;
-(NSObject*<OS_nw_connection>)connection;
-(void)setConnection:(NSObject*<OS_nw_connection>)arg1 ;
-(void)startConnection;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

