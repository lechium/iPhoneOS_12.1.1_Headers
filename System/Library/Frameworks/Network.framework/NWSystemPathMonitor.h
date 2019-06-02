/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <Network/Network-Structs.h>
@class NWMonitor, NWPathEvaluator, BKSApplicationStateMonitor, NSMutableDictionary, NSObject;

@interface NWSystemPathMonitor : NSObject {

	BOOL _wifiPrimary;
	BOOL _ethernetPrimary;
	BOOL _vpnActive;
	int _vpnNotifyToken;
	NWMonitor* _vpnMonitor;
	NWPathEvaluator* _primaryEvaluator;
	BKSApplicationStateMonitor* _applicationMonitor;
	NSMutableDictionary* _perAppVPNEvaluators;
	NSObject*<OS_dispatch_source> _smoothingTimer;
	tcp_connection_fallback_watch_sRef _fallbackWatcher;
	NSObject*<OS_dispatch_source> _mptcpWatcher;

}

@property (retain) NWMonitor * vpnMonitor;                                               //@synthesize vpnMonitor=_vpnMonitor - In the implementation block
@property (retain) NWPathEvaluator * primaryEvaluator;                                   //@synthesize primaryEvaluator=_primaryEvaluator - In the implementation block
@property (assign) int vpnNotifyToken;                                                   //@synthesize vpnNotifyToken=_vpnNotifyToken - In the implementation block
@property (retain) BKSApplicationStateMonitor * applicationMonitor;                      //@synthesize applicationMonitor=_applicationMonitor - In the implementation block
@property (retain) NSMutableDictionary * perAppVPNEvaluators;                            //@synthesize perAppVPNEvaluators=_perAppVPNEvaluators - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> smoothingTimer;                         //@synthesize smoothingTimer=_smoothingTimer - In the implementation block
@property (assign) tcp_connection_fallback_watch_sRef fallbackWatcher;                   //@synthesize fallbackWatcher=_fallbackWatcher - In the implementation block
@property (assign) NSObject*<OS_dispatch_source> mptcpWatcher;                           //@synthesize mptcpWatcher=_mptcpWatcher - In the implementation block
@property (assign,getter=isVPNActive,nonatomic) BOOL vpnActive;                          //@synthesize vpnActive=_vpnActive - In the implementation block
@property (assign,getter=isWiFiPrimary,nonatomic) BOOL wifiPrimary;                      //@synthesize wifiPrimary=_wifiPrimary - In the implementation block
@property (assign,getter=isEthernetPrimary,nonatomic) BOOL ethernetPrimary;              //@synthesize ethernetPrimary=_ethernetPrimary - In the implementation block
+(id)sharedSystemPathMonitor;
-(void)updateFlags;
-(void)eventFired;
-(void)appStateChangedWithUserInfo:(id)arg1 ;
-(void)startWatchingApplicationStates;
-(void)stopWatchingApplicationStates;
-(void)registerForVPNNotifications;
-(void)updateVPNMonitor;
-(BOOL)isWiFiPrimary;
-(void)setWifiPrimary:(BOOL)arg1 ;
-(BOOL)isEthernetPrimary;
-(void)setEthernetPrimary:(BOOL)arg1 ;
-(BOOL)isVPNActive;
-(void)setVpnActive:(BOOL)arg1 ;
-(NWMonitor *)vpnMonitor;
-(void)setVpnMonitor:(NWMonitor *)arg1 ;
-(NWPathEvaluator *)primaryEvaluator;
-(void)setPrimaryEvaluator:(NWPathEvaluator *)arg1 ;
-(int)vpnNotifyToken;
-(void)setVpnNotifyToken:(int)arg1 ;
-(BKSApplicationStateMonitor *)applicationMonitor;
-(void)setApplicationMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(NSMutableDictionary *)perAppVPNEvaluators;
-(void)setPerAppVPNEvaluators:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_source>)smoothingTimer;
-(void)setSmoothingTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(tcp_connection_fallback_watch_sRef)fallbackWatcher;
-(void)setFallbackWatcher:(tcp_connection_fallback_watch_sRef)arg1 ;
-(NSObject*<OS_dispatch_source>)mptcpWatcher;
-(void)setMptcpWatcher:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

