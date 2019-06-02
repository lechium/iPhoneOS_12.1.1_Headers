/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng;

@interface GEOLocation : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _course;
	double _courseAccuracy;
	double _heading;
	double _horizontalAccuracy;
	double _rawCourse;
	double _speed;
	double _speedAccuracy;
	double _timestamp;
	unsigned long long _transitID;
	double _verticalAccuracy;
	int _altitude;
	int _formOfWay;
	GEOLatLng* _latLng;
	int _levelOrdinal;
	int _matchQuality;
	GEOLatLng* _rawCoordinate;
	int _referenceFrame;
	int _roadClass;
	int _transportType;
	int _type;
	BOOL _isMatchedLocation;
	BOOL _isShifted;
	SCD_Struct_GE71 _has;

}

@property (assign,nonatomic) BOOL hasCourseAccuracy; 
@property (assign,nonatomic) double courseAccuracy; 
@property (assign,nonatomic) BOOL hasSpeedAccuracy; 
@property (assign,nonatomic) double speedAccuracy; 
@property (assign,nonatomic) BOOL hasIsMatchedLocation; 
@property (assign,nonatomic) BOOL isMatchedLocation; 
@property (assign,nonatomic) BOOL hasIsShifted; 
@property (assign,nonatomic) BOOL isShifted; 
@property (assign,nonatomic) BOOL hasTransitID; 
@property (assign,nonatomic) unsigned long long transitID; 
@property (assign,nonatomic) BOOL hasReferenceFrame; 
@property (assign,nonatomic) int referenceFrame; 
@property (nonatomic,readonly) BOOL hasRawCoordinate; 
@property (nonatomic,retain) GEOLatLng * rawCoordinate; 
@property (assign,nonatomic) BOOL hasRawCourse; 
@property (assign,nonatomic) double rawCourse; 
@property (assign,nonatomic) BOOL hasMatchQuality; 
@property (assign,nonatomic) int matchQuality; 
@property (assign,nonatomic) BOOL hasFormOfWay; 
@property (assign,nonatomic) int formOfWay; 
@property (assign,nonatomic) BOOL hasRoadClass; 
@property (assign,nonatomic) int roadClass; 
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType; 
@property (nonatomic,readonly) SCD_Struct_GE30 coordinate; 
@property (nonatomic,readonly) BOOL hasAccurateCourse; 
@property (nonatomic,retain) GEOLatLng * latLng;                             //@synthesize latLng=_latLng - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAltitude; 
@property (assign,nonatomic) int altitude;                                   //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) BOOL hasHorizontalAccuracy; 
@property (assign,nonatomic) double horizontalAccuracy;                      //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasVerticalAccuracy; 
@property (assign,nonatomic) double verticalAccuracy;                        //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasSpeed; 
@property (assign,nonatomic) double speed;                                   //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) BOOL hasHeading; 
@property (assign,nonatomic) double heading;                                 //@synthesize heading=_heading - In the implementation block
@property (assign,nonatomic) BOOL hasCourse; 
@property (assign,nonatomic) double course;                                  //@synthesize course=_course - In the implementation block
@property (assign,nonatomic) BOOL hasLevelOrdinal; 
@property (assign,nonatomic) int levelOrdinal;                               //@synthesize levelOrdinal=_levelOrdinal - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(id)_initWithCLClientLocation:(const SCD_Struct_GE72*)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(GEOLatLng *)latLng;
-(SCD_Struct_GE30)coordinate;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(GEOLatLng *)rawCoordinate;
-(void)setLevelOrdinal:(int)arg1 ;
-(void)setHasLevelOrdinal:(BOOL)arg1 ;
-(BOOL)hasLevelOrdinal;
-(int)levelOrdinal;
-(int)roadClass;
-(int)formOfWay;
-(void)setLatLng:(GEOLatLng *)arg1 ;
-(void)setRawCoordinate:(GEOLatLng *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setAltitude:(int)arg1 ;
-(void)setHasAltitude:(BOOL)arg1 ;
-(BOOL)hasAltitude;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(void)setHasHorizontalAccuracy:(BOOL)arg1 ;
-(BOOL)hasHorizontalAccuracy;
-(void)setVerticalAccuracy:(double)arg1 ;
-(void)setHasVerticalAccuracy:(BOOL)arg1 ;
-(BOOL)hasVerticalAccuracy;
-(void)setHasSpeed:(BOOL)arg1 ;
-(BOOL)hasSpeed;
-(void)setHasHeading:(BOOL)arg1 ;
-(BOOL)hasHeading;
-(void)setCourse:(double)arg1 ;
-(void)setHasCourse:(BOOL)arg1 ;
-(BOOL)hasCourse;
-(int)altitude;
-(double)horizontalAccuracy;
-(double)verticalAccuracy;
-(double)course;
-(double)courseAccuracy;
-(void)setCourseAccuracy:(double)arg1 ;
-(void)setHasCourseAccuracy:(BOOL)arg1 ;
-(BOOL)hasCourseAccuracy;
-(double)speedAccuracy;
-(void)setSpeedAccuracy:(double)arg1 ;
-(void)setHasSpeedAccuracy:(BOOL)arg1 ;
-(BOOL)hasSpeedAccuracy;
-(BOOL)isMatchedLocation;
-(void)setIsMatchedLocation:(BOOL)arg1 ;
-(void)setHasIsMatchedLocation:(BOOL)arg1 ;
-(BOOL)hasIsMatchedLocation;
-(void)setIsShifted:(BOOL)arg1 ;
-(void)setHasIsShifted:(BOOL)arg1 ;
-(BOOL)hasIsShifted;
-(unsigned long long)transitID;
-(void)setTransitID:(unsigned long long)arg1 ;
-(void)setHasTransitID:(BOOL)arg1 ;
-(BOOL)hasTransitID;
-(int)referenceFrame;
-(void)setReferenceFrame:(int)arg1 ;
-(void)setHasReferenceFrame:(BOOL)arg1 ;
-(BOOL)hasReferenceFrame;
-(id)referenceFrameAsString:(int)arg1 ;
-(int)StringAsReferenceFrame:(id)arg1 ;
-(BOOL)hasRawCoordinate;
-(double)rawCourse;
-(void)setRawCourse:(double)arg1 ;
-(void)setHasRawCourse:(BOOL)arg1 ;
-(BOOL)hasRawCourse;
-(int)matchQuality;
-(void)setMatchQuality:(int)arg1 ;
-(void)setHasMatchQuality:(BOOL)arg1 ;
-(BOOL)hasMatchQuality;
-(id)matchQualityAsString:(int)arg1 ;
-(int)StringAsMatchQuality:(id)arg1 ;
-(void)setFormOfWay:(int)arg1 ;
-(void)setHasFormOfWay:(BOOL)arg1 ;
-(BOOL)hasFormOfWay;
-(id)formOfWayAsString:(int)arg1 ;
-(int)StringAsFormOfWay:(id)arg1 ;
-(void)setRoadClass:(int)arg1 ;
-(void)setHasRoadClass:(BOOL)arg1 ;
-(BOOL)hasRoadClass;
-(id)roadClassAsString:(int)arg1 ;
-(int)StringAsRoadClass:(id)arg1 ;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(id)initWithGEOCoordinate:(SCD_Struct_GE30)arg1 ;
-(id)initWithLocation:(id)arg1 floorOrdinal:(int)arg2 ;
-(id)initWithLocation:(id)arg1 isUserLocation:(BOOL)arg2 floorOrdinal:(int)arg3 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 floorOrdinal:(int)arg3 ;
-(id)initWithGEOCoordinate:(SCD_Struct_GE30)arg1 isUserLocation:(BOOL)arg2 floorOrdinal:(int)arg3 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 isUserLocation:(BOOL)arg3 floorOrdinal:(int)arg4 ;
-(id)initWithLocation:(id)arg1 ;
-(id)initWithGEOCoordinate:(SCD_Struct_GE30)arg1 isUserLocation:(BOOL)arg2 ;
-(id)initWithGEOCoordinate:(SCD_Struct_GE30)arg1 floorOrdinal:(int)arg2 ;
-(BOOL)hasAccurateCourse;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(double)timestamp;
-(void)setSpeed:(double)arg1 ;
-(double)speed;
-(id)dictionaryRepresentation;
-(void)setHeading:(double)arg1 ;
-(double)heading;
-(void)setTimestamp:(double)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isShifted;
@end

