/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKPeerPaymentDeviceMetadata : NSObject <NSSecureCoding> {

	NSString* _secureElementIdentifier;
	NSString* _uniqueDeviceIdentifier;
	NSString* _serialNumber;
	NSString* _phoneNumber;
	NSString* _deviceName;

}

@property (nonatomic,copy) NSString * secureElementIdentifier;              //@synthesize secureElementIdentifier=_secureElementIdentifier - In the implementation block
@property (nonatomic,copy) NSString * uniqueDeviceIdentifier;               //@synthesize uniqueDeviceIdentifier=_uniqueDeviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                         //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                          //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * deviceName;                           //@synthesize deviceName=_deviceName - In the implementation block
+(id)deviceMetadataForCurrentDevice;
+(BOOL)supportsSecureCoding;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setSecureElementIdentifier:(NSString *)arg1 ;
-(void)setUniqueDeviceIdentifier:(NSString *)arg1 ;
-(BOOL)isEqualToPeerPaymentDeviceMetadata:(id)arg1 ;
-(NSString *)uniqueDeviceIdentifier;
-(NSString *)secureElementIdentifier;
-(NSString *)serialNumber;
-(NSString *)deviceName;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)phoneNumber;
@end
