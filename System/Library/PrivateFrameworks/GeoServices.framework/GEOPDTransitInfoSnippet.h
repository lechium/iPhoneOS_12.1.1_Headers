/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray, NSString;

@interface GEOPDTransitInfoSnippet : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _artworks;
	NSMutableArray* _labels;
	NSString* _searchDisplayName;
	NSMutableArray* _systemNames;

}

@property (nonatomic,retain) NSMutableArray * systemNames;                   //@synthesize systemNames=_systemNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * artworks;                      //@synthesize artworks=_artworks - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchDisplayName; 
@property (nonatomic,retain) NSString * searchDisplayName;                   //@synthesize searchDisplayName=_searchDisplayName - In the implementation block
@property (nonatomic,retain) NSMutableArray * labels;                        //@synthesize labels=_labels - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)artworkType;
+(id)transitInfoSnippetForPlaceData:(id)arg1 ;
+(Class)labelType;
+(Class)systemNameType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)artworksCount;
-(NSMutableArray *)artworks;
-(void)addLabel:(id)arg1 ;
-(unsigned long long)labelsCount;
-(void)clearLabels;
-(id)labelAtIndex:(unsigned long long)arg1 ;
-(void)setSearchDisplayName:(NSString *)arg1 ;
-(BOOL)hasSearchDisplayName;
-(NSString *)searchDisplayName;
-(id)artworkAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)systemNamesCount;
-(NSMutableArray *)systemNames;
-(void)addSystemName:(id)arg1 ;
-(void)addArtwork:(id)arg1 ;
-(void)clearSystemNames;
-(id)systemNameAtIndex:(unsigned long long)arg1 ;
-(void)clearArtworks;
-(void)setSystemNames:(NSMutableArray *)arg1 ;
-(void)setArtworks:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)setLabels:(NSMutableArray *)arg1 ;
-(NSMutableArray *)labels;
@end
