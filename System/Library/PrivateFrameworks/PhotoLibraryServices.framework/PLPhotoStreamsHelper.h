/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLPhotoStreamsHelper : NSObject {

	BOOL _appHasPolledOnceThisForegroundSession;

}
+(id)iCloudServiceAccount;
+(id)publishBreadcrumbsPath;
+(BOOL)writeBreadcrumbContent:(id)arg1 forHashString:(id)arg2 ;
+(BOOL)canInitiateDistributedPhotoStreamDeletionForAssetUUID:(id)arg1 ;
+(BOOL)photoStreamsEnabled;
+(id)sharedPhotoStreamsHelper;
-(void)initiateDeletionOfPhotoStreamAssets:(id)arg1 ;
-(void)initiateDeletionOfOriginalAssets:(id)arg1 ;
-(void)clearCachedAccountState;
-(id)photoStreamsPublishStreamID;
-(void)savePhotoStreamMetadata:(id)arg1 forAsset:(id)arg2 ;
-(BOOL)enqueueAssetForPSPublishing:(id)arg1 fullPath:(id)arg2 fileSize:(id)arg3 reenqueueCount:(unsigned long long)arg4 publicGlobalUUID:(id*)arg5 ;
-(void)resetMstreamdStateForPersonID:(id)arg1 ;
-(void)cleanupPhotoStreamMetadataForAssetsWithUUIDs:(id)arg1 forStreamID:(id)arg2 ;
-(void)pollForNewSubscriptionContent;
-(BOOL)shouldUploadVideos;
-(void)_clearPhotoStreamAccountSettings;
-(id)imageLimitsByAssetType;
-(BOOL)isValidUploadAsset:(id)arg1 type:(id)arg2 fileSize:(id)arg3 ;
-(id)temporaryPathForConvertedAssetWithUUID:(id)arg1 ;
-(long long)_serverIntegerLimitForKey:(id)arg1 debugDefaultKey:(id)arg2 ;
-(id)psHashAsString:(id)arg1 ;
-(long long)maxPixelSizeForDerivative;
-(id)pathToSavedMetadataForAssetHash:(id)arg1 streamID:(id)arg2 createIntermediateDirs:(BOOL)arg3 ;
-(BOOL)dequeueAssetsForPSPublishing:(id)arg1 ;
-(void)fetchMPSStateWithCompletion:(/*^block*/id)arg1 ;
-(id)psHashForData:(id)arg1 ;
-(id)lastPhotoStreamUpdateDate;
-(BOOL)removeBreadcrumbsForHashString:(id)arg1 ;
-(void)writeWillEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2 ;
-(void)writeDidEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2 ;
-(void)writeDidPublishBreadcrumbforHash:(id)arg1 imagePath:(id)arg2 ;
-(BOOL)shouldPublishScreenShots;
-(long long)imageLimitForOwnStream;
-(long long)imageLimitForFriendStream;
-(long long)friendsLimit;
-(id)temporaryPathForRecentlyUploadedAsset:(id)arg1 ;
-(CGSize)derivedAssetSizeForMasterSizeWidth:(double)arg1 height:(double)arg2 ;
-(id)derivedAssetForMasterAsset:(id)arg1 ;
-(void)resetServerState;
-(void)enumerateMasterHashesAndPublicGlobalUUIDsForAssets:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)handleMPSStateIfNecessary;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)pollForNewSubscriptionContentOncePerAppForegroundSession;
-(void)_appDidEnterBackground:(id)arg1 ;
-(id)pause_mstreamd;
-(void)resume_mstreamd:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

