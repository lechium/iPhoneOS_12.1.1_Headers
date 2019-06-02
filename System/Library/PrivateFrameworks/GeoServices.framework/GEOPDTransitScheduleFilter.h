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

@class PBUnknownFields, GEOPDDeparturePredicate;

@interface GEOPDTransitScheduleFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDTimeRange _operatingHoursRange;
	GEOPDDeparturePredicate* _departurePredicateCountdown;
	GEOPDDeparturePredicate* _departurePredicateStamp;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,readonly) BOOL hasDeparturePredicateCountdown; 
@property (nonatomic,retain) GEOPDDeparturePredicate * departurePredicateCountdown;              //@synthesize departurePredicateCountdown=_departurePredicateCountdown - In the implementation block
@property (nonatomic,readonly) BOOL hasDeparturePredicateStamp; 
@property (nonatomic,retain) GEOPDDeparturePredicate * departurePredicateStamp;                  //@synthesize departurePredicateStamp=_departurePredicateStamp - In the implementation block
@property (assign,nonatomic) BOOL hasOperatingHoursRange; 
@property (assign,nonatomic) GEOPDTimeRange operatingHoursRange;                                 //@synthesize operatingHoursRange=_operatingHoursRange - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setDeparturePredicateCountdown:(GEOPDDeparturePredicate *)arg1 ;
-(void)setDeparturePredicateStamp:(GEOPDDeparturePredicate *)arg1 ;
-(BOOL)hasDeparturePredicateCountdown;
-(BOOL)hasDeparturePredicateStamp;
-(void)setOperatingHoursRange:(GEOPDTimeRange)arg1 ;
-(void)setHasOperatingHoursRange:(BOOL)arg1 ;
-(BOOL)hasOperatingHoursRange;
-(GEOPDDeparturePredicate *)departurePredicateCountdown;
-(GEOPDDeparturePredicate *)departurePredicateStamp;
-(GEOPDTimeRange)operatingHoursRange;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

