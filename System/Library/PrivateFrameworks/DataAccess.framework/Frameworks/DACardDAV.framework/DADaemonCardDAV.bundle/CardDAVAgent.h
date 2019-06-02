/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DADaemonCardDAV.bundle/DADaemonCardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonSupport/DACoreDAVAgent.h>
#import <libobjc.A.dylib/CardDAVAddressBookURLsConsumer.h>
#import <DADaemonCardDAV/DAContactsUpdateConsumer.h>
#import <DADaemonCardDAV/DADataclassLockWatcher.h>
#import <DADaemonCardDAV/DAActionConsumer.h>
#import <DADaemonCardDAV/DAValidityCheckConsumer.h>
#import <libobjc.A.dylib/ABPredicateDelegate.h>
#import <DADaemonCardDAV/DARefreshManagerDelegate.h>
#import <libobjc.A.dylib/CardDAVFinishInitialSyncConsumer.h>
#import <libobjc.A.dylib/CardDAVMeCardUpdateConsumer.h>
#import <DADaemonCardDAV/DABabysittable.h>

@class DATrustHandler, NSMutableSet, NSMutableArray, NSLock, NSMutableDictionary, NSURL, NSString;

@interface CardDAVAgent : DACoreDAVAgent <CardDAVAddressBookURLsConsumer, DAContactsUpdateConsumer, DADataclassLockWatcher, DAActionConsumer, DAValidityCheckConsumer, ABPredicateDelegate, DARefreshManagerDelegate, CardDAVFinishInitialSyncConsumer, CardDAVMeCardUpdateConsumer, DABabysittable> {

	NSMutableSet* _currentlySyncingFolderURLs;
	NSMutableArray* _outstandingFolderRequests;
	NSLock* _folderItemSyncRequestLock;
	BOOL _isSyncingHierarchy;
	NSMutableDictionary* _folderURLToHeldAsideGroups;
	int _matchMode;
	void* _testRecord;
	void* _matchedRecord;
	NSURL* _serverTokenRegistrationURL;
	NSMutableSet* _containerPushKeys;
	NSMutableDictionary* _folderURLToSyncInfo;
	NSMutableSet* _bulkUploadUUIDBlacklist;
	NSMutableSet* _bulkUploadHREFBlacklist;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) DATrustHandler * trustHandler; 
-(id)initWithAccount:(id)arg1 ;
-(id)waiterID;
-(id)scheduleIdentifier;
-(void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(BOOL)predicateShouldContinue:(id)arg1 ;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 ;
-(void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3 ;
-(void)syncResultForContactsFolder:(id)arg1 newTag:(id)arg2 previousTag:(id)arg3 newSyncToken:(id)arg4 actions:(id)arg5 results:(id)arg6 changeIdContext:(id)arg7 isInitialSync:(BOOL)arg8 moreAvailable:(BOOL)arg9 moreLocalChangesAvailable:(BOOL)arg10 pushedActions:(id)arg11 ;
-(id)onBehalfOfBundleIdentifier;
-(id)watchedCollections;
-(void)refreshCollections:(id)arg1 withReason:(int)arg2 ;
-(id)serverTokenRegistrationURL;
-(void)startMonitoring;
-(void)_validateAndSync:(BOOL)arg1 ;
-(void)_appendSyncRequestsForFolders:(id)arg1 remoteChanges:(BOOL)arg2 ;
-(int)_localIdForExternalURL:(id)arg1 inContainer:(void*)arg2 withFolderURL:(id)arg3 ;
-(void*)_copyExistingABRecordForContact:(id)arg1 inStore:(void*)arg2 ;
-(void)_handlePotential503Error:(id)arg1 ;
-(BOOL)_updateMeCard;
-(BOOL)_fillOutExternalUUIDForRecordType:(unsigned)arg1 localId:(int)arg2 changeType:(unsigned long long)arg3 outTouchedDB:(BOOL*)arg4 ;
-(void)_successfullyFinishedInitialSyncForFolderWithID:(id)arg1 ;
-(void)_pushInitialSyncActionsForFolderWithURL:(id)arg1 ;
-(BOOL)_clearChangeHistoriesWithChangeIdContext:(id)arg1 pushedActions:(id)arg2 inStore:(void*)arg3 ;
-(BOOL)_handleAction:(id)arg1 inStore:(void*)arg2 withFolderURL:(id)arg3 isInitialSync:(BOOL)arg4 arePartialResults:(BOOL)arg5 ;
-(void)_finishInitialSyncForFolderWithURL:(id)arg1 ;
-(BOOL)_syncResultForFolderWithURL:(id)arg1 newTag:(id)arg2 newSyncToken:(id)arg3 actions:(id)arg4 changeIdContext:(id)arg5 isInitialSync:(BOOL)arg6 arePartialResults:(BOOL)arg7 ;
-(void)_addressBookSyncTask:(id)arg1 failedWithErrorCode:(long long)arg2 ;
-(void)_addChangeForType:(unsigned long long)arg1 changedItemId:(id)arg2 changeId:(id)arg3 addedIdsToChangeId:(id)arg4 modifiedIdsToChangeId:(id)arg5 deletedIdsToChangeId:(id)arg6 changeIdsToClear:(id)arg7 ;
-(id)_copyABActionsOfType:(unsigned)arg1 inContainer:(void*)arg2 existingActions:(id)arg3 maxImageSize:(long long)arg4 maxResourceSize:(long long)arg5 outHighestChangeId:(int*)arg6 outTouchedDB:(BOOL*)arg7 ;
-(id)_copyCoalescedChangesInContainer:(void*)arg1 existingActions:(id)arg2 maxImageSize:(long long)arg3 maxResourceSize:(long long)arg4 changeContext:(id)arg5 outTouchedDB:(BOOL*)arg6 ;
-(id)defaultAccountInfoSuitableForLogging;
-(id)accountInfoSuitableForLogging;
-(BOOL)APSTopicHasValidPrefix:(id)arg1 ;
-(void)successfullyRetrievedAddressBookURLs;
-(void)failedToRetrieveAddressBookURLsWithError:(id)arg1 ;
-(void)successfullyFinishedInitalUploadForFolderWithID:(id)arg1 blacklistedUUIDs:(id)arg2 blacklistedHREFs:(id)arg3 ;
-(void)failedToFinishInitialSync:(id)arg1 error:(id)arg2 ;
-(void)successfullyUpdatedServerMeCardWithURL:(id)arg1 ;
-(void)failedToUpdateServerMeCardWithError:(id)arg1 ;
-(void)_tearDownABNotifications;
-(void)_syncAllContactFoldersWithRemoteChanges:(BOOL)arg1 ;
-(void)refreshFolderListRequireChangedFolders:(BOOL)arg1 isUserRequested:(BOOL)arg2 ;
-(void)_setUpABNotifications;
-(void)syncFolderIDs:(id)arg1 forDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(void)requestAgentStopMonitoringWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_appendSyncRequest:(id)arg1 ;
-(void)_fireWaitingFolderItemSyncRequests;
-(void)_reallySyncRequest:(id)arg1 ;
-(void)_syncRequest:(id)arg1 ;
-(void)contactsFolderWithId:(id)arg1 successfullyPushedActions:(id)arg2 ;
-(id)username;
-(id)password;
@end

