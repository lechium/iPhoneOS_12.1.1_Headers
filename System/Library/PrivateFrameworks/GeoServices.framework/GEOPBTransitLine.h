/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitNamedItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPBTransitArtwork, GEOPBTransitLineDisplayHints, NSString, GEOStyleAttributes;

@interface GEOPBTransitLine : PBCodable <GEOTransitNamedItem, NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _muid;
	GEOPBTransitTimeRange* _operatingHours;
	unsigned long long _operatingHoursCount;
	unsigned long long _operatingHoursSpace;
	GEOPBTransitArtwork* _alternateArtwork;
	GEOPBTransitArtwork* _artwork;
	GEOPBTransitLineDisplayHints* _displayHints;
	int _guidanceSnappingType;
	NSString* _lineColor;
	unsigned _lineIndex;
	GEOPBTransitArtwork* _modeArtwork;
	NSString* _nameDisplayString;
	int _placeDisplayStyle;
	int _preferredDepartureTimeStyle;
	GEOStyleAttributes* _styleAttributes;
	unsigned _systemIndex;
	int _transitType;
	SCD_Struct_GE75 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (assign,nonatomic) BOOL hasLineIndex; 
@property (assign,nonatomic) unsigned lineIndex;                                       //@synthesize lineIndex=_lineIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * artwork;                            //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,readonly) BOOL hasModeArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * modeArtwork;                        //@synthesize modeArtwork=_modeArtwork - In the implementation block
@property (nonatomic,readonly) BOOL hasAlternateArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * alternateArtwork;                   //@synthesize alternateArtwork=_alternateArtwork - In the implementation block
@property (assign,nonatomic) unsigned long long muid;                                  //@synthesize muid=_muid - In the implementation block
@property (assign,nonatomic) BOOL hasGuidanceSnappingType; 
@property (assign,nonatomic) int guidanceSnappingType;                                 //@synthesize guidanceSnappingType=_guidanceSnappingType - In the implementation block
@property (nonatomic,readonly) BOOL hasLineColor; 
@property (nonatomic,retain) NSString * lineColor;                                     //@synthesize lineColor=_lineColor - In the implementation block
@property (assign,nonatomic) BOOL hasSystemIndex; 
@property (assign,nonatomic) unsigned systemIndex;                                     //@synthesize systemIndex=_systemIndex - In the implementation block
@property (assign,nonatomic) BOOL hasTransitType; 
@property (assign,nonatomic) int transitType;                                          //@synthesize transitType=_transitType - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredDepartureTimeStyle; 
@property (assign,nonatomic) int preferredDepartureTimeStyle;                          //@synthesize preferredDepartureTimeStyle=_preferredDepartureTimeStyle - In the implementation block
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes;                     //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (nonatomic,readonly) unsigned long long operatingHoursCount; 
@property (nonatomic,readonly) GEOPBTransitTimeRange* operatingHours; 
@property (nonatomic,readonly) BOOL hasDisplayHints; 
@property (nonatomic,retain) GEOPBTransitLineDisplayHints * displayHints;              //@synthesize displayHints=_displayHints - In the implementation block
@property (nonatomic,readonly) BOOL hasNameDisplayString; 
@property (nonatomic,retain) NSString * nameDisplayString;                             //@synthesize nameDisplayString=_nameDisplayString - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceDisplayStyle; 
@property (assign,nonatomic) int placeDisplayStyle;                                    //@synthesize placeDisplayStyle=_placeDisplayStyle - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(BOOL)hasStyleAttributes;
-(void)setDisplayHints:(GEOPBTransitLineDisplayHints *)arg1 ;
-(BOOL)hasDisplayHints;
-(GEOPBTransitLineDisplayHints *)displayHints;
-(id)bestName;
-(void)clearOperatingHours;
-(unsigned long long)operatingHoursCount;
-(GEOPBTransitTimeRange)operatingHoursAtIndex:(unsigned long long)arg1 ;
-(void)addOperatingHours:(GEOPBTransitTimeRange)arg1 ;
-(GEOPBTransitTimeRange*)operatingHours;
-(void)setOperatingHours:(GEOPBTransitTimeRange*)arg1 count:(unsigned long long)arg2 ;
-(void)setArtwork:(GEOPBTransitArtwork *)arg1 ;
-(void)setModeArtwork:(GEOPBTransitArtwork *)arg1 ;
-(void)setNameDisplayString:(NSString *)arg1 ;
-(void)setAlternateArtwork:(GEOPBTransitArtwork *)arg1 ;
-(void)setLineIndex:(unsigned)arg1 ;
-(void)setHasLineIndex:(BOOL)arg1 ;
-(BOOL)hasLineIndex;
-(BOOL)hasArtwork;
-(BOOL)hasModeArtwork;
-(BOOL)hasAlternateArtwork;
-(int)guidanceSnappingType;
-(void)setGuidanceSnappingType:(int)arg1 ;
-(void)setHasGuidanceSnappingType:(BOOL)arg1 ;
-(BOOL)hasGuidanceSnappingType;
-(id)guidanceSnappingTypeAsString:(int)arg1 ;
-(int)StringAsGuidanceSnappingType:(id)arg1 ;
-(BOOL)hasLineColor;
-(void)setSystemIndex:(unsigned)arg1 ;
-(void)setHasSystemIndex:(BOOL)arg1 ;
-(BOOL)hasSystemIndex;
-(void)setTransitType:(int)arg1 ;
-(void)setHasTransitType:(BOOL)arg1 ;
-(BOOL)hasTransitType;
-(int)preferredDepartureTimeStyle;
-(void)setPreferredDepartureTimeStyle:(int)arg1 ;
-(void)setHasPreferredDepartureTimeStyle:(BOOL)arg1 ;
-(BOOL)hasPreferredDepartureTimeStyle;
-(id)preferredDepartureTimeStyleAsString:(int)arg1 ;
-(int)StringAsPreferredDepartureTimeStyle:(id)arg1 ;
-(BOOL)hasNameDisplayString;
-(int)placeDisplayStyle;
-(void)setPlaceDisplayStyle:(int)arg1 ;
-(void)setHasPlaceDisplayStyle:(BOOL)arg1 ;
-(BOOL)hasPlaceDisplayStyle;
-(id)placeDisplayStyleAsString:(int)arg1 ;
-(int)StringAsPlaceDisplayStyle:(id)arg1 ;
-(unsigned)lineIndex;
-(GEOPBTransitArtwork *)artwork;
-(GEOPBTransitArtwork *)modeArtwork;
-(GEOPBTransitArtwork *)alternateArtwork;
-(unsigned)systemIndex;
-(int)transitType;
-(NSString *)nameDisplayString;
-(id)geoTransitLineWithSystem:(id)arg1 ;
-(void)setLineColor:(NSString *)arg1 ;
-(NSString *)lineColor;
-(void)dealloc;
-(id)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(GEOStyleAttributes *)styleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
@end

