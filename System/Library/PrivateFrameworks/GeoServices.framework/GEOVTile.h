/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, GEOVConnectivity, NSData;

@interface GEOVTile : PBCodable <NSCopying> {

	NSMutableArray* _coastlines;
	GEOVConnectivity* _connectivity;
	NSMutableArray* _labelLanguages;
	NSData* _labels;
	NSMutableArray* _lines;
	int _minZ;
	NSMutableArray* _points;
	NSMutableArray* _polygons;
	unsigned _sectionDeltaLengthBits;
	unsigned _vertexBits;
	NSData* _vertices;
	int _zBits;
	SCD_Struct_GE70 _has;

}

@property (nonatomic,retain) NSMutableArray * lines;                       //@synthesize lines=_lines - In the implementation block
@property (nonatomic,retain) NSMutableArray * polygons;                    //@synthesize polygons=_polygons - In the implementation block
@property (nonatomic,retain) NSMutableArray * points;                      //@synthesize points=_points - In the implementation block
@property (nonatomic,readonly) BOOL hasLabels; 
@property (nonatomic,retain) NSData * labels;                              //@synthesize labels=_labels - In the implementation block
@property (nonatomic,readonly) BOOL hasVertices; 
@property (nonatomic,retain) NSData * vertices;                            //@synthesize vertices=_vertices - In the implementation block
@property (nonatomic,readonly) BOOL hasConnectivity; 
@property (nonatomic,retain) GEOVConnectivity * connectivity;              //@synthesize connectivity=_connectivity - In the implementation block
@property (assign,nonatomic) BOOL hasMinZ; 
@property (assign,nonatomic) int minZ;                                     //@synthesize minZ=_minZ - In the implementation block
@property (assign,nonatomic) BOOL hasZBits; 
@property (assign,nonatomic) int zBits;                                    //@synthesize zBits=_zBits - In the implementation block
@property (nonatomic,retain) NSMutableArray * coastlines;                  //@synthesize coastlines=_coastlines - In the implementation block
@property (nonatomic,retain) NSMutableArray * labelLanguages;              //@synthesize labelLanguages=_labelLanguages - In the implementation block
@property (assign,nonatomic) BOOL hasVertexBits; 
@property (assign,nonatomic) unsigned vertexBits;                          //@synthesize vertexBits=_vertexBits - In the implementation block
@property (assign,nonatomic) BOOL hasSectionDeltaLengthBits; 
@property (assign,nonatomic) unsigned sectionDeltaLengthBits;              //@synthesize sectionDeltaLengthBits=_sectionDeltaLengthBits - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)lines;
-(NSMutableArray *)points;
-(void)clearPoints;
-(void)setVertices:(NSData *)arg1 ;
-(BOOL)hasVertices;
-(NSData *)vertices;
-(void)addLine:(id)arg1 ;
-(unsigned long long)linesCount;
-(void)clearLines;
-(id)lineAtIndex:(unsigned long long)arg1 ;
-(void)setLines:(NSMutableArray *)arg1 ;
-(NSMutableArray *)polygons;
-(unsigned long long)polygonsCount;
-(NSMutableArray *)coastlines;
-(unsigned long long)coastlinesCount;
-(void)addPolygon:(id)arg1 ;
-(void)addCoastlines:(id)arg1 ;
-(void)addLabelLanguage:(id)arg1 ;
-(void)clearPolygons;
-(id)polygonAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)pointsCount;
-(id)pointAtIndex:(unsigned long long)arg1 ;
-(void)setConnectivity:(GEOVConnectivity *)arg1 ;
-(void)clearCoastlines;
-(id)coastlinesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)labelLanguagesCount;
-(void)clearLabelLanguages;
-(id)labelLanguageAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasLabels;
-(BOOL)hasConnectivity;
-(void)setMinZ:(int)arg1 ;
-(void)setHasMinZ:(BOOL)arg1 ;
-(BOOL)hasMinZ;
-(void)setZBits:(int)arg1 ;
-(void)setHasZBits:(BOOL)arg1 ;
-(BOOL)hasZBits;
-(unsigned)vertexBits;
-(void)setVertexBits:(unsigned)arg1 ;
-(void)setHasVertexBits:(BOOL)arg1 ;
-(BOOL)hasVertexBits;
-(unsigned)sectionDeltaLengthBits;
-(void)setSectionDeltaLengthBits:(unsigned)arg1 ;
-(void)setHasSectionDeltaLengthBits:(BOOL)arg1 ;
-(BOOL)hasSectionDeltaLengthBits;
-(void)setPolygons:(NSMutableArray *)arg1 ;
-(void)setPoints:(NSMutableArray *)arg1 ;
-(GEOVConnectivity *)connectivity;
-(int)minZ;
-(int)zBits;
-(void)setCoastlines:(NSMutableArray *)arg1 ;
-(NSMutableArray *)labelLanguages;
-(void)setLabelLanguages:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)addPoint:(id)arg1 ;
-(void)setLabels:(NSData *)arg1 ;
-(NSData *)labels;
@end
