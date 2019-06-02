/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface HDActivityAWDActivityFitnessDailyEvent : PBCodable <NSCopying> {

	SCD_Struct_HD65* _standEventMinutesSinceMidnightRoundedTo10s;
	long long _monthsSinceFirstWatchUsage;
	long long _moveRingCompletionPercentage;
	unsigned long long _timestamp;
	NSMutableArray* _exerciseMinuteHours;
	NSString* _userToken;
	SCD_Struct_HD3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasUserToken; 
@property (nonatomic,retain) NSString * userToken;                                                              //@synthesize userToken=_userToken - In the implementation block
@property (nonatomic,readonly) unsigned long long standEventMinutesSinceMidnightRoundedTo10sCount; 
@property (nonatomic,readonly) long long* standEventMinutesSinceMidnightRoundedTo10s; 
@property (nonatomic,retain) NSMutableArray * exerciseMinuteHours;                                              //@synthesize exerciseMinuteHours=_exerciseMinuteHours - In the implementation block
@property (assign,nonatomic) BOOL hasMoveRingCompletionPercentage; 
@property (assign,nonatomic) long long moveRingCompletionPercentage;                                            //@synthesize moveRingCompletionPercentage=_moveRingCompletionPercentage - In the implementation block
@property (assign,nonatomic) BOOL hasMonthsSinceFirstWatchUsage; 
@property (assign,nonatomic) long long monthsSinceFirstWatchUsage;                                              //@synthesize monthsSinceFirstWatchUsage=_monthsSinceFirstWatchUsage - In the implementation block
+(Class)exerciseMinuteHoursType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setUserToken:(NSString *)arg1 ;
-(void)setMonthsSinceFirstWatchUsage:(long long)arg1 ;
-(void)addStandEventMinutesSinceMidnightRoundedTo10:(long long)arg1 ;
-(void)setExerciseMinuteHours:(NSMutableArray *)arg1 ;
-(void)addExerciseMinuteHours:(id)arg1 ;
-(unsigned long long)standEventMinutesSinceMidnightRoundedTo10sCount;
-(void)clearStandEventMinutesSinceMidnightRoundedTo10s;
-(long long)standEventMinutesSinceMidnightRoundedTo10AtIndex:(unsigned long long)arg1 ;
-(unsigned long long)exerciseMinuteHoursCount;
-(void)clearExerciseMinuteHours;
-(id)exerciseMinuteHoursAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasUserToken;
-(long long*)standEventMinutesSinceMidnightRoundedTo10s;
-(void)setStandEventMinutesSinceMidnightRoundedTo10s:(long long*)arg1 count:(unsigned long long)arg2 ;
-(void)setMoveRingCompletionPercentage:(long long)arg1 ;
-(void)setHasMoveRingCompletionPercentage:(BOOL)arg1 ;
-(BOOL)hasMoveRingCompletionPercentage;
-(void)setHasMonthsSinceFirstWatchUsage:(BOOL)arg1 ;
-(BOOL)hasMonthsSinceFirstWatchUsage;
-(NSString *)userToken;
-(NSMutableArray *)exerciseMinuteHours;
-(long long)moveRingCompletionPercentage;
-(long long)monthsSinceFirstWatchUsage;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
