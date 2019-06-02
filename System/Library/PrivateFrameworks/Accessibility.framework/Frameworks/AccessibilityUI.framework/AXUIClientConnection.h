/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUI.framework/AccessibilityUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, AXAccessQueue, NSMutableDictionary, NSHashTable;

@interface AXUIClientConnection : NSObject {

	BOOL _connected;
	NSObject*<OS_xpc_object> _xpcConnection;
	AXAccessQueue* _connectionAccessQueue;
	NSMutableDictionary* _registeredClients;
	AXAccessQueue* _registeredClientsAccessQueue;
	NSHashTable* _stateObservers;
	NSObject*<OS_dispatch_queue> _stateObserverQueue;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcConnection;                       //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) AXAccessQueue * connectionAccessQueue;                        //@synthesize connectionAccessQueue=_connectionAccessQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registeredClients;                      //@synthesize registeredClients=_registeredClients - In the implementation block
@property (nonatomic,retain) AXAccessQueue * registeredClientsAccessQueue;                 //@synthesize registeredClientsAccessQueue=_registeredClientsAccessQueue - In the implementation block
@property (assign,getter=isConnected,nonatomic) BOOL connected;                            //@synthesize connected=_connected - In the implementation block
@property (nonatomic,retain) NSHashTable * stateObservers;                                 //@synthesize stateObservers=_stateObservers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stateObserverQueue;              //@synthesize stateObserverQueue=_stateObserverQueue - In the implementation block
+(id)sharedClientConnection;
-(BOOL)isConnected;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(void)registerConnectionStateObserver:(id)arg1 ;
-(void)unregisterConnectionStateObserver:(id)arg1 ;
-(void)unregisterClient:(id)arg1 withIdentifier:(id)arg2 ;
-(void)performBlockWithXPCConnection:(/*^block*/id)arg1 ;
-(void)registerClient:(id)arg1 withIdentifier:(id)arg2 ;
-(void)setConnectionAccessQueue:(AXAccessQueue *)arg1 ;
-(void)setRegisteredClientsAccessQueue:(AXAccessQueue *)arg1 ;
-(void)setStateObserverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(AXAccessQueue *)connectionAccessQueue;
-(id)_clientWithIdentifier:(id)arg1 ;
-(void)_broadcastConnectedStateChange;
-(AXAccessQueue *)registeredClientsAccessQueue;
-(NSMutableDictionary *)registeredClients;
-(void)setRegisteredClients:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateObserverQueue;
-(NSHashTable *)stateObservers;
-(void)setStateObservers:(NSHashTable *)arg1 ;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setConnected:(BOOL)arg1 ;
-(id)init;
@end

