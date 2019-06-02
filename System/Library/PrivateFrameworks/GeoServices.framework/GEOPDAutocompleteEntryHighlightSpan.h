/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDAutocompleteEntryHighlightSpan : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _length;
	unsigned _startIndex;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasStartIndex; 
@property (assign,nonatomic) unsigned startIndex;                            //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) BOOL hasLength; 
@property (assign,nonatomic) unsigned length;                                //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasStartIndex;
-(BOOL)hasLength;
-(unsigned)startIndex;
-(void)setHasStartIndex:(BOOL)arg1 ;
-(void)setHasLength:(BOOL)arg1 ;
-(void)setStartIndex:(unsigned)arg1 ;
-(unsigned)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLength:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

