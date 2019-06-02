/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse, NSMutableArray, NSString;

@interface GEORPSuggestionList : PBCodable <NSCopying> {

	GEOPDPlaceRequest* _autocompleteRequest;
	GEOPDPlaceResponse* _autocompleteResponse;
	NSMutableArray* _entrys;
	NSString* _query;

}

@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) NSString * query;                                       //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSMutableArray * entrys;                                //@synthesize entrys=_entrys - In the implementation block
@property (nonatomic,readonly) BOOL hasAutocompleteRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * autocompleteRequest;                //@synthesize autocompleteRequest=_autocompleteRequest - In the implementation block
@property (nonatomic,readonly) BOOL hasAutocompleteResponse; 
@property (nonatomic,retain) GEOPDPlaceResponse * autocompleteResponse;              //@synthesize autocompleteResponse=_autocompleteResponse - In the implementation block
+(Class)entryType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasQuery;
-(void)setAutocompleteRequest:(GEOPDPlaceRequest *)arg1 ;
-(void)setAutocompleteResponse:(GEOPDPlaceResponse *)arg1 ;
-(unsigned long long)entrysCount;
-(void)clearEntrys;
-(id)entryAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAutocompleteRequest;
-(BOOL)hasAutocompleteResponse;
-(NSMutableArray *)entrys;
-(void)setEntrys:(NSMutableArray *)arg1 ;
-(GEOPDPlaceRequest *)autocompleteRequest;
-(GEOPDPlaceResponse *)autocompleteResponse;
-(void)setQuery:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(NSString *)query;
-(void)addEntry:(id)arg1 ;
@end
