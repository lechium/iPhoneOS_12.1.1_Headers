/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBDate, NSString;

@interface NTPBCacheHint : PBCodable <NSCopying> {

	NTPBDate* _accessDate;
	NSString* _key;
	int _lifetime;
	SCD_Struct_NT6 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                     //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessDate; 
@property (nonatomic,retain) NTPBDate * accessDate;              //@synthesize accessDate=_accessDate - In the implementation block
@property (assign,nonatomic) BOOL hasLifetime; 
@property (assign,nonatomic) int lifetime;                       //@synthesize lifetime=_lifetime - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasAccessDate;
-(void)setHasLifetime:(BOOL)arg1 ;
-(BOOL)hasLifetime;
-(void)setAccessDate:(NTPBDate *)arg1 ;
-(NTPBDate *)accessDate;
-(void)setLifetime:(int)arg1 ;
-(int)lifetime;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasKey;
@end

