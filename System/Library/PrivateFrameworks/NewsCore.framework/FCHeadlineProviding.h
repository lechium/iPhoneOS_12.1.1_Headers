/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, FCHeadlineThumbnail, NSURL, NSArray, FCCoverArt, NSSet, FCFeedPersonalizedArticleScoreProfile, FCTopStoriesStyleConfiguration, NSData, FCHeadlineExperimentalTitleMetadata;


@protocol FCHeadlineProviding <NSObject,NFCopying,FCFeedElement,FCClassifiable,FCFeedTransformationItem>
@property (nonatomic,copy,readonly) NSString * versionIdentifier; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * articleID; 
@property (nonatomic,copy,readonly) NSString * referencedArticleID; 
@property (nonatomic,copy,readonly) NSString * clusterID; 
@property (nonatomic,readonly) unsigned long long contentType; 
@property (nonatomic,copy,readonly) NSString * primaryAudience; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * titleCompact; 
@property (nonatomic,copy,readonly) NSDate * publishDate; 
@property (nonatomic,readonly) long long backendArticleVersion; 
@property (nonatomic,copy,readonly) id<FCChannelProviding> sourceChannel; 
@property (nonatomic,copy,readonly) NSString * sourceName; 
@property (nonatomic,readonly) CGRect thumbnailFocalFrame; 
@property (nonatomic,readonly) BOOL hasThumbnail; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailLQ; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnail; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailMedium; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailHQ; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailUltraHQ; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailWidgetLQ; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailWidget; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailWidgetHQ; 
@property (nonatomic,copy,readonly) NSString * shortExcerpt; 
@property (nonatomic,copy,readonly) NSString * accessoryText; 
@property (nonatomic,copy,readonly) NSURL * contentURL; 
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,copy,readonly) NSDate * lastFetchedDate; 
@property (nonatomic,copy,readonly) NSArray * topics; 
@property (nonatomic,copy,readonly) NSArray * topicIDs; 
@property (nonatomic,copy,readonly) NSArray * endOfArticleTopicIDs; 
@property (nonatomic,readonly) NSURL * videoURL; 
@property (nonatomic,readonly) double videoDuration; 
@property (getter=isFeatureCandidate,nonatomic,readonly) BOOL featureCandidate; 
@property (getter=isSponsored,nonatomic,readonly) BOOL sponsored; 
@property (getter=isDisplayingAsNativeAd,nonatomic,readonly) BOOL displayAsNativeAd; 
@property (nonatomic,copy,readonly) NSString * sponsoredBy; 
@property (nonatomic,copy,readonly) NSArray * iAdCategories; 
@property (nonatomic,copy,readonly) NSArray * iAdKeywords; 
@property (nonatomic,copy,readonly) NSArray * iAdSectionIDs; 
@property (nonatomic,copy,readonly) NSArray * blockedStorefrontIDs; 
@property (nonatomic,copy,readonly) NSArray * allowedStorefrontIDs; 
@property (getter=isDeleted,nonatomic,readonly) BOOL deleted; 
@property (nonatomic,readonly) BOOL isDraft; 
@property (nonatomic,copy,readonly) NSString * localDraftPath; 
@property (nonatomic,copy,readonly) NSArray * relatedArticleIDs; 
@property (nonatomic,copy,readonly) NSArray * moreFromPublisherArticleIDs; 
@property (nonatomic,readonly) long long minimumNewsVersion; 
@property (getter=isPaid,nonatomic,readonly) BOOL paid; 
@property (nonatomic,readonly) FCCoverArt * coverArt; 
@property (nonatomic,copy,readonly) NSString * videoCallToActionTitle; 
@property (nonatomic,copy,readonly) NSURL * videoCallToActionURL; 
@property (nonatomic,readonly) BOOL needsRapidUpdates; 
@property (nonatomic,readonly) BOOL showMinimalChrome; 
@property (getter=isPressRelease,nonatomic,readonly) BOOL pressRelease; 
@property (getter=isHiddenFromAutoFavorites,nonatomic,readonly) BOOL hiddenFromAutoFavorites; 
@property (getter=isBoundToContext,nonatomic,readonly) BOOL boundToContext; 
@property (getter=isHiddenFromFeeds,nonatomic,readonly) BOOL hiddenFromFeeds; 
@property (nonatomic,copy,readonly) NSString * surfacedBySectionID; 
@property (nonatomic,copy,readonly) NSString * surfacedByChannelID; 
@property (nonatomic,copy,readonly) NSString * surfacedByTopicID; 
@property (nonatomic,copy,readonly) NSString * surfacedByBinID; 
@property (nonatomic,copy,readonly) NSSet * surfacedByTagIDs; 
@property (nonatomic,readonly) double tileProminenceScore; 
@property (nonatomic,readonly) FCFeedPersonalizedArticleScoreProfile * scoreProfile; 
@property (nonatomic,readonly) BOOL isTopStory; 
@property (nonatomic,readonly) unsigned long long topStoryType; 
@property (nonatomic,readonly) BOOL usesImageOnTopLayout; 
@property (nonatomic,readonly) unsigned long long feedOrder; 
@property (nonatomic,readonly) double globalUserFeedback; 
@property (nonatomic,readonly) unsigned long long storyType; 
@property (nonatomic,readonly) FCTopStoriesStyleConfiguration * storyStyle; 
@property (nonatomic,copy,readonly) NSDate * displayDate; 
@property (nonatomic,readonly) BOOL showSubscriptionRequiredText; 
@property (nonatomic,readonly) BOOL isBlockedExplicitContent; 
@property (nonatomic,readonly) id<FCNativeAdProviding> associatedAd; 
@property (nonatomic,readonly) NSString * articleRecirculationConfigJSON; 
@property (nonatomic,readonly) NSArray * publisherSpecifiedArticleIDs; 
@property (nonatomic,readonly) id<FCHeadlineStocksFields> stocksFields; 
@property (nonatomic,readonly) NSData * backingArticleRecordData; 
@property (nonatomic,copy) FCHeadlineExperimentalTitleMetadata * experimentalTitleMetadata; 
@property (nonatomic,readonly) BOOL webEmbedsEnabled; 
@optional
-(id)contentManifestWithContext:(id)arg1;
-(BOOL)webEmbedsEnabled;
-(id<FCHeadlineStocksFields>)stocksFields;
-(NSData *)backingArticleRecordData;
-(FCHeadlineExperimentalTitleMetadata *)experimentalTitleMetadata;
-(void)setExperimentalTitleMetadata:(id)arg1;

@required
-(NSString *)sourceName;
-(BOOL)hasThumbnail;
-(NSDate *)lastModifiedDate;
-(BOOL)isDeleted;
-(NSURL *)videoURL;
-(NSString *)versionIdentifier;
-(unsigned long long)contentType;
-(NSURL *)contentURL;
-(NSString *)accessoryText;
-(NSString *)articleID;
-(NSString *)localDraftPath;
-(NSString *)primaryAudience;
-(NSDate *)publishDate;
-(id<FCChannelProviding>)sourceChannel;
-(NSString *)shortExcerpt;
-(NSArray *)topicIDs;
-(NSArray *)endOfArticleTopicIDs;
-(double)videoDuration;
-(BOOL)isFeatureCandidate;
-(BOOL)isSponsored;
-(NSArray *)iAdCategories;
-(NSArray *)iAdKeywords;
-(NSArray *)iAdSectionIDs;
-(NSArray *)blockedStorefrontIDs;
-(NSArray *)allowedStorefrontIDs;
-(BOOL)isDraft;
-(NSString *)surfacedByBinID;
-(NSArray *)topics;
-(NSString *)surfacedBySectionID;
-(NSString *)surfacedByChannelID;
-(NSString *)surfacedByTopicID;
-(NSSet *)surfacedByTagIDs;
-(unsigned long long)topStoryType;
-(double)tileProminenceScore;
-(BOOL)usesImageOnTopLayout;
-(NSDate *)displayDate;
-(unsigned long long)storyType;
-(BOOL)isHiddenFromFeeds;
-(NSString *)articleRecirculationConfigJSON;
-(NSString *)referencedArticleID;
-(NSString *)clusterID;
-(long long)backendArticleVersion;
-(CGRect)thumbnailFocalFrame;
-(FCHeadlineThumbnail *)thumbnailLQ;
-(FCHeadlineThumbnail *)thumbnailMedium;
-(FCHeadlineThumbnail *)thumbnailHQ;
-(FCHeadlineThumbnail *)thumbnailUltraHQ;
-(NSDate *)lastFetchedDate;
-(NSArray *)relatedArticleIDs;
-(NSArray *)moreFromPublisherArticleIDs;
-(FCTopStoriesStyleConfiguration *)storyStyle;
-(BOOL)needsRapidUpdates;
-(BOOL)showMinimalChrome;
-(BOOL)isBoundToContext;
-(BOOL)isPressRelease;
-(BOOL)isHiddenFromAutoFavorites;
-(long long)minimumNewsVersion;
-(BOOL)isPaid;
-(FCCoverArt *)coverArt;
-(double)globalUserFeedback;
-(NSString *)titleCompact;
-(FCHeadlineThumbnail *)thumbnailWidgetLQ;
-(FCHeadlineThumbnail *)thumbnailWidget;
-(FCHeadlineThumbnail *)thumbnailWidgetHQ;
-(BOOL)isDisplayingAsNativeAd;
-(NSString *)sponsoredBy;
-(NSString *)videoCallToActionTitle;
-(NSURL *)videoCallToActionURL;
-(FCFeedPersonalizedArticleScoreProfile *)scoreProfile;
-(BOOL)isTopStory;
-(unsigned long long)feedOrder;
-(BOOL)showSubscriptionRequiredText;
-(BOOL)isBlockedExplicitContent;
-(id<FCNativeAdProviding>)associatedAd;
-(NSArray *)publisherSpecifiedArticleIDs;
-(NSString *)identifier;
-(NSString *)title;
-(FCHeadlineThumbnail *)thumbnail;

@end

