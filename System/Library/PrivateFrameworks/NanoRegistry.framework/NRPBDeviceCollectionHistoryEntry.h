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

@class NRPBDeviceCollectionDiff;

@interface NRPBDeviceCollectionHistoryEntry : PBCodable <NSCopying> {

	double _date;
	long long _index;
	NRPBDeviceCollectionDiff* _diff;
	SCD_Struct_NR9 _has;

}

@property (assign,nonatomic) BOOL hasIndex; 
@property (assign,nonatomic) long long index;                              //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                                  //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) BOOL hasDiff; 
@property (nonatomic,retain) NRPBDeviceCollectionDiff * diff;              //@synthesize diff=_diff - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIndex;
-(NRPBDeviceCollectionDiff *)diff;
-(void)setDiff:(NRPBDeviceCollectionDiff *)arg1 ;
-(BOOL)hasDiff;
-(BOOL)hasDate;
-(void)setHasDate:(BOOL)arg1 ;
-(void)setHasIndex:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)date;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDate:(double)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

