/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSAccount, SSDatabaseCache, SSAppPurchaseHistoryDatabase;

@interface SSAppPurchaseHistoryCache : NSObject {

	SSAccount* _account;
	SSDatabaseCache* _databaseCache;
	SSAppPurchaseHistoryDatabase* _purchaseHistoryDatabase;

}
-(id)allUncachedImages:(id)arg1 ;
-(id)allUncachedImages;
-(void)clearCacheForAdamID:(id)arg1 ;
-(BOOL)setImageData:(id)arg1 forAdamID:(id)arg2 imageToken:(id)arg3 ;
-(id)imageDataForAdamID:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(unsigned long long)purgeableSpace;
-(unsigned long long)purge:(unsigned long long)arg1 ;
-(id)init;
@end

