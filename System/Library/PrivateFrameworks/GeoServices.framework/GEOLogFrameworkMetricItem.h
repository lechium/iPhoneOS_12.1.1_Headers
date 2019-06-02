/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogFrameworkMetricItem : PBCodable <NSCopying> {

	unsigned long long _metricItemSize;
	unsigned _metricItemCount;
	unsigned _metricItemIdHash;
	unsigned _metricItemQueueTime;
	unsigned _metricItemRetryCount;
	int _metricItemType;
	SCD_Struct_GE40 _has;

}

@property (assign,nonatomic) BOOL hasMetricItemType; 
@property (assign,nonatomic) int metricItemType;                             //@synthesize metricItemType=_metricItemType - In the implementation block
@property (assign,nonatomic) BOOL hasMetricItemCount; 
@property (assign,nonatomic) unsigned metricItemCount;                       //@synthesize metricItemCount=_metricItemCount - In the implementation block
@property (assign,nonatomic) BOOL hasMetricItemRetryCount; 
@property (assign,nonatomic) unsigned metricItemRetryCount;                  //@synthesize metricItemRetryCount=_metricItemRetryCount - In the implementation block
@property (assign,nonatomic) BOOL hasMetricItemSize; 
@property (assign,nonatomic) unsigned long long metricItemSize;              //@synthesize metricItemSize=_metricItemSize - In the implementation block
@property (assign,nonatomic) BOOL hasMetricItemQueueTime; 
@property (assign,nonatomic) unsigned metricItemQueueTime;                   //@synthesize metricItemQueueTime=_metricItemQueueTime - In the implementation block
@property (assign,nonatomic) BOOL hasMetricItemIdHash; 
@property (assign,nonatomic) unsigned metricItemIdHash;                      //@synthesize metricItemIdHash=_metricItemIdHash - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMetricItemType:(int)arg1 ;
-(void)setMetricItemIdHash:(unsigned)arg1 ;
-(void)setMetricItemCount:(unsigned)arg1 ;
-(void)setMetricItemSize:(unsigned long long)arg1 ;
-(void)setMetricItemRetryCount:(unsigned)arg1 ;
-(void)setMetricItemQueueTime:(unsigned)arg1 ;
-(int)metricItemType;
-(void)setHasMetricItemType:(BOOL)arg1 ;
-(BOOL)hasMetricItemType;
-(id)metricItemTypeAsString:(int)arg1 ;
-(int)StringAsMetricItemType:(id)arg1 ;
-(void)setHasMetricItemCount:(BOOL)arg1 ;
-(BOOL)hasMetricItemCount;
-(void)setHasMetricItemRetryCount:(BOOL)arg1 ;
-(BOOL)hasMetricItemRetryCount;
-(void)setHasMetricItemSize:(BOOL)arg1 ;
-(BOOL)hasMetricItemSize;
-(void)setHasMetricItemQueueTime:(BOOL)arg1 ;
-(BOOL)hasMetricItemQueueTime;
-(void)setHasMetricItemIdHash:(BOOL)arg1 ;
-(BOOL)hasMetricItemIdHash;
-(unsigned)metricItemCount;
-(unsigned)metricItemRetryCount;
-(unsigned long long)metricItemSize;
-(unsigned)metricItemQueueTime;
-(unsigned)metricItemIdHash;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

