/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDActivityAWDActivityExerciseMinuteHour : PBCodable <NSCopying> {

	long long _exerciseMinutes;
	long long _hourSinceMidnight;
	SCD_Struct_HD11 _has;

}

@property (assign,nonatomic) BOOL hasHourSinceMidnight; 
@property (assign,nonatomic) long long hourSinceMidnight;              //@synthesize hourSinceMidnight=_hourSinceMidnight - In the implementation block
@property (assign,nonatomic) BOOL hasExerciseMinutes; 
@property (assign,nonatomic) long long exerciseMinutes;                //@synthesize exerciseMinutes=_exerciseMinutes - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHourSinceMidnight:(long long)arg1 ;
-(void)setHasHourSinceMidnight:(BOOL)arg1 ;
-(BOOL)hasHourSinceMidnight;
-(void)setExerciseMinutes:(long long)arg1 ;
-(void)setHasExerciseMinutes:(BOOL)arg1 ;
-(BOOL)hasExerciseMinutes;
-(long long)hourSinceMidnight;
-(long long)exerciseMinutes;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
