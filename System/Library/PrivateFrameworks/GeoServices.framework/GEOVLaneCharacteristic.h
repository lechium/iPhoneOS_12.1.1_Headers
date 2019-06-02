/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOVLaneCharacteristic : PBCodable <NSCopying> {

	NSMutableArray* _laneDirections;
	NSMutableArray* _laneDividers;
	NSMutableArray* _laneTypes;
	unsigned _roadLaneCount;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasRoadLaneCount; 
@property (assign,nonatomic) unsigned roadLaneCount;                       //@synthesize roadLaneCount=_roadLaneCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * laneDividers;                //@synthesize laneDividers=_laneDividers - In the implementation block
@property (nonatomic,retain) NSMutableArray * laneDirections;              //@synthesize laneDirections=_laneDirections - In the implementation block
@property (nonatomic,retain) NSMutableArray * laneTypes;                   //@synthesize laneTypes=_laneTypes - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addLaneDivider:(id)arg1 ;
-(void)addLaneDirection:(id)arg1 ;
-(void)addLaneType:(id)arg1 ;
-(unsigned long long)laneDividersCount;
-(void)clearLaneDividers;
-(id)laneDividerAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)laneDirectionsCount;
-(void)clearLaneDirections;
-(id)laneDirectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)laneTypesCount;
-(void)clearLaneTypes;
-(id)laneTypeAtIndex:(unsigned long long)arg1 ;
-(void)setRoadLaneCount:(unsigned)arg1 ;
-(void)setHasRoadLaneCount:(BOOL)arg1 ;
-(BOOL)hasRoadLaneCount;
-(unsigned)roadLaneCount;
-(NSMutableArray *)laneDividers;
-(void)setLaneDividers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)laneDirections;
-(void)setLaneDirections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)laneTypes;
-(void)setLaneTypes:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

