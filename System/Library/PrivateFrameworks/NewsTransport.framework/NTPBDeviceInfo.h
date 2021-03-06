/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBDeviceInfo : PBCodable <NSCopying> {

	long long _deviceDstOffset;
	long long _deviceUtcOffset;
	NSString* _deviceOsVersion;
	NSMutableArray* _devicePreferredLanguages;
	NSString* _devicePushToken;
	NSString* _deviceTimezone;
	int _deviceTokenEnv;
	NSString* _deviceType;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasDevicePushToken; 
@property (nonatomic,retain) NSString * devicePushToken;                             //@synthesize devicePushToken=_devicePushToken - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceType; 
@property (nonatomic,retain) NSString * deviceType;                                  //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceTimezone; 
@property (nonatomic,retain) NSString * deviceTimezone;                              //@synthesize deviceTimezone=_deviceTimezone - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceTokenEnv; 
@property (assign,nonatomic) int deviceTokenEnv;                                     //@synthesize deviceTokenEnv=_deviceTokenEnv - In the implementation block
@property (nonatomic,retain) NSMutableArray * devicePreferredLanguages;              //@synthesize devicePreferredLanguages=_devicePreferredLanguages - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceOsVersion; 
@property (nonatomic,retain) NSString * deviceOsVersion;                             //@synthesize deviceOsVersion=_deviceOsVersion - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceUtcOffset; 
@property (assign,nonatomic) long long deviceUtcOffset;                              //@synthesize deviceUtcOffset=_deviceUtcOffset - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceDstOffset; 
@property (assign,nonatomic) long long deviceDstOffset;                              //@synthesize deviceDstOffset=_deviceDstOffset - In the implementation block
+(Class)devicePreferredLanguageType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDeviceOsVersion:(NSString *)arg1 ;
-(void)setDevicePushToken:(NSString *)arg1 ;
-(BOOL)hasDevicePushToken;
-(NSString *)devicePushToken;
-(BOOL)hasDeviceOsVersion;
-(NSString *)deviceOsVersion;
-(void)addDevicePreferredLanguage:(id)arg1 ;
-(BOOL)hasDeviceTimezone;
-(int)deviceTokenEnv;
-(void)setHasDeviceTokenEnv:(BOOL)arg1 ;
-(BOOL)hasDeviceTokenEnv;
-(void)clearDevicePreferredLanguages;
-(unsigned long long)devicePreferredLanguagesCount;
-(id)devicePreferredLanguageAtIndex:(unsigned long long)arg1 ;
-(void)setHasDeviceUtcOffset:(BOOL)arg1 ;
-(BOOL)hasDeviceUtcOffset;
-(void)setHasDeviceDstOffset:(BOOL)arg1 ;
-(BOOL)hasDeviceDstOffset;
-(NSString *)deviceTimezone;
-(NSMutableArray *)devicePreferredLanguages;
-(long long)deviceUtcOffset;
-(long long)deviceDstOffset;
-(void)setDeviceTokenEnv:(int)arg1 ;
-(void)setDevicePreferredLanguages:(NSMutableArray *)arg1 ;
-(void)setDeviceTimezone:(NSString *)arg1 ;
-(void)setDeviceUtcOffset:(long long)arg1 ;
-(void)setDeviceDstOffset:(long long)arg1 ;
-(void)setDeviceType:(NSString *)arg1 ;
-(BOOL)hasDeviceType;
-(NSString *)deviceType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

