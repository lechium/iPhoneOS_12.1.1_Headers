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

@interface BLTPBShouldSuppressLightsAndSirensNowResponse : PBCodable <NSCopying> {

	BOOL _shouldSuppress;
	SCD_Struct_BL5 _has;

}

@property (assign,nonatomic) BOOL hasShouldSuppress; 
@property (assign,nonatomic) BOOL shouldSuppress;                 //@synthesize shouldSuppress=_shouldSuppress - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setShouldSuppress:(BOOL)arg1 ;
-(void)setHasShouldSuppress:(BOOL)arg1 ;
-(BOOL)hasShouldSuppress;
-(BOOL)shouldSuppress;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

