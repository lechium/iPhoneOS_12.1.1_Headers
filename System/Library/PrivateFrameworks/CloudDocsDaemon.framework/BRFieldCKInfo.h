/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/PQLValuable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BRFieldCKInfo : PBCodable <PQLValuable, NSCopying> {

	NSString* _etag;
	NSString* _etagBeforeCrossZoneMove;
	BOOL _knownToServer;
	BOOL _wasCached;
	SCD_Struct_BR2 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasKnownToServer; 
@property (assign,nonatomic) BOOL knownToServer;                              //@synthesize knownToServer=_knownToServer - In the implementation block
@property (assign,nonatomic) BOOL hasWasCached; 
@property (assign,nonatomic) BOOL wasCached;                                  //@synthesize wasCached=_wasCached - In the implementation block
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                                 //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) BOOL hasEtagBeforeCrossZoneMove; 
@property (nonatomic,retain) NSString * etagBeforeCrossZoneMove;              //@synthesize etagBeforeCrossZoneMove=_etagBeforeCrossZoneMove - In the implementation block
+(id)newFromSqliteValue:(sqlite3_valueRef)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(id)initWithRecord:(id)arg1 ;
-(void)setKnownToServer:(BOOL)arg1 ;
-(void)setEtagBeforeCrossZoneMove:(NSString *)arg1 ;
-(void)setHasKnownToServer:(BOOL)arg1 ;
-(BOOL)hasKnownToServer;
-(void)setHasWasCached:(BOOL)arg1 ;
-(BOOL)hasWasCached;
-(BOOL)hasEtagBeforeCrossZoneMove;
-(BOOL)knownToServer;
-(NSString *)etagBeforeCrossZoneMove;
-(void)setCKInfoFieldsInRecord:(id)arg1 ;
-(void)markMovedToCloudDocsZone;
-(void)setWasCached:(BOOL)arg1 ;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(BOOL)wasCached;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

