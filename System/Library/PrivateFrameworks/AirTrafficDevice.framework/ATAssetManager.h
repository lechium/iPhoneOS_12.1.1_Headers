/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATAssetLinkControllerObserver.h>
#import <libobjc.A.dylib/ATMessageLinkRequestHandler.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSDictionary, NSMutableSet, NSMutableDictionary, NSHashTable, NSMutableArray, NSString;

@interface ATAssetManager : NSObject <ATAssetLinkControllerObserver, ATMessageLinkRequestHandler> {

	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _assetClients;
	NSDictionary* _legacyAssetClients;
	NSMutableSet* _allAssets;
	NSMutableDictionary* _remainingAssetsByDataClass;
	NSMutableDictionary* _totalAssetCountByDataClass;
	NSHashTable* _observers;
	NSMutableArray* _assets;
	NSMutableDictionary* _assetsByDataclass;
	NSMutableDictionary* _assetsByStoreID;
	NSMutableArray* _completedStoreAssets;
	unsigned long long _completedAssets;
	unsigned long long _totalAssetCount;
	NSObject*<OS_dispatch_source> _signalSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(unsigned long long)totalAssetCount;
-(id)assets;
-(unsigned long long)currentAsset;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
-(void)_loadAssetClients;
-(void)_dumpStatusInformation;
-(id)legacyAssetsForDataClass:(id)arg1 ;
-(void)_finishDataClassIfDone:(id)arg1 ;
-(void)_addAssets:(id)arg1 forDataClass:(id)arg2 ;
-(void)_finishAsset:(id)arg1 forDataClass:(id)arg2 ;
-(id)_assetForDataclass:(id)arg1 withIdentifier:(id)arg2 ;
-(unsigned long long)currentAssetForDataclass:(id)arg1 ;
-(unsigned long long)totalAssetCountForDataclass:(id)arg1 ;
-(id)restoreAssetsForDataclass:(id)arg1 ;
-(unsigned long long)totalAssetCountForDataClasses:(id)arg1 ;
-(void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2 ;
-(void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2 ;
-(void)enqueueLegacyAssetsForDataClass:(id)arg1 ;
-(void)prioritizeAssetForDataClass:(id)arg1 withIdentifier:(id)arg2 ;
-(void)cancelAssetForDataClass:(id)arg1 withIdentifier:(id)arg2 ;
-(id)assetProgressForAllDataclasses;
-(void)_updateAsset:(id)arg1 withProgress:(float)arg2 ;
-(unsigned long long)awaitingStoreCompletion;
-(void)mapStoreIDToAsset:(id)arg1 ;
-(id)assetForStoreID:(long long)arg1 ;
-(id)assetForDataclass:(id)arg1 identifier:(id)arg2 ;
-(id)allDataclasses;
-(id)completedStoreAssets;
-(id)storeAssetsForDataclass:(id)arg1 ;
-(id)bypassedRestoresForDataclass:(id)arg1 ;
-(id)assetsForDataclasses:(id)arg1 ;
-(id)restoreAssetsForDataclasses:(id)arg1 ;
-(unsigned long long)remainingSyncAssetCountForDataClasses:(id)arg1 ;
-(unsigned long long)remainingRestoreAssetCountForDataClasses:(id)arg1 ;
-(unsigned long long)completedAssetCountForDataClasses:(id)arg1 ;
-(BOOL)dataclassIsEmpty:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)reset;
-(void)addObserver:(id)arg1 ;
-(BOOL)isEmpty;
@end

