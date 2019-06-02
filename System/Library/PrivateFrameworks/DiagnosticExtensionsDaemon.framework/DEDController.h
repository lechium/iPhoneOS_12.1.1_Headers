/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DEDXPCProtocol.h>
#import <libobjc.A.dylib/DEDPairingProtocol.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>

@protocol DEDClientProtocol, DEDWorkerProtocol, DEDPairingProtocol, OS_dispatch_queue, OS_os_log;
@class DEDXPCConnector, DEDXPCInbound, NSXPCConnection, NSMutableDictionary, DEDIDSConnection, DEDSharingConnection, NSObject, NSString;

@interface DEDController : NSObject <DEDXPCProtocol, DEDPairingProtocol, DEDSecureArchiving> {

	BOOL _isDaemon;
	BOOL _started;
	BOOL _useSharing;
	BOOL _useIDS;
	BOOL _embeddedInApp;
	DEDXPCConnector* _xpcConnector;
	DEDXPCInbound* _xpcInbound;
	NSXPCConnection* _xpcOutboundConnection;
	id<DEDClientProtocol> _clientDelegate;
	id<DEDWorkerProtocol> _workerDelegate;
	id<DEDPairingProtocol> _pairingDelegate;
	/*^block*/id _devicesCompletion;
	/*^block*/id _pongBlock;
	/*^block*/id _sessionExistsCompletion;
	NSMutableDictionary* _sessionStartBlocks;
	NSMutableDictionary* _sessionDidStartBlocks;
	DEDIDSConnection* __idsConnection;
	DEDSharingConnection* __sharingConnection;
	double _sessionStartTimeout;
	NSObject*<OS_dispatch_queue> _replyQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_os_log> _log;
	/*^block*/id _didCancelCompletion;
	NSMutableDictionary* _devices;
	NSMutableDictionary* _sessions;

}

@property (retain) DEDXPCConnector * xpcConnector;                           //@synthesize xpcConnector=_xpcConnector - In the implementation block
@property (retain) DEDXPCInbound * xpcInbound;                               //@synthesize xpcInbound=_xpcInbound - In the implementation block
@property (__weak) NSXPCConnection * xpcOutboundConnection;                  //@synthesize xpcOutboundConnection=_xpcOutboundConnection - In the implementation block
@property (__weak) id<DEDClientProtocol> clientDelegate;                     //@synthesize clientDelegate=_clientDelegate - In the implementation block
@property (__weak) id<DEDWorkerProtocol> workerDelegate;                     //@synthesize workerDelegate=_workerDelegate - In the implementation block
@property (__weak) id<DEDPairingProtocol> pairingDelegate;                   //@synthesize pairingDelegate=_pairingDelegate - In the implementation block
@property (assign) BOOL isDaemon;                                            //@synthesize isDaemon=_isDaemon - In the implementation block
@property (assign) BOOL started;                                             //@synthesize started=_started - In the implementation block
@property (assign) BOOL useSharing;                                          //@synthesize useSharing=_useSharing - In the implementation block
@property (assign) BOOL useIDS;                                              //@synthesize useIDS=_useIDS - In the implementation block
@property (assign) BOOL embeddedInApp;                                       //@synthesize embeddedInApp=_embeddedInApp - In the implementation block
@property (copy) id devicesCompletion;                                       //@synthesize devicesCompletion=_devicesCompletion - In the implementation block
@property (copy) id pongBlock;                                               //@synthesize pongBlock=_pongBlock - In the implementation block
@property (copy) id sessionExistsCompletion;                                 //@synthesize sessionExistsCompletion=_sessionExistsCompletion - In the implementation block
@property (retain) NSMutableDictionary * sessionStartBlocks;                 //@synthesize sessionStartBlocks=_sessionStartBlocks - In the implementation block
@property (retain) NSMutableDictionary * sessionDidStartBlocks;              //@synthesize sessionDidStartBlocks=_sessionDidStartBlocks - In the implementation block
@property (retain) DEDIDSConnection * _idsConnection;                        //@synthesize _idsConnection=__idsConnection - In the implementation block
@property (retain) DEDSharingConnection * _sharingConnection;                //@synthesize _sharingConnection=__sharingConnection - In the implementation block
@property (assign) double sessionStartTimeout;                               //@synthesize sessionStartTimeout=_sessionStartTimeout - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> replyQueue;                  //@synthesize replyQueue=_replyQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;                   //@synthesize workQueue=_workQueue - In the implementation block
@property (retain) NSObject*<OS_os_log> log;                                 //@synthesize log=_log - In the implementation block
@property (copy) id didCancelCompletion;                                     //@synthesize didCancelCompletion=_didCancelCompletion - In the implementation block
@property (retain) NSMutableDictionary * devices;                            //@synthesize devices=_devices - In the implementation block
@property (retain) NSMutableDictionary * sessions;                           //@synthesize sessions=_sessions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)archivedClasses;
-(void)setIsDaemon:(BOOL)arg1 ;
-(BOOL)isDaemon;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setReplyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPairingDelegate:(id<DEDPairingProtocol>)arg1 ;
-(id<DEDPairingProtocol>)pairingDelegate;
-(void)pong;
-(void)ping;
-(void)setDevices:(NSMutableDictionary *)arg1 ;
-(id)persistence;
-(NSObject*<OS_dispatch_queue>)replyQueue;
-(void)setSessions:(NSMutableDictionary *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)knownDevices;
-(NSMutableDictionary *)sessions;
-(NSMutableDictionary *)devices;
-(void)setSessionStartBlocks:(NSMutableDictionary *)arg1 ;
-(void)setSessionDidStartBlocks:(NSMutableDictionary *)arg1 ;
-(void)setXpcConnector:(DEDXPCConnector *)arg1 ;
-(void)setSessionStartTimeout:(double)arg1 ;
-(void)setXpcInbound:(DEDXPCInbound *)arg1 ;
-(void)set_idsConnection:(DEDIDSConnection *)arg1 ;
-(void)setClientDelegate:(id<DEDClientProtocol>)arg1 ;
-(void)setWorkerDelegate:(id<DEDWorkerProtocol>)arg1 ;
-(void)setUseSharing:(BOOL)arg1 ;
-(void)setUseIDS:(BOOL)arg1 ;
-(void)setEmbeddedInApp:(BOOL)arg1 ;
-(id<DEDClientProtocol>)clientDelegate;
-(id<DEDWorkerProtocol>)workerDelegate;
-(DEDXPCConnector *)xpcConnector;
-(DEDXPCInbound *)xpcInbound;
-(BOOL)useIDS;
-(id)idsConnection;
-(BOOL)useSharing;
-(id)sharingConnection;
-(id)purgeStaleSessions:(id)arg1 ;
-(void)setPongBlock:(id)arg1 ;
-(id)remoteXPCObject;
-(void)setDevicesCompletion:(id)arg1 ;
-(void)discoverAllAvailableDevices;
-(void)stopDeviceDiscovery;
-(id)_allKnownDevicesWithIdentifier:(id)arg1 ;
-(id)_deviceForIncomingDevice:(id)arg1 ;
-(id)_sharingDeviceForIncomingDevice:(id)arg1 ;
-(void)startPairSetupForDevice:(id)arg1 ;
-(void)promptPINForDevice:(id)arg1 ;
-(void)tryPIN:(id)arg1 forDevice:(id)arg2 ;
-(void)successPINForDevice:(id)arg1 ;
-(id)_deviceForIncomingDevice:(id)arg1 needsReady:(BOOL)arg2 ;
-(void)addSessionStartCompletion:(/*^block*/id)arg1 withIdentifier:(id)arg2 ;
-(void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4 ;
-(void)abortSession:(id)arg1 ;
-(id)didCancelCompletion;
-(void)setDidCancelCompletion:(id)arg1 ;
-(void)abortSession:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setSessionExistsCompletion:(id)arg1 ;
-(void)hasActiveSession:(id)arg1 ;
-(id)pongBlock;
-(void)gotDeviceUpdate:(id)arg1 ;
-(void)discoverDevicesWithCompletion:(/*^block*/id)arg1 ;
-(id)allKnownDevices;
-(void)didDiscoverDevices:(id)arg1 ;
-(void)stopDiscovery;
-(id)devicesCompletion;
-(BOOL)induceTimeOutIfNeededAndReturnCanProceedWithDevice:(id)arg1 sessionId:(id)arg2 ;
-(BOOL)hasCompletionBlockWithIdentifier:(id)arg1 ;
-(/*^block*/id)popSessionStartCompletionWithIdentifier:(id)arg1 ;
-(void)didStartBugSessionWithInfo:(id)arg1 ;
-(void)addDidStartSessionCompletion:(/*^block*/id)arg1 withIdentifier:(id)arg2 ;
-(/*^block*/id)popDidStartSessionCompletionWithIdentifier:(id)arg1 ;
-(id)sessionExistsCompletion;
-(void)sessionWithIdentifier:(id)arg1 isActive:(BOOL)arg2 ;
-(DEDIDSConnection *)_idsConnection;
-(DEDSharingConnection *)_sharingConnection;
-(void)set_sharingConnection:(DEDSharingConnection *)arg1 ;
-(void)configureForDaemon;
-(void)configureForEmbedded:(BOOL)arg1 ;
-(void)configureClientDelegate:(id)arg1 ;
-(void)configureWorkerDelegate:(id)arg1 ;
-(void)configurePairingDelegate:(id)arg1 ;
-(void)configureForSharing:(BOOL)arg1 ;
-(void)configureForIDS:(BOOL)arg1 ;
-(void)pingDaemonWithCompletion:(/*^block*/id)arg1 ;
-(id)devicesWithIdentifier:(id)arg1 ;
-(BOOL)hasDevice:(id)arg1 ;
-(void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 target:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)knownSessions;
-(void)_didAbortSessionWithID:(id)arg1 ;
-(void)hasActiveSessionForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSXPCConnection *)xpcOutboundConnection;
-(void)setXpcOutboundConnection:(NSXPCConnection *)arg1 ;
-(BOOL)embeddedInApp;
-(NSMutableDictionary *)sessionStartBlocks;
-(NSMutableDictionary *)sessionDidStartBlocks;
-(double)sessionStartTimeout;
-(void)_timeOutSessionStartBlockWithIdentifier:(id)arg1 timeout:(double)arg2 ;
-(id)deviceForIdentifier:(id)arg1 ;
-(void)addDevice:(id)arg1 ;
-(id)sessionForIdentifier:(id)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id)init;
-(void)reset;
-(void)start;
-(NSObject*<OS_os_log>)log;
-(BOOL)started;
-(void)setStarted:(BOOL)arg1 ;
@end
