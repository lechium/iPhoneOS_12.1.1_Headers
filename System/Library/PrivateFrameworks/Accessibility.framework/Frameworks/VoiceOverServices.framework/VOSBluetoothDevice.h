/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceOverServices/VoiceOverServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface VOSBluetoothDevice : NSObject <NSCopying> {

	NSString* _name;
	NSString* _address;
	BTDeviceImplRef _device;

}
-(BOOL)connected;
-(unsigned)deviceClass;
-(BOOL)isEqualToDevice:(id)arg1 ;
-(void)unpair;
-(void)_clearName;
-(id)initWithDevice:(BTDeviceImplRef)arg1 address:(id)arg2 ;
-(unsigned long long)connectedServicesCount;
-(void)connectWithServices:(unsigned)arg1 ;
-(void)acceptSSP:(int)arg1 ;
-(void)setPIN:(id)arg1 ;
-(id)address;
-(unsigned long long)connectedServices;
-(BTDeviceImplRef)device;
-(void)setDevice:(BTDeviceImplRef)arg1 ;
-(unsigned)authorizedServices;
-(BOOL)isNameCached;
-(BOOL)hasAddress:(id)arg1 ;
-(BOOL)paired;
-(unsigned)majorClass;
-(unsigned)minorClass;
-(BOOL)isServiceSupported:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)name;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(long long)compare:(id)arg1 ;
-(void)connect;
-(void)disconnect;
@end

