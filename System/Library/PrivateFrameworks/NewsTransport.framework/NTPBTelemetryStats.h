/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBTelemetryStats : PBCodable <NSCopying> {

	long long _count;
	long long _max;
	long long _mean;
	long long _median;
	long long _min;
	long long _percentile95;
	SCD_Struct_NT9 _has;

}

@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) long long count;                     //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL hasMin; 
@property (assign,nonatomic) long long min;                       //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) BOOL hasMax; 
@property (assign,nonatomic) long long max;                       //@synthesize max=_max - In the implementation block
@property (assign,nonatomic) BOOL hasMean; 
@property (assign,nonatomic) long long mean;                      //@synthesize mean=_mean - In the implementation block
@property (assign,nonatomic) BOOL hasMedian; 
@property (assign,nonatomic) long long median;                    //@synthesize median=_median - In the implementation block
@property (assign,nonatomic) BOOL hasPercentile95; 
@property (assign,nonatomic) long long percentile95;              //@synthesize percentile95=_percentile95 - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(long long)mean;
-(long long)min;
-(long long)max;
-(void)setHasPercentile95:(BOOL)arg1 ;
-(BOOL)hasPercentile95;
-(long long)percentile95;
-(void)setPercentile95:(long long)arg1 ;
-(void)setMean:(long long)arg1 ;
-(void)setMedian:(long long)arg1 ;
-(void)setMin:(long long)arg1 ;
-(void)setHasMin:(BOOL)arg1 ;
-(BOOL)hasMin;
-(void)setMax:(long long)arg1 ;
-(void)setHasMax:(BOOL)arg1 ;
-(BOOL)hasMax;
-(void)setHasMean:(BOOL)arg1 ;
-(BOOL)hasMean;
-(void)setHasMedian:(BOOL)arg1 ;
-(BOOL)hasMedian;
-(long long)median;
-(BOOL)isEqual:(id)arg1 ;
-(long long)count;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCount:(long long)arg1 ;
@end
