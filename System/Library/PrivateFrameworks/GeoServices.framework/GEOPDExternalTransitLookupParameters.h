/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray, NSString, GEOLocation;

@interface GEOPDExternalTransitLookupParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _transactionTimestamp;
	NSMutableArray* _externalTransitStationCodes;
	NSString* _sourceId;
	GEOLocation* _transactionLocation;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasTransactionTimestamp; 
@property (assign,nonatomic) double transactionTimestamp;                               //@synthesize transactionTimestamp=_transactionTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasTransactionLocation; 
@property (nonatomic,retain) GEOLocation * transactionLocation;                         //@synthesize transactionLocation=_transactionLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceId; 
@property (nonatomic,retain) NSString * sourceId;                                       //@synthesize sourceId=_sourceId - In the implementation block
@property (nonatomic,retain) NSMutableArray * externalTransitStationCodes;              //@synthesize externalTransitStationCodes=_externalTransitStationCodes - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)externalTransitStationCodeType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setSourceId:(NSString *)arg1 ;
-(BOOL)hasSourceId;
-(NSString *)sourceId;
-(NSMutableArray *)externalTransitStationCodes;
-(GEOLocation *)transactionLocation;
-(void)setTransactionLocation:(GEOLocation *)arg1 ;
-(void)setTransactionTimestamp:(double)arg1 ;
-(void)setHasTransactionTimestamp:(BOOL)arg1 ;
-(BOOL)hasTransactionTimestamp;
-(BOOL)hasTransactionLocation;
-(double)transactionTimestamp;
-(void)addExternalTransitStationCode:(id)arg1 ;
-(unsigned long long)externalTransitStationCodesCount;
-(void)clearExternalTransitStationCodes;
-(id)externalTransitStationCodeAtIndex:(unsigned long long)arg1 ;
-(void)setExternalTransitStationCodes:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

