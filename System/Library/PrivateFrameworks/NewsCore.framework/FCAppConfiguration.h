/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCCoreConfiguration.h>
#import <libobjc.A.dylib/FCNewsAppConfiguration.h>

@class FCNotificationsConfiguration, NSArray, NSDictionary, FCTopStoriesConfiguration, NSString, FCForYouGroupsConfiguration, FCVideoGroupsConfig, NSNumber, FCIAdConfiguration, FCPrefetchConfiguration, NTPBDiscoverMoreVideosInfo, NTPBConfig, NTPBLanguageConfig, FCWidgetConfig, FCRecommendedCategory;

@interface FCAppConfiguration : NSObject <FCCoreConfiguration, FCNewsAppConfiguration> {

	BOOL _privateDataEncryptionAllowed;
	BOOL _privateDataEncryptionMigrationDesired;
	BOOL _privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;
	BOOL _privateDataMigrationCleanupEnabled;
	NSDictionary* _endpointConfigsByEnvironment;
	FCForYouGroupsConfiguration* _forYouGroupsConfiguration;
	NSArray* _hiddenFeedIDs;
	FCIAdConfiguration* _iAdConfig;
	FCNotificationsConfiguration* _notificationsConfig;
	NSArray* _onboardingFeedIDs;
	NSArray* _presubscribedFeedIDs;
	FCPrefetchConfiguration* _prefetchConfig;
	FCTopStoriesConfiguration* _topStoriesConfig;
	NSArray* _topStoriesPublishDates;
	NTPBDiscoverMoreVideosInfo* _shareDiscoverMoreVideosInfo;
	NTPBConfig* _config;
	NTPBLanguageConfig* _languageConfig;
	FCWidgetConfig* _widgetConfig;
	FCRecommendedCategory* _topLevelCategory;
	NSDictionary* _personalizationTreatments;
	NSDictionary* _analyticsContentTypeConfigsByContentTypeByEnvironment;

}

@property (nonatomic,copy,readonly) NTPBConfig * config;                                                                               //@synthesize config=_config - In the implementation block
@property (nonatomic,copy,readonly) NTPBLanguageConfig * languageConfig;                                                               //@synthesize languageConfig=_languageConfig - In the implementation block
@property (nonatomic,copy,readonly) FCWidgetConfig * widgetConfig;                                                                     //@synthesize widgetConfig=_widgetConfig - In the implementation block
@property (nonatomic,readonly) FCRecommendedCategory * topLevelCategory;                                                               //@synthesize topLevelCategory=_topLevelCategory - In the implementation block
@property (nonatomic,readonly) NSDictionary * personalizationTreatments;                                                               //@synthesize personalizationTreatments=_personalizationTreatments - In the implementation block
@property (nonatomic,readonly) NSDictionary * analyticsContentTypeConfigsByContentTypeByEnvironment;                                   //@synthesize analyticsContentTypeConfigsByContentTypeByEnvironment=_analyticsContentTypeConfigsByContentTypeByEnvironment - In the implementation block
@property (nonatomic,readonly) long long appConfigRefreshRate; 
@property (nonatomic,readonly) long long trendingTopicsRefreshRate; 
@property (getter=isOrderFeedEndpointEnabled,nonatomic,readonly) BOOL orderFeedEndpointEnabled; 
@property (nonatomic,readonly) FCNotificationsConfiguration * notificationsConfig;                                                     //@synthesize notificationsConfig=_notificationsConfig - In the implementation block
@property (nonatomic,readonly) long long notificationEnabledChannelsRefreshFrequency; 
@property (nonatomic,readonly) long long savedArticlesCutoffTime; 
@property (nonatomic,readonly) long long savedArticlesOpenedCutoffTime; 
@property (nonatomic,readonly) long long savedArticlesMaximumCountWiFi; 
@property (nonatomic,readonly) long long savedArticlesMaximumCountCellular; 
@property (nonatomic,readonly) long long subscriptionsGlobalMeteredCount; 
@property (nonatomic,readonly) NSArray * presubscribedFeedIDs;                                                                         //@synthesize presubscribedFeedIDs=_presubscribedFeedIDs - In the implementation block
@property (nonatomic,readonly) BOOL useSecureConnectionForAssets; 
@property (getter=isPrivateDataEncryptionAllowed,nonatomic,readonly) BOOL privateDataEncryptionAllowed;                                //@synthesize privateDataEncryptionAllowed=_privateDataEncryptionAllowed - In the implementation block
@property (getter=isPrivateDataEncryptionMigrationDesired,nonatomic,readonly) BOOL privateDataEncryptionMigrationDesired;              //@synthesize privateDataEncryptionMigrationDesired=_privateDataEncryptionMigrationDesired - In the implementation block
@property (nonatomic,readonly) BOOL privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;                                     //@synthesize privateDataEncryptionMigrationRequiresAllDevicesRunningTigris=_privateDataEncryptionMigrationRequiresAllDevicesRunningTigris - In the implementation block
@property (getter=isPrivateDataMigrationCleanupEnabled,nonatomic,readonly) BOOL privateDataMigrationCleanupEnabled;                    //@synthesize privateDataMigrationCleanupEnabled=_privateDataMigrationCleanupEnabled - In the implementation block
@property (nonatomic,readonly) NSDictionary * endpointConfigsByEnvironment;                                                            //@synthesize endpointConfigsByEnvironment=_endpointConfigsByEnvironment - In the implementation block
@property (nonatomic,readonly) FCTopStoriesConfiguration * topStoriesConfig;                                                           //@synthesize topStoriesConfig=_topStoriesConfig - In the implementation block
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
@property (nonatomic,readonly) NSArray * hiddenFeedIDs;                                                                                //@synthesize hiddenFeedIDs=_hiddenFeedIDs - In the implementation block
@property (nonatomic,readonly) FCForYouGroupsConfiguration * forYouGroupsConfiguration;                                                //@synthesize forYouGroupsConfiguration=_forYouGroupsConfiguration - In the implementation block
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
@property (nonatomic,readonly) long long minimumFollowCountToRemovePersonalizePlacardInFollowingAndForYou; 
@property (nonatomic,readonly) NSArray * onboardingFeedIDs;                                                                            //@synthesize onboardingFeedIDs=_onboardingFeedIDs - In the implementation block
@property (nonatomic,readonly) long long autoScrollToTopFeedTimeout; 
@property (nonatomic,readonly) double interstitialAdLoadDelay; 
@property (nonatomic,readonly) double prerollLoadingTimeout; 
@property (nonatomic,readonly) double tileProminenceScoreBalanceValue; 
@property (nonatomic,readonly) FCIAdConfiguration * iAdConfig;                                                                         //@synthesize iAdConfig=_iAdConfig - In the implementation block
@property (nonatomic,readonly) FCPrefetchConfiguration * prefetchConfig;                                                               //@synthesize prefetchConfig=_prefetchConfig - In the implementation block
@property (nonatomic,readonly) NSArray * topLevelCuratedTagIDs; 
@property (nonatomic,readonly) NSArray * topLevelRecommendedTopicTagIDs; 
@property (nonatomic,readonly) NSArray * topLevelRecommendedChannelTagIDs; 
@property (nonatomic,readonly) long long subscriptionsPlacardPublisherFrequencyInSeconds; 
@property (nonatomic,readonly) long long subscriptionsPlacardGlobalMaximumPerDay; 
@property (nonatomic,readonly) long long subscriptionsGracePeriodForTokenVerificationSeconds; 
@property (nonatomic,readonly) long long newFavoriteNotificationAlertsFrequency; 
@property (nonatomic,readonly) long long notificationArticleCacheTimeout; 
@property (nonatomic,readonly) long long notificationArticleWithRapidUpdatesCacheTimeout; 
@property (nonatomic,readonly) NSString * embedConfigurationAssetID; 
@property (nonatomic,readonly) BOOL universalLinksEnabled; 
@property (nonatomic,readonly) double parsecPopulationFloor; 
@property (nonatomic,readonly) double parsecPopulationCeiling; 
@property (nonatomic,readonly) NSString * widgetConfigID; 
@property (nonatomic,readonly) long long widgetMinimumArticleExposureDurationToBePreseenInMilliseconds; 
@property (nonatomic,readonly) unsigned widgetMinimumNumberOfTimesPreseenToBeSeen; 
@property (nonatomic,readonly) double articleDiversificationSimilarityExpectationStart; 
@property (nonatomic,readonly) double articleDiversificationSimilarityExpectationEnd; 
@property (nonatomic,readonly) double articleDiversificationUniquePublisherExpectationSlope; 
@property (nonatomic,readonly) double articleDiversificationUniquePublisherExpectationYIntercept; 
@property (nonatomic,readonly) long long analyticsEndpointMaxPayloadSize; 
@property (nonatomic,readonly) NSString * personalizationBundleIdMappingResourceId; 
@property (nonatomic,readonly) NSString * personalizationUrlMappingResourceId; 
@property (nonatomic,readonly) NSString * personalizationWhitelistResourceId; 
@property (nonatomic,readonly) NSString * personalizationFavorabilityResourceId; 
@property (nonatomic,readonly) long long corryBarMaxArticleCountForArticleList; 
@property (nonatomic,readonly) long long corryBarMaxArticleCountForSingleArticle; 
@property (nonatomic,readonly) BOOL corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers; 
@property (nonatomic,readonly) NSString * exploreArticleID; 
@property (nonatomic,readonly) NSArray * externalAnalyticsConfigurations; 
@property (nonatomic,readonly) NSArray * mediaSharingBlacklistedChannelIDs; 
@property (nonatomic,readonly) long long stateRestorationAllowedTimeWindow; 
@property (nonatomic,readonly) long long autoRefreshMinimumInterval; 
@property (nonatomic,readonly) BOOL terminateAppOnBackgroundAfterJoiningOrLeavingExperiment; 
@property (nonatomic,copy,readonly) NSArray * topStoriesPublishDates;                                                                  //@synthesize topStoriesPublishDates=_topStoriesPublishDates - In the implementation block
@property (nonatomic,readonly) unsigned long long trendingStyle; 
@property (nonatomic,readonly) NSString * articleRecirculationConfigJSON; 
@property (nonatomic,readonly) NTPBDiscoverMoreVideosInfo * shareDiscoverMoreVideosInfo;                                               //@synthesize shareDiscoverMoreVideosInfo=_shareDiscoverMoreVideosInfo - In the implementation block
@property (nonatomic,readonly) NSString * articleRecirculationComponentPlacementConfigJSON; 
@property (nonatomic,readonly) BOOL isExpired; 
@property (nonatomic,readonly) long long articleRecirculationPopularFeedQueryTimeRange; 
@property (nonatomic,readonly) BOOL disableThumbnailsForArticleRecirculation; 
@property (nonatomic,readonly) NSString * feedNavigationConfigJSON; 
@property (nonatomic,readonly) long long showCardNavHintMaxCount; 
@property (nonatomic,readonly) NSString * webEmbedContentBlockers; 
@property (nonatomic,readonly) NSString * description; 
@property (nonatomic,readonly) BOOL enableBadgeInSpotlightTabBar; 
+(id)_categoryFromProtobufCategory:(id)arg1 ;
-(NSString *)briefingsTagID;
-(NSString *)trendingTagID;
-(NSString *)featuredStoriesTagID;
-(NSString *)savedStoriesTagID;
-(NSString *)topVideosChannelID;
-(NSString *)moreVideosChannelID;
-(FCPrefetchConfiguration *)prefetchConfig;
-(FCTopStoriesConfiguration *)topStoriesConfig;
-(NSDictionary *)personalizationTreatments;
-(NSString *)experimentalizableFieldPostfix;
-(FCRecommendedCategory *)topLevelCategory;
-(long long)autoScrollToTopFeedTimeout;
-(double)interstitialAdLoadDelay;
-(double)prerollLoadingTimeout;
-(NSDictionary *)analyticsContentTypeConfigsByContentTypeByEnvironment;
-(double)tileProminenceScoreBalanceValue;
-(long long)minimumDistanceBetweenImageOnTopTiles;
-(NTPBLanguageConfig *)languageConfig;
-(long long)appConfigRefreshRate;
-(long long)trendingTopicsRefreshRate;
-(long long)articleRapidUpdatesTimeout;
-(long long)subscriptionsGlobalMeteredCount;
-(long long)subscriptionsGracePeriodForTokenVerificationSeconds;
-(long long)newFavoriteNotificationAlertsFrequency;
-(double)endOfArticleMinPaidHeadlineRatio;
-(long long)notificationArticleCacheTimeout;
-(long long)notificationArticleWithRapidUpdatesCacheTimeout;
-(long long)notificationEnabledChannelsRefreshFrequency;
-(long long)savedArticlesMaximumCountCellular;
-(long long)savedArticlesCutoffTime;
-(long long)savedArticlesOpenedCutoffTime;
-(FCWidgetConfig *)widgetConfig;
-(long long)articleRecirculationPopularFeedQueryTimeRange;
-(BOOL)disableThumbnailsForArticleRecirculation;
-(BOOL)universalLinksEnabled;
-(double)parsecPopulationFloor;
-(double)parsecPopulationCeiling;
-(long long)expiredPaidSubscriptionGroupCutoffTime;
-(long long)analyticsEndpointMaxPayloadSize;
-(NSString *)personalizationBundleIdMappingResourceId;
-(NSString *)personalizationUrlMappingResourceId;
-(NSString *)personalizationWhitelistResourceId;
-(long long)corryBarMaxArticleCountForArticleList;
-(long long)corryBarMaxArticleCountForSingleArticle;
-(BOOL)corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
-(BOOL)useSecureConnectionForAssets;
-(long long)stateRestorationAllowedTimeWindow;
-(long long)autoRefreshMinimumInterval;
-(BOOL)terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
-(double)minimumTrendingUnseenRatio;
-(long long)minimumDurationBetweenForYouGroupsWeekday;
-(long long)minimumDurationBetweenForYouGroupsWeekend;
-(long long)minimumDurationBetweenTrendingGroupsWeekday;
-(long long)minimumDurationBetweenTrendingGroupsWeekend;
-(unsigned long long)trendingStyle;
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
-(long long)singleTopicFeedMinFeedItemsPerRequest;
-(long long)singleChannelFeedMinFeedItemsPerRequest;
-(BOOL)isSpecialEventsMicaAnimationDisabled;
-(long long)maxRetriesForDroppedFeeds;
-(double)delayBeforeRetryingDroppedFeeds;
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
-(NSString *)feedNavigationConfigJSON;
-(BOOL)enableBadgeInSpotlightTabBar;
-(id)initWithConfig:(id)arg1 languageConfig:(id)arg2 widgetConfig:(id)arg3 hiddenFeedIDs:(id)arg4 presubscribedFeedIDs:(id)arg5 onboardingFeedIDs:(id)arg6 ;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NTPBConfig *)config;
@end

