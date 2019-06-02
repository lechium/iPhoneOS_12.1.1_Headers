/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PBBridgeAssetsManager : NSObject {

	/*^block*/id _assetDownloadCompletion;
	/*^block*/id _allAssetsDownloadCompletion;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) id assetDownloadCompletion;                        //@synthesize assetDownloadCompletion=_assetDownloadCompletion - In the implementation block
@property (nonatomic,copy) id allAssetsDownloadCompletion;                    //@synthesize allAssetsDownloadCompletion=_allAssetsDownloadCompletion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)_beginPullingAssetsForDeviceAttributes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)hardwareGenerationForProductType:(id)arg1 ;
-(id)_assetQueryForType:(unsigned long long)arg1 deviceAttributes:(id)arg2 atlasDetails:(id)arg3 ;
-(void)_beginDownloadsForAssets:(id)arg1 ;
-(id)_assetQueryForPredicate:(id)arg1 ;
-(void)_checkAssetDownloadStateWithAssets:(id)arg1 ;
-(void)beginPullingAssetsForDeviceMaterial:(unsigned long long)arg1 size:(unsigned long long)arg2 branding:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)beginPullingAssetsForAdvertisingName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)beginPullingAssetsForDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)purgeAllAssetsLocalOnly:(BOOL)arg1 ;
-(id)purgeAllAssetsAndReturnErrorLocalOnly:(BOOL)arg1 ;
-(id)_assetQueryForType:(unsigned long long)arg1 forDevice:(id)arg2 atlasDetails:(id)arg3 ;
-(id)assetDownloadCompletion;
-(void)setAssetDownloadCompletion:(id)arg1 ;
-(id)allAssetsDownloadCompletion;
-(void)setAllAssetsDownloadCompletion:(id)arg1 ;
-(void)_runAssetQuery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_defaultDownloadOptions;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
