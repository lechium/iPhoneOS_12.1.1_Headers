/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SGSuggestionsServiceContactsProtocol.h>
#import <libobjc.A.dylib/SGSuggestionsServiceEventsProtocol.h>
#import <libobjc.A.dylib/SGSuggestionsServiceInternalProtocol.h>
#import <libobjc.A.dylib/SGSuggestionsServiceMailProtocol.h>
#import <libobjc.A.dylib/SGSuggestionsServiceFidesProtocol.h>

@protocol SGDSuggestManagerAllProtocol;
@class SGDaemonConnection, NSString, _PASLock;

@interface SGSuggestionsService : NSObject <SGSuggestionsServiceContactsProtocol, SGSuggestionsServiceEventsProtocol, SGSuggestionsServiceInternalProtocol, SGSuggestionsServiceMailProtocol, SGSuggestionsServiceFidesProtocol> {

	SGDaemonConnection* _daemonConnection;
	id<SGDSuggestManagerAllProtocol> _managerForTesting;
	BOOL _keepDirty;
	NSString* _machServiceName;
	BOOL _queuesRequestsIfBusy;
	_PASLock* _cacheLock;

}
+(BOOL)hasEntitlement:(id)arg1 ;
+(BOOL)isHarvestingSupported;
+(id)serviceForContacts;
+(id)serviceForEvents;
+(id)filteredSearchableItemsFromItems:(id)arg1 ;
+(id)_daemonConnectionForMachServiceName:(id)arg1 protocol:(id)arg2 useCache:(BOOL)arg3 ;
+(id)serviceForInternal;
+(id)serviceForFides;
+(void)prepareForQuery;
+(id)wantedSearchableItemsFromItems:(id)arg1 ;
+(id)serviceForMail;
+(id)serviceForMessages;
+(void)initialize;
-(id)cnContactMatchesForRecordIds:(id)arg1 error:(id*)arg2 ;
-(id)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)contactFromRecordID:(id)arg1 error:(id*)arg2 ;
-(id)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)contactMatchesByEmailAddress:(id)arg1 error:(id*)arg2 ;
-(id)contactMatchesByPhoneNumber:(id)arg1 error:(id*)arg2 ;
-(id)originFromRecordId:(id)arg1 error:(id*)arg2 ;
-(BOOL)confirmContactDetailRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)confirmRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)rejectContactDetailRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)rejectRecord:(id)arg1 error:(id*)arg2 ;
-(void)eventFromUniqueId:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmEventByRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)rejectEventByRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)logMetricContactSearchResult:(int)arg1 recordId:(id)arg2 contactIdentifier:(id)arg3 bundleId:(id)arg4 ;
-(void)logMetricSuggestedContactDetailShown:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3 ;
-(void)logMetricSuggestedContactDetailUsed:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3 ;
-(void)logMetricContactCreated:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3 ;
-(void)logMetricSearchResultsIncludedPureSuggestionWithBundleId:(id)arg1 ;
-(void)logEventInteractionForEventWithUniqueKey:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(void)prepareForRealtimeExtractionWithCompletion:(/*^block*/id)arg1 ;
-(void)updateMessages:(id)arg1 state:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)registerEventsChangeObserver:(/*^block*/id)arg1 ;
-(BOOL)deregisterEventsChangeObserverWithToken:(id)arg1 ;
-(void)confirmContact:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)rejectContact:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmRecord:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)rejectRecord:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmContactDetailRecord:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)rejectContactDetailRecord:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)rejectCuratedContactDetail:(id)arg1 from:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)confirmEvent:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)rejectEvent:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)waitForEventWithIdentifier:(id)arg1 toAppearInEventStoreWithCompletion:(/*^block*/id)arg2 ;
-(BOOL)queuesRequestsIfBusy;
-(BOOL)isEnabledWithError:(id*)arg1 ;
-(void)addSearchableItems:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addInteractions:(id)arg1 bundleId:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)spotlightReimportFromIdentifier:(id)arg1 forPersonHandle:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned)arg5 withCompletion:(/*^block*/id)arg6 ;
-(void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resetConfirmationAndRejectionHistoryWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)clearCachesFully:(BOOL)arg1 error:(id*)arg2 ;
-(id)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)sendRTCLogs:(id*)arg1 ;
-(BOOL)daemonExit:(id*)arg1 ;
-(BOOL)sleep:(id*)arg1 ;
-(void)suggestionsFromMockData:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)keysForSchemas:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)eventsForSchemas:(id)arg1 usingStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)contactFromRecordID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)contactMatchesWithContactIdentifiers:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)originFromRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithMachServiceName:(id)arg1 protocol:(id)arg2 ;
-(id)initWithMachServiceName:(id)arg1 protocol:(id)arg2 useCache:(BOOL)arg3 ;
-(id)_remoteSuggestionManager;
-(void)setManagerForTesting:(id)arg1 ;
-(id)contactMatchesWithContact:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)allContactsLimitedTo:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned)arg4 error:(id*)arg5 ;
-(id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned)arg5 error:(id*)arg6 ;
-(id)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)suggestEventsInFutureLimitTo:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)allEventsLimitedTo:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)contactMatchesByPhoneNumber:(id)arg1 ;
-(id)contactMatchesByEmailAddress:(id)arg1 ;
-(void)refreshCacheSnapshot;
-(id)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(BOOL)arg3 error:(id*)arg4 ;
-(id)contactMatchesOrLookupIdByPhoneNumber:(id)arg1 error:(id*)arg2 ;
-(id)contactMatchesOrLookupIdByEmailAddress:(id)arg1 error:(id*)arg2 ;
-(id)contactFromRecordID:(id)arg1 ;
-(id)cnContactMatchesForRecordId:(id)arg1 error:(id*)arg2 ;
-(id)emailAddressIsSignificant:(id)arg1 error:(id*)arg2 ;
-(id)eventFromRecordID:(id)arg1 error:(id*)arg2 ;
-(void)eventFromRecordID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)eventFromUniqueId:(id)arg1 error:(id*)arg2 ;
-(BOOL)confirmEvent:(id)arg1 error:(id*)arg2 ;
-(BOOL)rejectEvent:(id)arg1 error:(id*)arg2 ;
-(BOOL)confirmContact:(id)arg1 error:(id*)arg2 ;
-(BOOL)rejectContact:(id)arg1 error:(id*)arg2 ;
-(BOOL)rejectCuratedContactDetail:(id)arg1 from:(id)arg2 error:(id*)arg3 ;
-(id)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 error:(id*)arg6 ;
-(void)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 withCompletion:(/*^block*/id)arg6 ;
-(id)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 error:(id*)arg6 ;
-(void)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 withCompletion:(/*^block*/id)arg6 ;
-(BOOL)addSearchableItems:(id)arg1 error:(id*)arg2 ;
-(void)_addSearchableItemMetadata:(id)arg1 htmlData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)addInteractions:(id)arg1 bundleId:(id)arg2 error:(id*)arg3 ;
-(BOOL)spotlightReimportFromIdentifier:(id)arg1 forPersonHandle:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 error:(id*)arg5 ;
-(id)messagesToRefreshWithError:(id*)arg1 ;
-(BOOL)reportMessagesFound:(id)arg1 lost:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateMessages:(id)arg1 state:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)fullDownloadRequestBatch:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)resolveFullDownloadRequests:(id)arg1 error:(id*)arg2 ;
-(id)spotlightObserver;
-(BOOL)drainQueueCompletely:(id*)arg1 ;
-(BOOL)removeAllStoredPseudoContacts:(id*)arg1 ;
-(id)registerContactsChangeObserver:(/*^block*/id)arg1 ;
-(BOOL)deregisterContactsChangeObserverWithToken:(id)arg1 ;
-(void)setQueuesRequestsIfBusy:(BOOL)arg1 ;
-(void)suggestionsFromURL:(id)arg1 title:(id)arg2 HTMLPayload:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)isEventCandidateForURL:(id)arg1 andTitle:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)planReceivedFromServerWithPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)waitForEventWithIdentifier:(id)arg1 toAppearInEventStoreWithLastModificationDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)emailAddressIsSignificant:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)resetConfirmationAndRejectionHistory:(id*)arg1 ;
-(void)realtimeSuggestionsFromURL:(id)arg1 title:(id)arg2 HTMLPayload:(id)arg3 extractionDate:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)clearCachesFully:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)drainQueueCompletelyWithCompletion:(/*^block*/id)arg1 ;
-(void)removeAllStoredPseudoContactsWithCompletion:(/*^block*/id)arg1 ;
-(void)daemonExitWithCompletion:(/*^block*/id)arg1 ;
-(void)sleepWithCompletion:(/*^block*/id)arg1 ;
-(void)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)deleteCloudKitZoneWithCompletion:(/*^block*/id)arg1 ;
-(void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteInteractionsWithBundleId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteInteractionsWithBundleId:(id)arg1 identifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteInteractionsWithBundleId:(id)arg1 groupIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)allEventsLimitedTo:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)contactMatchesWithContact:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)contactMatchesWithContactIdentifiers:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)cnContactMatchesForRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)cnContactMatchesForRecordIds:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)contactMatchesByPhoneNumber:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)contactMatchesByEmailAddress:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)contactMatchesOrLookupIdByPhoneNumber:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)contactMatchesOrLookupIdByEmailAddress:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)allContactsLimitedTo:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)prepareForRealtimeExtraction:(id*)arg1 ;
-(void)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)messagesToRefreshWithCompletion:(/*^block*/id)arg1 ;
-(void)reportMessagesFound:(id)arg1 lost:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)fullDownloadRequestBatch:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveFullDownloadRequests:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)keepDirty:(BOOL)arg1 ;
-(void)logMetricAutocompleteResult:(int)arg1 recordId:(id)arg2 contactIdentifier:(id)arg3 bundleId:(id)arg4 ;
-(void)logMetricAutocompleteUserSelectedRecordId:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3 ;
-(void)logMetricContactSearchResultSelected:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3 ;
-(void)logEventInteractionForEventWithExternalIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(BOOL)confirmEventByRecordId:(id)arg1 error:(id*)arg2 ;
-(BOOL)rejectEventByRecordId:(id)arg1 error:(id*)arg2 ;
-(void)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

