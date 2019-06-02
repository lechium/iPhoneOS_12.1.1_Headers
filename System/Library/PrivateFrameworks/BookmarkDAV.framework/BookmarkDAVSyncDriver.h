/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookmarkDAV/BookmarkDAV-Structs.h>
#import <libobjc.A.dylib/CoreDAVLocalDBTreeInfoProvider.h>
#import <libobjc.A.dylib/CoreDAVDeleteTaskDelegate.h>
#import <libobjc.A.dylib/CoreDAVGetAccountPropertiesTaskGroupDelegate.h>
#import <libobjc.A.dylib/CoreDAVContainerInfoTaskGroupDelegate.h>

@protocol CoreDAVAccountInfoProvider, CoreDAVTaskManager;
@class NSMutableSet, NSURL, NSString, NSDictionary, BookmarkDAVSyncData, NSMutableDictionary;

@interface BookmarkDAVSyncDriver : NSObject <CoreDAVLocalDBTreeInfoProvider, CoreDAVDeleteTaskDelegate, CoreDAVGetAccountPropertiesTaskGroupDelegate, CoreDAVContainerInfoTaskGroupDelegate> {

	id<CoreDAVAccountInfoProvider> _accountInfoProvider;
	id<CoreDAVTaskManager> _taskManager;
	NSMutableSet* _outstandingTaskGroups;
	/*^block*/id _getAccountPropertiesHandler;
	/*^block*/id _syncHandler;
	void* _changeToken;
	NSURL* _homeURL;
	NSString* _pushKey;
	NSDictionary* _pushTransport;
	/*^block*/id _openDBBlock;
	/*^block*/id _getDBBlock;
	/*^block*/id _saveDBBlock;
	/*^block*/id _closeDBBlock;
	BookmarkDAVSyncData* _topLevelSyncData;
	/*^block*/id _registerForPush;
	BOOL _forceSafariOrdering;
	BOOL _forceSave;
	BOOL _inboundOnlySyncRequested;
	NSMutableSet* _serverIDsAddedUponInboundOnlySync;
	NSMutableSet* _serverIDsRemovedUponInboundOnlySync;
	NSMutableDictionary* _inboundMovedBookmarkServerIDMap;
	unsigned long long _accountPropertyFetchAttempt;

}

@property (nonatomic,retain) NSURL * homeURL;                                                   //@synthesize homeURL=_homeURL - In the implementation block
@property (nonatomic,retain) NSString * pushKey;                                                //@synthesize pushKey=_pushKey - In the implementation block
@property (nonatomic,retain) NSDictionary * pushTransport;                                      //@synthesize pushTransport=_pushTransport - In the implementation block
@property (nonatomic,copy) id getAccountPropertiesHandler;                                      //@synthesize getAccountPropertiesHandler=_getAccountPropertiesHandler - In the implementation block
@property (nonatomic,copy) id syncHandler;                                                      //@synthesize syncHandler=_syncHandler - In the implementation block
@property (nonatomic,readonly) BookmarkDAVSyncData * topLevelSyncData; 
@property (assign,nonatomic) unsigned long long accountPropertyFetchAttempt;                    //@synthesize accountPropertyFetchAttempt=_accountPropertyFetchAttempt - In the implementation block
@property (nonatomic,readonly) id<CoreDAVAccountInfoProvider> accountInfoProvider;              //@synthesize accountInfoProvider=_accountInfoProvider - In the implementation block
@property (nonatomic,readonly) unsigned long long outstandingActionCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)recursiveContainerSyncTask:(id)arg1 completedFullSyncWithNewCTag:(id)arg2 newPTag:(id)arg3 newSyncToken:(id)arg4 error:(id)arg5 ;
-(void)recursiveContainerSyncTask:(id)arg1 completedSyncOfFolderWithURL:(id)arg2 newCTag:(id)arg3 newPTag:(id)arg4 addedOrModified:(id)arg5 removed:(id)arg6 error:(id)arg7 ;
-(id)copyLocalETagsForURLs:(id)arg1 ;
-(void)recursiveContainerSyncTask:(id)arg1 retrievedAddedOrModifiedActions:(id)arg2 removed:(id)arg3 ;
-(void)notePutToURL:(id)arg1 withDataPayload:(id)arg2 finishedWithIgnoredError:(id)arg3 ;
-(BOOL)setLocalETag:(id)arg1 forItemWithURL:(id)arg2 ;
-(void)recursiveContainerSyncTask:(id)arg1 receivedAddedOrModifiedFolder:(id)arg2 ;
-(NSURL *)homeURL;
-(NSString *)pushKey;
-(void)setPushKey:(NSString *)arg1 ;
-(void)getAccountPropertiesTask:(id)arg1 completedWithError:(id)arg2 ;
-(void)containerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3 ;
-(id)copyAllLocalURLsInFolderWithURL:(id)arg1 ;
-(void)_invokeAndNilGetAccountPropertiesHandlerWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(BookmarkDAVSyncData *)topLevelSyncData;
-(void)_closeDBAndSave:(BOOL)arg1 ;
-(void)setGetAccountPropertiesHandler:(id)arg1 ;
-(void)_cloneCoreAttributesFromItem:(void*)arg1 toItem:(void*)arg2 isBookmark:(BOOL)arg3 ;
-(void*)_bookmarkByUpdatingBookmark:(void*)arg1 withServerID:(id)arg2 ;
-(id)_copyDAVBookmarkFromBookmarkRef:(void*)arg1 ;
-(void*)_folderByUpdatingFolder:(void*)arg1 withServerID:(id)arg2 ;
-(id)_copyDAVFolderFromFolderRef:(void*)arg1 ;
-(id)_dbRelativeString:(id)arg1 ;
-(void)setSyncHandler:(id)arg1 ;
-(void)_syncWithRemoteChanges:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 skipAddChanges:(BOOL)arg3 ;
-(void)getAccountPropertiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setServerIdOnItem:(void*)arg1 isBookmark:(BOOL)arg2 suggestedId:(id)arg3 ;
-(int)_serverOrderForChange:(void*)arg1 ;
-(void)_updatePayload:(id)arg1 forMovedItem:(void*)arg2 sourceServerID:(id)arg3 ;
-(id)_copySyntheticModifyActionForMovedItem:(void*)arg1 change:(void*)arg2 destinationURL:(id)arg3 absoluteOrder:(int)arg4 ;
-(void)_saveDB;
-(int)_clientOrderOfItemPrecedingItemAtServerOrder:(int)arg1 inParentWithURL:(id)arg2 ;
-(void)_makeFolderFromContainer:(id)arg1 ;
-(void)_makeBookmarkFromDAVNode:(id)arg1 ;
-(void)_handleAddsOrModifies:(id)arg1 removes:(id)arg2 ;
-(void)_setChildrenOrder:(id)arg1 forFolderURL:(id)arg2 ;
-(void)syncWithRemoteChanges:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_finishInitialSyncShouldPushChanges:(BOOL)arg1 ;
-(BOOL)getCTag:(id*)arg1 pTag:(id*)arg2 forFolderWithURL:(id)arg3 ;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 openDBBlock:(/*^block*/id)arg3 getDBBlock:(/*^block*/id)arg4 saveDBBlock:(/*^block*/id)arg5 closeDBBlock:(/*^block*/id)arg6 registerForPush:(/*^block*/id)arg7 forceSafariOrdering:(BOOL)arg8 ;
-(unsigned long long)outstandingActionCount;
-(id)getAccountPropertiesHandler;
-(id)syncHandler;
-(unsigned long long)accountPropertyFetchAttempt;
-(void)setAccountPropertyFetchAttempt:(unsigned long long)arg1 ;
-(BOOL)_addChange:(void*)arg1 toData:(id)arg2 numActionsP:(int*)arg3 runningSizeP:(int*)arg4 maxResources:(long long)arg5 maxSize:(long long)arg6 foldersToAddByServerId:(CFDictionaryRef)arg7 parentToArrayOfChildrenFolderChanges:(CFDictionaryRef)arg8 pushedParentToArrayOfChildrenFolders:(CFDictionaryRef)arg9 ;
-(BOOL)_handleErrorItem:(id)arg1 forBAItem:(void*)arg2 ;
-(BOOL)_matchParsedFolders:(id)arg1 toPushedFolders:(CFDictionaryRef)arg2 unmatchedParsedFolders:(id)arg3 parsedSetsOfChildrenFoldersByParentURL:(id)arg4 arraysOfChildrenByNameByParent:(CFDictionaryRef)arg5 ;
-(BOOL)_applyUnmatchedParsedFolders:(id)arg1 ;
-(id)_folderXBELDataForTopmostFolderChanges:(CFArrayRef)arg1 foldersToAddByServerId:(CFDictionaryRef)arg2 parentToArrayOfChildrenFolderChanges:(CFDictionaryRef)arg3 pushedParentToArrayOfChildrenFolders:(CFDictionaryRef)arg4 pushedTopmostFolders:(CFArrayRef)arg5 maxResources:(long long)arg6 maxSize:(long long)arg7 ;
-(BOOL)_applyReturnedFolders:(id)arg1 parentToArrayOfChildrenFolders:(CFDictionaryRef)arg2 topmostFolders:(CFArrayRef)arg3 postedToURL:(id)arg4 ;
-(void)_removeTempIdsFromFoldersInDict:(CFDictionaryRef)arg1 ;
-(void)_setRootCTag:(id)arg1 rootSyncToken:(id)arg2 knownOrderings:(id)arg3 ;
-(id)_bookmarkXBELDataForBookmarkChanges:(CFArrayRef)arg1 pushedBookmarks:(CFArrayRef)arg2 maxResources:(long long)arg3 maxSize:(long long)arg4 ;
-(BOOL)_applyReturnedBookmarks:(id)arg1 withPushedBookmarks:(CFArrayRef)arg2 ;
-(id<CoreDAVAccountInfoProvider>)accountInfoProvider;
-(NSDictionary *)pushTransport;
-(void)setPushTransport:(NSDictionary *)arg1 ;
-(void)setHomeURL:(NSURL *)arg1 ;
-(void)dealloc;
@end

