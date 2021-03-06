/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDAWDHealthKitWorkoutSessionEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _activityType;
	int _eventType;
	NSString* _sessionUUID;
	SCD_Struct_HD3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasActivityType; 
@property (assign,nonatomic) int activityType;                          //@synthesize activityType=_activityType - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) int eventType;                             //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                    //@synthesize sessionUUID=_sessionUUID - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setEventType:(int)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)eventTypeAsString:(int)arg1 ;
-(int)StringAsEventType:(id)arg1 ;
-(NSString *)sessionUUID;
-(void)setHasActivityType:(BOOL)arg1 ;
-(BOOL)hasActivityType;
-(id)activityTypeAsString:(int)arg1 ;
-(int)StringAsActivityType:(id)arg1 ;
-(void)setSessionUUID:(NSString *)arg1 ;
-(BOOL)hasSessionUUID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(int)activityType;
-(id)dictionaryRepresentation;
-(int)eventType;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setActivityType:(int)arg1 ;
@end

