/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOPDSource : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _resultProviderId;
	NSString* _sourceId;
	NSString* _version;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId;                           //@synthesize resultProviderId=_resultProviderId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceId; 
@property (nonatomic,retain) NSString * sourceId;                            //@synthesize sourceId=_sourceId - In the implementation block
@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) NSString * version;                             //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setSourceId:(NSString *)arg1 ;
-(void)setResultProviderId:(int)arg1 ;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(BOOL)hasResultProviderId;
-(BOOL)hasSourceId;
-(BOOL)hasVersion;
-(int)resultProviderId;
-(NSString *)sourceId;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

