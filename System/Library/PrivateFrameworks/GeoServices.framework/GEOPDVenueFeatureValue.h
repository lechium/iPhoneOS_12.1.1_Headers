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

@class PBUnknownFields, GEOPDFeatureBuilding, GEOPDFeaturePOI, GEOPDFeatureVenue;

@interface GEOPDVenueFeatureValue : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDFeatureBuilding* _featureBuilding;
	GEOPDFeaturePOI* _featurePoi;
	GEOPDFeatureVenue* _featureVenue;

}

@property (nonatomic,readonly) BOOL hasFeatureVenue; 
@property (nonatomic,retain) GEOPDFeatureVenue * featureVenue;                    //@synthesize featureVenue=_featureVenue - In the implementation block
@property (nonatomic,readonly) BOOL hasFeatureBuilding; 
@property (nonatomic,retain) GEOPDFeatureBuilding * featureBuilding;              //@synthesize featureBuilding=_featureBuilding - In the implementation block
@property (nonatomic,readonly) BOOL hasFeaturePoi; 
@property (nonatomic,retain) GEOPDFeaturePOI * featurePoi;                        //@synthesize featurePoi=_featurePoi - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setFeatureVenue:(GEOPDFeatureVenue *)arg1 ;
-(void)setFeatureBuilding:(GEOPDFeatureBuilding *)arg1 ;
-(void)setFeaturePoi:(GEOPDFeaturePOI *)arg1 ;
-(BOOL)hasFeatureVenue;
-(BOOL)hasFeatureBuilding;
-(BOOL)hasFeaturePoi;
-(GEOPDFeatureVenue *)featureVenue;
-(GEOPDFeatureBuilding *)featureBuilding;
-(GEOPDFeaturePOI *)featurePoi;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

