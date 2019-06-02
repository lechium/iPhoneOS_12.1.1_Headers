/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSMutableArray, NSMutableSet, NSMutableDictionary, PLClientServerTransaction;

@interface PLDelayedSaveActions : NSObject {

	NSMapTable* _delayedMomentAssetDeletions;
	NSMutableArray* _delayedMomentAssetUpdates;
	NSMutableSet* _delayedCloudFeedDeletionEntries;
	NSMutableArray* _delayedCloudFeedAlbumUpdates;
	NSMutableArray* _delayedCloudFeedAssetInserts;
	NSMutableArray* _delayedCloudFeedAssetUpdates;
	NSMutableArray* _delayedCloudFeedCommentInserts;
	NSMutableArray* _delayedCloudFeedInvitationRecordUpdates;
	NSMutableArray* _delayedDupeAnalysisNormalInserts;
	NSMutableArray* _delayedDupeAnalysisCloudInserts;
	NSMutableSet* _delayedAssetsForFileSystemPersistency;
	NSMutableDictionary* _delayedSearchIndexUpdateUUIDs;
	NSMutableSet* _delayedAlbumCountUpdates;
	NSMutableDictionary* _delayedWorkerTypesToAnalyzeByAssetUUID;
	BOOL _needsUpdateUnverifiedFaceCountThreshold;
	PLClientServerTransaction* _clientTransaction;

}

@property (nonatomic,retain,readonly) PLClientServerTransaction * clientTransaction;              //@synthesize clientTransaction=_clientTransaction - In the implementation block
+(void)delayedMomentDataFromChangeHubEvent:(id)arg1 insertsAndUpdates:(id*)arg2 deletes:(id*)arg3 ;
+(void)delayedCloudFeedDataFromChangeHubEvent:(id)arg1 albumUpdates:(id*)arg2 assetInserts:(id*)arg3 assetUpdates:(id*)arg4 commentInserts:(id*)arg5 invitationRecordUpdates:(id*)arg6 deletionEntries:(id*)arg7 ;
+(void)delayedDupeAnalysisDataFromChangeHubEvent:(id)arg1 normalInserts:(id*)arg2 cloudInserts:(id*)arg3 ;
+(void)delayedSearchIndexUpdatesFromChangeHubEvent:(id)arg1 updates:(id*)arg2 ;
+(void)delayedAlbumCountUpdatesFromChangeHubEvent:(id)arg1 countUpdates:(id*)arg2 ;
+(void)delayedAssetsForFileSystemPersistencyUpdatesFromChangeHubEvent:(id)arg1 assetUpdates:(id*)arg2 ;
-(void)recordAlbumCountUpdate:(id)arg1 ;
-(void)recordAlbumForSearchIndexUpdate:(id)arg1 ;
-(void)forceAlbumCountUpdate:(id)arg1 ;
-(void)recordAssetForMomentUpdate:(id)arg1 ;
-(void)recordAssetForCloudFeedUpdate:(id)arg1 ;
-(void)recordAssetForDupeAnalysis:(id)arg1 ;
-(void)recordAssetForSearchIndexUpdate:(id)arg1 ;
-(void)recordAssetForAlbumCountUpdate:(id)arg1 ;
-(id)initWithClientTransaction:(id)arg1 ;
-(void)popDelayedCloudFeedAlbumUpdates:(id*)arg1 assetInserts:(id*)arg2 assetUpdates:(id*)arg3 commentInserts:(id*)arg4 invitationRecordUpdates:(id*)arg5 deletionEntries:(id*)arg6 ;
-(void)popDelayedMomentInsertsAndUpdates:(id*)arg1 deletes:(id*)arg2 ;
-(void)popDelayedDupeAnalysisNormalInserts:(id*)arg1 cloudInserts:(id*)arg2 ;
-(void)popDelayedAssetsForFilesystemPersistencyUpdates:(id*)arg1 ;
-(void)popDelayedSearchIndexUpdates:(id*)arg1 ;
-(void)popDelayedAlbumCountUpdates:(id*)arg1 ;
-(void)popDelayedAssetsForAnalysis:(id*)arg1 ;
-(BOOL)popNeedsUdpateUnverifiedFaceCountThreshold;
-(void)appendDelayedCloudFeedDataToXPCMessage:(id)arg1 ;
-(void)appendDelayedMomentDataToXPCMessage:(id)arg1 ;
-(void)appendDelayedDupeAnalysisToXPCMessage:(id)arg1 ;
-(void)appendDelayedAssetsForFileSystemPersistencyUpdate:(id)arg1 ;
-(void)appendDelayedSearchIndexUpdatesToXPCMessage:(id)arg1 ;
-(void)appendDelayedAlbumCountUpdatesToXPCMessage:(id)arg1 ;
-(void)recordDetectedFaceForSearchIndexUpdate:(id)arg1 ;
-(void)recordAssetForAnalysis:(id)arg1 workerFlags:(int)arg2 workerType:(short)arg3 ;
-(void)recordAlbumForCloudFeedUpdate:(id)arg1 ;
-(void)recordInvitationRecordForCloudFeedUpdate:(id)arg1 ;
-(void)recordCommentForCloudFeedUpdate:(id)arg1 ;
-(void)recordAssetForFileSystemPersistencyUpdate:(id)arg1 ;
-(void)recordAdditionalAssetAttributesForSearchIndexUpdate:(id)arg1 ;
-(void)recordMemoryForSearchIndexUpdate:(id)arg1 ;
-(PLClientServerTransaction *)clientTransaction;
-(void)persistDelayedActionsScope:(id)arg1 ;
-(void)_recordDelayedMomentAssetDeletionsDictionary:(id)arg1 forKey:(id)arg2 ;
-(void)_recordDelayedMomentAssetUpdates:(id)arg1 ;
-(void)_recordDelayedCloudFeedDeletionEntries:(id)arg1 ;
-(void)_recordDelayedCloudFeedAlbumUpdate:(id)arg1 ;
-(void)_recordDelayedCloudFeedAssetInsert:(id)arg1 ;
-(void)_recordDelayedCloudFeedCommentInsert:(id)arg1 ;
-(void)_recordDelayedCloudFeedInvitationRecordUpdate:(id)arg1 ;
-(void)_recordStreamAssetForDupeAnalysis:(id)arg1 ;
-(void)_recordNormalAssetForDupeAnalysis:(id)arg1 ;
-(void)_recordManagedObjectUUID:(id)arg1 forSearchIndexUpdateKey:(id)arg2 ;
-(void)_recordAssetUUIDForSearchIndexUpdate:(id)arg1 isInsert:(BOOL)arg2 ;
-(void)_recordPersonUUIDInsertForSearchIndexUpdate:(id)arg1 ;
-(void)_recordAssetForSearchIndexUpdate:(id)arg1 ;
-(void)_recordDetectedFaceUUIDInsertForSearchIndexUpdate:(id)arg1 ;
-(void)_recordAlbumUUIDForSearchIndexUpdate:(id)arg1 isInsert:(BOOL)arg2 ;
-(void)_recordMemoryUUIDForSearchIndexUpdate:(id)arg1 isInsert:(BOOL)arg2 ;
-(void)_recordDelayedAlbumCountUpdate:(id)arg1 ;
-(void)_recordDelayedCloudFeedAssetUpdate:(id)arg1 ;
-(void)recordPersonForSearchIndexUpdate:(id)arg1 ;
-(void)recordNeedsUpdateUnverifiedFaceCountThreshold;
-(void)dealloc;
@end

