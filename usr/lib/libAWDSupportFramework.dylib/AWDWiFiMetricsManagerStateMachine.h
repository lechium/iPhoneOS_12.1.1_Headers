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

@interface AWDWiFiMetricsManagerStateMachine : PBCodable <NSCopying> {

	unsigned long long _stateDuration;
	unsigned _stateChanges;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasStateChanges; 
@property (assign,nonatomic) unsigned stateChanges;                         //@synthesize stateChanges=_stateChanges - In the implementation block
@property (assign,nonatomic) BOOL hasStateDuration; 
@property (assign,nonatomic) unsigned long long stateDuration;              //@synthesize stateDuration=_stateDuration - In the implementation block
-(void)setStateDuration:(unsigned long long)arg1 ;
-(void)setHasStateDuration:(BOOL)arg1 ;
-(BOOL)hasStateDuration;
-(unsigned long long)stateDuration;
-(void)setStateChanges:(unsigned)arg1 ;
-(void)setHasStateChanges:(BOOL)arg1 ;
-(BOOL)hasStateChanges;
-(unsigned)stateChanges;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
