/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSString;

@interface PLPhotoLibraryPathManager : NSObject {

	os_unfair_lock_s _folderCreationLock;
	BOOL _temporaryOutboundSharingDirectoryExists;
	BOOL _photoDataMISCDirectoryExists;
	BOOL _photoDataCPLDirectoryExists;
	BOOL _photoDataCPLDerivativeDirectoryExists;
	BOOL _persistedAlbumDataDirectoryExists;
	BOOL _persistedFaceDataDirectoryExists;
	BOOL _photoCloudSharingCacheDataDirectoryExists;
	NSString* _baseDirectory;
	NSString* _photoDataDirectory;
	NSString* _photoDataCachesDirectory;
	NSString* _dcimDirectory;
	NSString* _cplAssetsDirectory;
	NSString* _cmmAssetsDirectory;
	NSString* _iTunesPhotosDirectory;
	NSString* _changeStoreDatabasePath;
	NSString* _assetUUIDRecoveryMappingPath;
	NSString* _legacyModelInterestDatabasePath;
	NSString* _legacyMemoriesRelatedSnapshotDirectory;

}

@property (nonatomic,readonly) NSString * baseDirectory;                                       //@synthesize baseDirectory=_baseDirectory - In the implementation block
@property (nonatomic,readonly) NSString * photoDataDirectory;                                  //@synthesize photoDataDirectory=_photoDataDirectory - In the implementation block
@property (nonatomic,readonly) NSString * photoDataCachesDirectory;                            //@synthesize photoDataCachesDirectory=_photoDataCachesDirectory - In the implementation block
@property (nonatomic,readonly) NSString * dcimDirectory;                                       //@synthesize dcimDirectory=_dcimDirectory - In the implementation block
@property (nonatomic,readonly) NSString * cplAssetsDirectory;                                  //@synthesize cplAssetsDirectory=_cplAssetsDirectory - In the implementation block
@property (nonatomic,readonly) NSString * cmmAssetsDirectory;                                  //@synthesize cmmAssetsDirectory=_cmmAssetsDirectory - In the implementation block
@property (nonatomic,readonly) NSString * thumbnailsDirectory; 
@property (nonatomic,readonly) NSString * thumbnailsV2Directory; 
@property (nonatomic,readonly) NSString * iTunesPhotosDirectory;                               //@synthesize iTunesPhotosDirectory=_iTunesPhotosDirectory - In the implementation block
@property (nonatomic,readonly) NSString * changeStoreDatabasePath;                             //@synthesize changeStoreDatabasePath=_changeStoreDatabasePath - In the implementation block
@property (nonatomic,readonly) NSString * assetUUIDRecoveryMappingPath;                        //@synthesize assetUUIDRecoveryMappingPath=_assetUUIDRecoveryMappingPath - In the implementation block
@property (nonatomic,readonly) NSString * legacyModelInterestDatabasePath;                     //@synthesize legacyModelInterestDatabasePath=_legacyModelInterestDatabasePath - In the implementation block
@property (nonatomic,readonly) NSString * legacyMemoriesRelatedSnapshotDirectory;              //@synthesize legacyMemoriesRelatedSnapshotDirectory=_legacyMemoriesRelatedSnapshotDirectory - In the implementation block
+(id)systemLibraryManager;
-(id)lightweightReimportPhotoCloudSharingDataDirectory;
-(id)photoCloudSharingCacheDataDirectoryCreateIfNeeded:(BOOL)arg1 error:(id*)arg2 ;
-(id)photoMetadataDirectory;
-(id)initWithBaseDirectory:(id)arg1 ;
-(NSString *)photoDataDirectory;
-(NSString *)photoDataCachesDirectory;
-(id)imageWriterIndicatorFilePath;
-(id)pathToAssetsToAlbumsMapping;
-(id)iTunesSyncedAssetsDirectory;
-(id)photoCloudSharingDataDirectory;
-(id)persistedAlbumDataDirectoryCreateIfNeeded:(BOOL)arg1 error:(id*)arg2 ;
-(id)libraryAvailableIndicatorFilePath;
-(id)streamsLibraryUpdatingExpiredIndicatorFilePath;
-(id)persistedFaceDataDirectoryCreateIfNeeded:(BOOL)arg1 error:(id*)arg2 ;
-(id)sqliteErrorIndicatorFilePath;
-(NSString *)dcimDirectory;
-(id)iTunesSyncedFaceAlbumThumbnailsDirectory;
-(id)iTunesSyncedFaceDataDirectory;
-(NSString *)iTunesPhotosDirectory;
-(id)iTunesSyncedAssetMetadataThumbnailsDirectory;
-(id)iTunesSyncedAssetSmallThumbnailsDirectory;
-(id)knownDBPaths;
-(id)photoStreamsDataDirectory;
-(id)photoMetadataDirectoryForMediaInMainDirectory:(id)arg1 ;
-(NSString *)thumbnailsDirectory;
-(NSString *)cplAssetsDirectory;
-(id)photoMutationsDirectory;
-(id)syncInfoPath;
-(id)visionServiceCacheDirectory;
-(NSString *)thumbnailsV2Directory;
-(id)photoDataCPLDirectoryCreateIfNeeded:(BOOL)arg1 error:(id*)arg2 ;
-(id)photosAsideDatabasePath;
-(id)photosDatabasePath;
-(NSString *)assetUUIDRecoveryMappingPath;
-(id)iTunesPhotosLastSyncMetadataFilePath;
-(id)iTunesPhotosSyncMetadataFilePath;
-(NSString *)legacyModelInterestDatabasePath;
-(NSString *)legacyMemoriesRelatedSnapshotDirectory;
-(id)photoDataCPLDerivativeDirectoryCreateIfNeeded:(BOOL)arg1 error:(id*)arg2 ;
-(NSString *)cmmAssetsDirectory;
-(id)photoCloudSharingMetadataDirectory;
-(id)iTunesPhotosSyncDirectory;
-(NSString *)changeStoreDatabasePath;
-(id)photosCPLDatabasePath;
-(id)graphServiceCacheDirectory;
-(id)miroCacheDirectory;
-(id)variationCacheDirectory;
-(id)iTunesPhotosSyncCurrentLibraryUUIDPath;
-(id)assetsDataDirectory;
-(id)temporaryDragAndDropDirectoryCreateIfNeeded:(BOOL)arg1 error:(id*)arg2 ;
-(id)photoDataMiscDirectoryCreateIfNeeded:(BOOL)arg1 error:(id*)arg2 ;
-(id)temporaryFileBackedDebugDirectoryCreateIfNeeded:(BOOL)arg1 error:(id*)arg2 ;
-(id)temporaryOutboundSharingDirectoryCreateIfNeeded:(BOOL)arg1 error:(id*)arg2 ;
-(NSString *)baseDirectory;
@end

