/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoRemoveExpressPassesWithCardTypeResponse : PBCodable <NSCopying> {

	NSMutableArray* _actualExpressPassInformations;
	BOOL _pending;
	BOOL _success;
	SCD_Struct_NP1 _has;

}

@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                                                //@synthesize pending=_pending - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) BOOL success;                                                //@synthesize success=_success - In the implementation block
@property (nonatomic,retain) NSMutableArray * actualExpressPassInformations;              //@synthesize actualExpressPassInformations=_actualExpressPassInformations - In the implementation block
+(Class)actualExpressPassInformationType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)pending;
-(void)setPending:(BOOL)arg1 ;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setHasSuccess:(BOOL)arg1 ;
-(BOOL)hasSuccess;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(void)addActualExpressPassInformation:(id)arg1 ;
-(unsigned long long)actualExpressPassInformationsCount;
-(void)clearActualExpressPassInformations;
-(id)actualExpressPassInformationAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)actualExpressPassInformations;
-(void)setActualExpressPassInformations:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

