/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface _ACCExternalAccessoryInfo : NSObject {

	NSDictionary* _fullAccessoryInfo;
	NSString* _primaryUUID;
	NSString* _name;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _serial;
	NSString* _firmwareRevisionActive;
	NSString* _firmwareRevisionPending;
	NSString* _hardwareRevision;
	unsigned long long _destinationSharingOptions;

}

@property (retain) NSDictionary * fullAccessoryInfo;                          //@synthesize fullAccessoryInfo=_fullAccessoryInfo - In the implementation block
@property (retain) NSString * primaryUUID;                                    //@synthesize primaryUUID=_primaryUUID - In the implementation block
@property (retain) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (retain) NSString * manufacturer;                                   //@synthesize manufacturer=_manufacturer - In the implementation block
@property (retain) NSString * model;                                          //@synthesize model=_model - In the implementation block
@property (retain) NSString * serial;                                         //@synthesize serial=_serial - In the implementation block
@property (retain) NSString * firmwareRevisionActive;                         //@synthesize firmwareRevisionActive=_firmwareRevisionActive - In the implementation block
@property (retain) NSString * firmwareRevisionPending;                        //@synthesize firmwareRevisionPending=_firmwareRevisionPending - In the implementation block
@property (retain) NSString * hardwareRevision;                               //@synthesize hardwareRevision=_hardwareRevision - In the implementation block
@property (assign) unsigned long long destinationSharingOptions;              //@synthesize destinationSharingOptions=_destinationSharingOptions - In the implementation block
-(void)setManufacturer:(NSString *)arg1 ;
-(NSString *)manufacturer;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)serial;
-(void)setDestinationSharingOptions:(unsigned long long)arg1 ;
-(void)setFirmwareRevisionActive:(NSString *)arg1 ;
-(void)setFirmwareRevisionPending:(NSString *)arg1 ;
-(void)setHardwareRevision:(NSString *)arg1 ;
-(NSString *)firmwareRevisionActive;
-(NSString *)firmwareRevisionPending;
-(unsigned long long)destinationSharingOptions;
-(NSString *)hardwareRevision;
-(NSString *)primaryUUID;
-(id)initWithAccessoryInfoDictionary:(id)arg1 ;
-(id)copyAccessoryInfo;
-(NSDictionary *)fullAccessoryInfo;
-(void)setFullAccessoryInfo:(NSDictionary *)arg1 ;
-(void)setPrimaryUUID:(NSString *)arg1 ;
-(void)setSerial:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)model;
@end

