/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/NPTunnelFlowUDP.h>

@class NSPDNSPacket;

@interface NPTunnelFlowDNS : NPTunnelFlowUDP {

	BOOL _telemetryReported;
	NSPDNSPacket* _query;
	long long _tunnelResult;
	NSPDNSPacket* _tunnelDNSResponse;
	long long _directResult;
	NSPDNSPacket* _directDNSResponse;
	void* _tunnelResponseTimer;

}

@property (retain) NSPDNSPacket * query;                          //@synthesize query=_query - In the implementation block
@property (assign) long long tunnelResult;                        //@synthesize tunnelResult=_tunnelResult - In the implementation block
@property (retain) NSPDNSPacket * tunnelDNSResponse;              //@synthesize tunnelDNSResponse=_tunnelDNSResponse - In the implementation block
@property (assign) long long directResult;                        //@synthesize directResult=_directResult - In the implementation block
@property (retain) NSPDNSPacket * directDNSResponse;              //@synthesize directDNSResponse=_directDNSResponse - In the implementation block
@property (assign) void* tunnelResponseTimer;                     //@synthesize tunnelResponseTimer=_tunnelResponseTimer - In the implementation block
@property (assign) BOOL telemetryReported;                        //@synthesize telemetryReported=_telemetryReported - In the implementation block
-(void)handleAppData:(id)arg1 ;
-(void)sendDataToClient:(id)arg1 fromTunnel:(BOOL)arg2 ;
-(void)closeFromDirectConnectionWithError:(int)arg1 ;
-(BOOL)shouldSendDataToClient:(id)arg1 fromTunnel:(BOOL)arg2 ;
-(long long)tunnelResult;
-(void)setTunnelDNSResponse:(NSPDNSPacket *)arg1 ;
-(NSPDNSPacket *)tunnelDNSResponse;
-(void)setTunnelResult:(long long)arg1 ;
-(void*)tunnelResponseTimer;
-(void)setTunnelResponseTimer:(void*)arg1 ;
-(long long)directResult;
-(void)setDirectDNSResponse:(NSPDNSPacket *)arg1 ;
-(NSPDNSPacket *)directDNSResponse;
-(void)setDirectResult:(long long)arg1 ;
-(BOOL)checkAndReportTelemetry;
-(void)closeFromTunnel;
-(BOOL)telemetryReported;
-(void)setTelemetryReported:(BOOL)arg1 ;
-(id)addDNSInfoToTelemetry:(id)arg1 ;
-(id)resultToString:(long long)arg1 ;
-(id)createStateDictionaryWithResult:(long long)arg1 response:(id)arg2 ;
-(void)handleTunnelConnected;
-(void)cleanupLosingConnection:(BOOL)arg1 ;
-(void)setQuery:(NSPDNSPacket *)arg1 ;
-(NSPDNSPacket *)query;
@end

