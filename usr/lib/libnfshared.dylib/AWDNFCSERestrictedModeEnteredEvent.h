/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface AWDNFCSERestrictedModeEnteredEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSData* _attackLog;
	unsigned _hardwareType;
	NSString* _platformIdentifier;
	NSData* _restrictedModeUUID;
	BOOL _contactless;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasContactless; 
@property (assign,nonatomic) BOOL contactless;                           //@synthesize contactless=_contactless - In the implementation block
@property (nonatomic,readonly) BOOL hasRestrictedModeUUID; 
@property (nonatomic,retain) NSData * restrictedModeUUID;                //@synthesize restrictedModeUUID=_restrictedModeUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasPlatformIdentifier; 
@property (nonatomic,retain) NSString * platformIdentifier;              //@synthesize platformIdentifier=_platformIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAttackLog; 
@property (nonatomic,retain) NSData * attackLog;                         //@synthesize attackLog=_attackLog - In the implementation block
@property (assign,nonatomic) BOOL hasHardwareType; 
@property (assign,nonatomic) unsigned hardwareType;                      //@synthesize hardwareType=_hardwareType - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHardwareType:(unsigned)arg1 ;
-(void)setPlatformIdentifier:(NSString *)arg1 ;
-(NSString *)platformIdentifier;
-(unsigned)hardwareType;
-(void)setRestrictedModeUUID:(NSData *)arg1 ;
-(void)setAttackLog:(NSData *)arg1 ;
-(void)setContactless:(BOOL)arg1 ;
-(void)setHasContactless:(BOOL)arg1 ;
-(BOOL)hasContactless;
-(BOOL)hasRestrictedModeUUID;
-(BOOL)hasPlatformIdentifier;
-(BOOL)hasAttackLog;
-(void)setHasHardwareType:(BOOL)arg1 ;
-(BOOL)hasHardwareType;
-(BOOL)contactless;
-(NSData *)restrictedModeUUID;
-(NSData *)attackLog;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

