/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitNamedItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng, NSString, NSMutableArray;

@interface GEOPBTransitStation : PBCodable <GEOTransitNamedItem, NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _muid;
	GEOLatLng* _location;
	NSString* _nameDisplayString;
	unsigned _stationIndex;
	int _structureType;
	NSMutableArray* _zoomNames;
	SCD_Struct_GE23 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (assign,nonatomic) BOOL hasStationIndex; 
@property (assign,nonatomic) unsigned stationIndex;                          //@synthesize stationIndex=_stationIndex - In the implementation block
@property (assign,nonatomic) unsigned long long muid;                        //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location;                           //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasStructureType; 
@property (assign,nonatomic) int structureType;                              //@synthesize structureType=_structureType - In the implementation block
@property (nonatomic,retain) NSMutableArray * zoomNames;                     //@synthesize zoomNames=_zoomNames - In the implementation block
@property (nonatomic,readonly) BOOL hasNameDisplayString; 
@property (nonatomic,retain) NSString * nameDisplayString;                   //@synthesize nameDisplayString=_nameDisplayString - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)zoomNameType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasLocation;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(void)setStationIndex:(unsigned)arg1 ;
-(void)setHasStationIndex:(BOOL)arg1 ;
-(BOOL)hasStationIndex;
-(unsigned long long)muid;
-(unsigned)stationIndex;
-(int)structureType;
-(void)setStructureType:(int)arg1 ;
-(void)setHasStructureType:(BOOL)arg1 ;
-(BOOL)hasStructureType;
-(id)structureTypeAsString:(int)arg1 ;
-(int)StringAsStructureType:(id)arg1 ;
-(id)bestName;
-(void)setNameDisplayString:(NSString *)arg1 ;
-(BOOL)hasNameDisplayString;
-(NSString *)nameDisplayString;
-(void)addZoomName:(id)arg1 ;
-(unsigned long long)zoomNamesCount;
-(void)clearZoomNames;
-(id)zoomNameAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)zoomNames;
-(void)setZoomNames:(NSMutableArray *)arg1 ;
-(id)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLatLng *)location;
-(void)copyTo:(id)arg1 ;
-(void)setLocation:(GEOLatLng *)arg1 ;
@end

