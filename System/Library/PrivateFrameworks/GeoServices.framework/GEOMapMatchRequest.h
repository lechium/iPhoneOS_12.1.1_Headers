/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOMapMatchRequest : PBRequest <NSCopying> {

	double _searchThreshold;
	NSMutableArray* _locations;
	NSMutableArray* _waypoints;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,retain) NSMutableArray * waypoints;              //@synthesize waypoints=_waypoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * locations;              //@synthesize locations=_locations - In the implementation block
@property (assign,nonatomic) BOOL hasSearchThreshold; 
@property (assign,nonatomic) double searchThreshold;                  //@synthesize searchThreshold=_searchThreshold - In the implementation block
+(Class)waypointType;
+(Class)locationType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(NSMutableArray *)waypoints;
-(NSMutableArray *)locations;
-(unsigned long long)waypointsCount;
-(void)clearWaypoints;
-(void)setWaypoints:(NSMutableArray *)arg1 ;
-(void)addLocation:(id)arg1 ;
-(unsigned long long)locationsCount;
-(void)clearLocations;
-(id)locationAtIndex:(unsigned long long)arg1 ;
-(void)addWaypoint:(id)arg1 ;
-(id)waypointAtIndex:(unsigned long long)arg1 ;
-(void)setSearchThreshold:(double)arg1 ;
-(void)setHasSearchThreshold:(BOOL)arg1 ;
-(BOOL)hasSearchThreshold;
-(double)searchThreshold;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)setLocations:(NSMutableArray *)arg1 ;
@end
