/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDDatasetABStatus : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _datasetId;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasDatasetId; 
@property (assign,nonatomic) unsigned datasetId;                             //@synthesize datasetId=_datasetId - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned)datasetId;
-(void)setDatasetId:(unsigned)arg1 ;
-(BOOL)hasDatasetId;
-(void)setHasDatasetId:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

