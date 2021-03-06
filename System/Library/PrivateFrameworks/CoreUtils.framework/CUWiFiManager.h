/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class CURetrier, NSObject, NSString;

@interface CUWiFiManager : NSObject {

	BOOL _activateCalled;
	BOOL _activated;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	BOOL _updating;
	BOOL _wifiAutoJoinMonitorEnabled;
	BOOL _wifiAutoJoinMonitorSetup;
	WiFiManagerClientRef _wifiManager;
	BOOL _wifiManagerSetup;
	WiFiDeviceClientRef _wifiDevice;
	BOOL _wifiDeviceSetup;
	CURetrier* _wifiRetrier;
	BOOL _wakeOnWirelessEnabledChanged;
	BOOL _wakeOnWirelessEnabled;
	unsigned _wifiFlags;
	int _wifiState;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _label;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _wifiStateChangedHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) BOOL wakeOnWirelessEnabled;                              //@synthesize wakeOnWirelessEnabled=_wakeOnWirelessEnabled - In the implementation block
@property (nonatomic,readonly) unsigned wifiFlags;                                    //@synthesize wifiFlags=_wifiFlags - In the implementation block
@property (nonatomic,readonly) int wifiState;                                         //@synthesize wifiState=_wifiState - In the implementation block
@property (nonatomic,copy) id wifiStateChangedHandler;                                //@synthesize wifiStateChangedHandler=_wifiStateChangedHandler - In the implementation block
-(void)_activateSafeInvokeBlock:(/*^block*/id)arg1 ;
-(id)wifiStateChangedHandler;
-(unsigned)wifiFlags;
-(void)setWifiStateChangedHandler:(id)arg1 ;
-(void)setWakeOnWirelessEnabled:(BOOL)arg1 ;
-(void)_updateLockedMobileWiFi:(BOOL)arg1 ;
-(unsigned)_wifiFlagsUncached;
-(int)_wifiStateUncached;
-(BOOL)wakeOnWirelessEnabled;
-(void)_invalidated;
-(void)_interrupted;
-(void)performUpdate:(/*^block*/id)arg1 ;
-(void)_wifiEnsureStopped;
-(void)_wifiEnsureStarted;
-(void)_wifiAutoJoinNotification:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(int)wifiState;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)activate;
-(void)_update;
-(NSString *)label;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(void)_update:(BOOL)arg1 ;
@end

