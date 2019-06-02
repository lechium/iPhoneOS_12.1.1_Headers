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

@class PBUnknownFields, NSMutableArray;

@interface GEORegionalResource : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOTileSetRegion* _tileRanges;
	unsigned long long _tileRangesCount;
	unsigned long long _tileRangesSpace;
	NSMutableArray* _attributions;
	NSMutableArray* _iconChecksums;
	NSMutableArray* _icons;
	unsigned _x;
	unsigned _y;
	unsigned _z;
	SCD_Struct_GE23 _has;

}

@property (assign,nonatomic) BOOL hasX; 
@property (assign,x,nonatomic) unsigned x;                                      //@synthesize x=_x - In the implementation block
@property (assign,nonatomic) BOOL hasY; 
@property (assign,y,nonatomic) unsigned y;                                      //@synthesize y=_y - In the implementation block
@property (assign,nonatomic) BOOL hasZ; 
@property (assign,z,nonatomic) unsigned z;                                      //@synthesize z=_z - In the implementation block
@property (nonatomic,retain) NSMutableArray * icons;                            //@synthesize icons=_icons - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributions;                     //@synthesize attributions=_attributions - In the implementation block
@property (nonatomic,retain) NSMutableArray * iconChecksums;                    //@synthesize iconChecksums=_iconChecksums - In the implementation block
@property (nonatomic,readonly) unsigned long long tileRangesCount; 
@property (nonatomic,readonly) GEOTileSetRegion* tileRanges; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)attributionType;
+(Class)iconType;
+(Class)iconChecksumType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)addAttribution:(id)arg1 ;
-(unsigned long long)attributionsCount;
-(void)clearAttributions;
-(id)attributionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)attributions;
-(void)setAttributions:(NSMutableArray *)arg1 ;
-(void)addIcon:(id)arg1 ;
-(void)addIconChecksum:(id)arg1 ;
-(unsigned long long)iconsCount;
-(void)clearIcons;
-(id)iconAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)iconChecksumsCount;
-(void)clearIconChecksums;
-(id)iconChecksumAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)iconChecksums;
-(void)setIconChecksums:(NSMutableArray *)arg1 ;
-(void)clearTileRanges;
-(unsigned long long)tileRangesCount;
-(GEOTileSetRegion)tileRangeAtIndex:(unsigned long long)arg1 ;
-(void)addTileRange:(GEOTileSetRegion)arg1 ;
-(void)setHasX:(BOOL)arg1 ;
-(BOOL)hasX;
-(void)setHasY:(BOOL)arg1 ;
-(BOOL)hasY;
-(void)setHasZ:(BOOL)arg1 ;
-(BOOL)hasZ;
-(GEOTileSetRegion*)tileRanges;
-(void)setTileRanges:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)icons;
-(id)dictionaryRepresentation;
-(unsigned)x;
-(void)setX:(unsigned)arg1 ;
-(unsigned)y;
-(void)setY:(unsigned)arg1 ;
-(unsigned)z;
-(void)setZ:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIcons:(NSMutableArray *)arg1 ;
@end

