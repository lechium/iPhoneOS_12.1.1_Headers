/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BLTPBWillSendLightsAndSirensResponse : PBCodable <NSCopying> {

	unsigned _additionalWait;
	BOOL _willSend;
	SCD_Struct_BL2 _has;

}

@property (assign,nonatomic) BOOL hasWillSend; 
@property (assign,nonatomic) BOOL willSend;                        //@synthesize willSend=_willSend - In the implementation block
@property (assign,nonatomic) BOOL hasAdditionalWait; 
@property (assign,nonatomic) unsigned additionalWait;              //@synthesize additionalWait=_additionalWait - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setWillSend:(BOOL)arg1 ;
-(void)setAdditionalWait:(unsigned)arg1 ;
-(void)setHasWillSend:(BOOL)arg1 ;
-(BOOL)hasWillSend;
-(void)setHasAdditionalWait:(BOOL)arg1 ;
-(BOOL)hasAdditionalWait;
-(BOOL)willSend;
-(unsigned)additionalWait;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

