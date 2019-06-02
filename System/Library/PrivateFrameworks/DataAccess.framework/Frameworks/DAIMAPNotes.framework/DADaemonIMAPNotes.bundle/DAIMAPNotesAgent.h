/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAIMAPNotes.framework/DADaemonIMAPNotes.bundle/DADaemonIMAPNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonSupport/DAAgent.h>
#import <DADaemonIMAPNotes/DAIMAPNotesFolderListConsumer.h>
#import <DADaemonIMAPNotes/DANotesUpdateConsumer.h>
#import <DADaemonIMAPNotes/DADataclassLockWatcher.h>
#import <libobjc.A.dylib/PCConnectionManagerDelegate.h>

@class NSMutableSet, NSMutableArray, NSLock, PCConnectionManager, NSSet, NSMutableDictionary, NSString;

@interface DAIMAPNotesAgent : DAAgent <DAIMAPNotesFolderListConsumer, DANotesUpdateConsumer, DADataclassLockWatcher, PCConnectionManagerDelegate> {

	BOOL _isShuttingDown;
	BOOL _accountHasShutDown;
	int _outstandingInvocationCount;
	NSMutableSet* _currentlySyncingFolderIds;
	NSMutableArray* _outstandingFolderRequests;
	NSLock* _folderItemSyncRequestLock;
	PCConnectionManager* _pcManager;
	/*^block*/id _fullyShutDownCallback;
	NSSet* _lastFolderSetRegisteredForPush;
	NSMutableDictionary* _daFoldersByPushNotificationName;

}

@property (nonatomic,retain) NSMutableSet * currentlySyncingFolderIds;                           //@synthesize currentlySyncingFolderIds=_currentlySyncingFolderIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * outstandingFolderRequests;                         //@synthesize outstandingFolderRequests=_outstandingFolderRequests - In the implementation block
@property (nonatomic,retain) NSLock * folderItemSyncRequestLock;                                 //@synthesize folderItemSyncRequestLock=_folderItemSyncRequestLock - In the implementation block
@property (nonatomic,retain) PCConnectionManager * pcManager;                                    //@synthesize pcManager=_pcManager - In the implementation block
@property (assign,nonatomic) int outstandingInvocationCount;                                     //@synthesize outstandingInvocationCount=_outstandingInvocationCount - In the implementation block
@property (assign,nonatomic) BOOL isShuttingDown;                                                //@synthesize isShuttingDown=_isShuttingDown - In the implementation block
@property (nonatomic,copy) id fullyShutDownCallback;                                             //@synthesize fullyShutDownCallback=_fullyShutDownCallback - In the implementation block
@property (assign,nonatomic) BOOL accountHasShutDown;                                            //@synthesize accountHasShutDown=_accountHasShutDown - In the implementation block
@property (nonatomic,retain) NSSet * lastFolderSetRegisteredForPush;                             //@synthesize lastFolderSetRegisteredForPush=_lastFolderSetRegisteredForPush - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * daFoldersByPushNotificationName;              //@synthesize daFoldersByPushNotificationName=_daFoldersByPushNotificationName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsShuttingDown:(BOOL)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(id)waiterID;
-(void)syncResultForNotesFolder:(id)arg1 noteContext:(id)arg2 newTag:(id)arg3 previousTag:(id)arg4 actions:(id)arg5 results:(id)arg6 changeSet:(id)arg7 notesToDeleteAfterSync:(id)arg8 isInitialSync:(BOOL)arg9 moreAvailable:(BOOL)arg10 moreLocalChangesAvailable:(BOOL)arg11 ;
-(void)startMonitoring;
-(BOOL)isShuttingDown;
-(void)_appendSyncRequestsForFolders:(id)arg1 remoteChanges:(BOOL)arg2 ;
-(void)_tearDownNotesNotifications;
-(void)_syncAllNotesFoldersWithRemoteChanges:(BOOL)arg1 ;
-(void)refreshFolderListRequireChangedFolders:(BOOL)arg1 isUserRequested:(BOOL)arg2 ;
-(void)_setUpNotesNotifications;
-(void)syncFolderIDs:(id)arg1 forDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(void)requestAgentStopMonitoringWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSMutableArray *)outstandingFolderRequests;
-(void)setOutstandingFolderRequests:(NSMutableArray *)arg1 ;
-(NSMutableSet *)currentlySyncingFolderIds;
-(void)setCurrentlySyncingFolderIds:(NSMutableSet *)arg1 ;
-(NSLock *)folderItemSyncRequestLock;
-(void)setFolderItemSyncRequestLock:(NSLock *)arg1 ;
-(void)_appendSyncRequest:(id)arg1 ;
-(void)_fireWaitingFolderItemSyncRequests;
-(void)_reallySyncRequest:(id)arg1 ;
-(void)_syncRequest:(id)arg1 ;
-(void)notesFolderWithId:(id)arg1 failedToSyncWithStatus:(long long)arg2 error:(id)arg3 ;
-(void)connectionManager:(id)arg1 handleEvent:(int)arg2 ;
-(void)successfullyRetrievedFolderList;
-(void)failedToRetrieveFolderListWithStatus:(long long)arg1 andError:(id)arg2 ;
-(int)outstandingInvocationCount;
-(void)setOutstandingInvocationCount:(int)arg1 ;
-(id)fullyShutDownCallback;
-(void)setFullyShutDownCallback:(id)arg1 ;
-(void)_validateAndSyncWithRemoteChanges:(BOOL)arg1 ;
-(void)_setLastFolderSetRegisteredForPush:(id)arg1 ;
-(void)_notifyFolderSyncComplete;
-(void)_notifyFolderSyncFailed;
-(void)_notifyContentSyncFailed;
-(void)_notifyContentSyncComplete;
-(void)_callShutdownBlockIfAppropriate;
-(BOOL)_clearChangeHistoriesInContext:(id)arg1 changeSet:(id)arg2 ;
-(void)_finishSyncResultOnMainThreadForFolderWithDictionary:(id)arg1 ;
-(id)_copyDAActionsFromNoteChanges:(id)arg1 inStore:(id)arg2 mutableNotesToDeleteAfterSync:(id)arg3 ;
-(void)_syncInLockRequest:(id)arg1 ;
-(BOOL)accountHasShutDown;
-(void)setAccountHasShutDown:(BOOL)arg1 ;
-(void)_handlePushNotificationWithName:(id)arg1 ;
-(PCConnectionManager *)pcManager;
-(void)setPcManager:(PCConnectionManager *)arg1 ;
-(NSSet *)lastFolderSetRegisteredForPush;
-(void)setLastFolderSetRegisteredForPush:(NSSet *)arg1 ;
-(NSMutableDictionary *)daFoldersByPushNotificationName;
-(void)setDaFoldersByPushNotificationName:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
@end

