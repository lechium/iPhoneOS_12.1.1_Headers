/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDAutocompleteEntryAddress, GEOPDAutocompleteEntryBrandProfile, GEOPDAutocompleteEntryBusiness, GEOPDAutocompleteEntryCategory, GEOPDAutocompleteEntryClientResolved, GEOPDAutocompleteEntryDirectionIntent, GEOPDAutocompleteEntryHighlightLine, GEOPDAutocompleteEntryQuery, GEOPDRetainedSearchMetadata;

@interface GEOPDAutocompleteEntry : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDAutocompleteEntryAddress* _address;
	GEOPDAutocompleteEntryBrandProfile* _brandProfile;
	GEOPDAutocompleteEntryBusiness* _business;
	GEOPDAutocompleteEntryCategory* _category;
	GEOPDAutocompleteEntryClientResolved* _clientResolved;
	GEOPDAutocompleteEntryDirectionIntent* _directionIntent;
	GEOPDAutocompleteEntryHighlightLine* _highlightExtra;
	GEOPDAutocompleteEntryHighlightLine* _highlightMain;
	GEOPDAutocompleteEntryQuery* _query;
	GEOPDRetainedSearchMetadata* _retainSearch;
	int _sortPriority;
	int _type;
	SCD_Struct_GE22 _has;

}

@property (nonatomic,readonly) BOOL hasHighlightMain; 
@property (nonatomic,retain) GEOPDAutocompleteEntryHighlightLine * highlightMain;                  //@synthesize highlightMain=_highlightMain - In the implementation block
@property (nonatomic,readonly) BOOL hasHighlightExtra; 
@property (nonatomic,retain) GEOPDAutocompleteEntryHighlightLine * highlightExtra;                 //@synthesize highlightExtra=_highlightExtra - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) GEOPDAutocompleteEntryQuery * query;                                  //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) BOOL hasBusiness; 
@property (nonatomic,retain) GEOPDAutocompleteEntryBusiness * business;                            //@synthesize business=_business - In the implementation block
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) GEOPDAutocompleteEntryAddress * address;                              //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) GEOPDAutocompleteEntryCategory * category;                            //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) BOOL hasBrandProfile; 
@property (nonatomic,retain) GEOPDAutocompleteEntryBrandProfile * brandProfile;                    //@synthesize brandProfile=_brandProfile - In the implementation block
@property (nonatomic,readonly) BOOL hasClientResolved; 
@property (nonatomic,retain) GEOPDAutocompleteEntryClientResolved * clientResolved;                //@synthesize clientResolved=_clientResolved - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionIntent; 
@property (nonatomic,retain) GEOPDAutocompleteEntryDirectionIntent * directionIntent;              //@synthesize directionIntent=_directionIntent - In the implementation block
@property (nonatomic,readonly) BOOL hasRetainSearch; 
@property (nonatomic,retain) GEOPDRetainedSearchMetadata * retainSearch;                           //@synthesize retainSearch=_retainSearch - In the implementation block
@property (assign,nonatomic) BOOL hasSortPriority; 
@property (assign,nonatomic) int sortPriority;                                                     //@synthesize sortPriority=_sortPriority - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasQuery;
-(BOOL)hasCategory;
-(void)setDirectionIntent:(GEOPDAutocompleteEntryDirectionIntent *)arg1 ;
-(BOOL)hasDirectionIntent;
-(GEOPDAutocompleteEntryDirectionIntent *)directionIntent;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setAddress:(GEOPDAutocompleteEntryAddress *)arg1 ;
-(BOOL)hasAddress;
-(GEOPDAutocompleteEntryBusiness *)business;
-(void)setBusiness:(GEOPDAutocompleteEntryBusiness *)arg1 ;
-(BOOL)hasBusiness;
-(BOOL)hasHighlightMain;
-(GEOPDAutocompleteEntryHighlightLine *)highlightMain;
-(BOOL)hasHighlightExtra;
-(GEOPDAutocompleteEntryHighlightLine *)highlightExtra;
-(GEOPDAutocompleteEntryClientResolved *)clientResolved;
-(GEOPDRetainedSearchMetadata *)retainSearch;
-(BOOL)hasSortPriority;
-(int)sortPriority;
-(void)setSortPriority:(int)arg1 ;
-(void)setHasSortPriority:(BOOL)arg1 ;
-(void)setHighlightMain:(GEOPDAutocompleteEntryHighlightLine *)arg1 ;
-(void)setHighlightExtra:(GEOPDAutocompleteEntryHighlightLine *)arg1 ;
-(void)setBrandProfile:(GEOPDAutocompleteEntryBrandProfile *)arg1 ;
-(void)setClientResolved:(GEOPDAutocompleteEntryClientResolved *)arg1 ;
-(void)setRetainSearch:(GEOPDRetainedSearchMetadata *)arg1 ;
-(BOOL)hasBrandProfile;
-(BOOL)hasClientResolved;
-(BOOL)hasRetainSearch;
-(GEOPDAutocompleteEntryBrandProfile *)brandProfile;
-(void)setQuery:(GEOPDAutocompleteEntryQuery *)arg1 ;
-(GEOPDAutocompleteEntryAddress *)address;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)setCategory:(GEOPDAutocompleteEntryCategory *)arg1 ;
-(GEOPDAutocompleteEntryCategory *)category;
-(GEOPDAutocompleteEntryQuery *)query;
@end

