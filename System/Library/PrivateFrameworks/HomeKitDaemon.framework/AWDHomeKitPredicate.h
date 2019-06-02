/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDHomeKitPredicate : PBCodable <NSCopying> {

	NSMutableArray* _presenceEvents;
	BOOL _containsCalendarTime;
	BOOL _containsCharacteristicValue;
	BOOL _containsSignificantTime;
	BOOL _containsSignificantTimeOffset;
	SCD_Struct_AW7 _has;

}

@property (nonatomic,retain) NSMutableArray * presenceEvents;                    //@synthesize presenceEvents=_presenceEvents - In the implementation block
@property (assign,nonatomic) BOOL hasContainsCharacteristicValue; 
@property (assign,nonatomic) BOOL containsCharacteristicValue;                   //@synthesize containsCharacteristicValue=_containsCharacteristicValue - In the implementation block
@property (assign,nonatomic) BOOL hasContainsSignificantTime; 
@property (assign,nonatomic) BOOL containsSignificantTime;                       //@synthesize containsSignificantTime=_containsSignificantTime - In the implementation block
@property (assign,nonatomic) BOOL hasContainsSignificantTimeOffset; 
@property (assign,nonatomic) BOOL containsSignificantTimeOffset;                 //@synthesize containsSignificantTimeOffset=_containsSignificantTimeOffset - In the implementation block
@property (assign,nonatomic) BOOL hasContainsCalendarTime; 
@property (assign,nonatomic) BOOL containsCalendarTime;                          //@synthesize containsCalendarTime=_containsCalendarTime - In the implementation block
+(Class)presenceEventsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)presenceEvents;
-(void)setContainsSignificantTimeOffset:(BOOL)arg1 ;
-(void)setContainsSignificantTime:(BOOL)arg1 ;
-(void)setContainsCalendarTime:(BOOL)arg1 ;
-(void)setContainsCharacteristicValue:(BOOL)arg1 ;
-(void)addPresenceEvents:(id)arg1 ;
-(unsigned long long)presenceEventsCount;
-(void)clearPresenceEvents;
-(id)presenceEventsAtIndex:(unsigned long long)arg1 ;
-(void)setHasContainsCharacteristicValue:(BOOL)arg1 ;
-(BOOL)hasContainsCharacteristicValue;
-(void)setHasContainsSignificantTime:(BOOL)arg1 ;
-(BOOL)hasContainsSignificantTime;
-(void)setHasContainsSignificantTimeOffset:(BOOL)arg1 ;
-(BOOL)hasContainsSignificantTimeOffset;
-(void)setHasContainsCalendarTime:(BOOL)arg1 ;
-(BOOL)hasContainsCalendarTime;
-(void)setPresenceEvents:(NSMutableArray *)arg1 ;
-(BOOL)containsCharacteristicValue;
-(BOOL)containsSignificantTime;
-(BOOL)containsSignificantTimeOffset;
-(BOOL)containsCalendarTime;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

