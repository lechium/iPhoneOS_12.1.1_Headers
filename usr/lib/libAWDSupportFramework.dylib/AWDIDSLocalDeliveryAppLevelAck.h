/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSLocalDeliveryAppLevelAck : PBCodable <NSCopying> {

	unsigned long long _isToDefaultPairedDevice;
	unsigned long long _linkType;
	unsigned long long _priority;
	unsigned long long _timestamp;
	NSString* _service;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NSString * service;                                      //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) BOOL hasIsToDefaultPairedDevice; 
@property (assign,nonatomic) unsigned long long isToDefaultPairedDevice;              //@synthesize isToDefaultPairedDevice=_isToDefaultPairedDevice - In the implementation block
@property (assign,nonatomic) BOOL hasLinkType; 
@property (assign,nonatomic) unsigned long long linkType;                             //@synthesize linkType=_linkType - In the implementation block
@property (assign,nonatomic) BOOL hasPriority; 
@property (assign,nonatomic) unsigned long long priority;                             //@synthesize priority=_priority - In the implementation block
-(BOOL)hasService;
-(void)setIsToDefaultPairedDevice:(unsigned long long)arg1 ;
-(void)setHasIsToDefaultPairedDevice:(BOOL)arg1 ;
-(BOOL)hasIsToDefaultPairedDevice;
-(unsigned long long)isToDefaultPairedDevice;
-(void)setHasLinkType:(BOOL)arg1 ;
-(BOOL)hasLinkType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(NSString *)service;
-(void)setService:(NSString *)arg1 ;
-(BOOL)hasPriority;
-(void)setHasPriority:(BOOL)arg1 ;
-(void)setLinkType:(unsigned long long)arg1 ;
-(unsigned long long)linkType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(unsigned long long)arg1 ;
-(unsigned long long)priority;
-(unsigned long long)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

