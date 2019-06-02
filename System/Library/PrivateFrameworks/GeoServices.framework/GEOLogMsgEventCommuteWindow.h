/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgEventCommuteWindow : PBCodable <NSCopying> {

	double _startTime;
	unsigned _duration;
	int _endReason;
	unsigned _numberOfAlertingResponses;
	unsigned _numberOfDoomRoutingRequests;
	NSMutableArray* _predictedDestinations;
	unsigned _predictedExitTime;
	SCD_Struct_GE40 _has;

}

@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) double startTime;                                    //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                                   //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasPredictedExitTime; 
@property (assign,nonatomic) unsigned predictedExitTime;                          //@synthesize predictedExitTime=_predictedExitTime - In the implementation block
@property (assign,nonatomic) BOOL hasEndReason; 
@property (assign,nonatomic) int endReason;                                       //@synthesize endReason=_endReason - In the implementation block
@property (nonatomic,retain) NSMutableArray * predictedDestinations;              //@synthesize predictedDestinations=_predictedDestinations - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfDoomRoutingRequests; 
@property (assign,nonatomic) unsigned numberOfDoomRoutingRequests;                //@synthesize numberOfDoomRoutingRequests=_numberOfDoomRoutingRequests - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfAlertingResponses; 
@property (assign,nonatomic) unsigned numberOfAlertingResponses;                  //@synthesize numberOfAlertingResponses=_numberOfAlertingResponses - In the implementation block
+(Class)predictedDestinationType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setPredictedExitTime:(unsigned)arg1 ;
-(void)setEndReason:(int)arg1 ;
-(void)setNumberOfAlertingResponses:(unsigned)arg1 ;
-(void)setNumberOfDoomRoutingRequests:(unsigned)arg1 ;
-(void)addPredictedDestination:(id)arg1 ;
-(BOOL)hasDuration;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(void)setHasDuration:(BOOL)arg1 ;
-(unsigned long long)predictedDestinationsCount;
-(void)clearPredictedDestinations;
-(id)predictedDestinationAtIndex:(unsigned long long)arg1 ;
-(void)setHasPredictedExitTime:(BOOL)arg1 ;
-(BOOL)hasPredictedExitTime;
-(int)endReason;
-(void)setHasEndReason:(BOOL)arg1 ;
-(BOOL)hasEndReason;
-(id)endReasonAsString:(int)arg1 ;
-(int)StringAsEndReason:(id)arg1 ;
-(void)setHasNumberOfDoomRoutingRequests:(BOOL)arg1 ;
-(BOOL)hasNumberOfDoomRoutingRequests;
-(void)setHasNumberOfAlertingResponses:(BOOL)arg1 ;
-(BOOL)hasNumberOfAlertingResponses;
-(unsigned)predictedExitTime;
-(NSMutableArray *)predictedDestinations;
-(void)setPredictedDestinations:(NSMutableArray *)arg1 ;
-(unsigned)numberOfDoomRoutingRequests;
-(unsigned)numberOfAlertingResponses;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDuration:(unsigned)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(unsigned)duration;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

