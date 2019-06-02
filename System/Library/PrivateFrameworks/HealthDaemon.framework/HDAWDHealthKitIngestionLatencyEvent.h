/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDAWDHealthKitIngestionLatencyEvent : PBCodable <NSCopying> {

	long long _endDate;
	long long _indexInSession;
	long long _maxDelayUs;
	long long _meanDelayUs;
	long long _minDelayUs;
	long long _sampleCount;
	long long _startDate;
	long long _stdDelayUs;
	unsigned long long _timestamp;
	long long _typeIdentifier;
	BOOL _inSession;
	SCD_Struct_HD55 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTypeIdentifier; 
@property (assign,nonatomic) long long typeIdentifier;                  //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasInSession; 
@property (assign,nonatomic) BOOL inSession;                            //@synthesize inSession=_inSession - In the implementation block
@property (assign,nonatomic) BOOL hasMinDelayUs; 
@property (assign,nonatomic) long long minDelayUs;                      //@synthesize minDelayUs=_minDelayUs - In the implementation block
@property (assign,nonatomic) BOOL hasMaxDelayUs; 
@property (assign,nonatomic) long long maxDelayUs;                      //@synthesize maxDelayUs=_maxDelayUs - In the implementation block
@property (assign,nonatomic) BOOL hasMeanDelayUs; 
@property (assign,nonatomic) long long meanDelayUs;                     //@synthesize meanDelayUs=_meanDelayUs - In the implementation block
@property (assign,nonatomic) BOOL hasStdDelayUs; 
@property (assign,nonatomic) long long stdDelayUs;                      //@synthesize stdDelayUs=_stdDelayUs - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) long long startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) long long endDate;                         //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL hasSampleCount; 
@property (assign,nonatomic) long long sampleCount;                     //@synthesize sampleCount=_sampleCount - In the implementation block
@property (assign,nonatomic) BOOL hasIndexInSession; 
@property (assign,nonatomic) long long indexInSession;                  //@synthesize indexInSession=_indexInSession - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasStartDate;
-(BOOL)hasEndDate;
-(void)setHasStartDate:(BOOL)arg1 ;
-(void)setHasEndDate:(BOOL)arg1 ;
-(long long)startDate;
-(long long)endDate;
-(void)setStartDate:(long long)arg1 ;
-(void)setEndDate:(long long)arg1 ;
-(void)setTypeIdentifier:(long long)arg1 ;
-(void)setHasTypeIdentifier:(BOOL)arg1 ;
-(BOOL)hasTypeIdentifier;
-(void)setInSession:(BOOL)arg1 ;
-(void)setHasInSession:(BOOL)arg1 ;
-(BOOL)hasInSession;
-(void)setMinDelayUs:(long long)arg1 ;
-(void)setHasMinDelayUs:(BOOL)arg1 ;
-(BOOL)hasMinDelayUs;
-(void)setMaxDelayUs:(long long)arg1 ;
-(void)setHasMaxDelayUs:(BOOL)arg1 ;
-(BOOL)hasMaxDelayUs;
-(void)setMeanDelayUs:(long long)arg1 ;
-(void)setHasMeanDelayUs:(BOOL)arg1 ;
-(BOOL)hasMeanDelayUs;
-(void)setStdDelayUs:(long long)arg1 ;
-(void)setHasStdDelayUs:(BOOL)arg1 ;
-(BOOL)hasStdDelayUs;
-(void)setHasSampleCount:(BOOL)arg1 ;
-(BOOL)hasSampleCount;
-(void)setIndexInSession:(long long)arg1 ;
-(void)setHasIndexInSession:(BOOL)arg1 ;
-(BOOL)hasIndexInSession;
-(BOOL)inSession;
-(long long)minDelayUs;
-(long long)maxDelayUs;
-(long long)meanDelayUs;
-(long long)stdDelayUs;
-(long long)indexInSession;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(long long)sampleCount;
-(void)setSampleCount:(long long)arg1 ;
-(long long)typeIdentifier;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

