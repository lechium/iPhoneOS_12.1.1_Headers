/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEONavCameraState : PBCodable <NSCopying> {

	int _distanceToManeuver;
	int _speedBucket;
	int _upcomingManeuverType;
	BOOL _isGroupedManeuver;
	SCD_Struct_GE70 _has;

}

@property (assign,nonatomic) BOOL hasUpcomingManeuverType; 
@property (assign,nonatomic) int upcomingManeuverType;                  //@synthesize upcomingManeuverType=_upcomingManeuverType - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceToManeuver; 
@property (assign,nonatomic) int distanceToManeuver;                    //@synthesize distanceToManeuver=_distanceToManeuver - In the implementation block
@property (assign,nonatomic) BOOL hasIsGroupedManeuver; 
@property (assign,nonatomic) BOOL isGroupedManeuver;                    //@synthesize isGroupedManeuver=_isGroupedManeuver - In the implementation block
@property (assign,nonatomic) BOOL hasSpeedBucket; 
@property (assign,nonatomic) int speedBucket;                           //@synthesize speedBucket=_speedBucket - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDistanceToManeuver:(int)arg1 ;
-(void)setHasDistanceToManeuver:(BOOL)arg1 ;
-(BOOL)hasDistanceToManeuver;
-(int)distanceToManeuver;
-(void)setUpcomingManeuverType:(int)arg1 ;
-(void)setIsGroupedManeuver:(BOOL)arg1 ;
-(void)setSpeedBucket:(int)arg1 ;
-(int)upcomingManeuverType;
-(void)setHasUpcomingManeuverType:(BOOL)arg1 ;
-(BOOL)hasUpcomingManeuverType;
-(id)upcomingManeuverTypeAsString:(int)arg1 ;
-(int)StringAsUpcomingManeuverType:(id)arg1 ;
-(id)distanceToManeuverAsString:(int)arg1 ;
-(int)StringAsDistanceToManeuver:(id)arg1 ;
-(void)setHasIsGroupedManeuver:(BOOL)arg1 ;
-(BOOL)hasIsGroupedManeuver;
-(int)speedBucket;
-(void)setHasSpeedBucket:(BOOL)arg1 ;
-(BOOL)hasSpeedBucket;
-(id)speedBucketAsString:(int)arg1 ;
-(int)StringAsSpeedBucket:(id)arg1 ;
-(BOOL)isGroupedManeuver;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
