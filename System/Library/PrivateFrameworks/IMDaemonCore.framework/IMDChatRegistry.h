/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMDaemonCore-Structs.h>
#import <libobjc.A.dylib/TUConversationManagerDelegate.h>

@class NSRecursiveLock, NSMutableDictionary, NSCache, IMDCKUtilities, IMDChatStore, IMDMessageProcessingController, IMDMessageHistorySyncController, TUConversationManager, NSString, IMDCNPersonAliasResolver, NSArray;

@interface IMDChatRegistry : NSObject <TUConversationManagerDelegate> {

	NSRecursiveLock* _chatsLock;
	NSRecursiveLock* _handlesLock;
	NSMutableDictionary* _chats;
	BOOL _isLoading;
	BOOL _doneLoadingAfterMerge;
	NSCache* _allChatsByIDCache;
	NSMutableDictionary* _chatsByGroupID;
	BOOL _hasDumpedLogsForNoExisitingGroup;
	NSMutableDictionary* _idToHandlesMap;
	IMDCKUtilities* _ckUtilities;
	IMDChatStore* _chatStore;
	IMDMessageProcessingController* _messageProcessingController;
	IMDMessageHistorySyncController* _messageHistorySyncController;
	NSMutableDictionary* _personCentricGroupedChatsCache;
	TUConversationManager* _conversationManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableDictionary * idToHandlesMap;                                          //@synthesize idToHandlesMap=_idToHandlesMap - In the implementation block
@property (nonatomic,readonly) IMDCNPersonAliasResolver * cnaliasResolver; 
@property (nonatomic,retain) IMDCKUtilities * ckUtilities;                                                  //@synthesize ckUtilities=_ckUtilities - In the implementation block
@property (nonatomic,retain) IMDChatStore * chatStore;                                                      //@synthesize chatStore=_chatStore - In the implementation block
@property (assign,nonatomic) BOOL hasDumpedLogsForNoExisitingGroup;                                         //@synthesize hasDumpedLogsForNoExisitingGroup=_hasDumpedLogsForNoExisitingGroup - In the implementation block
@property (nonatomic,readonly) IMDMessageProcessingController * messageProcessingController;                //@synthesize messageProcessingController=_messageProcessingController - In the implementation block
@property (nonatomic,readonly) IMDMessageHistorySyncController * messageHistorySyncController;              //@synthesize messageHistorySyncController=_messageHistorySyncController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * personCentricGroupedChatsCache;                          //@synthesize personCentricGroupedChatsCache=_personCentricGroupedChatsCache - In the implementation block
@property (nonatomic,readonly) TUConversationManager * conversationManager;                                 //@synthesize conversationManager=_conversationManager - In the implementation block
@property (nonatomic,readonly) NSArray * chats; 
+(id)sharedInstance;
-(void)removeChat:(id)arg1 ;
-(void)simulateMessageReceive:(id)arg1 serviceName:(id)arg2 handles:(id)arg3 sender:(id)arg4 ;
-(TUConversationManager *)conversationManager;
-(id)_activeTUConversations;
-(void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2 ;
-(void)systemDidUnlock;
-(void)systemDidLeaveFirstDataProtectionLock;
-(id)existingChatWithGUID:(id)arg1 ;
-(NSArray *)chats;
-(BOOL)updateProperties:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 ;
-(IMDCKUtilities *)ckUtilities;
-(BOOL)doneLoadingAfterMerge;
-(id)_statsCollector;
-(void)updateLastMessageForChat:(id)arg1 hintMessage:(id)arg2 ;
-(void)updateStateForChat:(id)arg1 fromMessage:(id)arg2 toMessage:(id)arg3 forcePost:(BOOL)arg4 hintMessage:(id)arg5 ;
-(id)existingChatsForIDs:(id)arg1 onService:(id)arg2 style:(unsigned char)arg3 ;
-(void)removeMessage:(id)arg1 fromChat:(id)arg2 ;
-(BOOL)_isUsingStingRay;
-(void)invalidatePersonCentricGroupedChatsCache;
-(id)existingChatsWithGroupID:(id)arg1 ;
-(void)_forceReloadChats:(BOOL)arg1 ;
-(id)existingChatForID:(id)arg1 account:(id)arg2 ;
-(void)addChat:(id)arg1 ;
-(void)addIMDHandleToRegistry:(id)arg1 ;
-(id)existingChatWithIdentifier:(id)arg1 account:(id)arg2 ;
-(id)existingChatForRoom:(id)arg1 account:(id)arg2 ;
-(id)existingChatForIDs:(id)arg1 account:(id)arg2 displayName:(id)arg3 groupID:(id)arg4 style:(unsigned char)arg5 ;
-(id)allChatsWithIdentifier:(id)arg1 style:(unsigned char)arg2 serviceNames:(id)arg3 ;
-(void)updateLastMessageForChat:(id)arg1 hintMessage:(id)arg2 historyQuery:(BOOL)arg3 ;
-(void)updateStateForChat:(id)arg1 fromMessage:(id)arg2 toMessage:(id)arg3 forcePost:(BOOL)arg4 hintMessage:(id)arg5 shouldRebuildFailedMessageDate:(BOOL)arg6 ;
-(BOOL)updateUnreadCountForChat:(id)arg1 ;
-(void)updateStateForChat:(id)arg1 hintMessage:(id)arg2 shouldRebuildFailedMessageDate:(BOOL)arg3 ;
-(void)updateStateForChat:(id)arg1 forcePost:(BOOL)arg2 shouldRebuildFailedMessageDate:(BOOL)arg3 ;
-(void)__removeChatFromGroupIDChatIndex:(id)arg1 ;
-(void)__addChatToGroupIDChatIndex:(id)arg1 ;
-(void)addChat:(id)arg1 firstLoad:(BOOL)arg2 ;
-(NSMutableDictionary *)personCentricGroupedChatsCache;
-(void)removeIMDHandleFromRegistry:(id)arg1 ;
-(void)updateStateForChat:(id)arg1 hintMessage:(id)arg2 ;
-(void)addMessage:(id)arg1 toChat:(id)arg2 deferSpotlightIndexing:(BOOL)arg3 ;
-(id)_chatInfoInRange:(NSRange)arg1 ;
-(BOOL)loadChatsWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)_saveChats;
-(BOOL)repairDuplicateChatsIfNeeded;
-(void)repairPersonCentricIDsOnChatsIfNeeded;
-(void)startHandleIDPopulation;
-(void)setUpInitialConversationManager;
-(id)allExistingChatsWithIdentifier:(id)arg1 style:(unsigned char)arg2 ;
-(void)_makeAllAttachmentsClassC;
-(NSArray*)_createGroupChatsArray;
-(NSArray*)findDuplicateUnnamedGroups:(NSArray*)arg1 ;
-(void)updateGroupIDForChat:(id)arg1 newGroupID:(id)arg2 ;
-(BOOL)_chat:(id)arg1 isDuplicateOfChat:(id)arg2 ;
-(NSArray*)findDuplicateChats:(NSArray*)arg1 ;
-(id)_findChatWinnerInDuplicateChatArray:(NSArray*)arg1 fixDisplayName:(BOOL*)arg2 ;
-(id)_findLosingChatGUIDsInArrayOfChats:(NSArray*)arg1 withWinner:(id)arg2 ;
-(BOOL)_mergeDuplicateGroupsIfNeeded;
-(void)_fixUpChatParticipantsIfNeeded:(id)arg1 ;
-(id)groupChatsBasedOnIdentity;
-(id)sortPersonCentricChatGroups:(id)arg1 ;
-(id)truncateSortedChatsGroupedByPersonCentricID:(id)arg1 toMaximumNumberOfChats:(long long)arg2 ;
-(void)_updateSyncStatisticsForChat:(id)arg1 incrementTotalCount:(unsigned long long)arg2 ;
-(id)_existingChatWithOriginalGroupID:(id)arg1 onService:(id)arg2 ;
-(IMDChatStore *)chatStore;
-(BOOL)hasDumpedLogsForNoExisitingGroup;
-(void)setHasDumpedLogsForNoExisitingGroup:(BOOL)arg1 ;
-(id)_existingChatForCKRecord:(id)arg1 ;
-(void)_markForksAsSyncedForChat:(id)arg1 ;
-(BOOL)_shouldUpdateSyncStatsForChat:(id)arg1 originalSyncState:(long long)arg2 ;
-(BOOL)_ensureNoExistingGroupForCKRecord:(id)arg1 ;
-(void)_insertChatUsingCKRecord:(id)arg1 ;
-(BOOL)_shouldMigrateIMDHandlesPersonCentricIDsOnAllChats;
-(void)_noteDownAttemptToMigratePersonCentricIDsOnIMDHandles;
-(id)_pcmidToHandlesMapForChats:(id)arg1 ;
-(id)_handlesThatNeedPCMIDsUpdatedGivenMap:(id)arg1 ;
-(void)_updatePCMIDOnHandles:(id)arg1 ;
-(void)_addHandlesToPCMIDMapForChatParticipants:(id)arg1 pcmidToHandleMap:(id)arg2 ;
-(id)_handlesThatNeedPCMIDUpdatedGivenArray:(id)arg1 ;
-(void)_updatePCMIDForHandle:(id)arg1 ;
-(id)_personCentricIDForHandleID:(id)arg1 ;
-(void)_updateHandleInDBWithPCMID:(id)arg1 handle:(id)arg2 ;
-(void)processMessageUsingCKRecord:(id)arg1 updatedLastMessageCount:(int)arg2 ;
-(id)_lookupChatUsingID:(id)arg1 ;
-(BOOL)_shouldUpdateSyncStatsForMessage:(id)arg1 originalSyncState:(long long)arg2 ;
-(void)_updateSyncStatisticsForMessage:(id)arg1 incrementTotalCount:(unsigned long long)arg2 ;
-(void)addItem:(id)arg1 toChat:(id)arg2 ;
-(id)chatForHandle:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 guid:(id)arg4 lastAddressedHandle:(id)arg5 lastAddressedSIMID:(id)arg6 ;
-(id)chatForHandles:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 style:(unsigned char)arg4 groupID:(id)arg5 displayName:(id)arg6 guid:(id)arg7 lastAddressedHandle:(id)arg8 lastAddressedSIMID:(id)arg9 ;
-(id)chatForRoom:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 guid:(id)arg4 ;
-(id)existingChatWithEngramID:(id)arg1 ;
-(id)existingChatForIDs:(id)arg1 account:(id)arg2 style:(unsigned char)arg3 ;
-(id)allExistingSupportedServiceChatsWithIdentifier:(id)arg1 style:(unsigned char)arg2 ;
-(void)updateStateForChat:(id)arg1 forcePost:(BOOL)arg2 ;
-(void)removeItem:(id)arg1 fromChat:(id)arg2 ;
-(void)addMessage:(id)arg1 toChat:(id)arg2 ;
-(id)_chatInfoForConnection;
-(id)_allChatInfo;
-(id)_chatInfoForNumberOfChats:(long long)arg1 ;
-(id)_chatInfoForSaving;
-(BOOL)saveChats;
-(id)allHandlesForID:(id)arg1 ;
-(BOOL)_updateDuplicateUnnamedGroupsWithNewGroupIDIfNeeded;
-(IMDCNPersonAliasResolver *)cnaliasResolver;
-(id)_allHandles;
-(id)_aliasToHandlesMap:(id)arg1 ;
-(void)_populateCNRecordIDForHandles:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)chatIdToLastMessageMapOfOldChats;
-(id)personCentricGroupedChatsArrayWithMaximumNumberOfChats:(long long)arg1 skipsLastMessageLoading:(BOOL)arg2 ;
-(id)chatsToUploadToCloudKitWithLimit:(unsigned long long)arg1 isUsingStingRay:(BOOL)arg2 ;
-(void)updateChatWithGUID:(id)arg1 serverChangeToken:(id)arg2 recordID:(id)arg3 ;
-(void)updateChatUsingCKRecord:(id)arg1 ;
-(void)markChatAsDeferredForSyncingUsingCKRecord:(id)arg1 ;
-(void)markDefferredChatsAsNeedingSync;
-(void)resetChatSyncStateForRecord:(id)arg1 ;
-(id)messagesToUploadToCloudKitWithLimit:(unsigned long long)arg1 ;
-(void)processMessageUsingCKRecord:(id)arg1 ;
-(id)copyRecordIDsAndGUIDsPendingCloudKitDelete;
-(void)clearPendingDeleteTable;
-(BOOL)isBeingSetup;
-(id)_existingiMessageChatForChatIdentifier:(id)arg1 style:(unsigned char)arg2 ;
-(NSMutableDictionary *)idToHandlesMap;
-(void)setIdToHandlesMap:(NSMutableDictionary *)arg1 ;
-(void)setCkUtilities:(IMDCKUtilities *)arg1 ;
-(void)setChatStore:(IMDChatStore *)arg1 ;
-(IMDMessageProcessingController *)messageProcessingController;
-(IMDMessageHistorySyncController *)messageHistorySyncController;
-(void)setPersonCentricGroupedChatsCache:(NSMutableDictionary *)arg1 ;
-(void)_insertCurrentActiveTUConversationsIfNeeded;
-(void)_addTUConversationToMessageStore:(id)arg1 shouldBroadcast:(BOOL)arg2 ;
-(id)_chatForTUGroupID:(id)arg1 ;
-(id)_conversationItemForChat:(id)arg1 conversation:(id)arg2 ;
-(id)_initiatorForConversation:(id)arg1 chat:(id)arg2 ;
-(BOOL)_shouldAddNewItemForConversation:(id)arg1 ;
-(id)_messageStore;
-(id)init;
-(void)dealloc;
@end
