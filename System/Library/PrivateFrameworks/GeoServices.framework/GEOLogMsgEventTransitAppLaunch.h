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

@class NSString, GEOLatLng;

@interface GEOLogMsgEventTransitAppLaunch : PBCodable <NSCopying> {

	double _timestamp;
	NSString* _bundleIdentifier;
	GEOLatLng* _destination;
	GEOLatLng* _source;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,readonly) BOOL hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,retain) GEOLatLng * source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) BOOL hasDestination; 
@property (nonatomic,retain) GEOLatLng * destination;                  //@synthesize destination=_destination - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasSource;
-(BOOL)hasDestination;
-(BOOL)hasBundleIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timestamp;
-(void)setSource:(GEOLatLng *)arg1 ;
-(void)setDestination:(GEOLatLng *)arg1 ;
-(GEOLatLng *)source;
-(GEOLatLng *)destination;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(double)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

