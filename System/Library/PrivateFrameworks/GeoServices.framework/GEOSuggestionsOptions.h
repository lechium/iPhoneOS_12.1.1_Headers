/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSData;

@interface GEOSuggestionsOptions : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _entriesType;
	int _listType;
	NSData* _suggestionEntryMetadata;
	NSData* _suggestionMetadata;
	BOOL _includeRankingFeatures;
	BOOL _normalizePOIs;
	SCD_Struct_GE70 _has;

}

@property (assign,nonatomic) BOOL hasListType; 
@property (assign,nonatomic) int listType;                                   //@synthesize listType=_listType - In the implementation block
@property (assign,nonatomic) BOOL hasEntriesType; 
@property (assign,nonatomic) int entriesType;                                //@synthesize entriesType=_entriesType - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionMetadata; 
@property (nonatomic,retain) NSData * suggestionMetadata;                    //@synthesize suggestionMetadata=_suggestionMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata;               //@synthesize suggestionEntryMetadata=_suggestionEntryMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasNormalizePOIs; 
@property (assign,nonatomic) BOOL normalizePOIs;                             //@synthesize normalizePOIs=_normalizePOIs - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeRankingFeatures; 
@property (assign,nonatomic) BOOL includeRankingFeatures;                    //@synthesize includeRankingFeatures=_includeRankingFeatures - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setListType:(int)arg1 ;
-(void)setSuggestionMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionMetadata;
-(NSData *)suggestionMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionEntryMetadata;
-(NSData *)suggestionEntryMetadata;
-(int)listType;
-(void)setHasListType:(BOOL)arg1 ;
-(BOOL)hasListType;
-(id)listTypeAsString:(int)arg1 ;
-(int)StringAsListType:(id)arg1 ;
-(int)entriesType;
-(void)setEntriesType:(int)arg1 ;
-(void)setHasEntriesType:(BOOL)arg1 ;
-(BOOL)hasEntriesType;
-(id)entriesTypeAsString:(int)arg1 ;
-(int)StringAsEntriesType:(id)arg1 ;
-(void)setNormalizePOIs:(BOOL)arg1 ;
-(void)setHasNormalizePOIs:(BOOL)arg1 ;
-(BOOL)hasNormalizePOIs;
-(void)setIncludeRankingFeatures:(BOOL)arg1 ;
-(void)setHasIncludeRankingFeatures:(BOOL)arg1 ;
-(BOOL)hasIncludeRankingFeatures;
-(BOOL)normalizePOIs;
-(BOOL)includeRankingFeatures;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
