/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PLPhotoLibrary, PLCloudPhotoLibraryManager, NSObject;

@interface PLCloudResourcePruneManager : NSObject {

	PLPhotoLibrary* _photoLibrary;
	PLCloudPhotoLibraryManager* _cplManager;
	BOOL _stopped;
	NSObject*<OS_dispatch_queue> _workQueue;

}
+(id)_originalResourceTypes;
+(id)_nonOriginalResourceTypes;
-(id)initWithCPLManager:(id)arg1 ;
-(void)updateCacheDeletePurgeableAmount;
-(id)_identifierForResource:(id)arg1 ;
-(void)_runOnWorkQueueWithTransaction:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_handleCacheDeleteRegistration;
-(long long)_fetchResourcesForPruningWithBudget:(long long)arg1 urgency:(long long)arg2 batchHandler:(/*^block*/id)arg3 ;
-(long long)diskSpaceToPrune;
-(void)startAutomaticPruneWithBudget:(long long)arg1 urgency:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)_purgeableAmountWithBudget:(long long)arg1 debugString:(id)arg2 ;
-(long long)pruneResources:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(id)_predicateForPruneWithUrgency:(long long)arg1 ;
-(id)_colorAwareResourceTypes;
-(id)_predicateForCPLResourceTypes:(id)arg1 withUrgency:(long long)arg2 ;
-(void)_updateLocalStateForPrunedResource:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(void)_updateLocalSRGBFileForPrunedResource:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(id)pruneStatusForDebug:(BOOL)arg1 ;
-(long long)_localResourcesSize;
-(id)init;
-(void)dealloc;
-(void)stop;
@end

