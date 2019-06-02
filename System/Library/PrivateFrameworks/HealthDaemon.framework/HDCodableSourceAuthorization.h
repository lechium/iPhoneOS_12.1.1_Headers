/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData, HDCodableSource;

@interface HDCodableSourceAuthorization : PBCodable <NSCopying> {

	NSMutableArray* _authorizations;
	NSData* _backupUUID;
	HDCodableSource* _source;
	NSData* _sourceUUID;

}

@property (nonatomic,readonly) BOOL hasSourceUUID; 
@property (nonatomic,retain) NSData * sourceUUID;                          //@synthesize sourceUUID=_sourceUUID - In the implementation block
@property (nonatomic,retain) NSMutableArray * authorizations;              //@synthesize authorizations=_authorizations - In the implementation block
@property (nonatomic,readonly) BOOL hasBackupUUID; 
@property (nonatomic,retain) NSData * backupUUID;                          //@synthesize backupUUID=_backupUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,retain) HDCodableSource * source;                     //@synthesize source=_source - In the implementation block
+(Class)authorizationsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSource;
-(void)addAuthorizations:(id)arg1 ;
-(void)setSourceUUID:(NSData *)arg1 ;
-(unsigned long long)authorizationsCount;
-(void)clearAuthorizations;
-(id)authorizationsAtIndex:(unsigned long long)arg1 ;
-(void)setBackupUUID:(NSData *)arg1 ;
-(BOOL)hasSourceUUID;
-(BOOL)hasBackupUUID;
-(NSData *)sourceUUID;
-(NSMutableArray *)authorizations;
-(void)setAuthorizations:(NSMutableArray *)arg1 ;
-(NSData *)backupUUID;
-(id)decodedSourceUUID;
-(id)decodedBackupUUID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(HDCodableSource *)arg1 ;
-(HDCodableSource *)source;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

