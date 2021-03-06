/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface FCCKPConfiguration : PBCodable <NSCopying> {

	unsigned long long _created;
	unsigned long long _expires;
	NSMutableArray* _fields;
	SCD_Struct_FC8 _has;

}

@property (nonatomic,retain) NSMutableArray * fields;                 //@synthesize fields=_fields - In the implementation block
@property (assign,nonatomic) BOOL hasCreated; 
@property (assign,nonatomic) unsigned long long created;              //@synthesize created=_created - In the implementation block
@property (assign,nonatomic) BOOL hasExpires; 
@property (assign,nonatomic) unsigned long long expires;              //@synthesize expires=_expires - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setFields:(NSMutableArray *)arg1 ;
-(NSMutableArray *)fields;
-(void)addFields:(id)arg1 ;
-(unsigned long long)fieldsCount;
-(void)clearFields;
-(id)fieldsAtIndex:(unsigned long long)arg1 ;
-(void)setCreated:(unsigned long long)arg1 ;
-(void)setHasCreated:(BOOL)arg1 ;
-(BOOL)hasCreated;
-(void)setExpires:(unsigned long long)arg1 ;
-(void)setHasExpires:(BOOL)arg1 ;
-(BOOL)hasExpires;
-(unsigned long long)created;
-(unsigned long long)expires;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

