/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface MPStoreItemMetadataRequestController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _lastExpiredMetadataPurgeMachTime;
	NSMutableDictionary* _itemCaches;
	long long _cacheSize;

}

@property (assign,nonatomic) long long cacheSize;              //@synthesize cacheSize=_cacheSize - In the implementation block
+(id)sharedStoreItemMetadataRequestController;
+(unsigned long long)optimalBatchSize;
-(void)addStoreItemMetadata:(id)arg1 ;
-(void)requestStoreItemMetadataForReason:(unsigned long long)arg1 withItemIdentifiers:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_removeExpiredItemsPeriodically;
-(id)getStoreItemMetadataForRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)setCacheSize:(long long)arg1 ;
-(long long)cacheSize;
-(id)init;
@end
