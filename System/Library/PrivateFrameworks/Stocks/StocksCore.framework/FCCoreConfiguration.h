/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksCore.framework/StocksCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FCNotificationsConfiguration, NSArray, NSDictionary, FCTopStoriesConfiguration, NSString, FCForYouGroupsConfiguration, FCVideoGroupsConfig, NSNumber;


@protocol FCCoreConfiguration <NFCopying>
@property (nonatomic,readonly) long long appConfigRefreshRate; 
@property (nonatomic,readonly) long long trendingTopicsRefreshRate; 
@property (getter=isOrderFeedEndpointEnabled,nonatomic,readonly) BOOL orderFeedEndpointEnabled; 
@property (nonatomic,readonly) FCNotificationsConfiguration * notificationsConfig; 
@property (nonatomic,readonly) long long notificationEnabledChannelsRefreshFrequency; 
@property (nonatomic,readonly) long long savedArticlesCutoffTime; 
@property (nonatomic,readonly) long long savedArticlesOpenedCutoffTime; 
@property (nonatomic,readonly) long long savedArticlesMaximumCountWiFi; 
@property (nonatomic,readonly) long long savedArticlesMaximumCountCellular; 
@property (nonatomic,readonly) long long subscriptionsGlobalMeteredCount; 
@property (nonatomic,readonly) NSArray * presubscribedFeedIDs; 
@property (nonatomic,readonly) BOOL useSecureConnectionForAssets; 
@property (getter=isPrivateDataEncryptionAllowed,nonatomic,readonly) BOOL privateDataEncryptionAllowed; 
@property (getter=isPrivateDataEncryptionMigrationDesired,nonatomic,readonly) BOOL privateDataEncryptionMigrationDesired; 
@property (nonatomic,readonly) BOOL privateDataEncryptionMigrationRequiresAllDevicesRunningTigris; 
@property (getter=isPrivateDataMigrationCleanupEnabled,nonatomic,readonly) BOOL privateDataMigrationCleanupEnabled; 
@property (nonatomic,readonly) NSDictionary * endpointConfigsByEnvironment; 
@property (nonatomic,readonly) FCTopStoriesConfiguration * topStoriesConfig; 
@property (nonatomic,readonly) NSString * breakingNewsChannelID; 
@property (nonatomic,readonly) NSString * topVideosChannelID; 
@property (nonatomic,readonly) NSString * moreVideosChannelID; 
@property (nonatomic,readonly) NSString * briefingsTagID; 
@property (nonatomic,readonly) NSString * trendingTagID; 
@property (nonatomic,readonly) NSString * featuredStoriesTagID; 
@property (nonatomic,readonly) NSString * savedStoriesTagID; 
@property (nonatomic,readonly) NSString * editorialChannelID; 
@property (nonatomic,readonly) NSString * editorialGemsSectionID; 
@property (nonatomic,readonly) long long articleRapidUpdatesTimeout; 
@property (nonatomic,readonly) NSArray * hiddenFeedIDs; 
@property (nonatomic,readonly) FCForYouGroupsConfiguration * forYouGroupsConfiguration; 
@property (nonatomic,readonly) long long minimumDurationBetweenForYouGroupsWeekday; 
@property (nonatomic,readonly) long long minimumDurationBetweenForYouGroupsWeekend; 
@property (nonatomic,readonly) long long minimumDurationBetweenTrendingGroupsWeekday; 
@property (nonatomic,readonly) long long minimumDurationBetweenTrendingGroupsWeekend; 
@property (nonatomic,readonly) long long expiredPaidSubscriptionGroupCutoffTime; 
@property (nonatomic,readonly) long long maximumNumberOfExpiredPaidSubscriptionGroups; 
@property (nonatomic,readonly) long long maximumTimesHeadlineInPaidSubscriptionGroup; 
@property (nonatomic,readonly) long long maximumPaidSubscriptionGroupSizeiPad; 
@property (nonatomic,readonly) long long maximumPaidSubscriptionGroupSizeiPhone; 
@property (nonatomic,readonly) BOOL diversifyOptionalTopStories; 
@property (nonatomic,readonly) long long optionalTopStoriesRefreshRate; 
@property (nonatomic,readonly) double minimumTrendingUnseenRatio; 
@property (nonatomic,copy,readonly) FCVideoGroupsConfig * forYouVideoGroupsConfig; 
@property (nonatomic,readonly) double endOfArticleMinPaidHeadlineRatio; 
@property (nonatomic,readonly) long long endOfArticleMaxInaccessiblePaidArticleCount; 
@property (nonatomic,readonly) long long minimumDistanceBetweenImageOnTopTiles; 
@property (nonatomic,readonly) NSString * forYouRecordConfigID; 
@property (nonatomic,readonly) NSString * experimentalizableFieldPostfix; 
@property (nonatomic,readonly) NSNumber * currentTreatment; 
@property (nonatomic,readonly) long long expirePinnedArticlesAfter; 
@property (nonatomic,readonly) BOOL shouldShowAlternateHeadlines; 
@property (nonatomic,readonly) long long singleTopicFeedMinFeedItemsPerRequest; 
@property (nonatomic,readonly) long long singleChannelFeedMinFeedItemsPerRequest; 
@property (nonatomic,readonly) BOOL isSpecialEventsMicaAnimationDisabled; 
@property (nonatomic,readonly) long long maxRetriesForDroppedFeeds; 
@property (nonatomic,readonly) double delayBeforeRetryingDroppedFeeds; 
@optional
-(BOOL)shouldShowAlternateHeadlines;
-(long long)singleTopicFeedMinFeedItemsPerRequest;
-(long long)singleChannelFeedMinFeedItemsPerRequest;
-(BOOL)isSpecialEventsMicaAnimationDisabled;
-(long long)maxRetriesForDroppedFeeds;
-(double)delayBeforeRetryingDroppedFeeds;

@required
-(NSString *)briefingsTagID;
-(NSString *)trendingTagID;
-(NSString *)featuredStoriesTagID;
-(NSString *)savedStoriesTagID;
-(NSString *)topVideosChannelID;
-(NSString *)moreVideosChannelID;
-(FCTopStoriesConfiguration *)topStoriesConfig;
-(NSString *)experimentalizableFieldPostfix;
-(long long)minimumDistanceBetweenImageOnTopTiles;
-(long long)appConfigRefreshRate;
-(long long)trendingTopicsRefreshRate;
-(long long)articleRapidUpdatesTimeout;
-(long long)subscriptionsGlobalMeteredCount;
-(double)endOfArticleMinPaidHeadlineRatio;
-(long long)notificationEnabledChannelsRefreshFrequency;
-(long long)savedArticlesMaximumCountCellular;
-(long long)savedArticlesCutoffTime;
-(long long)savedArticlesOpenedCutoffTime;
-(long long)expiredPaidSubscriptionGroupCutoffTime;
-(BOOL)useSecureConnectionForAssets;
-(double)minimumTrendingUnseenRatio;
-(long long)minimumDurationBetweenForYouGroupsWeekday;
-(long long)minimumDurationBetweenForYouGroupsWeekend;
-(long long)minimumDurationBetweenTrendingGroupsWeekday;
-(long long)minimumDurationBetweenTrendingGroupsWeekend;
-(BOOL)diversifyOptionalTopStories;
-(FCVideoGroupsConfig *)forYouVideoGroupsConfig;
-(long long)optionalTopStoriesRefreshRate;
-(long long)expirePinnedArticlesAfter;
-(id)personalizationTreatmentForFeldsparID:(id)arg1;
-(id)todayConfigWithQueueConfigs:(id)arg1 maxSlotCount:(unsigned long long)arg2;
-(id)analyticsEnvelopeContentTypeConfigsForEnvironment:(unsigned long long)arg1;
-(BOOL)isOrderFeedEndpointEnabled;
-(FCNotificationsConfiguration *)notificationsConfig;
-(long long)savedArticlesMaximumCountWiFi;
-(NSArray *)presubscribedFeedIDs;
-(BOOL)isPrivateDataEncryptionAllowed;
-(BOOL)isPrivateDataEncryptionMigrationDesired;
-(BOOL)privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;
-(BOOL)isPrivateDataMigrationCleanupEnabled;
-(NSDictionary *)endpointConfigsByEnvironment;
-(NSString *)breakingNewsChannelID;
-(NSString *)editorialChannelID;
-(NSString *)editorialGemsSectionID;
-(NSArray *)hiddenFeedIDs;
-(FCForYouGroupsConfiguration *)forYouGroupsConfiguration;
-(long long)maximumNumberOfExpiredPaidSubscriptionGroups;
-(long long)maximumTimesHeadlineInPaidSubscriptionGroup;
-(long long)maximumPaidSubscriptionGroupSizeiPad;
-(long long)maximumPaidSubscriptionGroupSizeiPhone;
-(long long)endOfArticleMaxInaccessiblePaidArticleCount;
-(NSString *)forYouRecordConfigID;
-(NSNumber *)currentTreatment;

@end

