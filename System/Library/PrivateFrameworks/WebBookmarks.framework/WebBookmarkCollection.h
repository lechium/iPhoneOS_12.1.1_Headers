/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebBookmarks/WebBookmarks-Structs.h>
#import <libobjc.A.dylib/WBDatabaseLockAcquisitorDelegate.h>
#import <libobjc.A.dylib/WBBookmarkProvider.h>

@class WebBookmarkTitleWordTokenizer, WebBookmark, SafariFetcherServerProxy, WBDatabaseLockAcquisitor, NSString;

@interface WebBookmarkCollection : NSObject <WBDatabaseLockAcquisitorDelegate, WBBookmarkProvider> {

	sqlite3Ref _db;
	CFLocaleRef _locale;
	WebBookmarkTitleWordTokenizer* _wordTokenizer;
	WebBookmark* _rootBookmark;
	int _favoritesFolderIdentifier;
	BOOL _dirty;
	SafariFetcherServerProxy* _safariFetcherServerProxy;
	BOOL _readonly;
	BOOL _skipExternalNotifications;
	BOOL _setupFinished;
	long long _mergeMode;
	WBDatabaseLockAcquisitor* _databaseLockAcquisitor;
	long long _lastObservedLocalMigrationState;

}

@property (nonatomic,readonly) BOOL _usesCloudKit; 
@property (nonatomic,readonly) long long _cloudKitLocalMigrationState; 
@property (getter=isMerging,nonatomic,readonly) BOOL merging; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)unlockSyncAsynchronously;
+(id)_deviceIdentifierForCloudKitGenerateIfNeeded:(BOOL)arg1 ;
+(void)_resetDeviceIdentifierForCloudKit;
+(id)_uniqueExternalUUID;
+(BOOL)_removeCorruptedBookmarksDatabaseAtPath:(id)arg1 ;
+(id)safariDirectoryPath;
+(id)_currentProcessContainerPath;
+(id)_safariContainerPath;
+(id)bookmarkImagesDirectoryPath;
+(id)_safariInMemoryChangesFilePath;
+(id)_deviceIdentifierForCloudKit;
+(id)_safariPreferencesDomain;
+(unsigned long long)readingListArchivesDiskUsage;
+(id)_syncLockFileName;
+(BOOL)_isLockedSync;
+(id)_syncFlags;
+(BOOL)_lockSync;
+(void)_unlockSync;
+(void)_postBookmarksChangedSyncNotificationOnSyncQueue;
+(BOOL)_bookmarkCollectionSyncAllowed;
+(void)holdLockSync:(const void*)arg1 ;
+(void)unholdLockSync:(const void*)arg1 ;
+(id)safariBookmarkCollection;
+(void)unlockSync;
+(BOOL)lockSync;
+(BOOL)isLockedSync;
+(id)readingListArchivesDirectoryPath;
-(BOOL)vacuum;
-(int)_executeSQL:(id)arg1 ;
-(unsigned long long)purgeableSpace;
-(BOOL)_needsDeduplicationForBookmarkDAVWithHomeURL:(id)arg1 ;
-(BOOL)beginSyncTransaction;
-(BOOL)_deduplicateBookmarksForBookmarkDAVWithHomeURL:(id)arg1 ;
-(void)rollbackSyncTransaction;
-(void)commitSyncTransaction;
-(void)_postBookmarksDidReloadNotificationAndStartReadingListFetcherIfChangesWereMade;
-(BOOL)_restoreMissingSpecialBookmarksWithChangeNotification:(BOOL)arg1 ;
-(id)syncDataForKey:(id)arg1 ;
-(BOOL)setSyncData:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_clearAllDAVSyncData;
-(id)_bookmarkWithServerID:(id)arg1 excludeDeletedBookmarks:(BOOL)arg2 ;
-(BOOL)_setServerID:(id)arg1 forBookmark:(id)arg2 ;
-(id)_serverIDForBookmarkID:(int)arg1 ;
-(BOOL)_setSyncKey:(id)arg1 forBookmark:(id)arg2 ;
-(BOOL)_setSyncData:(id)arg1 forBookmark:(id)arg2 ;
-(BOOL)_saveBookmark:(id)arg1 withSpecialID:(int)arg2 updateGenerationIfNeeded:(BOOL)arg3 ;
-(void)_updateSelectedFavoritesFolderWithBookmarkID:(int)arg1 wasFavoritesFolder:(BOOL)arg2 isFavoritesFolder:(BOOL)arg3 ;
-(BOOL)_orderChildrenWithServerIDs:(id)arg1 inFolderWithServerID:(id)arg2 excludeDeletedBookmarks:(BOOL)arg3 ;
-(id)_syncKeysForServerIDs:(id)arg1 ;
-(id)_serverIDsInFolderWithServerID:(id)arg1 excludeDeletedBookmarks:(BOOL)arg2 ;
-(id)_serverIDAtOrderIndex:(unsigned)arg1 inFolderWithServerID:(id)arg2 ;
-(BOOL)clearReadingListArchiveWithUUID:(id)arg1 ;
-(BOOL)clearAllReadingListArchives;
-(BOOL)_deleteBookmark:(id)arg1 leaveTombstone:(BOOL)arg2 ;
-(id)readingListWithUnreadOnly:(BOOL)arg1 ;
-(id)_changeList;
-(int)_DAVGeneration;
-(BOOL)_clearChangeList;
-(void)_setMergeMode:(long long)arg1 ;
-(BOOL)fixCachedNumberOfChildrenIfNeeded;
-(id)_serverIDBeforeServerID:(id)arg1 ;
-(id)_serverIDAfterServerID:(id)arg1 ;
-(id)_firstServerIDInFolderWithServerID:(id)arg1 ;
-(id)_lastServerIDInFolderWithServerID:(id)arg1 ;
-(long long)_localMigrationState;
-(BOOL)_setLocalMigrationState:(long long)arg1 generateDeviceIdentifierIfNeeded:(BOOL)arg2 ;
-(id)_accountHash;
-(BOOL)_setAccountHash:(id)arg1 ;
-(BOOL)_deduplicateBookmarksForSyncingAndTrackChanges:(BOOL)arg1 considerBookmarksWithSyncDataAsUnique:(BOOL)arg2 ;
-(id)_syncableBookmarksIDsInFolderWithBookmarkID:(int)arg1 ;
-(BOOL)mergeWithBookmarksDictionary:(id)arg1 clearHidden:(BOOL)arg2 clearSyncData:(BOOL)arg3 error:(id*)arg4 ;
-(void)postBookmarksDidReloadNotification;
-(id)initSafariBookmarkCollectionCheckingIntegrity:(BOOL)arg1 ;
-(long long)_syncType;
-(int)_bookmarkIDForServerID:(id)arg1 excludeDeletedBookmarks:(BOOL)arg2 ;
-(BOOL)isMerging;
-(id)_bookmarkWithSpecialID:(int)arg1 ;
-(long long)_mergeMode;
-(id)_mergeCandidateFolderWithTitle:(id)arg1 parent:(int)arg2 mergeMode:(long long)arg3 ;
-(id)_mergeCandidateBookmarkWithTitle:(id)arg1 address:(id)arg2 parent:(int)arg3 mergeMode:(long long)arg4 ;
-(BOOL)_mergeBookmark:(id)arg1 withOriginalBookmark:(id)arg2 prioritizeOriginalBookmarkAttributes:(BOOL)arg3 generateChangesIfNeeded:(BOOL)arg4 ;
-(BOOL)_markBookmarkID:(int)arg1 added:(BOOL)arg2 ;
-(BOOL)_moveBookmark:(id)arg1 toFolderWithID:(int)arg2 detectCycles:(BOOL)arg3 ;
-(void)persistChangesWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_setupWithPath:(id)arg1 checkIntegrity:(BOOL)arg2 ;
-(void)_setupInMemoryChangeSet;
-(BOOL)_trackChangesInMemoryIfDatabaseWriteIsNotAllowed;
-(BOOL)_openDatabaseAtPath:(id)arg1 checkIntegrity:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_primaryCollection;
-(BOOL)syncSetString:(id)arg1 forKey:(id)arg2 ;
-(void)_registerForSyncBookmarksFileChangedNotification;
-(void)_metaDataFileChanged:(id)arg1 ;
-(id)initWithPath:(id)arg1 checkIntegrity:(BOOL)arg2 ;
-(id)initSafariBookmarkCollectionCheckingIntegrity:(BOOL)arg1 readonlyCollection:(BOOL)arg2 skipExternalNotifications:(BOOL)arg3 ;
-(id)initWithPath:(id)arg1 migratingBookmarksPlist:(id)arg2 syncAnchorPlist:(id)arg3 checkIntegrity:(BOOL)arg4 readonlyCollection:(BOOL)arg5 skipExternalNotifications:(BOOL)arg6 ;
-(id)_errorForMostRecentSQLiteError;
-(void)_createSchema;
-(id)_errorForMostRecentSQLiteErrorWithErrorCode:(long long)arg1 ;
-(BOOL)_verifyAllTablesExist:(int*)arg1 ;
-(BOOL)_migrateToCurrentSchema;
-(BOOL)_setupWithPath:(id)arg1 migratingBookmarksPlist:(id)arg2 syncAnchorPlist:(id)arg3 checkIntegrity:(BOOL)arg4 ;
-(BOOL)_migrateBookmarksPlist:(id)arg1 syncAnchorPlist:(id)arg2 ;
-(int)readingListFolderBookmarkID;
-(id)_fastFetchBookmarksInBookmarkFolder:(int)arg1 options:(unsigned long long)arg2 offset:(int)arg3 limit:(int)arg4 ;
-(id)_safariFetcherServerProxy;
-(id)_readingListItemsWhere:(id)arg1 filteredBy:(id)arg2 withInMemoryFilter:(id)arg3 ;
-(BOOL)markWebContentFilterAllowsAllReadingListItems;
-(BOOL)saveBookmark:(id)arg1 startReadingListFetcher:(BOOL)arg2 ;
-(int)_executeSQLWithCString:(const char*)arg1 ;
-(id)purgeableReadingListItems;
-(sqlite3_stmtRef)_selectBookmarksWhere:(id)arg1 ;
-(int)_finalizeStatementIfNotNull:(sqlite3_stmtRef)arg1 ;
-(id)listWithID:(int)arg1 skipOffset:(unsigned)arg2 ;
-(int)_intFromExecutingSQL:(id)arg1 ;
-(id)listWithID:(int)arg1 skipOffset:(unsigned)arg2 includeHidden:(BOOL)arg3 ;
-(id)listWithID:(int)arg1 skipOffset:(unsigned)arg2 includeHidden:(BOOL)arg3 filteredUsingString:(id)arg4 ;
-(id)listWithSpecialID:(int)arg1 ;
-(id)readingListWithUnreadOnly:(BOOL)arg1 filteredUsingString:(id)arg2 ;
-(int)webFilterWhiteListFolderBookmarkID;
-(id)_parentIdentifiersOfBookmarksNeedingIcons;
-(void)_simulateCrashWithDescription:(id)arg1 ;
-(BOOL)applyInMemoryChangesToDatabase;
-(int)_specialIDForBookmarkBeingSaved:(id)arg1 ;
-(void)_postBookmarksSpecialFoldersDidChangeNotification;
-(void)_postBookmarksFolderContentsDidChangeNotification:(int)arg1 ;
-(BOOL)_saveBookmark:(id)arg1 startReadingListFetcher:(BOOL)arg2 forApplyingInMemoryChanges:(BOOL)arg3 ;
-(void)_startReadingListFetcher;
-(BOOL)_deleteBookmark:(id)arg1 postChangeNotification:(BOOL)arg2 forApplyingInMemoryChanges:(BOOL)arg3 ;
-(BOOL)_incrementGeneration;
-(void)_deleteIconForBookmark:(id)arg1 ;
-(BOOL)_moveBookmark:(id)arg1 toIndex:(unsigned)arg2 ;
-(void)_normalizeSearchString:(CFStringRef)arg1 ;
-(void)_enumerateBookmarksForMatchStatement:(id)arg1 normalizedQuery:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_addBookmarksForReadingListMatchStatement:(id)arg1 normalizedQuery:(id)arg2 toArray:(id)arg3 maxResults:(int)arg4 ;
-(id)_firstBookmarkWithURLMatchingString:(id)arg1 prefixMatch:(BOOL)arg2 inParent:(int)arg3 ;
-(id)_inMemoryChangeSet;
-(void)_postBookmarksDidReloadNotification;
-(id)_tableExpressionForArchiveMode:(int)arg1 ;
-(id)_orderedWhereClauseForArchiveMode:(int)arg1 automaticArchivingEnabled:(BOOL)arg2 ;
-(sqlite3_stmtRef)_selectBookmarksWhere:(id)arg1 returnType:(long long)arg2 ;
-(id)_orderedWhereClauseForArchiveMode:(int)arg1 ;
-(id)rollingListOfArchivedReadingListItems;
-(void)_cullReadingListBookmarksList:(id)arg1 toSize:(unsigned long long)arg2 ;
-(void)_clearAndCreateBookmarksTables;
-(void)_clearAndCreateAncestorTable;
-(void)_clearAndCreateBookmarksTitleWordTable;
-(BOOL)_indexAllTitleWords;
-(void)_normalizeDatabaseURLs;
-(BOOL)_rebuildAncestorTable;
-(BOOL)deleteAllFavoriteIcons;
-(BOOL)markAllFavoritesAsNeedingIcons;
-(void)_migrateSchemaVersion3ToVersion4;
-(void)_migrateSchemaVersion4ToVersion5;
-(void)_migrateSchemaVersion5ToVersion6;
-(void)_migrateSchemaVersion6ToVersion7;
-(void)_migrateSchemaVersion7ToVersion8;
-(void)_migrateSchemaVersion8ToVersion9;
-(void)_migrateSchemaVersion9ToVersion10;
-(void)_migrateSchemaVersion10ToVersion11;
-(void)_migrateSchemaVersion11And12And13ToVersion14;
-(void)_migrateSchemaVersion14ToVersion15;
-(void)_migrateSchemaVersion15ToVersion16;
-(void)_migrateSchemaVersion16AndVersion17AndVersion18ToVersion19;
-(void)_migrateSchemaVersion21ToVersion22;
-(void)_migrateSchemaVersion22ToVersion23;
-(void)_migrateSchemaVersion23ToVersion24;
-(void)_migrateSchemaVersion24ToVersion25;
-(long long)_userVersion;
-(void)_migrateSchemaVersion0ToVersion1;
-(void)_migrateSchemaVersion1And2ToVersion3;
-(void)_migrateSchemaVersion19And20ToVersion21;
-(void)_migrateSchemaVersion25ToVersion26;
-(void)_migrateSchemaVersion26ToVersion27;
-(void)_migrateSchemaVersion27ToVersion28;
-(void)_migrateSchemaVersion28ToVersion29;
-(void)_migrateSchemaVersion29ToVersion30;
-(void)_migrateSchemaVersion30ToVersion31;
-(void)_migrateSchemaVersion31ToVersion32;
-(void)_migrateSchemaVersion32ToVersion33;
-(void)_migrateSchemaVersion33ToVersion34;
-(void)_migrateSchemaVersion34ToVersion35;
-(void)_migrateSchemaVersion35ToVersion36;
-(void)_migrateSchemaVersion36ToVersion37;
-(void)_migrateSchemaVersion37ToVersion38;
-(void)_migrateSchemaVersion38ToVersion39;
-(void)_rerunMigrationsIfNecessary;
-(BOOL)_importBookmarksPlist:(id)arg1 ;
-(BOOL)_importSyncAnchorPlist:(id)arg1 ;
-(BOOL)_insertAncestorTableEntriesForBookmarkID:(int)arg1 withAncestorIDs:(id)arg2 ;
-(BOOL)_restoreBookmarkBarIfMissing;
-(void)_restoreOrMergeReadingListFolderWithChangeNotification:(BOOL)arg1 ;
-(void)restoreOrMergeWhiteListFolderAndContentsWithChangeNotification:(BOOL)arg1 ;
-(unsigned)_orderIndexForBookmarkInsertedIntoParent:(int)arg1 insertAtBeginning:(BOOL)arg2 ;
-(BOOL)_updateCachedChildCountForParentID:(int)arg1 inDirection:(int)arg2 ;
-(BOOL)_clearSyncKeysUnderBookmarkID:(int)arg1 isFolder:(BOOL)arg2 ;
-(BOOL)_insertTombstoneWithServerID:(id)arg1 syncData:(id)arg2 ;
-(BOOL)_deleteAncestorTableEntriesForBookmarkID:(int)arg1 ;
-(BOOL)_insertAncestorTableEntriesForBookmarkID:(int)arg1 withParentID:(int)arg2 ;
-(BOOL)_clearAllSyncKeys;
-(BOOL)_clearAllTombstones;
-(BOOL)_insertTombsonesRecursivelyForRootFolder:(id)arg1 ;
-(BOOL)_deleteRecursively:(int)arg1 ;
-(BOOL)_insertTombsonesRecursivelyHelperCurrentDepth:(unsigned long long)arg1 folder:(id)arg2 ;
-(int)_specialIDForBookmarkTitle:(id)arg1 ;
-(id)_databaseTitleForSpecialID:(int)arg1 ;
-(BOOL)_childrenOfParentBookmarkAreUnsyncable:(id)arg1 ;
-(BOOL)_addBookmarkWithTitle:(id)arg1 address:(id)arg2 parentID:(int)arg3 orderIndex:(unsigned)arg4 isFolder:(BOOL)arg5 externalUUID:(id)arg6 associatedBookmark:(id)arg7 updateParentChildCount:(BOOL)arg8 updateAncestorEntries:(BOOL)arg9 ;
-(BOOL)_updateHiddenAncestorCountForBookmarksUnderFolderID:(int)arg1 addingOffset:(int)arg2 ;
-(BOOL)_markBookmarkID:(int)arg1 withSpecialID:(int)arg2 ;
-(BOOL)_reindexBookmarkID:(int)arg1 title:(id)arg2 ;
-(id)_serverIDOfSiblingBookmarkWithServerID:(id)arg1 immediatelyBeforeOrAfter:(BOOL)arg2 ;
-(id)_firstOrLastServerIDInFolderWithServerID:(id)arg1 isFirst:(BOOL)arg2 ;
-(BOOL)_unsafeOrderChildrenWithServerIDs:(id)arg1 inFolderWithServerID:(id)arg2 excludeDeletedBookmarks:(BOOL)arg3 ;
-(BOOL)_clearTitleWordsForBookmarkID:(int)arg1 ;
-(BOOL)_indexBookmarkID:(int)arg1 title:(id)arg2 ;
-(void)_collectChangesOfType:(int)arg1 withClause:(id)arg2 intoArray:(id)arg3 ;
-(BOOL)_incrementDAVGeneration;
-(void)_updateSyncNotificationType;
-(void)_setSyncNotificationType:(long long)arg1 ;
-(void)setFavoritesFolderIdentifier:(int)arg1 postChangeNotification:(BOOL)arg2 ;
-(id)syncStringForKey:(id)arg1 ;
-(int)_favoritesFolderIdentifier;
-(id)_lazyCreateFrequentlyVisitedSitesBookmark;
-(BOOL)mergeWithBookmarksDictionary:(id)arg1 clearHidden:(BOOL)arg2 error:(id*)arg3 ;
-(void)_restoreOrMergeWhiteListFolderAndContentsWithWebFilterWhiteList:(id)arg1 ensureChildCount:(BOOL)arg2 postChangeNotification:(BOOL)arg3 ;
-(id)webFilterWhiteListFolder;
-(BOOL)_ensureFolderChildrenCount:(id)arg1 ;
-(id)webFilterWhiteList;
-(id)_fastFetchBookmarksInBookmarkFolder:(int)arg1 includingHiddenBookmarks:(BOOL)arg2 ;
-(BOOL)_applyInMemoryChangesToDatabasePostChangeNotification:(BOOL)arg1 ;
-(void)_deleteBookmarkInMemory:(id)arg1 ;
-(void)_enumerateContentsOfBookmarkFolder:(int)arg1 includingSubfolders:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)deduplicateBookmarksWithRootFolder:(int)arg1 depth:(unsigned long long)arg2 ;
-(BOOL)_deduplicateBookmarksWithRootFolder:(int)arg1 depth:(unsigned long long)arg2 trackChanges:(BOOL)arg3 considerBookmarksWithSyncDataAsUnique:(BOOL)arg4 davHomeURL:(id)arg5 ;
-(void)_appendDuplicateBookmarkGroupsInBookmarks:(id)arg1 toGroups:(id)arg2 considerBookmarksWithSyncDataAsUnique:(BOOL)arg3 davHomePath:(id)arg4 ;
-(BOOL)_bookmark:(id)arg1 hasCurrentDAVHomePath:(id)arg2 ;
-(BOOL)_deleteAndRebuildAncestorTableRecords;
-(BOOL)_recalculateCachedChildrenCountAndOrderIndices;
-(id)_fetchBookmarkIDsInFolder:(int)arg1 onlyFolders:(BOOL)arg2 includingHiddenBookmarks:(BOOL)arg3 ;
-(BOOL)_bookmark:(id)arg1 isDuplicateOfBookmark:(id)arg2 ;
-(BOOL)_bookmark:(id)arg1 hasPriorityOverBookmarkForDeduplication:(id)arg2 prioritizeBookmarksWithSyncData:(BOOL)arg3 davHomePath:(id)arg4 ;
-(BOOL)_syncSetString:(id)arg1 forKey:(id)arg2 updatedExistingKey:(BOOL*)arg3 ;
-(void)databaseLockAcquisitor:(id)arg1 acquiredLock:(BOOL)arg2 ;
-(void)enumerateBookmarks:(BOOL)arg1 andReadingListItems:(BOOL)arg2 matchingString:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)readingListBookmarksMatchingString:(id)arg1 maxResults:(unsigned)arg2 onlyArchivedBookmarks:(BOOL)arg3 ;
-(id)databaseHealthInformation;
-(id)initReadonlySafariBookmarkCollection;
-(id)initSafariBookmarkCollectionCheckingIntegrity:(BOOL)arg1 skipExternalNotifications:(BOOL)arg2 ;
-(id)initWithPath:(id)arg1 migratingBookmarksPlist:(id)arg2 syncAnchorPlist:(id)arg3 ;
-(BOOL)cleanupReadingListArchives;
-(BOOL)markArchivedReadingListItemsAsNonRecoverable;
-(BOOL)updateReadingListWebFilterStatusForUnsetItemsOnly:(BOOL)arg1 ;
-(void)localeSettingsChanged;
-(id)readingListFolder;
-(id)bookmarkAtPath:(id)arg1 ;
-(id)rootList;
-(id)bookmarksBarList;
-(id)bookmarksNeedingIcons;
-(BOOL)deleteBookmarks:(id)arg1 postChangeNotification:(BOOL)arg2 ;
-(BOOL)reorderList:(id)arg1 moveBookmarkAtIndex:(unsigned)arg2 toIndex:(unsigned)arg3 ;
-(void)saveArchiveForReadingListBookmarkWithID:(int)arg1 ;
-(void)saveArchivesForReadingListBookmarks:(id)arg1 ;
-(void)deleteArchiveForReadingListBookmarkWithID:(int)arg1 ;
-(void)saveIconWithData:(id)arg1 urlString:(id)arg2 forBookmark:(id)arg3 ;
-(void)saveAndMoveBookmark:(id)arg1 toFolderID:(int)arg2 ;
-(sqlite3_stmtRef)_prefixSearch:(id)arg1 usingColumns:(const char*)arg2 maxCount:(unsigned)arg3 ;
-(id)bookmarksMatchingString:(id)arg1 ;
-(id)_bookmarksFromStatementSelectingIDs:(const char*)arg1 withQuery:(id)arg2 ;
-(id)firstReadingListBookmarkWithURLMatchingString:(id)arg1 prefixMatch:(BOOL)arg2 ;
-(unsigned long long)indexOfReadingListBookmark:(id)arg1 countingOnlyUnread:(BOOL)arg2 ;
-(unsigned long long)countReadingListBookmarksNeedingArchiveInMode:(int)arg1 automaticArchivingEnabled:(BOOL)arg2 ;
-(unsigned long long)countReadingListBookmarksNeedingArchiveInMode:(int)arg1 ;
-(id)firstReadingListBookmarkNeedingArchiveInMode:(int)arg1 automaticArchivingEnabled:(BOOL)arg2 ;
-(id)firstReadingListBookmarkNeedingArchiveInMode:(int)arg1 ;
-(id)readingListBookmarksNeedingArchiveInMode:(int)arg1 automaticArchivingEnabled:(BOOL)arg2 ;
-(id)readingListBookmarksNeedingArchiveInMode:(int)arg1 ;
-(BOOL)rollOutLastReadingListItem;
-(void)rollOutReadingListItemIfNeededToMakeRoomForOneNewItem;
-(unsigned long long)rollingReadingListMaximumCount;
-(void)clearCarrierBookmarks;
-(BOOL)migrateReadingListIconsFromDatabaseToBookmarkImagesDirectory;
-(id)_rootFolderHiddenChildrenClause;
-(sqlite3_stmtRef)_sqliteStatementWithQuery:(id)arg1 ;
-(int)_sqliteStatementWithQuery:(id)arg1 runInBlock:(/*^block*/id)arg2 ;
-(void)_clearCachedFavoritesFolderIdentifier;
-(id)favoritesFolderList;
-(id)fastFetchBookmarksInBookmarkList:(id)arg1 ;
-(BOOL)hasInMemoryChanges;
-(void)deleteBookmarksInMemory:(id)arg1 inFolder:(int)arg2 ;
-(void)modifyBookmarkInMemory:(id)arg1 ;
-(BOOL)deduplicateBookmarks;
-(BOOL)_usesCloudKit;
-(void)_test_preventPeriodicallyApplyingInMemoryChangesToDatabase;
-(void)test_restoreMissingSpecialBookmarks;
-(BOOL)_addChildrenOfID:(int)arg1 toCollection:(id)arg2 recursive:(BOOL)arg3 error:(id*)arg4 ;
-(id)_bookmarkDictionaryForSqliteRow:(sqlite3_stmtRef)arg1 recursive:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_syncAdd:(id)arg1 toParent:(int)arg2 withOrderIndex:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)_mergeChildrenOfID:(int)arg1 referencingBase:(id)arg2 error:(id*)arg3 ;
-(BOOL)_markSpecialBookmarks;
-(BOOL)_deleteSyncPropertyForKey:(id)arg1 ;
-(BOOL)_syncPropertyExistsForKey:(id)arg1 ;
-(id)bookmarksDictionary;
-(void)removePersistedInMemoryBookmarkChangesFile;
-(BOOL)containsOnlyStockBookmarks;
-(long long)_cloudKitLocalMigrationState;
-(id)favoritesFolder;
-(id)bookmarkWithUUID:(id)arg1 ;
-(id)listWithID:(int)arg1 ;
-(id)bookmarksBarBookmark;
-(BOOL)moveBookmark:(id)arg1 toFolderWithID:(int)arg2 ;
-(id)bookmarkWithID:(int)arg1 ;
-(id)validBookmarkUUIDsFromUUIDs:(id)arg1 ;
-(id)rootBookmark;
-(BOOL)shouldFetchIconForBookmark:(id)arg1 ;
-(void)addBookmarkInMemory:(id)arg1 toFolderWithID:(int)arg2 ;
-(BOOL)saveBookmark:(id)arg1 ;
-(BOOL)bookmarkIsFavoritesFolder:(id)arg1 ;
-(BOOL)_checkDatabaseIntegrity;
-(id)subfoldersOfID:(int)arg1 ;
-(unsigned long long)generation;
-(void)setFavoritesFolder:(id)arg1 localOnly:(BOOL)arg2 ;
-(void)_postBookmarksChangedSyncNotification;
-(id)frequentlyVisitedSitesList;
-(BOOL)deleteBookmark:(id)arg1 ;
-(BOOL)reorderBookmark:(id)arg1 toIndex:(unsigned)arg2 ;
-(void)deleteBookmarkInMemory:(id)arg1 ;
-(id)frequentlyVisitedSitesFolderBookmarkID;
-(id)frequentlyVisitedSitesFolder;
-(BOOL)deleteBookmark:(id)arg1 postChangeNotification:(BOOL)arg2 ;
-(BOOL)saveBookmarks:(id)arg1 postNotification:(BOOL)arg2 ;
-(unsigned long long)purge:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)isEmpty;
-(id)initWithPath:(id)arg1 ;
@end

