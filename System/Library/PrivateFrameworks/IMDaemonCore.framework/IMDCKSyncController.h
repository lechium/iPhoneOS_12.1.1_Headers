/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMDCKAbstractSyncController.h>
#import <IMDaemonCore/IMDXPCEventStreamHandlerDelegate.h>

@class NSDate, NSTimer, IMTimer, CKFetchRecordZonesOperation, NSString;

@interface IMDCKSyncController : IMDCKAbstractSyncController <IMDXPCEventStreamHandlerDelegate> {

	NSDate* _syncStartDate;
	NSTimer* _longRunningSyncTimer;
	IMTimer* _nightlySyncTimer;
	long long _initialSyncAttempts;
	CKFetchRecordZonesOperation* _cloudKitMetricsFetchOp;
	NSDate* _lastLogDumpDate;
	NSDate* _lastRestoreFailureLogDumpDate;

}

@property (nonatomic,retain) NSDate * syncStartDate;                                            //@synthesize syncStartDate=_syncStartDate - In the implementation block
@property (nonatomic,retain) NSTimer * longRunningSyncTimer;                                    //@synthesize longRunningSyncTimer=_longRunningSyncTimer - In the implementation block
@property (nonatomic,retain) IMTimer * nightlySyncTimer;                                        //@synthesize nightlySyncTimer=_nightlySyncTimer - In the implementation block
@property (assign,nonatomic) long long initialSyncAttempts;                                     //@synthesize initialSyncAttempts=_initialSyncAttempts - In the implementation block
@property (nonatomic,retain) CKFetchRecordZonesOperation * cloudKitMetricsFetchOp;              //@synthesize cloudKitMetricsFetchOp=_cloudKitMetricsFetchOp - In the implementation block
@property (nonatomic,retain) NSDate * lastLogDumpDate;                                          //@synthesize lastLogDumpDate=_lastLogDumpDate - In the implementation block
@property (nonatomic,retain) NSDate * lastRestoreFailureLogDumpDate;                            //@synthesize lastRestoreFailureLogDumpDate=_lastRestoreFailureLogDumpDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_accountDidChange:(id)arg1 ;
-(BOOL)isSyncing;
-(void)clearLocalCloudKitSyncState;
-(void)sendRestoreFailuresLogDumps;
-(long long)syncControllerRecordType;
-(id)backupController;
-(void)beginInitialSync;
-(void)beginComingBackOnlineSync;
-(void)performOneTimeAccountUpgradeCheckIfNeeded;
-(id)syncStateDebuggingInfo:(id)arg1 ;
-(void)_noteSyncEnded;
-(void)eventStreamHandler:(id)arg1 didReceiveEventWithName:(id)arg2 userInfo:(id)arg3 ;
-(id)exitManager;
-(double)_IMAHDAgentFallbackIntervalInSeconds;
-(unsigned long long)_maxTimeToDeferInSeconds;
-(void)_nightlySyncTimerFired;
-(void)setNightlySyncTimer:(IMTimer *)arg1 ;
-(BOOL)_syncNotCompletedRecently;
-(void)beginFullSyncPeriodic:(BOOL)arg1 deviceConditionsToCheck:(unsigned long long)arg2 activity:(id)arg3 ;
-(void)_logIMAutomaticHistorySyncDidNotOccurMetricsUnderFirstUnlock:(BOOL)arg1 isSyncing:(BOOL)arg2 deviceConditionsAllowSync:(BOOL)arg3 syncNotCompletedRecently:(BOOL)arg4 ;
-(IMTimer *)nightlySyncTimer;
-(void)_kickOffNightlyPeriodicSyncIfApplicable;
-(void)_dispatchNotification:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)kickOffEagerSyncIfApplicable;
-(NSTimer *)longRunningSyncTimer;
-(void)setLongRunningSyncTimer:(NSTimer *)arg1 ;
-(void)setInitialSyncAttempts:(long long)arg1 ;
-(id)_recordManager;
-(void)_noteMetricsForSyncStartFrom:(id)arg1 fullSync:(BOOL)arg2 ;
-(void)beginInitialSyncAttemptCount:(unsigned long long)arg1 ;
-(void)_ifCloudKitAbleToSyncIsFullSync:(BOOL)arg1 callBlock:(/*^block*/id)arg2 activity:(id)arg3 ;
-(BOOL)_accountHasMultipleDevices;
-(void)_syncDeletesOrClearTombstones;
-(BOOL)_chatSyncedRecently;
-(void)_syncChatsWithActivity:(id)arg1 ;
-(void)_noteDownSyncStartedWithIsPeriodicSync:(BOOL)arg1 ;
-(void)_beginPeriodicSyncWithActivity:(id)arg1 deviceConditionsToCheck:(unsigned long long)arg2 attemptCount:(unsigned long long)arg3 ;
-(BOOL)_serverDoesNotAllowComingBackOnlineChatSync;
-(double)_minimumChatComingOnlineSyncInterval;
-(BOOL)_serverDoesNotSingleDeviceLimitation;
-(void)syncDeletesToCloudKitWithCompletion:(/*^block*/id)arg1 ;
-(long long)_periodicSyncAttemptCount;
-(void)_autoBugCaptureWithSubType:(id)arg1 debugDescription:(id)arg2 ;
-(long long)_manualSyncAttemptCount;
-(void)clearCKRelatedDefaults;
-(void)_performLastSyncDateMetricForSuccessfulSync;
-(void)_performLastCompleteSyncedDBDateMetricForSuccessfulSync;
-(NSDate *)lastLogDumpDate;
-(NSDate *)lastRestoreFailureLogDumpDate;
-(void)setLastRestoreFailureLogDumpDate:(NSDate *)arg1 ;
-(void)_deleteRestoreFailuresDirectory;
-(BOOL)_withinAnHourOfLogDumpHour;
-(BOOL)_hasDumpedRestoreFailureLogsInPastHour;
-(BOOL)_hasDumpedLogsInPastHour;
-(void)setLastLogDumpDate:(NSDate *)arg1 ;
-(id)chatSyncController;
-(void)_noteMeticsForSyncEndedWithSuccces:(BOOL)arg1 ;
-(id)statsCollector;
-(id)messageSyncController;
-(id)attachmentSyncController;
-(void)_reloadChatRegistryOnMainThread;
-(void)_nukeCKData;
-(id)_sharedDatabaseManager;
-(void)performMetricForSuccessfulSync;
-(void)_beginPeriodicSyncWithActivity:(id)arg1 deviceConditionsToCheck:(unsigned long long)arg2 attemptCount:(unsigned long long)arg3 useStingRay:(BOOL)arg4 syncChatsCompletionBlock:(/*^block*/id)arg5 ;
-(void)_dealWithEncryptionKeyLostErrorIfApplicable:(id)arg1 ;
-(NSDate *)syncStartDate;
-(void)_writeDownSyncDateUseManatee:(BOOL)arg1 ;
-(BOOL)_errorIndicatesDeviceNotGoodForSync:(id)arg1 ;
-(BOOL)_isSyncingToStingRay;
-(void)_beginExitStateCleanupIfNeededWithActivity:(id)arg1 useNonHSA2ManateeDatabase:(BOOL)arg2 ;
-(id)rampManager;
-(void)_callSyncWithCompletion:(/*^block*/id)arg1 activity:(id)arg2 ;
-(void)recordMetricIsCloudKitEnabled;
-(void)setSyncStartDate:(NSDate *)arg1 ;
-(void)handleAKUserInfoChangedNotification:(id)arg1 ;
-(BOOL)enforceAccountsMatchForMocAndShowDialogIfNeeded;
-(void)updateSecurityLevelDowngradedIfNeeded:(/*^block*/id)arg1 ;
-(void)_postMetricsToCloudKitOnAutomaticHistoryDeletionAgentLaunch;
-(id)_dateForNext24LogDumpAtHour:(long long)arg1 timeNow:(id)arg2 dumpNow:(BOOL*)arg3 ;
-(void)performInitialSyncOnFirstConnectionOfImagentIfNeeded;
-(void)beginChatSyncPeriodic:(BOOL)arg1 activity:(id)arg2 ;
-(void)kickOffCloudKitSyncIfNeededOnImagentLaunch;
-(void)sendRestoreFailuresLogDumpsIfNeeded;
-(void)collectLogsIfNeeded;
-(void)syncChatsWithMessageContext:(id)arg1 ;
-(long long)initialSyncAttempts;
-(CKFetchRecordZonesOperation *)cloudKitMetricsFetchOp;
-(void)setCloudKitMetricsFetchOp:(CKFetchRecordZonesOperation *)arg1 ;
-(void)registerForAccountNotifications;
-(unsigned long long)_currentHour;
-(id)init;
-(void)dealloc;
@end

