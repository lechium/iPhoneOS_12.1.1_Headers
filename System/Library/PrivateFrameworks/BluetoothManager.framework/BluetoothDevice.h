/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BluetoothManager/BluetoothManager-Structs.h>
@class NSString;

@interface BluetoothDevice : NSObject {

	NSString* _name;
	NSString* _address;
	BTDeviceImplRef _device;
	unsigned _connectingServiceMask;

}
-(BOOL)connected;
-(unsigned)vendorId;
-(BOOL)isAppleAudioDevice;
-(BOOL)magicPaired;
-(void)unpair;
-(unsigned)productId;
-(BOOL)setUserName:(id)arg1 ;
-(void)_clearName;
-(id)initWithDevice:(BTDeviceImplRef)arg1 address:(id)arg2 ;
-(BOOL)_isNameCached;
-(id)scoUID;
-(unsigned long long)connectedServicesCount;
-(BOOL)supportsBatteryLevel;
-(BOOL)magicPairedDeviceNameUpdated;
-(BOOL)isAccessory;
-(void)connectWithServices:(unsigned)arg1 ;
-(void)acceptSSP:(long long)arg1 ;
-(void)startVoiceCommand;
-(void)endVoiceCommand;
-(BOOL)supportsHS;
-(void)setConnectingServicemask:(unsigned)arg1 ;
-(unsigned)getConnectingServiceMask;
-(void)setPIN:(id)arg1 ;
-(id)address;
-(unsigned long long)connectedServices;
-(BOOL)featureCapability:(int)arg1 ;
-(BTDeviceImplRef)device;
-(void)setDevice:(BTDeviceImplRef)arg1 ;
-(void)setSyncSettings:(SCD_Struct_Bl1)arg1 ;
-(BOOL)cloudPaired;
-(unsigned)listeningMode;
-(BOOL)setListeningMode:(unsigned)arg1 ;
-(void)setServiceSetting:(unsigned)arg1 key:(id)arg2 value:(id)arg3 ;
-(unsigned)doubleTapAction;
-(BOOL)setDoubleTapAction:(unsigned)arg1 ;
-(unsigned)doubleTapActionEx:(unsigned*)arg1 rightAction:(unsigned*)arg2 ;
-(BOOL)setDoubleTapActionEx:(unsigned)arg1 rightAction:(unsigned)arg2 ;
-(BOOL)inEarDetectEnabled;
-(BOOL)setInEarDetectEnabled:(BOOL)arg1 ;
-(unsigned)micMode;
-(BOOL)setMicMode:(unsigned)arg1 ;
-(unsigned)doubleTapCapability;
-(void)setSyncGroup:(int)arg1 enabled:(BOOL)arg2 ;
-(int)accessorySettingFeatureBitMask;
-(id)syncGroups;
-(BOOL)paired;
-(unsigned)majorClass;
-(unsigned)minorClass;
-(id)getServiceSetting:(unsigned)arg1 key:(id)arg2 ;
-(BOOL)isServiceSupported:(unsigned)arg1 ;
-(SCD_Struct_Bl1)syncSettings;
-(void)dealloc;
-(id)name;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(long long)compare:(id)arg1 ;
-(void)connect;
-(void)disconnect;
-(int)batteryLevel;
@end

