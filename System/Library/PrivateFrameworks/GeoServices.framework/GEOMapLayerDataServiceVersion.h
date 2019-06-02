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

@interface GEOMapLayerDataServiceVersion : PBCodable <NSCopying> {

	unsigned _dataVersion;
	unsigned _formatVersion;
	unsigned _patchVersion;
	SCD_Struct_GE23 _has;

}

@property (assign,nonatomic) BOOL hasDataVersion; 
@property (assign,nonatomic) unsigned dataVersion;                //@synthesize dataVersion=_dataVersion - In the implementation block
@property (assign,nonatomic) BOOL hasFormatVersion; 
@property (assign,nonatomic) unsigned formatVersion;              //@synthesize formatVersion=_formatVersion - In the implementation block
@property (assign,nonatomic) BOOL hasPatchVersion; 
@property (assign,nonatomic) unsigned patchVersion;               //@synthesize patchVersion=_patchVersion - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDataVersion:(unsigned)arg1 ;
-(BOOL)hasDataVersion;
-(unsigned)dataVersion;
-(void)setHasDataVersion:(BOOL)arg1 ;
-(void)setFormatVersion:(unsigned)arg1 ;
-(void)setHasFormatVersion:(BOOL)arg1 ;
-(BOOL)hasFormatVersion;
-(void)setPatchVersion:(unsigned)arg1 ;
-(void)setHasPatchVersion:(BOOL)arg1 ;
-(BOOL)hasPatchVersion;
-(unsigned)patchVersion;
-(unsigned)formatVersion;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

