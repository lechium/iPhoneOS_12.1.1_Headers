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

@class PBUnknownFields, NSString, GEOPDPlaceResponse;

@interface GEOCachedCategorySuggestionsPlaceResponse : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _timestamp;
	NSString* _countryCode;
	NSString* _language;
	GEOPDPlaceResponse* _response;
	NSString* _sourceURL;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,readonly) BOOL hasResponse; 
@property (nonatomic,retain) GEOPDPlaceResponse * response;                  //@synthesize response=_response - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceURL; 
@property (nonatomic,retain) NSString * sourceURL;                           //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                         //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                            //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(NSString *)countryCode;
-(BOOL)hasLanguage;
-(void)setCountryCode:(NSString *)arg1 ;
-(BOOL)hasCountryCode;
-(void)setResponse:(GEOPDPlaceResponse *)arg1 ;
-(BOOL)hasResponse;
-(void)setSourceURL:(NSString *)arg1 ;
-(BOOL)hasSourceURL;
-(NSString *)sourceURL;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(double)arg1 ;
-(GEOPDPlaceResponse *)response;
-(void)copyTo:(id)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
@end

