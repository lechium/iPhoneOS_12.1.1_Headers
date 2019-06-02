/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCTestingContext.h>
#import <libobjc.A.dylib/FCCKDatabaseEncryptionDelegate.h>
#import <libobjc.A.dylib/FCContentContext.h>
#import <libobjc.A.dylib/FCPrivateDataContext.h>
#import <libobjc.A.dylib/FCCacheFlushing.h>

@protocol FCAppActivityMonitor, FCFlintHelper, FCBackgroundTaskable, FCPPTContext, FCContentContext, FCPrivateDataContext;
@class NSString, FCAssetManager, FCArticleController, FCTagController, FCFlintResourceManager, FCNetworkBehaviorMonitor, NSURL, FCPersonalizationData, FCPrivateChannelMembershipController, FCReadingHistory, FCReadingList, FCSubscriptionList, FCUserInfo, FCTagSettings, FCSubscriptionController, FCFeedManager, FCClientEndpointConnection, FCCommandQueue, FCNotificationsEndpointConnection, FCNotificationController, FCPurchaseController;

@interface FCCloudContext : NSObject <FCTestingContext, FCCKDatabaseEncryptionDelegate, FCContentContext, FCPrivateDataContext, FCCacheFlushing> {

	BOOL _deviceIsiPad;
	FCSubscriptionController* _subscriptionController;
	FCFeedManager* _feedManager;
	FCNetworkBehaviorMonitor* _networkBehaviorMonitor;
	id<FCAppActivityMonitor> _appActivityMonitor;
	FCClientEndpointConnection* _endpointConnection;
	FCCommandQueue* _endpointCommandQueue;
	FCNotificationsEndpointConnection* _notificationsEndpointConnection;
	FCCommandQueue* _notificationsEndpointCommandQueue;
	FCNotificationController* _notificationController;
	FCPurchaseController* _purchaseController;
	id<FCFlintHelper> _flintHelper;
	id<FCBackgroundTaskable> _backgroundTaskable;
	id<FCPPTContext> _pptContext;
	id<FCContentContext> _contentContext;
	id<FCPrivateDataContext> _privateDataContext;

}

@property (nonatomic,retain) id<FCContentContext> contentContext;                                                      //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,retain) id<FCAppActivityMonitor> appActivityMonitor;                                              //@synthesize appActivityMonitor=_appActivityMonitor - In the implementation block
@property (nonatomic,retain) id<FCPrivateDataContext> privateDataContext;                                              //@synthesize privateDataContext=_privateDataContext - In the implementation block
@property (nonatomic,readonly) FCSubscriptionController * subscriptionController;                                      //@synthesize subscriptionController=_subscriptionController - In the implementation block
@property (nonatomic,readonly) FCNotificationController * notificationController;                                      //@synthesize notificationController=_notificationController - In the implementation block
@property (nonatomic,readonly) FCPurchaseController * purchaseController;                                              //@synthesize purchaseController=_purchaseController - In the implementation block
@property (nonatomic,readonly) FCFeedManager * feedManager;                                                            //@synthesize feedManager=_feedManager - In the implementation block
@property (nonatomic,readonly) id<FCFeedPersonalizing> feedPersonalizer; 
@property (nonatomic,readonly) FCNetworkBehaviorMonitor * networkBehaviorMonitor;                                      //@synthesize networkBehaviorMonitor=_networkBehaviorMonitor - In the implementation block
@property (assign,nonatomic,__weak) id<FCFlintHelper> flintHelper;                                                     //@synthesize flintHelper=_flintHelper - In the implementation block
@property (assign,nonatomic,__weak) id<FCBackgroundTaskable> backgroundTaskable;                                       //@synthesize backgroundTaskable=_backgroundTaskable - In the implementation block
@property (nonatomic,readonly) BOOL deviceIsiPad;                                                                      //@synthesize deviceIsiPad=_deviceIsiPad - In the implementation block
@property (nonatomic,readonly) id<FCPPTContext> pptContext;                                                            //@synthesize pptContext=_pptContext - In the implementation block
@property (nonatomic,readonly) BOOL isPrivateDataEncryptionEnabled; 
@property (nonatomic,readonly) BOOL isPrivateDatabaseStartingUp; 
@property (nonatomic,readonly) BOOL isPrivateDatabaseOnline; 
@property (nonatomic,readonly) BOOL isPrivateDatabaseTemporarilySuspended; 
@property (nonatomic,readonly) FCClientEndpointConnection * endpointConnection;                                        //@synthesize endpointConnection=_endpointConnection - In the implementation block
@property (nonatomic,readonly) FCNotificationsEndpointConnection * notificationsEndpointConnection;                    //@synthesize notificationsEndpointConnection=_notificationsEndpointConnection - In the implementation block
@property (nonatomic,readonly) FCCommandQueue * endpointCommandQueue;                                                  //@synthesize endpointCommandQueue=_endpointCommandQueue - In the implementation block
@property (nonatomic,readonly) FCCommandQueue * notificationsEndpointCommandQueue;                                     //@synthesize notificationsEndpointCommandQueue=_notificationsEndpointCommandQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * contentStoreFrontID; 
@property (nonatomic,copy,readonly) NSString * supportedContentStoreFrontID; 
@property (nonatomic,readonly) id<FCCoreConfigurationManager> configurationManager; 
@property (nonatomic,readonly) id<FCNewsAppConfigurationManager> appConfigurationManager; 
@property (nonatomic,readonly) FCAssetManager * assetManager; 
@property (nonatomic,readonly) FCArticleController * articleController; 
@property (nonatomic,readonly) FCTagController * tagController; 
@property (nonatomic,readonly) FCFlintResourceManager * flintResourceManager; 
@property (nonatomic,retain) id<FCWebArchiveSource> webArchiveSource; 
@property (nonatomic,copy,readonly) NSString * contentDirectory; 
@property (nonatomic,readonly) NSURL * assetCacheDirectoryURL; 
@property (nonatomic,readonly) NSURL * webArchiveCacheDirectoryURL; 
@property (nonatomic,readonly) id<FCContentContextInternal> internalContentContext; 
@property (nonatomic,copy,readonly) NSString * contentEnvironmentToken; 
@property (nonatomic,readonly) FCPersonalizationData * personalizationData; 
@property (nonatomic,readonly) FCPrivateChannelMembershipController * privateChannelMembershipController; 
@property (nonatomic,readonly) FCReadingHistory * readingHistory; 
@property (nonatomic,readonly) FCReadingList * readingList; 
@property (nonatomic,readonly) FCSubscriptionList * subscriptionList; 
@property (nonatomic,readonly) FCUserInfo * userInfo; 
@property (nonatomic,readonly) FCTagSettings * tagSettings; 
@property (nonatomic,readonly) id<FCPushNotificationHandling> privatePushNotificationHandler; 
@property (getter=isPrivateDataSyncingEnabled,nonatomic,readonly) BOOL privateDataSyncingEnabled; 
@property (nonatomic,copy,readonly) NSString * privateDataDirectory; 
@property (nonatomic,readonly) id<FCPrivateDataContextInternal> internalPrivateDataContext; 
+(id)testingContext;
+(id)testingContextWithDesiredHeadlineFieldOptions:(unsigned long long)arg1 ;
+(void)initialize;
-(FCPersonalizationData *)personalizationData;
-(NSString *)contentStoreFrontID;
-(id<FCCoreConfigurationManager>)configurationManager;
-(void)fetchPrivateDataEncryptionIsAllowedForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchPrivateDataEncryptionMigrationIsDesiredForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchOriginalDataShouldBeDeletedAfterMigrationForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(FCNotificationsEndpointConnection *)notificationsEndpointConnection;
-(FCFeedManager *)feedManager;
-(id<FCFeedPersonalizing>)feedPersonalizer;
-(FCTagController *)tagController;
-(FCSubscriptionList *)subscriptionList;
-(NSString *)contentDirectory;
-(void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 ;
-(NSString *)privateDataDirectory;
-(id<FCAppActivityMonitor>)appActivityMonitor;
-(FCTagSettings *)tagSettings;
-(FCSubscriptionController *)subscriptionController;
-(id<FCContentContextInternal>)internalContentContext;
-(FCClientEndpointConnection *)endpointConnection;
-(FCReadingHistory *)readingHistory;
-(FCPurchaseController *)purchaseController;
-(id<FCPPTContext>)pptContext;
-(FCArticleController *)articleController;
-(NSString *)supportedContentStoreFrontID;
-(BOOL)deviceIsiPad;
-(FCReadingList *)readingList;
-(id<FCPrivateDataContextInternal>)internalPrivateDataContext;
-(FCNotificationController *)notificationController;
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(void)setAppActivityMonitor:(id<FCAppActivityMonitor>)arg1 ;
-(id)initWithContentContext:(id)arg1 privateDataContext:(id)arg2 networkBehaviorMonitor:(id)arg3 ;
-(id)initForTesting;
-(id)initForTestingWithDesiredHeadlineFieldOptions:(unsigned long long)arg1 ;
-(id<FCPrivateDataContext>)privateDataContext;
-(id<FCContentContext>)contentContext;
-(void)ppt_overrideFeedEndpoint:(long long)arg1 ;
-(NSString *)contentEnvironmentToken;
-(FCFlintResourceManager *)flintResourceManager;
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(id)news_core_ConfigurationManager;
-(NSURL *)assetCacheDirectoryURL;
-(NSURL *)webArchiveCacheDirectoryURL;
-(id<FCWebArchiveSource>)webArchiveSource;
-(void)setWebArchiveSource:(id<FCWebArchiveSource>)arg1 ;
-(id)recordSourceWithSchema:(id)arg1 ;
-(id)recordTreeSourceWithRecordSources:(id)arg1 ;
-(FCPrivateChannelMembershipController *)privateChannelMembershipController;
-(BOOL)isPrivateDataSyncingEnabled;
-(id)privateStoreWithName:(id)arg1 version:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id<FCPushNotificationHandling>)privatePushNotificationHandler;
-(id)insertTestArticle;
-(id)insertTestArticlesWithCount:(unsigned long long)arg1 ;
-(FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
-(id<FCBackgroundTaskable>)backgroundTaskable;
-(id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentHostDirectory:(id)arg3 privateDataHostDirectory:(id)arg4 privateDataActionProvider:(id)arg5 networkBehaviorMonitor:(id)arg6 appActivityMonitor:(id)arg7 desiredHeadlineFieldOptions:(unsigned long long)arg8 feedUsage:(long long)arg9 lockStoreFrontIfNeeded:(BOOL)arg10 deviceIsiPad:(BOOL)arg11 backgroundTaskable:(id)arg12 privateDataSyncAvailability:(id)arg13 pptContext:(id)arg14 ;
-(id)notificationsController;
-(FCCommandQueue *)endpointCommandQueue;
-(FCCommandQueue *)notificationsEndpointCommandQueue;
-(BOOL)isPrivateDataEncryptionEnabled;
-(BOOL)isPrivateDatabaseStartingUp;
-(BOOL)isPrivateDatabaseOnline;
-(BOOL)isPrivateDatabaseTemporarilySuspended;
-(id)fetchEndOfArticleDataForHeadline:(id)arg1 initialRelatedHeadlineCount:(unsigned long long)arg2 initialPublisherHeadlineCount:(unsigned long long)arg3 totalRelatedHeadlineCount:(unsigned long long)arg4 totalPublisherHeadlineCount:(unsigned long long)arg5 fetchRelatedHeadline:(BOOL)arg6 fetchPublisherHeadlines:(BOOL)arg7 fetchAllTopics:(BOOL)arg8 screenScale:(double)arg9 completion:(/*^block*/id)arg10 ;
-(id<FCFlintHelper>)flintHelper;
-(void)setFlintHelper:(id<FCFlintHelper>)arg1 ;
-(void)setBackgroundTaskable:(id<FCBackgroundTaskable>)arg1 ;
-(void)setPrivateDataContext:(id<FCPrivateDataContext>)arg1 ;
-(id)init;
-(FCUserInfo *)userInfo;
-(FCAssetManager *)assetManager;
@end

