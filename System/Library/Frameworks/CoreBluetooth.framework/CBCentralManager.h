/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <CoreBluetooth/CBManager.h>

@protocol CBCentralManagerDelegate;
@class NSMapTable;

@interface CBCentralManager : CBManager {

	struct {
		unsigned willRestoreState : 1;
		unsigned didDiscoverPeripheral : 1;
		unsigned didConnectPeripheral : 1;
		unsigned didFailToConnectPeripheral : 1;
		unsigned didDisconnectPeripheral : 1;
		unsigned didUpdatePeripheralConnectionState : 1;
		unsigned didFindPeripheral : 1;
		unsigned didLosePeripheral : 1;
		unsigned didLoseZone : 1;
		unsigned didUpdateConnectionParameters : 1;
		unsigned connectionEventDidOccur : 1;
	}  _delegateFlags;
	BOOL _isScanning;
	id<CBCentralManagerDelegate> _delegate;
	NSMapTable* _peripherals;

}

@property (assign,nonatomic) BOOL isScanning;                                           //@synthesize isScanning=_isScanning - In the implementation block
@property (nonatomic,retain,readonly) NSMapTable * peripherals;                         //@synthesize peripherals=_peripherals - In the implementation block
@property (assign,nonatomic,__weak) id<CBCentralManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)peripheralWithInfo:(id)arg1 ;
-(void)forEachPeripheral:(/*^block*/id)arg1 ;
-(void)orphanPeripherals;
-(id)peripheralWithIdentifier:(id)arg1 ;
-(id)dataArrayToUUIDArray:(id)arg1 ;
-(void)handleRestoringState:(id)arg1 ;
-(void)handlePeripheralDiscovered:(id)arg1 ;
-(void)handlePeripheralConnectionCompleted:(id)arg1 ;
-(void)handlePeripheralDisconnectionCompleted:(id)arg1 ;
-(void)handlePeripheralConnectionStateUpdated:(id)arg1 ;
-(void)handlePeripheralTrackingUpdated:(id)arg1 ;
-(void)handleZoneLost:(id)arg1 ;
-(void)handleConnectionParametersUpdated:(id)arg1 ;
-(void)handleAdvertisingAddressChanged:(id)arg1 ;
-(void)handleApplicationActivityEvent:(id)arg1 ;
-(void)handleApplicationConnectionEventDidOccur:(id)arg1 ;
-(void)handleMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)handleReadyForUpdates:(id)arg1 ;
-(id)peerWithInfo:(id)arg1 ;
-(void)retrievePeripherals:(id)arg1 ;
-(id)retrieveState;
-(void)retrieveConnectedPeripherals;
-(void)randomizeAFHMapForPeripheral:(id)arg1 ;
-(void)startTrackingPeripheral:(id)arg1 options:(id)arg2 ;
-(void)stopTrackingPeripheral:(id)arg1 options:(id)arg2 ;
-(void)setConnectionEventOptions:(id)arg1 ;
-(void)pauseLeConnectionManager;
-(void)resumeLeConnectionManager;
-(void)resumeScans;
-(BOOL)isMsgAllowedWhenOff:(unsigned short)arg1 ;
-(BOOL)isMsgAllowedAlways:(unsigned short)arg1 ;
-(id)retrievePeripheralWithAddress:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 ;
-(id)retrieveConnectedPeripheralsWithServices:(id)arg1 ;
-(BOOL)isScanning;
-(void)setIsScanning:(BOOL)arg1 ;
-(void)setDesiredConnectionLatency:(long long)arg1 forPeripheral:(id)arg2 ;
-(void)pauseScans;
-(id)retrieveConnectedPeripheralsWithServices:(id)arg1 allowAll:(BOOL)arg2 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(id)retrievePeripheralsWithIdentifiers:(id)arg1 ;
-(void)enablePrivateModeForPeripheral:(id)arg1 forDuration:(unsigned short)arg2 ;
-(void)connectPeripheral:(id)arg1 options:(id)arg2 ;
-(void)cancelPeripheralConnection:(id)arg1 force:(BOOL)arg2 ;
-(void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2 ;
-(void)stopScan;
-(void)cancelPeripheralConnection:(id)arg1 ;
-(NSMapTable *)peripherals;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<CBCentralManagerDelegate>)arg1 ;
-(id<CBCentralManagerDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
