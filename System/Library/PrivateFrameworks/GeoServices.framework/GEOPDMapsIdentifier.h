/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDShardedId;

@interface GEOPDMapsIdentifier : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _placeType;
	GEOPDShardedId* _shardedId;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,readonly) BOOL hasShardedId; 
@property (nonatomic,retain) GEOPDShardedId * shardedId;                     //@synthesize shardedId=_shardedId - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceType; 
@property (assign,nonatomic) int placeType;                                  //@synthesize placeType=_placeType - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setShardedId:(GEOPDShardedId *)arg1 ;
-(BOOL)hasShardedId;
-(void)setPlaceType:(int)arg1 ;
-(void)setHasPlaceType:(BOOL)arg1 ;
-(BOOL)hasPlaceType;
-(id)placeTypeAsString:(int)arg1 ;
-(int)StringAsPlaceType:(id)arg1 ;
-(GEOPDShardedId *)shardedId;
-(int)placeDisplayType;
-(int)placeType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
