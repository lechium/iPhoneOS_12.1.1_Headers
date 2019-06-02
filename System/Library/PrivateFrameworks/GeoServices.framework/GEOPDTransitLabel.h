/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitLabelItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PBUnknownFields, GEOPBTransitArtwork;

@interface GEOPDTransitLabel : PBCodable <GEOTransitLabelItem, NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPBTransitArtwork* _labelArtwork;
	NSString* _labelTextString;
	int _labelType;
	SCD_Struct_GE1 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * labelString; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> labelArtwork; 
@property (assign,nonatomic) BOOL hasLabelType; 
@property (assign,nonatomic) int labelType;                                               //@synthesize labelType=_labelType - In the implementation block
@property (nonatomic,readonly) BOOL hasLabelTextString; 
@property (nonatomic,retain) NSString * labelTextString;                                  //@synthesize labelTextString=_labelTextString - In the implementation block
@property (nonatomic,readonly) BOOL hasLabelArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * labelArtwork;                          //@synthesize labelArtwork=_labelArtwork - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(int)labelType;
-(BOOL)hasLabelType;
-(NSString *)labelTextString;
-(NSString *)labelString;
-(id<GEOTransitArtworkDataSource>)labelArtwork;
-(void)setLabelType:(int)arg1 ;
-(void)setHasLabelType:(BOOL)arg1 ;
-(id)labelTypeAsString:(int)arg1 ;
-(int)StringAsLabelType:(id)arg1 ;
-(void)setLabelArtwork:(id<GEOTransitArtworkDataSource>)arg1 ;
-(void)setLabelTextString:(NSString *)arg1 ;
-(BOOL)hasLabelTextString;
-(BOOL)hasLabelArtwork;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

