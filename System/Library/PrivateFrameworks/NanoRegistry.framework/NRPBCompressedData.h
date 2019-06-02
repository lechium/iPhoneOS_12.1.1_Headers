/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NRPBCompressedData : PBCodable <NSCopying> {

	NSData* _possiblyCompressedData;
	BOOL _compressed;
	SCD_Struct_NR2 _has;

}

@property (assign,nonatomic) BOOL hasCompressed; 
@property (assign,nonatomic) BOOL compressed;                               //@synthesize compressed=_compressed - In the implementation block
@property (nonatomic,readonly) BOOL hasPossiblyCompressedData; 
@property (nonatomic,retain) NSData * possiblyCompressedData;               //@synthesize possiblyCompressedData=_possiblyCompressedData - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setPossiblyCompressedData:(NSData *)arg1 ;
-(NSData *)possiblyCompressedData;
-(BOOL)hasPossiblyCompressedData;
-(void)setHasCompressed:(BOOL)arg1 ;
-(BOOL)hasCompressed;
-(BOOL)compressed;
-(void)setCompressed:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
