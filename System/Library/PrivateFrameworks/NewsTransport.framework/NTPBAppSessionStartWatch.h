/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBAppSessionStartWatch : PBCodable <NSCopying> {

	int _sessionStartMethodWatch;
	SCD_Struct_NT6 _has;

}

@property (assign,nonatomic) BOOL hasSessionStartMethodWatch; 
@property (assign,nonatomic) int sessionStartMethodWatch;                  //@synthesize sessionStartMethodWatch=_sessionStartMethodWatch - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)sessionStartMethodWatch;
-(void)setSessionStartMethodWatch:(int)arg1 ;
-(void)setHasSessionStartMethodWatch:(BOOL)arg1 ;
-(BOOL)hasSessionStartMethodWatch;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

