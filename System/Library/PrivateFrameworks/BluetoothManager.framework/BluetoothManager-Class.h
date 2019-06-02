/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BluetoothManager/BluetoothManager-Structs.h>
@class NSMutableDictionary;

@interface BluetoothManager : NSObject {

	BTLocalDeviceImplRef _localDevice;
	BTSessionImplRef _session;
	int _available;
	int _state;
	BOOL _airplaneMode;
	BOOL _audioConnected;
	BOOL _scanningEnabled;
	BOOL _scanningInProgress;
	unsigned _scanningServiceMask;
	BTDiscoveryAgentImplRef _discoveryAgent;
	BTPairingAgentImplRef _pairingAgent;
	BTAccessoryManagerImplRef _accessoryManager;
	NSMutableDictionary* _btAddrDict;
	NSMutableDictionary* _btDeviceDict;
	BOOL _blacklistEnabled;

}

@property (assign,nonatomic) BOOL blacklistEnabled;              //@synthesize blacklistEnabled=_blacklistEnabled - In the implementation block
+(int)lastInitError;
+(void)setSharedInstanceQueue:(id)arg1 ;
+(id)sharedInstance;
-(BOOL)connected;
-(BOOL)available;
-(void)setDevicePairingEnabled:(BOOL)arg1 ;
-(void)setDeviceScanningEnabled:(BOOL)arg1 ;
-(void)resetDeviceScanning;
-(void)showPowerPrompt;
-(void)scanForConnectableDevices:(unsigned)arg1 ;
-(void)scanForServices:(unsigned)arg1 ;
-(void)cancelPairing;
-(BOOL)_setup:(BTSessionImplRef)arg1 ;
-(BOOL)connectable;
-(void)setConnectable:(BOOL)arg1 ;
-(void)enableTestMode;
-(BTAccessoryManagerImplRef)_accessoryManager;
-(void)connectDevice:(id)arg1 ;
-(void)connectDevice:(id)arg1 withServices:(unsigned)arg2 ;
-(void)setPincode:(id)arg1 forDevice:(id)arg2 ;
-(void)unpairDevice:(id)arg1 ;
-(void)startVoiceCommand:(id)arg1 ;
-(BOOL)_attach;
-(void)_updateBlacklistMode;
-(void)_updateAirplaneModeStatus;
-(void)_updateBluetoothState;
-(void)_cleanup:(BOOL)arg1 ;
-(void)_postNotificationWithArray:(id)arg1 ;
-(void)_scanForServices:(unsigned)arg1 withMode:(int)arg2 ;
-(BOOL)devicePairingEnabled;
-(id)addDeviceIfNeeded:(BTDeviceImplRef)arg1 ;
-(void)bluetoothStateActionWithCompletion:(/*^block*/id)arg1 ;
-(void)disconnectDevicePhysicalLink:(id)arg1 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3 ;
-(int)maskLocalDeviceEvents:(unsigned)arg1 ;
-(void)_powerChanged;
-(BOOL)isAnyoneScanning;
-(BOOL)isAnyoneAdvertising;
-(BOOL)deviceScanningEnabled;
-(BOOL)deviceScanningInProgress;
-(void)_restartScan;
-(void)_setScanState:(int)arg1 ;
-(void)_discoveryStateChanged;
-(void)_advertisingChanged;
-(void)_pairedStatusChanged;
-(void)_connectedStatusChanged;
-(void)_connectabilityChanged;
-(BOOL)audioConnected;
-(void)setAudioConnected:(BOOL)arg1 ;
-(void)bluetoothStateAction;
-(id)connectedDeviceNamesThatMayBeBlacklisted;
-(BOOL)powered;
-(BOOL)blacklistEnabled;
-(void)_removeDevice:(id)arg1 ;
-(id)pairedDevices;
-(int)powerState;
-(BOOL)isDiscoverable;
-(BOOL)setPowered:(BOOL)arg1 ;
-(BOOL)wasDeviceDiscovered:(id)arg1 ;
-(id)connectingDevices;
-(void)acceptSSP:(long long)arg1 forDevice:(id)arg2 ;
-(BTDeviceImplRef)deviceFromIdentifier:(id)arg1 ;
-(void)setBlacklistEnabled:(BOOL)arg1 ;
-(void)disconnectDevice:(id)arg1 ;
-(void)setDiscoverable:(BOOL)arg1 ;
-(id)localAddress;
-(void)endVoiceCommand:(id)arg1 ;
-(BOOL)isServiceSupported:(unsigned)arg1 ;
-(int)bluetoothState;
-(id)connectedDevices;
-(void)_postNotification:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)postNotificationName:(id)arg1 object:(id)arg2 ;
-(BOOL)setEnabled:(BOOL)arg1 ;
-(BOOL)enabled;
-(void)postNotification:(id)arg1 ;
@end

