/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDPeriodicActivityDelegate.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>

@protocol OS_dispatch_queue;
@class HDDaemon, NSObject, HDPeriodicActivity, NSDate, HDAsynchronousTaskTree, NSMutableArray, ACAccountStore, NSString, NSProgress, NSMutableDictionary;

@interface HDCloudSyncCoordinator : NSObject <HDDiagnosticObject, HDPeriodicActivityDelegate, HDHealthDaemonReadyObserver> {

	HDDaemon* _daemon;
	NSObject*<OS_dispatch_queue> _queue;
	HDPeriodicActivity* _periodicActivity;
	BOOL _queue_syncInProgress;
	BOOL _queue_hasUpdatedCachedLastSuccessfulSyncDates;
	NSDate* _queue_lastSuccessfulPullDate;
	NSDate* _queue_lastSuccessfulPushDate;
	HDAsynchronousTaskTree* _activeTaskGroup;
	NSMutableArray* _pendingTaskGroups;
	ACAccountStore* _accountStore;
	BOOL _hasiCloudAccount;
	NSString* _latestSyncStartLog;
	NSString* _latestSyncEndLog;
	NSProgress* _activeTaskProgress;
	NSMutableArray* _pendingTasksProgress;
	NSMutableArray* _progressCompletionBlocks;
	NSMutableDictionary* _waitForSyncObservations;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonReady:(id)arg1 ;
-(id)initWithDaemon:(id)arg1 ;
-(id)diagnosticDescription;
-(void)_checkiCloudAccountStatus;
-(void)_considerMigratingHealthAccountDataclassState;
-(void)_respondToACAccountStoreDidChange;
-(void)_setupPeriodicActivity;
-(void)_queue_checkLastSyncDate;
-(BOOL)_canPerformCloudSyncWithError:(id*)arg1 ;
-(id)_queue_syncAllProfilesWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_queue_resetAllProfilesWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_queue_fetchCloudDescriptionWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_unitTest_shouldSyncProfile:(id)arg1 ;
-(void)fetchSyncStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)_setHealthAccountDataclassEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)_queue_disableAndDeleteCloudSyncDataWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_addCloudSyncProgressCompletion:(/*^block*/id)arg1 ;
-(BOOL)_queue_setWaitTimeoutDateIfNecessaryWithError:(id*)arg1 ;
-(id)_queue_waitOnHealthCloudSyncWithUUID:(id)arg1 startHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_triggerSyncForiCloudLogin;
-(BOOL)_queue_hasTooManyPendingTaskGroupsWithError:(id*)arg1 ;
-(void)_updateCachedLastSyncDatesWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_finishCloudSyncTaskProgressWithResult:(long long)arg1 error:(id)arg2 ;
-(void)_queue_startNextTaskGroup;
-(id)_syncProfile:(id)arg1 options:(unsigned long long)arg2 reason:(long long)arg3 taskTree:(id)arg4 ;
-(id)_resetProfile:(id)arg1 options:(unsigned long long)arg2 reason:(long long)arg3 taskTree:(id)arg4 ;
-(id)_queue_getPersistedAccountInfo;
-(id)_fetchDescriptionForProfile:(id)arg1 options:(unsigned long long)arg2 reason:(long long)arg3 taskTree:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)disableSyncLocallyWithCompletion:(/*^block*/id)arg1 ;
-(id)syncAllProfilesWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_shouldPerformLastSyncDateCheckInternalSetting;
-(id)_lastLongTimeWithoutSuccessfulCloudSyncReportDateKeyWithError:(id*)arg1 ;
-(long long)_queue_cloudSyncWaitStatusWithError:(id*)arg1 ;
-(void)_mergeCloudSyncJournalsWithTaskTree:(id)arg1 progress:(id)arg2 ;
-(void)_mergeCloudSyncJournalsForProfile:(id)arg1 progress:(id)arg2 taskTree:(id)arg3 ;
-(void)_updateAggdKeysForPeriodicSyncError:(id)arg1 ;
-(void)_persistPeriodicSyncError:(id)arg1 ;
-(void)_resetPersistedPeriodicSyncErrors;
-(void)_prepareAllProfilesForSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2 ;
-(id)resetAllProfilesWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)fetchCloudDescriptionWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)createShareWithRecipient:(id)arg1 sampleTypes:(id)arg2 maxSampleAge:(id)arg3 profile:(id)arg4 error:(id*)arg5 ;
-(id)disableAndDeleteAllSyncDataWithCompletion:(/*^block*/id)arg1 ;
-(id)fetchCloudSyncProgressWithCompletion:(/*^block*/id)arg1 ;
-(id)waitOnHealthCloudSyncWithUUID:(id)arg1 startHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)unitTest_performPeriodicSyncWithCompletion:(/*^block*/id)arg1 ;
@end

