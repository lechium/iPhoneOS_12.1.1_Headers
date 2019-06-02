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

@class NSMutableArray;

@interface NTPBTodayConfig : PBCodable <NSCopying> {

	unsigned long long _backgroundForYouMinimumUpdateInterval;
	unsigned long long _backgroundTrendingByParsecMinimumUpdateInterval;
	unsigned long long _foregroundForYouMinimumUpdateInterval;
	unsigned long long _foregroundTrendingByParsecMinimumUpdateInterval;
	unsigned long long _widgetSlotsLimit;
	NSMutableArray* _todayQueueConfigs;
	SCD_Struct_NT4 _has;

}

@property (nonatomic,retain) NSMutableArray * todayQueueConfigs;                                              //@synthesize todayQueueConfigs=_todayQueueConfigs - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetSlotsLimit; 
@property (assign,nonatomic) unsigned long long widgetSlotsLimit;                                             //@synthesize widgetSlotsLimit=_widgetSlotsLimit - In the implementation block
@property (assign,nonatomic) BOOL hasForegroundForYouMinimumUpdateInterval; 
@property (assign,nonatomic) unsigned long long foregroundForYouMinimumUpdateInterval;                        //@synthesize foregroundForYouMinimumUpdateInterval=_foregroundForYouMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasBackgroundForYouMinimumUpdateInterval; 
@property (assign,nonatomic) unsigned long long backgroundForYouMinimumUpdateInterval;                        //@synthesize backgroundForYouMinimumUpdateInterval=_backgroundForYouMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasForegroundTrendingByParsecMinimumUpdateInterval; 
@property (assign,nonatomic) unsigned long long foregroundTrendingByParsecMinimumUpdateInterval;              //@synthesize foregroundTrendingByParsecMinimumUpdateInterval=_foregroundTrendingByParsecMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasBackgroundTrendingByParsecMinimumUpdateInterval; 
@property (assign,nonatomic) unsigned long long backgroundTrendingByParsecMinimumUpdateInterval;              //@synthesize backgroundTrendingByParsecMinimumUpdateInterval=_backgroundTrendingByParsecMinimumUpdateInterval - In the implementation block
+(Class)todayQueueConfigsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setTodayQueueConfigs:(NSMutableArray *)arg1 ;
-(void)clearTodayQueueConfigs;
-(unsigned long long)todayQueueConfigsCount;
-(id)todayQueueConfigsAtIndex:(unsigned long long)arg1 ;
-(void)setHasWidgetSlotsLimit:(BOOL)arg1 ;
-(BOOL)hasWidgetSlotsLimit;
-(void)setHasForegroundForYouMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasForegroundForYouMinimumUpdateInterval;
-(void)setHasBackgroundForYouMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasBackgroundForYouMinimumUpdateInterval;
-(void)setForegroundTrendingByParsecMinimumUpdateInterval:(unsigned long long)arg1 ;
-(void)setHasForegroundTrendingByParsecMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasForegroundTrendingByParsecMinimumUpdateInterval;
-(void)setBackgroundTrendingByParsecMinimumUpdateInterval:(unsigned long long)arg1 ;
-(void)setHasBackgroundTrendingByParsecMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasBackgroundTrendingByParsecMinimumUpdateInterval;
-(NSMutableArray *)todayQueueConfigs;
-(unsigned long long)widgetSlotsLimit;
-(unsigned long long)foregroundForYouMinimumUpdateInterval;
-(unsigned long long)backgroundForYouMinimumUpdateInterval;
-(unsigned long long)foregroundTrendingByParsecMinimumUpdateInterval;
-(unsigned long long)backgroundTrendingByParsecMinimumUpdateInterval;
-(void)setWidgetSlotsLimit:(unsigned long long)arg1 ;
-(void)setForegroundForYouMinimumUpdateInterval:(unsigned long long)arg1 ;
-(void)setBackgroundForYouMinimumUpdateInterval:(unsigned long long)arg1 ;
-(void)addTodayQueueConfigs:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

