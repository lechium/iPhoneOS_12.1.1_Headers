/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricsManagerSoftErrorUserFeedback : PBCodable <NSCopying> {

	SCD_Struct_AW14* _softErrorInstanceCounters;
	SCD_Struct_AW14* _softErrorUserConfirmationCounters;
	unsigned long long _timestamp;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                             //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long softErrorInstanceCountersCount; 
@property (nonatomic,readonly) int* softErrorInstanceCounters; 
@property (nonatomic,readonly) unsigned long long softErrorUserConfirmationCountersCount; 
@property (nonatomic,readonly) int* softErrorUserConfirmationCounters; 
-(unsigned long long)softErrorInstanceCountersCount;
-(void)clearSoftErrorInstanceCounters;
-(int)softErrorInstanceCountersAtIndex:(unsigned long long)arg1 ;
-(void)addSoftErrorInstanceCounters:(int)arg1 ;
-(unsigned long long)softErrorUserConfirmationCountersCount;
-(void)clearSoftErrorUserConfirmationCounters;
-(int)softErrorUserConfirmationCountersAtIndex:(unsigned long long)arg1 ;
-(void)addSoftErrorUserConfirmationCounters:(int)arg1 ;
-(int*)softErrorInstanceCounters;
-(void)setSoftErrorInstanceCounters:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)softErrorUserConfirmationCounters;
-(void)setSoftErrorUserConfirmationCounters:(int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
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
