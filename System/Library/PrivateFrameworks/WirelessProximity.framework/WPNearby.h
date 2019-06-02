/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WPClient.h>

@protocol WPNearbyDelegate;
@class NSMutableDictionary, NSArray, NSMutableSet;

@interface WPNearby : WPClient {

	long long _btBandwidthState;
	id<WPNearbyDelegate> _delegate;
	NSMutableDictionary* _discoveredPeers;
	NSMutableDictionary* _transfers;
	NSArray* _leCapablePeers;
	NSMutableSet* _lePipePeers;

}

@property (assign,nonatomic,__weak) id<WPNearbyDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign) long long btBandwidthState;                                   //@synthesize btBandwidthState=_btBandwidthState - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * discoveredPeers;              //@synthesize discoveredPeers=_discoveredPeers - In the implementation block
@property (retain) NSMutableDictionary * transfers;                              //@synthesize transfers=_transfers - In the implementation block
@property (retain) NSArray * leCapablePeers;                                     //@synthesize leCapablePeers=_leCapablePeers - In the implementation block
@property (retain) NSMutableSet * lePipePeers;                                   //@synthesize lePipePeers=_lePipePeers - In the implementation block
+(unsigned char)clientTypeFromNearbyType:(long long)arg1 ;
+(long long)nearbyTypeFromClientType:(unsigned char)arg1 ;
+(BOOL)holdVoucherForConnections;
-(void)connectToPeer:(id)arg1 ;
-(id)clientAsString;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)updateAdvertisingRequest:(id)arg1 withUpdate:(/*^block*/id)arg2 ;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(void)startedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)stoppedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)failedToStartTrackingPeer:(id)arg1 error:(id)arg2 ;
-(void)foundPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)lostPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)setBtBandwidthState:(long long)arg1 ;
-(void)populateClientGATT:(/*^block*/id)arg1 ;
-(void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 ;
-(void)connectedDevice:(id)arg1 withError:(id)arg2 shouldDiscover:(BOOL)arg3 ;
-(void)connectedDeviceOverLEPipe:(id)arg1 ;
-(void)discoveredCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2 ;
-(void)updatedNotificationState:(BOOL)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 withPeripheral:(id)arg4 ;
-(void)disconnectedDevice:(id)arg1 withError:(id)arg2 ;
-(void)sentData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 withError:(id)arg5 ;
-(void)receivedData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 ;
-(void)central:(id)arg1 subscribed:(BOOL)arg2 toCharacteristic:(id)arg3 inService:(id)arg4 ;
-(void)bandwidthStateUpdated:(id)arg1 ;
-(void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 priority:(long long)arg3 ;
-(void)startScanningForType:(long long)arg1 data:(id)arg2 mask:(id)arg3 peers:(id)arg4 scanMode:(long long)arg5 rssi:(id)arg6 duplicates:(BOOL)arg7 ;
-(NSMutableDictionary *)discoveredPeers;
-(NSMutableSet *)lePipePeers;
-(void)pipeStateDidChange:(long long)arg1 ;
-(void)startScanningForType:(long long)arg1 data:(id)arg2 mask:(id)arg3 peers:(id)arg4 scanMode:(long long)arg5 ;
-(void)disconnectedDeviceOverLEPipe:(id)arg1 withError:(id)arg2 ;
-(void)setDiscoveredPeers:(NSMutableDictionary *)arg1 ;
-(NSArray *)leCapablePeers;
-(void)setLeCapablePeers:(NSArray *)arg1 ;
-(void)setLePipePeers:(NSMutableSet *)arg1 ;
-(void)stateDidChange:(long long)arg1 ;
-(void)stopAdvertisingOfType:(long long)arg1 ;
-(void)startAdvertisingOfType:(long long)arg1 data:(id)arg2 priority:(long long)arg3 mode:(long long)arg4 options:(id)arg5 ;
-(void)startAdvertisingOfType:(long long)arg1 data:(id)arg2 priority:(long long)arg3 mode:(long long)arg4 ;
-(void)disconnectFromPeer:(id)arg1 ;
-(void)connectToPeer:(id)arg1 withOptions:(id)arg2 ;
-(void)sendData:(id)arg1 toPeer:(id)arg2 ;
-(long long)btBandwidthState;
-(void)stopScanningForType:(long long)arg1 ;
-(void)startScanningForType:(long long)arg1 data:(id)arg2 mask:(id)arg3 peers:(id)arg4 scanMode:(long long)arg5 rssi:(id)arg6 duplicates:(BOOL)arg7 scanCache:(BOOL)arg8 ;
-(void)stopTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(void)startTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(void)setTransfers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)transfers;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(id)init;
-(void)setDelegate:(id<WPNearbyDelegate>)arg1 ;
-(id<WPNearbyDelegate>)delegate;
-(void)invalidate;
@end

