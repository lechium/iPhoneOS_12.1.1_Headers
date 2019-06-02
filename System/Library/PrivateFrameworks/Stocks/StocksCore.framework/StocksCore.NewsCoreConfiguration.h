/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksCore.framework/StocksCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCNewsAppConfiguration.h>
#import <libobjc.A.dylib/FCCoreConfiguration.h>

@class NSArray, FCIAdConfiguration, FCPrefetchConfiguration, NSString, NTPBDiscoverMoreVideosInfo, FCNotificationsConfiguration, NSDictionary, FCTopStoriesConfiguration, FCForYouGroupsConfiguration, FCVideoGroupsConfig, NSNumber;

@interface StocksCore.NewsCoreConfiguration : _UKNOWN_SUPERCLASS_ <FCNewsAppConfiguration, FCCoreConfiguration> {

	 experimentalizableFieldPostfix;
	 analyticsEndpointMaxPayloadSize;
	 maxRetriesForDroppedFeeds;
	 delayBeforeRetryingDroppedFeeds;
	 topStoriesConfiguration;
	 newsUIConfiguration;
	 newsPersonalizationTreatment;
	 endpointConfigurations;

}

@property (readonly,nonatomic) BOOL universalLinksEnabled; 
@property (readonly,nonatomic) NSString * embedConfigurationAssetID; 
@property (readonly,nonatomic) NSArray * mediaSharingBlacklistedChannelIDs; 
@property (readonly,nonatomic) NSString * webEmbedContentBlockers; 
@property (readonly,nonatomic) double prerollLoadingTimeout; 
@property (readonly,nonatomic) long long minimumFollowCountToRemovePersonalizePlacardInFollowingAndForYou; 
@property (readonly,nonatomic) NSArray * onboardingFeedIDs; 
@property (readonly,nonatomic) long long autoScrollToTopFeedTimeout; 
@property (readonly,nonatomic) double interstitialAdLoadDelay; 
@property (readonly,nonatomic) double tileProminenceScoreBalanceValue; 
@property (readonly,nonatomic) FCIAdConfiguration * iAdConfig; 
@property (readonly,nonatomic) FCPrefetchConfiguration * prefetchConfig; 
@property (readonly,nonatomic) NSArray * topLevelCuratedTagIDs; 
@property (readonly,nonatomic) NSArray * topLevelRecommendedTopicTagIDs; 
@property (readonly,nonatomic) NSArray * topLevelRecommendedChannelTagIDs; 
@property (readonly,nonatomic) long long subscriptionsPlacardPublisherFrequencyInSeconds; 
@property (readonly,nonatomic) long long subscriptionsPlacardGlobalMaximumPerDay; 
@property (readonly,nonatomic) long long subscriptionsGracePeriodForTokenVerificationSeconds; 
@property (readonly,nonatomic) long long newFavoriteNotificationAlertsFrequency; 
@property (readonly,nonatomic) long long notificationArticleCacheTimeout; 
@property (readonly,nonatomic) long long notificationArticleWithRapidUpdatesCacheTimeout; 
@property (readonly,nonatomic) double parsecPopulationFloor; 
@property (readonly,nonatomic) double parsecPopulationCeiling; 
@property (readonly,nonatomic) NSString * widgetConfigID; 
@property (readonly,nonatomic) long long widgetMinimumArticleExposureDurationToBePreseenInMilliseconds; 
@property (readonly,nonatomic) unsigned widgetMinimumNumberOfTimesPreseenToBeSeen; 
@property (readonly,nonatomic) double articleDiversificationSimilarityExpectationStart; 
@property (readonly,nonatomic) double articleDiversificationSimilarityExpectationEnd; 
@property (readonly,nonatomic) double articleDiversificationUniquePublisherExpectationSlope; 
@property (readonly,nonatomic) double articleDiversificationUniquePublisherExpectationYIntercept; 
@property (readonly,nonatomic) NSString * personalizationBundleIdMappingResourceId; 
@property (readonly,nonatomic) NSString * personalizationUrlMappingResourceId; 
@property (readonly,nonatomic) NSString * personalizationWhitelistResourceId; 
@property (readonly,nonatomic) NSString * personalizationFavorabilityResourceId; 
@property (readonly,nonatomic) long long corryBarMaxArticleCountForArticleList; 
@property (readonly,nonatomic) long long corryBarMaxArticleCountForSingleArticle; 
@property (readonly,nonatomic) BOOL corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers; 
@property (readonly,nonatomic) NSString * exploreArticleID; 
@property (readonly,nonatomic) NSArray * externalAnalyticsConfigurations; 
@property (readonly,nonatomic) long long stateRestorationAllowedTimeWindow; 
@property (readonly,nonatomic) long long autoRefreshMinimumInterval; 
@property (readonly,nonatomic) BOOL terminateAppOnBackgroundAfterJoiningOrLeavingExperiment; 
@property (readonly,nonatomic) NSArray * topStoriesPublishDates; 
@property (readonly,nonatomic) unsigned long long trendingStyle; 
@property (readonly,nonatomic) NSString * articleRecirculationConfigJSON; 
@property (readonly,nonatomic) NTPBDiscoverMoreVideosInfo * shareDiscoverMoreVideosInfo; 
@property (readonly,nonatomic) NSString * articleRecirculationComponentPlacementConfigJSON; 
@property (readonly,nonatomic) long long articleRecirculationPopularFeedQueryTimeRange; 
@property (readonly,nonatomic) BOOL disableThumbnailsForArticleRecirculation; 
@property (readonly,nonatomic) BOOL isOrderFeedEndpointEnabled; 
@property (readonly,nonatomic) BOOL useSecureConnectionForAssets; 
@property (readonly,nonatomic) NSString * forYouRecordConfigID; 
@property (readonly,nonatomic) BOOL isPrivateDataEncryptionAllowed; 
@property (readonly,nonatomic) BOOL isPrivateDataEncryptionMigrationDesired; 
@property (readonly,nonatomic) BOOL privateDataEncryptionMigrationRequiresAllDevicesRunningTigris; 
@property (readonly,nonatomic) BOOL isPrivateDataMigrationCleanupEnabled; 
@property (readonly,nonatomic) FCTopStoriesConfiguration * topStoriesConfig; 
@property (readonly,nonatomic) BOOL diversifyOptionalTopStories; 
@property (readonly,nonatomic) long long articleRapidUpdatesTimeout; 
@property (readonly,nonatomic) long long savedArticlesCutoffTime; 
@property (readonly,nonatomic) long long savedArticlesOpenedCutoffTime; 
@property (readonly,nonatomic) long long savedArticlesMaximumCountWiFi; 
@property (readonly,nonatomic) long long savedArticlesMaximumCountCellular; 
@property (readonly,nonatomic) NSDictionary * endpointConfigsByEnvironment; 
@property (readonly,nonatomic) NSNumber * currentTreatment; 
@property (readonly,nonatomic) BOOL shouldShowAlternateHeadlines; 
@property (readonly,nonatomic) long long appConfigRefreshRate; 
@property (readonly,nonatomic) long long trendingTopicsRefreshRate; 
@property (readonly,nonatomic) FCNotificationsConfiguration * notificationsConfig; 
@property (readonly,nonatomic) long long notificationEnabledChannelsRefreshFrequency; 
@property (readonly,nonatomic) long long subscriptionsGlobalMeteredCount; 
@property (readonly,nonatomic) NSArray * presubscribedFeedIDs; 
@property (readonly,nonatomic) NSString * breakingNewsChannelID; 
@property (readonly,nonatomic) NSString * topVideosChannelID; 
@property (readonly,nonatomic) NSString * moreVideosChannelID; 
@property (readonly,nonatomic) NSString * briefingsTagID; 
@property (readonly,nonatomic) NSString * trendingTagID; 
@property (readonly,nonatomic) NSString * featuredStoriesTagID; 
@property (readonly,nonatomic) NSString * savedStoriesTagID; 
@property (readonly,nonatomic) NSString * editorialGemsSectionID; 
@property (readonly,nonatomic) NSString * editorialChannelID; 
@property (readonly,nonatomic) NSArray * hiddenFeedIDs; 
@property (readonly,nonatomic) FCForYouGroupsConfiguration * forYouGroupsConfiguration; 
@property (readonly,nonatomic) long long minimumDurationBetweenForYouGroupsWeekday; 
@property (readonly,nonatomic) long long minimumDurationBetweenForYouGroupsWeekend; 
@property (readonly,nonatomic) long long minimumDurationBetweenTrendingGroupsWeekday; 
@property (readonly,nonatomic) long long minimumDurationBetweenTrendingGroupsWeekend; 
@property (readonly,nonatomic) long long expiredPaidSubscriptionGroupCutoffTime; 
@property (readonly,nonatomic) long long maximumNumberOfExpiredPaidSubscriptionGroups; 
@property (readonly,nonatomic) long long maximumTimesHeadlineInPaidSubscriptionGroup; 
@property (readonly,nonatomic) long long maximumPaidSubscriptionGroupSizeiPad; 
@property (readonly,nonatomic) long long maximumPaidSubscriptionGroupSizeiPhone; 
@property (readonly,nonatomic) long long optionalTopStoriesRefreshRate; 
@property (readonly,nonatomic) double minimumTrendingUnseenRatio; 
@property (readonly,nonatomic) FCVideoGroupsConfig * forYouVideoGroupsConfig; 
@property (readonly,nonatomic) double endOfArticleMinPaidHeadlineRatio; 
@property (readonly,nonatomic) long long endOfArticleMaxInaccessiblePaidArticleCount; 
@property (readonly,nonatomic) long long minimumDistanceBetweenImageOnTopTiles; 
@property (readonly,nonatomic) long long expirePinnedArticlesAfter; 
@property (readonly,nonatomic) NSString * experimentalizableFieldPostfix; 
@property (readonly,nonatomic) long long analyticsEndpointMaxPayloadSize; 
@property (readonly,nonatomic) long long maxRetriesForDroppedFeeds; 
@property (readonly,nonatomic) double delayBeforeRetryingDroppedFeeds; 
-(FCPrefetchConfiguration *)prefetchConfig;
-(long long)autoScrollToTopFeedTimeout;
-(double)interstitialAdLoadDelay;
-(double)prerollLoadingTimeout;
-(double)tileProminenceScoreBalanceValue;
-(long long)subscriptionsGracePeriodForTokenVerificationSeconds;
-(long long)newFavoriteNotificationAlertsFrequency;
-(long long)notificationArticleCacheTimeout;
-(long long)notificationArticleWithRapidUpdatesCacheTimeout;
-(long long)articleRecirculationPopularFeedQueryTimeRange;
-(BOOL)disableThumbnailsForArticleRecirculation;
-(BOOL)universalLinksEnabled;
-(double)parsecPopulationFloor;
-(double)parsecPopulationCeiling;
-(NSString *)personalizationBundleIdMappingResourceId;
-(NSString *)personalizationUrlMappingResourceId;
-(NSString *)personalizationWhitelistResourceId;
-(long long)corryBarMaxArticleCountForArticleList;
-(long long)corryBarMaxArticleCountForSingleArticle;
-(BOOL)corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
-(long long)stateRestorationAllowedTimeWindow;
-(long long)autoRefreshMinimumInterval;
-(BOOL)terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
-(unsigned long long)trendingStyle;
-(long long)minimumFollowCountToRemovePersonalizePlacardInFollowingAndForYou;
-(NSArray *)onboardingFeedIDs;
-(FCIAdConfiguration *)iAdConfig;
-(NSArray *)topLevelCuratedTagIDs;
-(NSArray *)topLevelRecommendedTopicTagIDs;
-(NSArray *)topLevelRecommendedChannelTagIDs;
-(long long)subscriptionsPlacardPublisherFrequencyInSeconds;
-(long long)subscriptionsPlacardGlobalMaximumPerDay;
-(NSString *)embedConfigurationAssetID;
-(NSString *)widgetConfigID;
-(long long)widgetMinimumArticleExposureDurationToBePreseenInMilliseconds;
-(unsigned)widgetMinimumNumberOfTimesPreseenToBeSeen;
-(double)articleDiversificationSimilarityExpectationStart;
-(double)articleDiversificationSimilarityExpectationEnd;
-(double)articleDiversificationUniquePublisherExpectationSlope;
-(double)articleDiversificationUniquePublisherExpectationYIntercept;
-(NSString *)personalizationFavorabilityResourceId;
-(NSString *)exploreArticleID;
-(NSArray *)externalAnalyticsConfigurations;
-(NSArray *)mediaSharingBlacklistedChannelIDs;
-(NSArray *)topStoriesPublishDates;
-(NSString *)articleRecirculationConfigJSON;
-(NTPBDiscoverMoreVideosInfo *)shareDiscoverMoreVideosInfo;
-(NSString *)articleRecirculationComponentPlacementConfigJSON;
-(NSString *)webEmbedContentBlockers;
-(NSString *)briefingsTagID;
-(NSString *)trendingTagID;
-(NSString *)featuredStoriesTagID;
-(NSString *)savedStoriesTagID;
-(NSString *)topVideosChannelID;
-(NSString *)moreVideosChannelID;
-(FCTopStoriesConfiguration *)topStoriesConfig;
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
-(id)personalizationTreatmentForFeldsparID:(id)arg1 ;
-(id)todayConfigWithQueueConfigs:(id)arg1 maxSlotCount:(unsigned long long)arg2 ;
-(id)analyticsEnvelopeContentTypeConfigsForEnvironment:(unsigned long long)arg1 ;
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
-(BOOL)shouldShowAlternateHeadlines;
-(id)copy;
-(id)copyWithZone:(void*)arg1 ;
-(NSString *)experimentalizableFieldPostfix;
-(long long)analyticsEndpointMaxPayloadSize;
-(long long)maxRetriesForDroppedFeeds;
-(double)delayBeforeRetryingDroppedFeeds;
@end

