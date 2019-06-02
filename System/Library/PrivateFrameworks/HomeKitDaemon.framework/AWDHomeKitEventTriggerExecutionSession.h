/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface AWDHomeKitEventTriggerExecutionSession : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _endEvents;
	int _executionState;
	int _resultErrorCode;
	NSString* _sessionID;
	NSMutableArray* _triggerEvents;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionID; 
@property (nonatomic,retain) NSString * sessionID;                        //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSMutableArray * triggerEvents;              //@synthesize triggerEvents=_triggerEvents - In the implementation block
@property (nonatomic,retain) NSMutableArray * endEvents;                  //@synthesize endEvents=_endEvents - In the implementation block
@property (assign,nonatomic) BOOL hasExecutionState; 
@property (assign,nonatomic) int executionState;                          //@synthesize executionState=_executionState - In the implementation block
@property (assign,nonatomic) BOOL hasResultErrorCode; 
@property (assign,nonatomic) int resultErrorCode;                         //@synthesize resultErrorCode=_resultErrorCode - In the implementation block
+(Class)triggerEventsType;
+(Class)endEventsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSessionID;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setResultErrorCode:(int)arg1 ;
-(void)setHasResultErrorCode:(BOOL)arg1 ;
-(BOOL)hasResultErrorCode;
-(int)resultErrorCode;
-(NSMutableArray *)triggerEvents;
-(NSMutableArray *)endEvents;
-(void)addTriggerEvents:(id)arg1 ;
-(void)addEndEvents:(id)arg1 ;
-(unsigned long long)triggerEventsCount;
-(void)clearTriggerEvents;
-(id)triggerEventsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)endEventsCount;
-(void)clearEndEvents;
-(id)endEventsAtIndex:(unsigned long long)arg1 ;
-(int)executionState;
-(void)setExecutionState:(int)arg1 ;
-(void)setHasExecutionState:(BOOL)arg1 ;
-(BOOL)hasExecutionState;
-(id)executionStateAsString:(int)arg1 ;
-(int)StringAsExecutionState:(id)arg1 ;
-(void)setTriggerEvents:(NSMutableArray *)arg1 ;
-(void)setEndEvents:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
@end

