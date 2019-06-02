/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOStyleAttribute : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _key;
	unsigned _value;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasKey; 
@property (assign,nonatomic) unsigned key;                                   //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) unsigned value;                                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasValue;
-(void)setHasKey:(BOOL)arg1 ;
-(void)setHasValue:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)value;
-(void)setValue:(unsigned)arg1 ;
-(unsigned)key;
-(void)setKey:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasKey;
@end

