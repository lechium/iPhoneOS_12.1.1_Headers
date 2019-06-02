/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng, NSMutableArray, GEOPDMapsIdentifier, GEOTimezone;

@interface GEOPDSpatialEventLookupResponse : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE2* _categorys;
	GEOLatLng* _center;
	NSMutableArray* _eventDateTimes;
	GEOPDMapsIdentifier* _eventId;
	GEOTimezone* _timezone;

}

@property (nonatomic,readonly) BOOL hasEventId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * eventId;                    //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                               //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly) unsigned long long categorysCount; 
@property (nonatomic,readonly) int* categorys; 
@property (nonatomic,retain) NSMutableArray * eventDateTimes;                  //@synthesize eventDateTimes=_eventDateTimes - In the implementation block
@property (nonatomic,readonly) BOOL hasTimezone; 
@property (nonatomic,retain) GEOTimezone * timezone;                           //@synthesize timezone=_timezone - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)eventDateTimeType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasCenter;
-(void)setTimezone:(GEOTimezone *)arg1 ;
-(BOOL)hasTimezone;
-(GEOTimezone *)timezone;
-(void)addEventDateTime:(id)arg1 ;
-(void)setEventId:(GEOPDMapsIdentifier *)arg1 ;
-(unsigned long long)eventDateTimesCount;
-(void)clearEventDateTimes;
-(id)eventDateTimeAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasEventId;
-(GEOPDMapsIdentifier *)eventId;
-(NSMutableArray *)eventDateTimes;
-(void)setEventDateTimes:(NSMutableArray *)arg1 ;
-(unsigned long long)categorysCount;
-(void)clearCategorys;
-(void)addCategory:(int)arg1 ;
-(int*)categorys;
-(void)setCategorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)categorysAsString:(int)arg1 ;
-(int)StringAsCategorys:(id)arg1 ;
-(int)categoryAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(GEOLatLng *)center;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

