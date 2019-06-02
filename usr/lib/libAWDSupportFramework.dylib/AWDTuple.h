/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDTuple : PBCodable <NSCopying> {

	unsigned long long _downDuration;
	unsigned long long _upDuration;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasUpDuration; 
@property (assign,nonatomic) unsigned long long upDuration;                //@synthesize upDuration=_upDuration - In the implementation block
@property (assign,nonatomic) BOOL hasDownDuration; 
@property (assign,nonatomic) unsigned long long downDuration;              //@synthesize downDuration=_downDuration - In the implementation block
-(void)setUpDuration:(unsigned long long)arg1 ;
-(void)setHasUpDuration:(BOOL)arg1 ;
-(BOOL)hasUpDuration;
-(void)setDownDuration:(unsigned long long)arg1 ;
-(void)setHasDownDuration:(BOOL)arg1 ;
-(BOOL)hasDownDuration;
-(unsigned long long)upDuration;
-(unsigned long long)downDuration;
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

