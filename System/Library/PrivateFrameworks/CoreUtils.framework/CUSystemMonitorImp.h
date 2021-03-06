/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/FMFSessionDelegate.h>
#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSData, CUBluetoothClient, CXCallObserver, NSArray, CUSystemMonitor, NSString, CUNetInterfaceMonitor, CUWiFiManager;

@interface CUSystemMonitorImp : NSObject <FMFSessionDelegate, CXCallObserverDelegate> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableSet* _monitors;
	SCD_Struct_CU3 _bluetoothAddress48;
	NSData* _bluetoothAddressData;
	CUBluetoothClient* _bluetoothClient;
	CXCallObserver* _callObserver;
	int _activeCallCount;
	BOOL _familyFailed;
	NSArray* _familyMembers;
	BOOL _familyObserving;
	CUSystemMonitor* _familyPrimaryIPMonitor;
	int _familyUpdatedToken;
	int _fmfDevicesChangedToken;
	int _meDeviceChangedToken;
	int _meDeviceRetryToken;
	NSString* _meDeviceFMFDeviceID;
	NSString* _meDeviceIDSDeviceID;
	NSString* _meDeviceName;
	BOOL _meDeviceValid;
	CUNetInterfaceMonitor* _netInterfaceMonitor;
	unsigned _netFlags;
	SCD_Union_CU20 _primaryIPv4Addr;
	SCD_Union_CU20 _primaryIPv6Addr;
	NSString* _primaryNetworkSignature;
	int _powerSourceToken;
	BOOL _powerUnlimited;
	BOOL _primaryAppleIDIsHSA2;
	int _primaryAppleIDNotifyToken;
	BOOL _primaryAppleIDObserving;
	SCD_Struct_CU3 _rotatingIdentifier48;
	NSData* _rotatingIdentifierData;
	CUSystemMonitor* _rotatingIdentifierBluetoothAddressMonitor;
	NSObject*<OS_dispatch_source> _rotatingIdentifierTimer;
	BOOL _screenLocked;
	int _screenLockedToken;
	BOOL _screenOn;
	int _screenBlankedToken;
	BOOL _screenSaverActive;
	BOOL _firstUnlocked;
	int _firstUnlockToken;
	CUWiFiManager* _wifiManager;
	unsigned _wifiFlags;
	int _wifiState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeMonitor:(id)arg1 ;
-(void)addMonitor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_hasMonitorPassingTest:(/*^block*/id)arg1 ;
-(void)_invokeBlock:(/*^block*/id)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)updateWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_bluetoothAddressMonitorStart;
-(void)_bluetoothAddressMonitorStop;
-(void)_callMonitorStart;
-(void)_callMonitorStop;
-(int)_activeCallCountUnached;
-(void)_familyMonitorStart;
-(void)_familyMonitorStop;
-(void)_familyGetMembers:(BOOL)arg1 ;
-(void)_familyNetworkChanged;
-(void)_familyUpdated:(id)arg1 ;
-(void)_meDeviceMonitorStart;
-(void)_meDeviceMonitorStop;
-(void)_meDeviceCheckStart:(BOOL)arg1 ;
-(void)_meDeviceCheckCompletion:(id)arg1 error:(id)arg2 firstCheck:(BOOL)arg3 ;
-(void)_netInterfaceMonitorStart;
-(void)_netInterfaceMonitorStop;
-(void)_powerUnlimitedMonitorStart;
-(void)_powerUnlimitedMonitorStop;
-(void)_primaryAppleIDMonitorStart;
-(void)_primaryAppleIDMonitorStop;
-(void)_primaryAppleIDChanged:(id)arg1 ;
-(void)_rotatingIdentifierMonitorStart;
-(void)_rotatingIdentifierMonitorStop;
-(void)_rotatingIdentifierBTUpdated;
-(void)_rotatingIdentifierTimerFired;
-(void)_rotatingIdentifierTimerReset:(BOOL)arg1 ;
-(void)_screenLockedMonitorStart;
-(void)_screenLockedMonitorStop;
-(void)_screenLockedChanged;
-(void)_screenOnMonitorStart;
-(void)_screenOnMonitorStop;
-(void)_screenSaverMonitorStart;
-(void)_screenSaverMonitorStop;
-(void)_firstUnlockMonitorStart;
-(void)_firstUnlockMonitorStop;
-(void)_firstUnlockMonitorCheck:(BOOL)arg1 ;
-(void)_wifiMonitorStart;
-(void)_wifiMonitorStop;
-(void)_wifiMonitorStateChanged:(BOOL)arg1 ;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(id)init;
-(void)_update;
-(void)_screenChanged:(BOOL)arg1 ;
@end

