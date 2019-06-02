/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/MFDiagnosticsGenerator.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>
#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@protocol OS_dispatch_queue;
@class NSLock, NSMutableArray, NSMutableSet, RadiosPreferences, NSObject, CoreTelephonyClient, CXCallObserver, MFObservable, AWDMailNetworkDiagnosticsReport, NSString;

@interface MFNetworkController : NSObject <MFDiagnosticsGenerator, RadiosPreferencesDelegate, CXCallObserverDelegate> {

	NSLock* _lock;
	CFRunLoopRef _rl;
	NSMutableArray* _observers;
	unsigned _flags;
	BOOL _dns;
	unsigned long long _activeCalls;
	NSMutableSet* _backgroundWifiClients;
	SCPreferencesRef _wiFiPreferences;
	BOOL _hasCellDataCapability;
	BOOL _hasWiFiCapability;
	BOOL _isWiFiEnabled;
	BOOL _isRoamingAllowed;
	BOOL _alternateAdviceState;
	RadiosPreferences* _radiosPreferences;
	NSObject*<OS_dispatch_queue> _prefsQueue;
	int _symptomsToken;
	CoreTelephonyClient* _ctc;
	int _dataIndicator;
	NSObject*<OS_dispatch_queue> _dataStatusQueue;
	BOOL _cellularDataAvailable;
	SCNetworkReachabilityRef _reachability;
	SCDynamicStoreRef _store;
	CFRunLoopSourceRef _store_source;
	CXCallObserver* _callObserver;
	void* _wifiManager;

}

@property (assign,nonatomic) void* wifiManager;                                                           //@synthesize wifiManager=_wifiManager - In the implementation block
@property (nonatomic,readonly) MFObservable * networkObservable; 
@property (nonatomic,readonly) MFObservable * wifiObservable; 
@property (nonatomic,readonly) AWDMailNetworkDiagnosticsReport * awdNetworkDiagnosticReport; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)networkAssertionWithIdentifier:(id)arg1 ;
+(id)sharedInstance;
-(void)connectionActivationError:(id)arg1 connection:(int)arg2 error:(int)arg3 ;
-(void)preferredDataSimChanged:(id)arg1 ;
-(void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2 ;
-(void)airplaneModeChanged;
-(id)copyDiagnosticInformation;
-(BOOL)isFatPipe;
-(BOOL)is4GConnection;
-(BOOL)is3GConnection;
-(id)copyCarrierBundleValue:(id)arg1 ;
-(BOOL)isOnWWAN;
-(MFObservable *)wifiObservable;
-(id)addNetworkObserverBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_checkKeys:(id)arg1 forStore:(SCDynamicStoreRef)arg2 ;
-(void)_inititializeWifiManager;
-(void)_setupSymptons;
-(void)_setDataStatus_nts:(id)arg1 ;
-(void)_updateActiveCalls;
-(void)_initializeDataStatus;
-(BOOL)_isNetworkUp_nts;
-(BOOL)_simulationOverrideForType:(unsigned long long)arg1 actualValue:(BOOL)arg2 ;
-(id)_networkAssertionWithIdentifier:(id)arg1 ;
-(void)removeNetworkObserver:(id)arg1 ;
-(MFObservable *)networkObservable;
-(void)_updateWifiClientType;
-(void)_carrierBundleDidChange;
-(BOOL)isDataAvailable;
-(BOOL)isNetworkUp;
-(BOOL)hasAlternateAdvice;
-(void)_setFlags:(unsigned)arg1 forReachability:(SCNetworkReachabilityRef)arg2 ;
-(void)_handleWiFiNotification:(unsigned)arg1 ;
-(void)addBackgroundWifiClient:(id)arg1 ;
-(void)removeBackgroundWifiClient:(id)arg1 ;
-(AWDMailNetworkDiagnosticsReport *)awdNetworkDiagnosticReport;
-(BOOL)inAirplaneMode;
-(int)dataStatus;
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(void)setWifiManager:(void*)arg1 ;
-(void*)wifiManager;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
@end

