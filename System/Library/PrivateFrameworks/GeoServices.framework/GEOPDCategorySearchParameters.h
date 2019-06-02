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

@class PBUnknownFields, GEOPDRecentRouteInfo, NSData, GEOPDViewportInfo;

@interface GEOPDCategorySearchParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _blurredHourOfDay;
	unsigned _dayOfWeek;
	unsigned _maxResults;
	GEOPDRecentRouteInfo* _recentRouteInfo;
	int _searchType;
	NSData* _suggestionEntryMetadata;
	GEOPDViewportInfo* _viewportInfo;
	SCD_Struct_GE70 _has;

}

@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) unsigned maxResults;                                 //@synthesize maxResults=_maxResults - In the implementation block
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo;                    //@synthesize viewportInfo=_viewportInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata;                    //@synthesize suggestionEntryMetadata=_suggestionEntryMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasBlurredHourOfDay; 
@property (assign,nonatomic) unsigned blurredHourOfDay;                           //@synthesize blurredHourOfDay=_blurredHourOfDay - In the implementation block
@property (assign,nonatomic) BOOL hasDayOfWeek; 
@property (assign,nonatomic) unsigned dayOfWeek;                                  //@synthesize dayOfWeek=_dayOfWeek - In the implementation block
@property (assign,nonatomic) BOOL hasSearchType; 
@property (assign,nonatomic) int searchType;                                      //@synthesize searchType=_searchType - In the implementation block
@property (nonatomic,readonly) BOOL hasRecentRouteInfo; 
@property (nonatomic,retain) GEOPDRecentRouteInfo * recentRouteInfo;              //@synthesize recentRouteInfo=_recentRouteInfo - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setSearchType:(int)arg1 ;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(BOOL)hasViewportInfo;
-(unsigned)maxResults;
-(void)setMaxResults:(unsigned)arg1 ;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(BOOL)hasMaxResults;
-(GEOPDViewportInfo *)viewportInfo;
-(int)searchType;
-(void)setHasSearchType:(BOOL)arg1 ;
-(BOOL)hasSearchType;
-(id)searchTypeAsString:(int)arg1 ;
-(int)StringAsSearchType:(id)arg1 ;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionEntryMetadata;
-(NSData *)suggestionEntryMetadata;
-(void)setRecentRouteInfo:(GEOPDRecentRouteInfo *)arg1 ;
-(void)setBlurredHourOfDay:(unsigned)arg1 ;
-(void)setHasBlurredHourOfDay:(BOOL)arg1 ;
-(BOOL)hasBlurredHourOfDay;
-(void)setDayOfWeek:(unsigned)arg1 ;
-(void)setHasDayOfWeek:(BOOL)arg1 ;
-(BOOL)hasDayOfWeek;
-(BOOL)hasRecentRouteInfo;
-(unsigned)blurredHourOfDay;
-(unsigned)dayOfWeek;
-(GEOPDRecentRouteInfo *)recentRouteInfo;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

