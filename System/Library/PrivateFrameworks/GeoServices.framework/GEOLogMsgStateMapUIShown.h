/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateMapUIShown : PBCodable <NSCopying> {

	BOOL _isAirQualityShown;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasIsAirQualityShown; 
@property (assign,nonatomic) BOOL isAirQualityShown;                 //@synthesize isAirQualityShown=_isAirQualityShown - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setIsAirQualityShown:(BOOL)arg1 ;
-(void)setHasIsAirQualityShown:(BOOL)arg1 ;
-(BOOL)hasIsAirQualityShown;
-(BOOL)isAirQualityShown;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
