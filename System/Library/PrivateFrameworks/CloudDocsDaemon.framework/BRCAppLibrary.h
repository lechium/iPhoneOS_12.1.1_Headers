/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCForegroundClient.h>

@protocol BRCAppLibraryDelegate;
@class NSString, NSNumber, NSMutableDictionary, NSMutableSet, BRMangledID, BRCAccountSession, BRCPrivateClientZone, brc_task_tracker, BRCPQLConnection, BRCALRowID, BRCZoneRowID, BRContainer, BRCRelativePath, BRCFSEventsMonitor, NSURL, BRCSyncContext;

@interface BRCAppLibrary : NSObject <BRCForegroundClient> {

	AQ _activeQueries;
	AQ _activeRecursiveQueries;
	AQ _activeAliasQueries;
	long long _maxLostStamp;
	NSNumber* _deepScanStamp;
	NSString* _deepScanReason;
	NSMutableDictionary* _pendingFileCoordinators;
	NSMutableSet* _XPCClientsUsingUbiquity;
	BRMangledID* _mangledID;
	BRCAccountSession* _session;
	BRCPrivateClientZone* _defaultClientZone;
	BOOL _activated;
	NSMutableSet* _targetAppLibraries;
	NSMutableSet* _targetSharedServerZones;
	NSMutableSet* _foregroundClients;
	BOOL _needsSave;
	BOOL _containerMetadataNeedsSyncUp;
	unsigned _state;
	brc_task_tracker* _tracker;
	id<BRCAppLibraryDelegate> _delegate;
	BRCPQLConnection* _db;
	BRCALRowID* _dbRowID;
	BRCZoneRowID* _zoneRowID;
	NSString* _appLibraryID;
	NSNumber* _fileID;
	NSNumber* _generationID;
	BRContainer* _containerMetadata;
	NSString* _containerMetadataEtag;

}

@property (nonatomic,retain) NSNumber * fileID;                                            //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,retain) NSNumber * generationID;                                      //@synthesize generationID=_generationID - In the implementation block
@property (nonatomic,retain) NSNumber * deepScanStamp;                                     //@synthesize deepScanStamp=_deepScanStamp - In the implementation block
@property (assign,nonatomic,__weak) BRCPrivateClientZone * defaultClientZone;              //@synthesize defaultClientZone=_defaultClientZone - In the implementation block
@property (nonatomic,retain) id<BRCAppLibraryDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) BRCAccountSession * session;                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) brc_task_tracker * tracker;                                 //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,readonly) NSString * logName; 
@property (nonatomic,readonly) NSString * appLibraryID;                                    //@synthesize appLibraryID=_appLibraryID - In the implementation block
@property (nonatomic,readonly) BRMangledID * mangledID;                                    //@synthesize mangledID=_mangledID - In the implementation block
@property (nonatomic,readonly) NSString * absolutePath; 
@property (nonatomic,readonly) NSString * pathRelativeToRoot; 
@property (nonatomic,readonly) BRCRelativePath * root; 
@property (nonatomic,readonly) BRCRelativePath * documentsPath; 
@property (nonatomic,readonly) BRCFSEventsMonitor * fsEventsMonitor; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,retain) BRCALRowID * dbRowID;                                         //@synthesize dbRowID=_dbRowID - In the implementation block
@property (nonatomic,retain) BRCZoneRowID * zoneRowID;                                     //@synthesize zoneRowID=_zoneRowID - In the implementation block
@property (nonatomic,readonly) BOOL isCloudDocsAppLibrary; 
@property (nonatomic,readonly) BOOL isiCloudDesktopAppLibrary; 
@property (nonatomic,readonly) BRCPQLConnection * db;                                      //@synthesize db=_db - In the implementation block
@property (assign,nonatomic) BOOL needsSave;                                               //@synthesize needsSave=_needsSave - In the implementation block
@property (nonatomic,readonly) unsigned long long syncedFolderType; 
@property (nonatomic,readonly) BRCSyncContext * syncContextIfExists; 
@property (nonatomic,readonly) BRCSyncContext * syncContext; 
@property (nonatomic,readonly) NSMutableDictionary * plist; 
@property (nonatomic,readonly) unsigned state;                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL isForeground; 
@property (nonatomic,readonly) BOOL shouldEvictUploadedItems; 
@property (readonly) BOOL hasActiveQueries; 
@property (readonly) BOOL hasActiveRecursiveQueries; 
@property (readonly) BOOL hasActiveAliasQueries; 
@property (assign,nonatomic) long long maxLostStamp;                                       //@synthesize maxLostStamp=_maxLostStamp - In the implementation block
@property (nonatomic,readonly) BOOL isGreedy; 
@property (nonatomic,readonly) BRContainer * containerMetadata;                            //@synthesize containerMetadata=_containerMetadata - In the implementation block
@property (nonatomic,retain) NSString * containerMetadataEtag;                             //@synthesize containerMetadataEtag=_containerMetadataEtag - In the implementation block
@property (assign,nonatomic) BOOL containerMetadataNeedsSyncUp;                            //@synthesize containerMetadataNeedsSyncUp=_containerMetadataNeedsSyncUp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
-(BOOL)needsSave;
-(void)setFileID:(NSNumber *)arg1 ;
-(NSNumber *)fileID;
-(brc_task_tracker *)tracker;
-(BRCALRowID *)dbRowID;
-(BRMangledID *)mangledID;
-(NSString *)absolutePath;
-(BRCPrivateClientZone *)defaultClientZone;
-(BRCDirectoryItem*)fetchRootItemInDB:(id)arg1 ;
-(id)descriptionWithContext:(id)arg1 ;
-(BRCSyncContext *)syncContext;
-(NSString *)appLibraryID;
-(id)itemByRowID:(unsigned long long)arg1 ;
-(BRContainer *)containerMetadata;
-(NSMutableDictionary *)plist;
-(void)setDbRowID:(BRCALRowID *)arg1 ;
-(BRCZoneRowID *)zoneRowID;
-(id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 zoneRowID:(id)arg3 db:(id)arg4 plist:(id)arg5 session:(id)arg6 initialCreation:(BOOL)arg7 createdRootOnDisk:(BOOL)arg8 createdCZMMoved:(BOOL)arg9 rootFileID:(id)arg10 ;
-(void)associateWithClientZone:(id)arg1 ;
-(void)_addTargetAppLibraryForAliasItem:(id)arg1 ;
-(BOOL)isEqualToAppLibrary:(id)arg1 ;
-(void)updateFromFSAtPath:(id)arg1 ;
-(BOOL)wasMovedToCloudDocs;
-(void)_removedAliasItemForTargetAppLibrary:(id)arg1 ;
-(void)registerQueryWithAliases:(BOOL)arg1 isRecursive:(BOOL)arg2 ;
-(void)unregisterQueryWithAliases:(BOOL)arg1 isRecursive:(BOOL)arg2 ;
-(NSString *)pathRelativeToRoot;
-(NSString *)logName;
-(PQLResultSet*)itemsEnumeratorChildOf:(id)arg1 rankMin:(unsigned long long)arg2 rankMax:(unsigned long long)arg3 count:(unsigned long long)arg4 db:(id)arg5 ;
-(PQLResultSet*)itemsEnumeratorWithRankMin:(unsigned long long)arg1 rankMax:(unsigned long long)arg2 namePrefix:(id)arg3 shouldIncludeFolders:(BOOL)arg4 shouldIncludeOnlyFolders:(BOOL)arg5 shouldIncludeDocumentsScope:(BOOL)arg6 shouldIncludeDataScope:(BOOL)arg7 shouldIncludeExternalScope:(BOOL)arg8 shouldIncludeTrashScope:(BOOL)arg9 count:(unsigned long long)arg10 db:(id)arg11 ;
-(BOOL)includesDataScope;
-(id)aliasByUnsaltedBookmarkData:(id)arg1 ;
-(id)rootItemID;
-(BOOL)isCoordinationPendingForItem:(id)arg1 ;
-(long long)throttleHashWithItemID:(id)arg1 ;
-(BOOL)isDesktopAppLibrary;
-(BOOL)isDocumentsAppLibrary;
-(BOOL)isCloudDocsAppLibrary;
-(BRCFSEventsMonitor *)fsEventsMonitor;
-(void)updateWithPlist:(id)arg1 ;
-(void)_updateIsInCloudDocsZone;
-(void)scheduleDeepScanWithReason:(id)arg1 ;
-(BRCSyncContext *)syncContextIfExists;
-(void)removeForegroundClient:(id)arg1 ;
-(void)addForegroundClient:(id)arg1 ;
-(void)cancelFileCoordinators;
-(BRCDirectoryItem*)fetchRootItem;
-(unsigned)_activateState:(unsigned)arg1 origState:(unsigned)arg2 ;
-(BOOL)isiCloudDesktopAppLibrary;
-(void)zoneDidChangeMovedToCloudDocsState;
-(BOOL)shouldEvictUploadedItems;
-(BOOL)hasUbiquityClientsConnected;
-(BOOL)isGreedy;
-(BOOL)isForeground;
-(BOOL)hasActiveQueries;
-(BOOL)hasActiveRecursiveQueries;
-(BOOL)hasActiveAliasQueries;
-(BOOL)containerMetadataNeedsSyncUp;
-(NSString *)containerMetadataEtag;
-(id)_unwrappedDescriptionWithContext:(id)arg1 ;
-(void)freeFileCoordinationSlotsAfterDelayForRead:(BOOL)arg1 ;
-(BOOL)setStateBits:(unsigned)arg1 ;
-(BOOL)markChildrenLostForItemID:(id)arg1 inZone:(id)arg2 fileID:(id)arg3 startingFromRow:(unsigned long long)arg4 hasMoreWork:(BOOL*)arg5 ;
-(void)continueMarkingChildrenLostInZone:(id)arg1 ;
-(void)clearStateBits:(unsigned)arg1 ;
-(void)setRootFileID:(unsigned long long)arg1 ;
-(BOOL)hasInitialFaultsLive;
-(BOOL)hasInitialFaultsEverLive;
-(void)computeDocumentEvictableSizeUsageWithLowTimeDelta:(double)arg1 medTimeDelta:(double)arg2 highTimeDelta:(double)arg3 db:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)_resolveTargetAppLibrariesAndSharedClientZones;
-(void)_removeAllTargetAppLibrariesAndSharedServerZones;
-(void)didReceiveHandoffRequest;
-(id)_aliasAppLibraryTargetSQLPrefix;
-(PQLResultSet*)_targetAppLibrariesEnumerator;
-(PQLResultSet*)_targetSharedServerZonesEnumerator;
-(void)_addTargetAppLibrary:(id)arg1 ;
-(void)_addTargetSharedServerZone:(id)arg1 ;
-(BOOL)isStillTargetingAppLibrary:(id)arg1 ;
-(BOOL)isStillTargetingSharedServerZone:(id)arg1 ;
-(id)itemIDByRowID:(unsigned long long)arg1 db:(id)arg2 ;
-(id)itemByRowID:(unsigned long long)arg1 db:(id)arg2 ;
-(void)notifyClient:(id)arg1 whenFaultingIsDone:(/*^block*/id)arg2 ;
-(id)documentsFolderItemID;
-(BRCRelativePath *)documentsPath;
-(unsigned long long)syncedFolderType;
-(BOOL)supportsSpotlightIndexing;
-(void)addClientUsingUbiquity:(id)arg1 ;
-(void)removeClientUsingUbiquity:(id)arg1 ;
-(void)didUpdateDocumentScopePublic;
-(PQLResultSet*)enumerateUserVisibleChildrenOfItemGlobalID:(id)arg1 sortOrder:(unsigned char)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 db:(id)arg5 ;
-(PQLResultSet*)enumerateUserVisibleChildrenDirectoriesOfItemGlobalID:(id)arg1 db:(id)arg2 ;
-(void)cancelWriteCoordinatorForItem:(id)arg1 ;
-(id)coordinatorForItem:(id)arg1 forRead:(BOOL)arg2 ;
-(NSNumber *)deepScanStamp;
-(unsigned long long)allocateLostStampAddingBackoff:(BOOL)arg1 ;
-(BOOL)markChildrenLostForItemID:(id)arg1 inZone:(id)arg2 fileID:(id)arg3 ;
-(void)fsrootDidMoveToPath:(id)arg1 ;
-(void)didFindLostItem:(id)arg1 oldAppLibrary:(id)arg2 ;
-(void)didRemoveDocumentsFolder;
-(void)didCreateDocumentScopedItem;
-(void)didCreateDataScopedItem;
-(BOOL)hasDocumentsOrDirectory;
-(BOOL)hasUbiquitousDocuments;
-(BOOL)hasLocalChanges;
-(unsigned long long)documentSizeUsageWithDB:(id)arg1 ;
-(void)computeDocumentEvictableSizeUsageWithDB:(id)arg1 reply:(/*^block*/id)arg2 ;
-(unsigned long long)documentCountWithDB:(id)arg1 ;
-(void)recomputeShouldEvictState;
-(void)_addTargetSharedServerZoneForSharedItem:(id)arg1 ;
-(void)_removeTargetSharedServerZoneForSharedServerZone:(id)arg1 ;
-(id)itemIDByRowID:(unsigned long long)arg1 ;
-(PQLResultSet*)liveAliasesEnumeratorTargetingThisAppLibrary;
-(id)containerMetadataFilledWithTCCInfo;
-(BOOL)shouldSaveContainerMetadataServerside;
-(id)rootItemGlobalID;
-(void)recreateDocumentsFolderIfNeeded;
-(void)setContainerMetadataEtag:(NSString *)arg1 ;
-(void)setContainerMetadataNeedsSyncUp:(BOOL)arg1 ;
-(void)scheduleContainerMetadataSyncUp;
-(id)createAliasWithTarget:(id)arg1 parentPath:(id)arg2 forceReparent:(BOOL)arg3 error:(id*)arg4 ;
-(void)setIsOverQuota:(BOOL)arg1 ;
-(long long)maxLostStamp;
-(void)setMaxLostStamp:(long long)arg1 ;
-(void)setZoneRowID:(BRCZoneRowID *)arg1 ;
-(void)setDeepScanStamp:(NSNumber *)arg1 ;
-(void)setDefaultClientZone:(BRCPrivateClientZone *)arg1 ;
-(void)_updateContainerMetadataFromRecord:(id)arg1 stripIcons:(BOOL)arg2 ;
-(BRCPQLConnection *)db;
-(NSNumber *)generationID;
-(void)setGenerationID:(NSNumber *)arg1 ;
-(id)init;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setDelegate:(id<BRCAppLibraryDelegate>)arg1 ;
-(unsigned)state;
-(id<BRCAppLibraryDelegate>)delegate;
-(BRCAccountSession *)session;
-(void)activate;
-(NSURL *)url;
-(void)close;
-(void)setNeedsSave:(BOOL)arg1 ;
-(BRCRelativePath *)root;
-(void)setSession:(BRCAccountSession *)arg1 ;
@end

