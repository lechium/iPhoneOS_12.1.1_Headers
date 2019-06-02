/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCUserInfoObserving.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/FCAppActivityObserving.h>

@protocol OS_dispatch_queue;
@class NSSet, NSMutableDictionary, FCCloudContext, NSURLSession, FCKeyValueStore, NSDictionary, NSDate, NSObject, NSString;

@interface FCPurchaseController : NSObject <FCUserInfoObserving, NSURLSessionDelegate, FCAppActivityObserving> {

	NSSet* _purchasesDiscoveredTagIDs;
	NSMutableDictionary* _purchaseLookUpEntriesByTagID;
	NSMutableDictionary* _webAccessEntriesByTagID;
	NSMutableDictionary* _ongoingPurchaseEntriesByProductID;
	NSMutableDictionary* _paymentQueueByProductID;
	FCCloudContext* _cloudContext;
	NSURLSession* _session;
	FCKeyValueStore* _localStore;
	NSDictionary* _readOnlyPurchaseLookUpEntriesByTagID;
	NSDate* _lastEntitlementCheckTime;
	NSObject*<OS_dispatch_queue> _readWriteQueue;

}

@property (nonatomic,retain) FCCloudContext * cloudContext;                                        //@synthesize cloudContext=_cloudContext - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                                               //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FCKeyValueStore * localStore;                                         //@synthesize localStore=_localStore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * purchaseLookUpEntriesByTagID;                   //@synthesize purchaseLookUpEntriesByTagID=_purchaseLookUpEntriesByTagID - In the implementation block
@property (copy) NSDictionary * readOnlyPurchaseLookUpEntriesByTagID;                              //@synthesize readOnlyPurchaseLookUpEntriesByTagID=_readOnlyPurchaseLookUpEntriesByTagID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * webAccessEntriesByTagID;                        //@synthesize webAccessEntriesByTagID=_webAccessEntriesByTagID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * ongoingPurchaseEntriesByProductID;              //@synthesize ongoingPurchaseEntriesByProductID=_ongoingPurchaseEntriesByProductID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * paymentQueueByProductID;                        //@synthesize paymentQueueByProductID=_paymentQueueByProductID - In the implementation block
@property (nonatomic,retain) NSSet * purchasesDiscoveredTagIDs;                                    //@synthesize purchasesDiscoveredTagIDs=_purchasesDiscoveredTagIDs - In the implementation block
@property (nonatomic,copy) NSDate * lastEntitlementCheckTime;                                      //@synthesize lastEntitlementCheckTime=_lastEntitlementCheckTime - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> readWriteQueue;                          //@synthesize readWriteQueue=_readWriteQueue - In the implementation block
@property (nonatomic,readonly) NSString * lastSignedInItunesAccountName; 
@property (nonatomic,readonly) NSSet * allPurchasedTagIDs; 
@property (nonatomic,readonly) NSSet * allTagIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FCKeyValueStore *)localStore;
-(void)loadLocalCachesFromStore;
-(FCCloudContext *)cloudContext;
-(id)initWithCloudContext:(id)arg1 keyValueStoreOption:(unsigned long long)arg2 ;
-(void)_initializeAppStorePurchaseDiscoveredList;
-(void)setPurchasesDiscoveredTagIDs:(NSSet *)arg1 ;
-(void)cleanupStaleOngoingPurchaseEntries;
-(void)cleanupExpiredPurchaseLookupEntriesIfNeeded;
-(void)saveToDisk;
-(void)setPurchaseLookUpEntriesByTagID:(NSMutableDictionary *)arg1 ;
-(void)setReadOnlyPurchaseLookUpEntriesByTagID:(NSDictionary *)arg1 ;
-(void)setWebAccessEntriesByTagID:(NSMutableDictionary *)arg1 ;
-(void)setOngoingPurchaseEntriesByProductID:(NSMutableDictionary *)arg1 ;
-(void)setPaymentQueueByProductID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)purchaseLookUpEntriesByTagID;
-(NSMutableDictionary *)webAccessEntriesByTagID;
-(NSMutableDictionary *)ongoingPurchaseEntriesByProductID;
-(id)createPaymentQueueWithProductIdentifier:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3 webAccessOptIn:(BOOL)arg4 appAdamID:(id)arg5 storeExternalVersion:(id)arg6 ;
-(NSMutableDictionary *)paymentQueueByProductID;
-(void)notifyPurchaseListChanged;
-(id)_allPurchasedTagIDs;
-(void)notifyWebAccessOptedInListChanged;
-(NSString *)lastSignedInItunesAccountName;
-(id)lastSignedInItunesAccountDSID;
-(BOOL)atleastOneValidAppStorePurchase;
-(id)_purchaseLookUpEntryIDForTagID:(id)arg1 ;
-(void)notifyPurchaseRemovedWithTagIDs:(id)arg1 ;
-(NSSet *)purchasesDiscoveredTagIDs;
-(void)addToPurchasedChannelsListWithEntry:(id)arg1 ;
-(BOOL)isPurchaseTimeElapsedWithEntry:(id)arg1 ;
-(void)removeOngoingPurchaseEntryForProductID:(id)arg1 ;
-(id)_ongoingPurchaseEntryIDForProductIdentifier:(id)arg1 ;
-(id)webAccessOptedInTagIDs;
-(NSSet *)allPurchasedTagIDs;
-(id)allAppStorePurchasedTagIDsByPurchaseID;
-(id)purchaseLookUpEntryForTagID:(id)arg1 ;
-(void)updatePurchaseEntryToValid:(id)arg1 purchaseType:(unsigned long long)arg2 ;
-(void)silentRemoveFromPurchasedChannelsListWithTagIDs:(id)arg1 ;
-(void)fetchChannelIDsForPurchaseIDs:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addAppStoreDiscoveredChannelsToFavorites:(id)arg1 ;
-(void)updatePurchaseEntryToSubcsriptionNotSupported:(id)arg1 ;
-(id)allAppStorePurchasedTagIDs;
-(void)updatePurchaseEntryToExpired:(id)arg1 ;
-(void)removeFromWebAccessOptedInListWithTagID:(id)arg1 ;
-(id)fetchOperationForPurchaseLookupWithPurchaseIDs:(id)arg1 ;
-(NSDictionary *)readOnlyPurchaseLookUpEntriesByTagID;
-(BOOL)isTagIDPurchased:(id)arg1 ;
-(void)notifyPurchaseAddedWithTagIDs:(id)arg1 ;
-(void)updatePurchaseEntryToExpired:(id)arg1 hasShownRenewalNotice:(BOOL)arg2 ;
-(void)_removeFromPurchasedChannelsListWithTagIDs:(id)arg1 ;
-(void)handleAccessTokenChangeWithTagID:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)removeFromPurchasedChannelsListWithTagIDs:(id)arg1 ;
-(void)removeWebPurchaseForTagID:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)handleAccessTokenVerificationFailureWithTagID:(id)arg1 ;
-(void)handleAccessTokenVerificationSuccessWithTagID:(id)arg1 subscribed:(BOOL)arg2 accessToken:(id)arg3 ;
-(void)performHTTPRequestForVerifyAccessTokenWithURL:(id)arg1 accessToken:(id)arg2 consumedArticleCount:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)webAccessEntryForTagID:(id)arg1 ;
-(id)_webAccessEntryIDForTagID:(id)arg1 ;
-(void)addToWebAccessEntryListWithEntry:(id)arg1 ;
-(void)handleWebAccessSuccessWithTagID:(id)arg1 ;
-(void)handleWebAcccessFailureWithTagID:(id)arg1 purchaseID:(id)arg2 email:(id)arg3 purchaseReceipt:(id)arg4 ;
-(void)userInfo:(id)arg1 didChangeAccessTokenForTagID:(id)arg2 ;
-(void)userInfo:(id)arg1 didRemoveAccessTokenForTagID:(id)arg2 userInitiated:(BOOL)arg3 ;
-(void)activityObservingApplicationDidEnterBackground;
-(id)initWithCloudContext:(id)arg1 ;
-(void)addToWebAccessOptedInListWithTagID:(id)arg1 ;
-(void)shouldShowSignedInWithDifferentiTunesAccountAlertWithiTunesAccountName:(id)arg1 iTunesAccountDSID:(id)arg2 isUserSignedIntoiTunes:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)shouldShowiTunesSignedOutAlertWithiTunesAccountName:(id)arg1 iTunesAccountDSID:(id)arg2 isUserSignedIntoiTunes:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)clearAllAppStorePurchases;
-(void)setLastSignedInItunesAccountDSIDWithDSID:(id)arg1 ;
-(void)setLastSignedInItunesAccountNameWithName:(id)arg1 ;
-(void)addAppStorePurchaseWithTagID:(id)arg1 purchaseID:(id)arg2 ;
-(void)clearAllPurchases;
-(void)clearAllOngoingPurchaseEntries;
-(void)addPurchaseWithTagID:(id)arg1 purchaseID:(id)arg2 purchaseType:(unsigned long long)arg3 isNewsAppPurchase:(BOOL)arg4 ;
-(void)addExpiredPurchaseWithTagID:(id)arg1 purchaseID:(id)arg2 purchaseType:(unsigned long long)arg3 isNewsAppPurchase:(BOOL)arg4 expirationDate:(id)arg5 ;
-(BOOL)isPaidSubscriber;
-(BOOL)isPaidSubscriberFromNews;
-(BOOL)isPaidSubscriberFromAppStore;
-(BOOL)isPaidSubscriberFromWeb;
-(BOOL)isPurchaseOngoingForTagID:(id)arg1 ;
-(void)startPurchaseWithTagID:(id)arg1 productIdentifier:(id)arg2 purchaseID:(id)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 price:(id)arg6 webAccessOptIn:(BOOL)arg7 payment:(id)arg8 completion:(/*^block*/id)arg9 ;
-(void)simulatePurchaseWithTagID:(id)arg1 productIdentifier:(id)arg2 purchaseID:(id)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 webAccessOptIn:(BOOL)arg6 ;
-(void)finishPurchaseTransactionWithProductID:(id)arg1 ;
-(void)forceExpireAllSubscriptionsIfNeeded;
-(id)expiredPurchaseChannelIDs;
-(id)subscriptionNotSupportedChannelIDs;
-(void)checkIntegrityOfPurchaseWithID:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)feldsparEntitlementCheckWithCallbackQueue:(id)arg1 ignoreCache:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(NSSet *)allTagIDs;
-(BOOL)isTagPurchased:(id)arg1 ;
-(void)renewalNoticeShownForPurchasedChannelsListWithTagIDs:(id)arg1 ;
-(void)updatePurchaseEntryToExpiredForTagIDs:(id)arg1 ;
-(void)removeFromPurchasesDiscoveredList:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)verifyAccessTokenWithTagID:(id)arg1 accessToken:(id)arg2 consumedArticleCount:(unsigned long long)arg3 serialCompletion:(/*^block*/id)arg4 callbackQueue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)submitWebAccessWithTagID:(id)arg1 purchaseID:(id)arg2 emailAddress:(id)arg3 purchaseReceipt:(id)arg4 serialCompletion:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)setCloudContext:(FCCloudContext *)arg1 ;
-(void)setLocalStore:(FCKeyValueStore *)arg1 ;
-(NSDate *)lastEntitlementCheckTime;
-(void)setLastEntitlementCheckTime:(NSDate *)arg1 ;
-(void)setReadWriteQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)readWriteQueue;
-(id)init;
-(void)dealloc;
-(void)_applicationDidEnterBackground;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
@end

