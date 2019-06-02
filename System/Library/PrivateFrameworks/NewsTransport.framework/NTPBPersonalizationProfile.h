/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBPersonalizationProfile : PBCodable <NSCopying> {

	NSMutableArray* _aggregates;
	NSMutableArray* _histories;

}

@property (nonatomic,retain) NSMutableArray * aggregates;              //@synthesize aggregates=_aggregates - In the implementation block
@property (nonatomic,retain) NSMutableArray * histories;               //@synthesize histories=_histories - In the implementation block
+(Class)aggregatesType;
+(Class)historiesType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addAggregates:(id)arg1 ;
-(void)addHistories:(id)arg1 ;
-(void)clearAggregates;
-(unsigned long long)aggregatesCount;
-(id)aggregatesAtIndex:(unsigned long long)arg1 ;
-(void)clearHistories;
-(unsigned long long)historiesCount;
-(id)historiesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)aggregates;
-(void)setAggregates:(NSMutableArray *)arg1 ;
-(void)setHistories:(NSMutableArray *)arg1 ;
-(NSMutableArray *)histories;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
