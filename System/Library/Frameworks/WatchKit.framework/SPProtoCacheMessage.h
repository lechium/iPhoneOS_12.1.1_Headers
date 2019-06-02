/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, SPProtoCacheSyncData;

@interface SPProtoCacheMessage : PBCodable <NSCopying> {

	NSData* _assetData;
	NSString* _assetKey;
	int _cacheType;
	NSString* _gizmoCacheIdentifier;
	int _messageType;
	SPProtoCacheSyncData* _syncData;

}

@property (assign,nonatomic) int messageType;                              //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) int cacheType;                                //@synthesize cacheType=_cacheType - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetKey; 
@property (nonatomic,retain) NSString * assetKey;                          //@synthesize assetKey=_assetKey - In the implementation block
@property (nonatomic,readonly) BOOL hasGizmoCacheIdentifier; 
@property (nonatomic,retain) NSString * gizmoCacheIdentifier;              //@synthesize gizmoCacheIdentifier=_gizmoCacheIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetData; 
@property (nonatomic,retain) NSData * assetData;                           //@synthesize assetData=_assetData - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncData; 
@property (nonatomic,retain) SPProtoCacheSyncData * syncData;              //@synthesize syncData=_syncData - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)cacheType;
-(void)setCacheType:(int)arg1 ;
-(void)setMessageType:(int)arg1 ;
-(int)messageType;
-(void)setAssetData:(NSData *)arg1 ;
-(NSData *)assetData;
-(SPProtoCacheSyncData *)syncData;
-(void)setGizmoCacheIdentifier:(NSString *)arg1 ;
-(void)setSyncData:(SPProtoCacheSyncData *)arg1 ;
-(BOOL)hasAssetKey;
-(BOOL)hasGizmoCacheIdentifier;
-(BOOL)hasAssetData;
-(BOOL)hasSyncData;
-(NSString *)gizmoCacheIdentifier;
-(NSString *)assetKey;
-(void)setAssetKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

