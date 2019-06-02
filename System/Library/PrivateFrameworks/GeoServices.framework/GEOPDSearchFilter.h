/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDBrandFilter, GEOPDCategoryFilter, GEOPDSearchVenueFilter;

@interface GEOPDSearchFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDBrandFilter* _brandFilter;
	GEOPDCategoryFilter* _categoryFilter;
	GEOPDSearchVenueFilter* _venueFilter;

}

@property (nonatomic,readonly) BOOL hasVenueFilter; 
@property (nonatomic,retain) GEOPDSearchVenueFilter * venueFilter;              //@synthesize venueFilter=_venueFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasCategoryFilter; 
@property (nonatomic,retain) GEOPDCategoryFilter * categoryFilter;              //@synthesize categoryFilter=_categoryFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasBrandFilter; 
@property (nonatomic,retain) GEOPDBrandFilter * brandFilter;                    //@synthesize brandFilter=_brandFilter - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setVenueFilter:(GEOPDSearchVenueFilter *)arg1 ;
-(void)setCategoryFilter:(GEOPDCategoryFilter *)arg1 ;
-(void)setBrandFilter:(GEOPDBrandFilter *)arg1 ;
-(BOOL)hasVenueFilter;
-(BOOL)hasCategoryFilter;
-(BOOL)hasBrandFilter;
-(GEOPDSearchVenueFilter *)venueFilter;
-(GEOPDCategoryFilter *)categoryFilter;
-(GEOPDBrandFilter *)brandFilter;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

