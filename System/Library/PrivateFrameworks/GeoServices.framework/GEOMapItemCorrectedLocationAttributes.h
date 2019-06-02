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

@class PBUnknownFields, GEOAddress, NSString, GEOLatLng;

@interface GEOMapItemCorrectedLocationAttributes : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _lastUpdateDate;
	GEOAddress* _correctedAddress;
	NSString* _correctedAddressSecondaryStreetLine;
	GEOLatLng* _correctedCoordinate;
	NSString* _customLabel;
	BOOL _hasSubmittedRAP;
	SCD_Struct_GE22 _has;

}

@property (nonatomic,readonly) BOOL hasCorrectedCoordinate; 
@property (nonatomic,retain) GEOLatLng * correctedCoordinate;                             //@synthesize correctedCoordinate=_correctedCoordinate - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedAddress; 
@property (nonatomic,retain) GEOAddress * correctedAddress;                               //@synthesize correctedAddress=_correctedAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedAddressSecondaryStreetLine; 
@property (nonatomic,retain) NSString * correctedAddressSecondaryStreetLine;              //@synthesize correctedAddressSecondaryStreetLine=_correctedAddressSecondaryStreetLine - In the implementation block
@property (nonatomic,readonly) BOOL hasCustomLabel; 
@property (nonatomic,retain) NSString * customLabel;                                      //@synthesize customLabel=_customLabel - In the implementation block
@property (assign,nonatomic) BOOL hasLastUpdateDate; 
@property (assign,nonatomic) double lastUpdateDate;                                       //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
@property (assign,nonatomic) BOOL hasHasSubmittedRAP; 
@property (assign,nonatomic) BOOL hasSubmittedRAP;                                        //@synthesize hasSubmittedRAP=_hasSubmittedRAP - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setCorrectedCoordinate:(GEOLatLng *)arg1 ;
-(BOOL)hasCorrectedCoordinate;
-(GEOLatLng *)correctedCoordinate;
-(BOOL)hasCorrectedAddress;
-(GEOAddress *)correctedAddress;
-(void)setCorrectedAddress:(GEOAddress *)arg1 ;
-(void)setCorrectedAddressSecondaryStreetLine:(NSString *)arg1 ;
-(void)setCustomLabel:(NSString *)arg1 ;
-(BOOL)hasCorrectedAddressSecondaryStreetLine;
-(BOOL)hasCustomLabel;
-(void)setHasLastUpdateDate:(BOOL)arg1 ;
-(BOOL)hasLastUpdateDate;
-(void)setHasSubmittedRAP:(BOOL)arg1 ;
-(void)setHasHasSubmittedRAP:(BOOL)arg1 ;
-(BOOL)hasHasSubmittedRAP;
-(NSString *)correctedAddressSecondaryStreetLine;
-(NSString *)customLabel;
-(BOOL)hasSubmittedRAP;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)setLastUpdateDate:(double)arg1 ;
-(double)lastUpdateDate;
@end

