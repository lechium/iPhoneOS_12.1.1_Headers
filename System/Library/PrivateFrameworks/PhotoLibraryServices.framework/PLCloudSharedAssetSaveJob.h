/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class AssetCollectionInfo, NSMutableArray, NSString, MSASAssetCollection, NSArray, NSDictionary;

@interface PLCloudSharedAssetSaveJob : PLCloudSharingJob {

	BOOL _replacingOriginalWithDerivative;
	AssetCollectionInfo* _currentAssetCollectionInfo;
	NSMutableArray* _pendingDownloadNotifications;
	BOOL _isVideo;
	BOOL _isPhotoIris;
	NSString* _currentFilePath;
	NSString* _currentCloudAssetGUID;
	unsigned long long _currentCloudAssetMediaAssetType;
	NSString* _cloudAlbumGUID;
	NSString* _cloudPersonID;
	MSASAssetCollection* _currentCloudAssetCollection;
	NSArray* _assetCollectionInfos;
	NSArray* _cloudAssetGUIDsToDelete;
	long long _jobType;
	NSDictionary* _mstreamdInfoDictionary;

}

@property (assign,nonatomic) long long jobType;                                               //@synthesize jobType=_jobType - In the implementation block
@property (nonatomic,retain) NSDictionary * mstreamdInfoDictionary;                           //@synthesize mstreamdInfoDictionary=_mstreamdInfoDictionary - In the implementation block
@property (nonatomic,retain) NSString * currentFilePath;                                      //@synthesize currentFilePath=_currentFilePath - In the implementation block
@property (nonatomic,retain) NSString * currentCloudAssetGUID;                                //@synthesize currentCloudAssetGUID=_currentCloudAssetGUID - In the implementation block
@property (assign,nonatomic) unsigned long long currentCloudAssetMediaAssetType;              //@synthesize currentCloudAssetMediaAssetType=_currentCloudAssetMediaAssetType - In the implementation block
@property (nonatomic,retain) NSString * cloudAlbumGUID;                                       //@synthesize cloudAlbumGUID=_cloudAlbumGUID - In the implementation block
@property (nonatomic,retain) NSString * cloudPersonID;                                        //@synthesize cloudPersonID=_cloudPersonID - In the implementation block
@property (nonatomic,retain) MSASAssetCollection * currentCloudAssetCollection;               //@synthesize currentCloudAssetCollection=_currentCloudAssetCollection - In the implementation block
@property (nonatomic,retain) NSArray * assetCollectionInfos;                                  //@synthesize assetCollectionInfos=_assetCollectionInfos - In the implementation block
@property (assign,nonatomic) BOOL isVideo;                                                    //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,nonatomic) BOOL isPhotoIris;                                                //@synthesize isPhotoIris=_isPhotoIris - In the implementation block
@property (nonatomic,retain) NSArray * cloudAssetGUIDsToDelete;                               //@synthesize cloudAssetGUIDsToDelete=_cloudAssetGUIDsToDelete - In the implementation block
+(id)nextDCIMSaveFileURLForCloudPersonID:(id)arg1 cloudAlbumGUID:(id)arg2 fileExtension:(id)arg3 ;
+(void)processMetadataForAssetCollections:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3 info:(id)arg4 ;
+(id)_lightweightReimportPhotoCloudSharingAlbumInfoForAlbumWithCloudGUID:(id)arg1 cloudPersonID:(id)arg2 ;
+(BOOL)_lightweightReimportCacheDirectoryExists;
+(id)pathForInFlightAssetCollectionWithGUID:(id)arg1 mediaAssetType:(unsigned long long)arg2 ;
+(id)_dcimDirectoryForFileURL:(id)arg1 ;
+(void)downloadPendingAssetsForPersonID:(id)arg1 info:(id)arg2 ;
+(void)saveCloudSharedAssetAtPath:(id)arg1 forAssetCollection:(id)arg2 mediaAssetType:(unsigned long long)arg3 albumGUID:(id)arg4 personID:(id)arg5 info:(id)arg6 shouldPrioritize:(BOOL)arg7 ;
+(void)deleteCloudSharedAssetsWithCloudGUIDs:(id)arg1 info:(id)arg2 ;
+(void)replaceRecentlyUploadedOriginalWithDerivativeForCollection:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3 ;
+(id)placeholderImageProperties;
-(void)runDaemonSide;
-(void)_updateAsset:(id)arg1 withImageFileURL:(id)arg2 ;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 connection:(id)arg2 ;
-(long long)daemonOperation;
-(NSString *)currentFilePath;
-(NSString *)cloudAlbumGUID;
-(NSString *)currentCloudAssetGUID;
-(unsigned long long)currentCloudAssetMediaAssetType;
-(NSArray *)cloudAssetGUIDsToDelete;
-(NSArray *)assetCollectionInfos;
-(NSDictionary *)mstreamdInfoDictionary;
-(long long)jobType;
-(void)setCurrentFilePath:(NSString *)arg1 ;
-(void)setCurrentCloudAssetMediaAssetType:(unsigned long long)arg1 ;
-(void)setIsPhotoIris:(BOOL)arg1 ;
-(void)setCurrentCloudAssetGUID:(NSString *)arg1 ;
-(void)setCloudAlbumGUID:(NSString *)arg1 ;
-(void)setCloudAssetGUIDsToDelete:(NSArray *)arg1 ;
-(void)setAssetCollectionInfos:(NSArray *)arg1 ;
-(void)setMstreamdInfoDictionary:(NSDictionary *)arg1 ;
-(void)setJobType:(long long)arg1 ;
-(void)setCurrentCloudAssetCollection:(MSASAssetCollection *)arg1 ;
-(BOOL)isProcessingThumbnail;
-(void)executeDaemonOperationSaveAssetMetadataForCollectionsJobType;
-(void)executeDaemonOperationSaveAssetJobType;
-(void)executeDaemonOperationDeleteAssetJobType;
-(void)executeDaemonOperationReplaceRecentlyUploadedOriginalJobType;
-(void)executeDaemonOperationDownloadPendingAssetsJobType;
-(short)placeHolderKindFromAssetMetadataType:(unsigned long long)arg1 ;
-(BOOL)_processSaveAssetWithPlaceholderKind:(short)arg1 withAssetDataFilePath:(id)arg2 ;
-(void)_performSaveTransactionAndWaitOnLibrary:(id)arg1 transaction:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_parseISO6709String:(id)arg1 outLatitude:(double*)arg2 outLongitude:(double*)arg3 ;
-(void)_updatePhotoIrisPropertiesIfNecessaryForAsset:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(unsigned long long)_insertionIndexForAsset:(id)arg1 inAlbum:(id)arg2 ;
-(void)_processInFlightCommentsForAsset:(id)arg1 inAlbum:(id)arg2 inPhotoLibrary:(id)arg3 ;
-(void)_addDownloadNotification:(id)arg1 ;
-(id)_createPlaceHolderInSharedAlbum:(id)arg1 ;
-(short)attemptLightweightReimportAssetData;
-(void)_prefetchLimitForDerivatives:(long long*)arg1 thumbnails:(long long*)arg2 ;
-(BOOL)_processInflightAsset:(id)arg1 mediaAssetType:(unsigned long long)arg2 ;
-(void)_incrementDerivativesCount:(long long)arg1 thumbnailsCount:(long long)arg2 ;
-(MSASAssetCollection *)currentCloudAssetCollection;
-(NSString *)cloudPersonID;
-(void)setCloudPersonID:(NSString *)arg1 ;
-(BOOL)isPhotoIris;
-(void)setIsVideo:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)isVideo;
-(void)run;
@end

