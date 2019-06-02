/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PLPhotoLibrary, PLCloudPhotoLibraryManager, PLCloudResourcePruneManager, NSMutableSet, NSDate, NSObject;

@interface PLCloudResourcePrefetchManager : NSObject {

	PLPhotoLibrary* _photoLibrary;
	PLCloudPhotoLibraryManager* _cplManager;
	PLCloudResourcePruneManager* _pruneManager;
	NSMutableSet* _inflightResources;
	long long _defaultPrefetchMode;
	NSDate* _lastCheckCPLBGDownloadDate;
	BOOL _enqueuedCheckCPLBGDownload;
	NSObject*<OS_dispatch_queue> _workQueue;

}
+(id)_originalResourceTypes;
+(id)_orderedPrefetchConditionStringsOnAssets;
-(void)_runOnWorkQueueWithTransaction:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithCPLManager:(id)arg1 pruneManager:(id)arg2 ;
-(void)_reloadDownloadOriginalsSetting;
-(void)_checkCPLBackgroundDownloadOperations;
-(void)_startPrefetchNextBatch;
-(void)_enqueueCheckCPLBGDownloadFromNow:(id)arg1 withReason:(id)arg2 ;
-(void)_cleanupInflightResources;
-(BOOL)_canPrefetch;
-(long long)diskSpaceBudgetForNonThumbnails;
-(void)_prefetchResources:(id)arg1 shouldAutoPefetchNextBatch:(BOOL)arg2 prefetchSignpostId:(unsigned long long)arg3 ;
-(long long)diskSpaceBudgetForThumbnails;
-(id)_lastCompletePrefetchDate;
-(id)_predicatesForThumbnails;
-(id)_predicatesForNonThumbnails;
-(void)_resourcesToPrefetchWithPredicates:(id)arg1 budget:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_resourcesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_writeDownloadFinishedMarkerIfNeeded;
-(void)_incrementPrefetchCountForPLCloudResources:(id)arg1 ;
-(id)_identifierForResourceDownload:(id)arg1 ;
-(void)_handlePrefetchError:(id)arg1 forPLCloudResourceWithObjectID:(id)arg2 ;
-(id)_nrm_masterPredicateForCPLResourceType:(unsigned long long)arg1 additionalAssetConditions:(id)arg2 additionalResourcePredicates:(id)arg3 ;
-(id)_resourcePredicateForCPLResourceType:(unsigned long long)arg1 additionalResourcePredicates:(id)arg2 ;
-(id)_nrm_assetPredicateForCPLResourceType:(unsigned long long)arg1 additionalAssetConditions:(id)arg2 additionalResourcePredicates:(id)arg3 ;
-(id)_missingThumbnailConditionString;
-(id)_assetPredicateForCPLResourceType:(unsigned long long)arg1 additionalAssetConditions:(id)arg2 additionalResourcePredicates:(id)arg3 ;
-(id)_masterPredicateForCPLResourceType:(unsigned long long)arg1 additionalAssetConditions:(id)arg2 additionalResourcePredicates:(id)arg3 ;
-(BOOL)_shouldPrefetchMediums;
-(id)_prefetchResourceForAsset:(id)arg1 inResourceTypes:(id)arg2 ;
-(id)_resourcesToPrefetchForAsset:(id)arg1 ;
-(id)_predicateForKeyFacePrefetching;
-(id)_predicateToPrefetchMemories:(id)arg1 ;
-(id)_predicateToPrefetchSuggestions:(id)arg1 ;
-(id)_predicateForMaxFilesize:(long long)arg1 ;
-(id)_predicateForResourceCreatedAfterDate:(id)arg1 ;
-(id)_missingLocalOriginalConditionString;
-(id)_irisConditionString;
-(id)_predicateForImageResourcePixelsLessOrEqual:(long long)arg1 ;
-(id)_excludeMomentShareAssetsString;
-(void)startAutomaticPrefetch;
-(void)prefetchResource:(unsigned long long)arg1 forAssetsWithObjectIDs:(id)arg2 ;
-(id)prefetchStatusForDebug:(BOOL)arg1 ;
-(void)prefetchResourcesWithPredicates:(id)arg1 ;
-(void)_reloadDefaultDownload;
-(id)init;
-(void)dealloc;
-(void)stop;
@end
