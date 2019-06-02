/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLPhotoBakedThumbnailsDelegate.h>

@class NSMutableArray, NSCountedSet, NSRecursiveLock, PLXPCTransaction, NSMutableDictionary;

@interface PLImageWriter : NSObject <PLPhotoBakedThumbnailsDelegate> {

	NSMutableArray* _highPriorityJobs;
	NSCountedSet* _unfinishedHighPriorityJobs;
	unsigned long long _highPrioritySequentialJobCount;
	NSMutableArray* _lowPriorityJobs;
	NSCountedSet* _unfinishedLowPriorityJobs;
	NSRecursiveLock* _jobsLock;
	int _unfinishedJobCount;
	int _unfinishedJobsRequiringIndicatorCount;
	int _jobQueueAvailabilityToken;
	BOOL _writerThreadRunning;
	BOOL _databaseIsCorrupt;
	PLXPCTransaction* _transaction;
	NSMutableDictionary* _inProgressAvalancheFds;

}
+(id)sharedWriter;
+(BOOL)_requiresIndicatorFileForJobType:(id)arg1 ;
+(BOOL)setAdjustmentsForNewPhoto:(id)arg1 withEffectFilterName:(id)arg2 adjustmentDataPath:(id)arg3 filteredImagePath:(id)arg4 isSubstandardRender:(BOOL)arg5 ;
+(id)_assetAdjustmentsFromPhotoEditModel:(id)arg1 exportProperties:(id)arg2 ;
+(id)_assetAdjustmentsFromCameraFilters:(id)arg1 portraitMetadata:(id)arg2 exportProperties:(id)arg3 ;
+(id)_assetAdjustmentsFromCameraAdjustmentsFileAtPath:(id)arg1 exportProperties:(id)arg2 ;
+(id)_assetAdjustmentsWithEffectFilterName:(id)arg1 exportProperties:(id)arg2 ;
+(id)_assetUUIDFromIncomingFilename:(id)arg1 ;
+(id)_pathsByAssetUUIDFromIncomingCrashRecoveryPaths:(id)arg1 ;
+(BOOL)_hasPrimaryAssetAndAdjustmentsFilesWithType:(short)arg1 inIncomingFilenames:(id)arg2 forAssetUUID:(id)arg3 ;
+(void)decorateThumbnailInRect:(CGRect)arg1 size:(CGSize)arg2 duration:(id)arg3 inContext:(CGContextRef)arg4 format:(id)arg5 ;
+(void)decorateThumbnail:(id)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)enqueueJob:(id)arg1 ;
-(void)_postJobQueueNotificationIsAvailable:(BOOL)arg1 ;
-(BOOL)_isHighPriorityJob:(id)arg1 ;
-(void)_incrementJobCount:(id)arg1 ;
-(void)_writerThread;
-(id)_pathForNewAssetWithPath:(id)arg1 withExtension:(id)arg2 ;
-(id)cameraAssetPathForNewAssetWithExtension:(id)arg1 ;
-(void)_removeTransientKeys:(id)arg1 ;
-(void)_photoIrisPairingDidSucceed:(BOOL)arg1 fileIndicatorPath:(id)arg2 photoAsset:(id)arg3 photoLibrary:(id)arg4 ;
-(id)_pathForFilteredPreviewWithBaseName:(id)arg1 imageData:(id)arg2 orImage:(id)arg3 ;
-(void)_removeInProgressExtendedAttributesForFileAtURL:(id)arg1 ;
-(void)_decrementJobCount:(id)arg1 ;
-(void)_processImageJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processDeletePhotoStreamDataJob:(id)arg1 withReason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_fetchPhotoAssetForMediaGroupUUID:(id)arg1 moc:(id)arg2 ;
-(id)_fetchPhotoAssetForUUID:(id)arg1 moc:(id)arg2 ;
-(id)pathForNewAssetPathAtAlbumDirectoryPath:(id)arg1 assetType:(unsigned)arg2 extension:(id)arg3 ;
-(void)_handleAvalancheCrashRecovery:(id)arg1 ;
-(void)_handlePhotoIrisCrashRecoveryForPhotoIndicatorFiles:(id)arg1 ;
-(void)_handlePhotoIrisCrashRecoveryForVideos:(id)arg1 ;
-(void)_handleCameraAdjustments:(id)arg1 fullsizeRenders:(id)arg2 ;
-(void)decorateThumbnail:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)_decorateThumbnail:(id)arg1 ;
-(BOOL)_transferVideoFromIncomingPath:(id)arg1 toDestinationPath:(id)arg2 shouldRemoveIncoming:(BOOL*)arg3 error:(id*)arg4 ;
-(void)_setAdjustmentsForNewVideo:(id)arg1 withAdjustmentsDictionary:(id)arg2 ;
-(void)_processVideoJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processVideoSaveJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processBatchImageJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processAvalancheJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processImportImageJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processAvalanchesValidationJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processSyncedVideoSaveJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processDeletePhotoStreamAssetsWithUUIDs:(id)arg1 withReason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_enablePhotoStreamJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processReenqueueAssetUUIDsToPhotoStreamJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processSavePhotoStreamImageToCameraRollJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processIngestedSyncedAssetJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processAutodeleteEmptyAlbumJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processCrashRecoveryJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processDaemonJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processXPCDaemonJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processJob:(id)arg1 ;
-(BOOL)canEnqueueJob:(id)arg1 ;
-(id)pathForNewAssetWithDirectoryPath:(id)arg1 fileName:(id)arg2 extension:(id)arg3 ;
-(void)setAvalancheInProgress:(BOOL)arg1 uuid:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end

