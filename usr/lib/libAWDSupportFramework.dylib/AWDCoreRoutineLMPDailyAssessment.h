/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineLMPDailyAssessment : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _dailyEvents;
	int _eventsWithLMPLocation;
	int _eventsWithLocation;
	int _eventsWithMaybeLocation;
	int _visitLMPLocation;
	int _visitLocation;
	int _visitMaybeLocation;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDailyEvents; 
@property (assign,nonatomic) int dailyEvents;                              //@synthesize dailyEvents=_dailyEvents - In the implementation block
@property (assign,nonatomic) BOOL hasEventsWithLocation; 
@property (assign,nonatomic) int eventsWithLocation;                       //@synthesize eventsWithLocation=_eventsWithLocation - In the implementation block
@property (assign,nonatomic) BOOL hasEventsWithMaybeLocation; 
@property (assign,nonatomic) int eventsWithMaybeLocation;                  //@synthesize eventsWithMaybeLocation=_eventsWithMaybeLocation - In the implementation block
@property (assign,nonatomic) BOOL hasEventsWithLMPLocation; 
@property (assign,nonatomic) int eventsWithLMPLocation;                    //@synthesize eventsWithLMPLocation=_eventsWithLMPLocation - In the implementation block
@property (assign,nonatomic) BOOL hasVisitLocation; 
@property (assign,nonatomic) int visitLocation;                            //@synthesize visitLocation=_visitLocation - In the implementation block
@property (assign,nonatomic) BOOL hasVisitMaybeLocation; 
@property (assign,nonatomic) int visitMaybeLocation;                       //@synthesize visitMaybeLocation=_visitMaybeLocation - In the implementation block
@property (assign,nonatomic) BOOL hasVisitLMPLocation; 
@property (assign,nonatomic) int visitLMPLocation;                         //@synthesize visitLMPLocation=_visitLMPLocation - In the implementation block
-(void)setDailyEvents:(int)arg1 ;
-(void)setHasDailyEvents:(BOOL)arg1 ;
-(BOOL)hasDailyEvents;
-(void)setEventsWithLocation:(int)arg1 ;
-(void)setHasEventsWithLocation:(BOOL)arg1 ;
-(BOOL)hasEventsWithLocation;
-(void)setEventsWithMaybeLocation:(int)arg1 ;
-(void)setHasEventsWithMaybeLocation:(BOOL)arg1 ;
-(BOOL)hasEventsWithMaybeLocation;
-(void)setEventsWithLMPLocation:(int)arg1 ;
-(void)setHasEventsWithLMPLocation:(BOOL)arg1 ;
-(BOOL)hasEventsWithLMPLocation;
-(void)setVisitLocation:(int)arg1 ;
-(void)setHasVisitLocation:(BOOL)arg1 ;
-(BOOL)hasVisitLocation;
-(void)setVisitMaybeLocation:(int)arg1 ;
-(void)setHasVisitMaybeLocation:(BOOL)arg1 ;
-(BOOL)hasVisitMaybeLocation;
-(void)setVisitLMPLocation:(int)arg1 ;
-(void)setHasVisitLMPLocation:(BOOL)arg1 ;
-(BOOL)hasVisitLMPLocation;
-(int)dailyEvents;
-(int)eventsWithLocation;
-(int)eventsWithMaybeLocation;
-(int)eventsWithLMPLocation;
-(int)visitLocation;
-(int)visitMaybeLocation;
-(int)visitLMPLocation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

