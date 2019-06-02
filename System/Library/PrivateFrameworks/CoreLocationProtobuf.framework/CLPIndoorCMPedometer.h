/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPIndoorCMPedometer : PBCodable <NSCopying> {

	double _firstStepTime;
	double _timestamp;
	float _activeTime;
	float _distance;
	int _floorsAscended;
	int _floorsDescended;
	int _numberOfSteps;
	SCD_Struct_CL6 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) float distance;                       //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfSteps; 
@property (assign,nonatomic) int numberOfSteps;                    //@synthesize numberOfSteps=_numberOfSteps - In the implementation block
@property (assign,nonatomic) BOOL hasFloorsAscended; 
@property (assign,nonatomic) int floorsAscended;                   //@synthesize floorsAscended=_floorsAscended - In the implementation block
@property (assign,nonatomic) BOOL hasFloorsDescended; 
@property (assign,nonatomic) int floorsDescended;                  //@synthesize floorsDescended=_floorsDescended - In the implementation block
@property (assign,nonatomic) BOOL hasFirstStepTime; 
@property (assign,nonatomic) double firstStepTime;                 //@synthesize firstStepTime=_firstStepTime - In the implementation block
@property (assign,nonatomic) BOOL hasActiveTime; 
@property (assign,nonatomic) float activeTime;                     //@synthesize activeTime=_activeTime - In the implementation block
-(int)floorsDescended;
-(float)activeTime;
-(void)setHasNumberOfSteps:(BOOL)arg1 ;
-(BOOL)hasNumberOfSteps;
-(void)setFloorsAscended:(int)arg1 ;
-(void)setHasFloorsAscended:(BOOL)arg1 ;
-(BOOL)hasFloorsAscended;
-(void)setFloorsDescended:(int)arg1 ;
-(void)setHasFloorsDescended:(BOOL)arg1 ;
-(BOOL)hasFloorsDescended;
-(void)setFirstStepTime:(double)arg1 ;
-(void)setHasFirstStepTime:(BOOL)arg1 ;
-(BOOL)hasFirstStepTime;
-(void)setActiveTime:(float)arg1 ;
-(void)setHasActiveTime:(BOOL)arg1 ;
-(BOOL)hasActiveTime;
-(double)firstStepTime;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasDistance:(BOOL)arg1 ;
-(BOOL)hasDistance;
-(void)setNumberOfSteps:(int)arg1 ;
-(int)floorsAscended;
-(int)numberOfSteps;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timestamp;
-(void)setDistance:(float)arg1 ;
-(float)distance;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(double)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

