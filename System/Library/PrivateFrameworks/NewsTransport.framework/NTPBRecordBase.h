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

@interface NTPBRecordBase : PBCodable <NSCopying> {

	NTPBDate* _assetURLsDate;
	int _cacheLifetimeHint;
	NSString* _changeTag;
	NTPBDate* _fetchDate;
	NSString* _identifier;
	NTPBDate* _modificationDate;
	int _recordType;
	BOOL _deletedFromCloud;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasChangeTag; 
@property (nonatomic,retain) NSString * changeTag;                     //@synthesize changeTag=_changeTag - In the implementation block
@property (nonatomic,readonly) BOOL hasModificationDate; 
@property (nonatomic,retain) NTPBDate * modificationDate;              //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchDate; 
@property (nonatomic,retain) NTPBDate * fetchDate;                     //@synthesize fetchDate=_fetchDate - In the implementation block
@property (assign,nonatomic) BOOL hasDeletedFromCloud; 
@property (assign,nonatomic) BOOL deletedFromCloud;                    //@synthesize deletedFromCloud=_deletedFromCloud - In the implementation block
@property (assign,nonatomic) BOOL hasCacheLifetimeHint; 
@property (assign,nonatomic) int cacheLifetimeHint;                    //@synthesize cacheLifetimeHint=_cacheLifetimeHint - In the implementation block
@property (assign,nonatomic) BOOL hasRecordType; 
@property (assign,nonatomic) int recordType;                           //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetURLsDate; 
@property (nonatomic,retain) NTPBDate * assetURLsDate;                 //@synthesize assetURLsDate=_assetURLsDate - In the implementation block
-(void)setHasRecordType:(BOOL)arg1 ;
-(BOOL)hasRecordType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(BOOL)hasChangeTag;
-(BOOL)hasFetchDate;
-(void)setHasDeletedFromCloud:(BOOL)arg1 ;
-(BOOL)hasDeletedFromCloud;
-(void)setHasCacheLifetimeHint:(BOOL)arg1 ;
-(BOOL)hasCacheLifetimeHint;
-(BOOL)hasAssetURLsDate;
-(void)setRecordType:(int)arg1 ;
-(int)cacheLifetimeHint;
-(NSString *)changeTag;
-(BOOL)deletedFromCloud;
-(NTPBDate *)fetchDate;
-(void)setDeletedFromCloud:(BOOL)arg1 ;
-(void)setFetchDate:(NTPBDate *)arg1 ;
-(void)setAssetURLsDate:(NTPBDate *)arg1 ;
-(NTPBDate *)assetURLsDate;
-(void)setCacheLifetimeHint:(int)arg1 ;
-(int)recordType;
-(BOOL)hasModificationDate;
-(void)setChangeTag:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setModificationDate:(NTPBDate *)arg1 ;
-(NTPBDate *)modificationDate;
@end

