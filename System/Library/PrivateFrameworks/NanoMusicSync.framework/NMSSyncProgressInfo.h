/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NMSSyncProgressInfo : NSObject {

	float _estimatedSyncProgress;
	NSString* _assetType;
	unsigned long long _syncState;
	long long _numberOfAssetItems;
	long long _numberOfAssetItemsSynced;
	long long _numberOfAssetItemsNeedingDownload;
	unsigned long long _aggregateAssetItemBytesAdded;

}

@property (nonatomic,retain) NSString * assetType;                                         //@synthesize assetType=_assetType - In the implementation block
@property (assign,nonatomic) unsigned long long syncState;                                 //@synthesize syncState=_syncState - In the implementation block
@property (assign,nonatomic) float estimatedSyncProgress;                                  //@synthesize estimatedSyncProgress=_estimatedSyncProgress - In the implementation block
@property (assign,nonatomic) long long numberOfAssetItems;                                 //@synthesize numberOfAssetItems=_numberOfAssetItems - In the implementation block
@property (assign,nonatomic) long long numberOfAssetItemsSynced;                           //@synthesize numberOfAssetItemsSynced=_numberOfAssetItemsSynced - In the implementation block
@property (assign,nonatomic) long long numberOfAssetItemsNeedingDownload;                  //@synthesize numberOfAssetItemsNeedingDownload=_numberOfAssetItemsNeedingDownload - In the implementation block
@property (assign,nonatomic) unsigned long long aggregateAssetItemBytesAdded;              //@synthesize aggregateAssetItemBytesAdded=_aggregateAssetItemBytesAdded - In the implementation block
+(id)_stringFromSyncState:(unsigned long long)arg1 ;
-(void)setAssetType:(NSString *)arg1 ;
-(NSString *)assetType;
-(unsigned long long)syncState;
-(void)setSyncState:(unsigned long long)arg1 ;
-(float)estimatedSyncProgress;
-(void)setEstimatedSyncProgress:(float)arg1 ;
-(long long)numberOfAssetItems;
-(void)setNumberOfAssetItems:(long long)arg1 ;
-(long long)numberOfAssetItemsSynced;
-(void)setNumberOfAssetItemsSynced:(long long)arg1 ;
-(long long)numberOfAssetItemsNeedingDownload;
-(void)setNumberOfAssetItemsNeedingDownload:(long long)arg1 ;
-(unsigned long long)aggregateAssetItemBytesAdded;
-(void)setAggregateAssetItemBytesAdded:(unsigned long long)arg1 ;
-(id)description;
@end

