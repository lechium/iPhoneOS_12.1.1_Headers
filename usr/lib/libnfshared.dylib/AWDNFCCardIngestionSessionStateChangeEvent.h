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

@class NSData;

@interface AWDNFCCardIngestionSessionStateChangeEvent : PBCodable <NSCopying> {

	unsigned long long _timeDeltaFromReference;
	unsigned long long _timestamp;
	unsigned _cardValidationStatus;
	unsigned _sessionStatus;
	unsigned _spStatusCode;
	unsigned _state;
	unsigned _technology;
	NSData* _uuidReference;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                                 //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasTimeDeltaFromReference; 
@property (assign,nonatomic) unsigned long long timeDeltaFromReference;              //@synthesize timeDeltaFromReference=_timeDeltaFromReference - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) unsigned state;                                         //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL hasTechnology; 
@property (assign,nonatomic) unsigned technology;                                    //@synthesize technology=_technology - In the implementation block
@property (assign,nonatomic) BOOL hasSpStatusCode; 
@property (assign,nonatomic) unsigned spStatusCode;                                  //@synthesize spStatusCode=_spStatusCode - In the implementation block
@property (assign,nonatomic) BOOL hasCardValidationStatus; 
@property (assign,nonatomic) unsigned cardValidationStatus;                          //@synthesize cardValidationStatus=_cardValidationStatus - In the implementation block
@property (assign,nonatomic) BOOL hasSessionStatus; 
@property (assign,nonatomic) unsigned sessionStatus;                                 //@synthesize sessionStatus=_sessionStatus - In the implementation block
-(void)setHasState:(BOOL)arg1 ;
-(BOOL)hasState;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTechnology:(unsigned)arg1 ;
-(void)setUuidReference:(NSData *)arg1 ;
-(void)setTimeDeltaFromReference:(unsigned long long)arg1 ;
-(void)setHasTimeDeltaFromReference:(BOOL)arg1 ;
-(BOOL)hasTimeDeltaFromReference;
-(BOOL)hasUuidReference;
-(unsigned long long)timeDeltaFromReference;
-(NSData *)uuidReference;
-(void)setHasTechnology:(BOOL)arg1 ;
-(BOOL)hasTechnology;
-(void)setSpStatusCode:(unsigned)arg1 ;
-(void)setHasSpStatusCode:(BOOL)arg1 ;
-(BOOL)hasSpStatusCode;
-(void)setCardValidationStatus:(unsigned)arg1 ;
-(void)setHasCardValidationStatus:(BOOL)arg1 ;
-(BOOL)hasCardValidationStatus;
-(void)setHasSessionStatus:(BOOL)arg1 ;
-(BOOL)hasSessionStatus;
-(unsigned)spStatusCode;
-(unsigned)cardValidationStatus;
-(unsigned)technology;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setState:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)sessionStatus;
-(void)setSessionStatus:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

