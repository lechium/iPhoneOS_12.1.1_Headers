/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDCoreRoutineModelVisitCount : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _count;
	NSMutableArray* _visits;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;                            //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSMutableArray * visits;                   //@synthesize visits=_visits - In the implementation block
+(Class)visitsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(void)addVisits:(id)arg1 ;
-(unsigned long long)visitsCount;
-(void)clearVisits;
-(id)visitsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)visits;
-(void)setVisits:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)count;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCount:(unsigned)arg1 ;
@end
