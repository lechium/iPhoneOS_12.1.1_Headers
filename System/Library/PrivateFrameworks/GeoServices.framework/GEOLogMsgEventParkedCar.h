/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLatLng;

@interface GEOLogMsgEventParkedCar : PBCodable <NSCopying> {

	double _locationUncertainty;
	double _timestamp;
	GEOLatLng* _location;
	SCD_Struct_GE22 _has;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location;                     //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasLocationUncertainty; 
@property (assign,nonatomic) double locationUncertainty;               //@synthesize locationUncertainty=_locationUncertainty - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLocation;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setLocationUncertainty:(double)arg1 ;
-(void)setHasLocationUncertainty:(BOOL)arg1 ;
-(BOOL)hasLocationUncertainty;
-(double)locationUncertainty;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(double)arg1 ;
-(GEOLatLng *)location;
-(void)copyTo:(id)arg1 ;
-(void)setLocation:(GEOLatLng *)arg1 ;
@end
