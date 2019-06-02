/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPlaceSearchResponse, NSMutableArray;

@interface GEOETAResult : PBCodable <NSCopying> {

	unsigned _distance;
	unsigned _historicTravelTime;
	unsigned _liveTravelTime;
	GEOPlaceSearchResponse* _placeSearchResponse;
	NSMutableArray* _sortedETAs;
	int _status;
	SCD_Struct_GE70 _has;

}

@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                                //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasLiveTravelTime; 
@property (assign,nonatomic) unsigned liveTravelTime;                                   //@synthesize liveTravelTime=_liveTravelTime - In the implementation block
@property (assign,nonatomic) BOOL hasHistoricTravelTime; 
@property (assign,nonatomic) unsigned historicTravelTime;                               //@synthesize historicTravelTime=_historicTravelTime - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceSearchResponse; 
@property (nonatomic,retain) GEOPlaceSearchResponse * placeSearchResponse;              //@synthesize placeSearchResponse=_placeSearchResponse - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance;                                         //@synthesize distance=_distance - In the implementation block
@property (nonatomic,retain) NSMutableArray * sortedETAs;                               //@synthesize sortedETAs=_sortedETAs - In the implementation block
+(Class)sortedETAType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(BOOL)hasDistance;
-(void)setHistoricTravelTime:(unsigned)arg1 ;
-(void)setHasHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasHistoricTravelTime;
-(unsigned)historicTravelTime;
-(void)addSortedETA:(id)arg1 ;
-(void)setPlaceSearchResponse:(GEOPlaceSearchResponse *)arg1 ;
-(unsigned long long)sortedETAsCount;
-(void)clearSortedETAs;
-(id)sortedETAAtIndex:(unsigned long long)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setLiveTravelTime:(unsigned)arg1 ;
-(void)setHasLiveTravelTime:(BOOL)arg1 ;
-(BOOL)hasLiveTravelTime;
-(BOOL)hasPlaceSearchResponse;
-(unsigned)liveTravelTime;
-(GEOPlaceSearchResponse *)placeSearchResponse;
-(NSMutableArray *)sortedETAs;
-(void)setSortedETAs:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDistance:(unsigned)arg1 ;
-(unsigned)distance;
-(id)dictionaryRepresentation;
-(int)status;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
@end

