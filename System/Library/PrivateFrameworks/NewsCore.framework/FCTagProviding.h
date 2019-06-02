/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSString, NSArray, FCAssetHandle, FCColor, NTPBPublisherPaidDescriptionStrings, NSData;


@protocol FCTagProviding <NSObject,NFCopying>
@property (nonatomic,readonly) unsigned long long tagType; 
@property (nonatomic,readonly) BOOL hideAccessoryText; 
@property (nonatomic,readonly) id<FCChannelProviding> asChannel; 
@property (nonatomic,readonly) id<FCSectionProviding> asSection; 
@property (nonatomic,readonly) id<FCTopicProviding> asTopic; 
@property (nonatomic,readonly) NSDate * loadDate; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * nameCompact; 
@property (nonatomic,copy,readonly) NSString * versionKey; 
@property (nonatomic,readonly) long long contentProvider; 
@property (nonatomic,readonly) BOOL isPublic; 
@property (nonatomic,readonly) BOOL isDeprecated; 
@property (nonatomic,readonly) BOOL isExplicitContent; 
@property (nonatomic,copy,readonly) NSString * replacementID; 
@property (nonatomic,copy,readonly) NSString * primaryAudience; 
@property (nonatomic,readonly) NSArray * relatedTopicIDs; 
@property (nonatomic,readonly) NSArray * relatedChannelIDs; 
@property (nonatomic,readonly) NSArray * relatedTopicIDsForOnboarding; 
@property (nonatomic,readonly) NSArray * relatedChannelIDsForOnboarding; 
@property (nonatomic,readonly) BOOL isSubscribable; 
@property (nonatomic,readonly) FCAssetHandle * coverImageAssetHandle; 
@property (nonatomic,readonly) FCAssetHandle * feedNavImageAssetHandle; 
@property (nonatomic,copy,readonly) NSString * coverArticleListID; 
@property (nonatomic,copy,readonly) id<FCFeedTheming> theme; 
@property (nonatomic,copy,readonly) FCColor * groupTitleColor; 
@property (nonatomic,readonly) NSArray * iAdCategories; 
@property (nonatomic,readonly) NSArray * iAdKeywords; 
@property (nonatomic,readonly) NSArray * blockedStorefrontIDs; 
@property (nonatomic,readonly) NSArray * allowedStorefrontIDs; 
@property (nonatomic,readonly) NSArray * pinnedArticleIDs; 
@property (nonatomic,readonly) long long score; 
@property (nonatomic,readonly) long long minimumNewsVersion; 
@property (nonatomic,readonly) BOOL isNotificationEnabled; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * publisherPaidAuthorizationURL; 
@property (nonatomic,copy,readonly) NSString * publisherPaidVerificationURL; 
@property (nonatomic,copy,readonly) NSString * publisherPaidWebAccessURL; 
@property (nonatomic,readonly) NSArray * publisherPaidFeldsparablePurchaseIDs; 
@property (nonatomic,readonly) NSArray * publisherPaidOfferableConfigurations; 
@property (nonatomic,readonly) BOOL publisherPaidLeakyPaywallOptOut; 
@property (nonatomic,readonly) BOOL publisherPaidWebAccessOptIn; 
@property (nonatomic,readonly) FCAssetHandle * nameImageMaskWidgetLQAssetHandle; 
@property (nonatomic,readonly) FCAssetHandle * nameImageMaskWidgetHQAssetHandle; 
@property (nonatomic,readonly) FCAssetHandle * nameImageCompactAssetHandle; 
@property (nonatomic,readonly) BOOL isBlockedExplicitContent; 
@property (nonatomic,readonly) NTPBPublisherPaidDescriptionStrings * publisherPaidDescriptionStrings; 
@property (nonatomic,readonly) unsigned long long groupingEligibility; 
@property (nonatomic,readonly) BOOL isHidden; 
@property (nonatomic,readonly) BOOL isRealTimeTrackingEnabled; 
@property (nonatomic,readonly) BOOL isArticleReadCountReportingEnabled; 
@property (nonatomic,readonly) NSString * articleRecirculationConfigJSON; 
@property (nonatomic,readonly) NSArray * publisherSpecifiedArticleIDs; 
@property (nonatomic,readonly) NSDate * publisherSpecifiedArticleIDsModifiedDate; 
@property (nonatomic,readonly) NSData * backingTagRecordData; 
@optional
-(NSData *)backingTagRecordData;

@required
-(long long)contentProvider;
-(BOOL)isExplicitContent;
-(id<FCFeedTheming>)theme;
-(long long)score;
-(NSDate *)loadDate;
-(NSString *)primaryAudience;
-(NSArray *)iAdCategories;
-(NSArray *)iAdKeywords;
-(NSArray *)blockedStorefrontIDs;
-(NSArray *)allowedStorefrontIDs;
-(NSString *)articleRecirculationConfigJSON;
-(BOOL)isDeprecated;
-(NSString *)replacementID;
-(unsigned long long)tagType;
-(id<FCSectionProviding>)asSection;
-(NSString *)publisherPaidVerificationURL;
-(id<FCChannelProviding>)asChannel;
-(id)freeFeedIDForBin:(long long)arg1;
-(id)feedIDForBin:(long long)arg1;
-(FCColor *)groupTitleColor;
-(BOOL)isSubscribable;
-(BOOL)hideAccessoryText;
-(BOOL)isEqualToTag:(id)arg1;
-(long long)minimumNewsVersion;
-(FCAssetHandle *)feedNavImageAssetHandle;
-(FCAssetHandle *)coverImageAssetHandle;
-(id)paidFeedIDForBin:(long long)arg1;
-(NSArray *)pinnedArticleIDs;
-(BOOL)isBlockedExplicitContent;
-(NSArray *)publisherSpecifiedArticleIDs;
-(BOOL)isPurchaseSetup;
-(NSString *)nameCompact;
-(NSArray *)relatedTopicIDs;
-(NSArray *)relatedChannelIDs;
-(BOOL)isPublic;
-(NSString *)coverArticleListID;
-(NSString *)publisherPaidAuthorizationURL;
-(NSArray *)publisherPaidFeldsparablePurchaseIDs;
-(BOOL)publisherPaidLeakyPaywallOptOut;
-(NTPBPublisherPaidDescriptionStrings *)publisherPaidDescriptionStrings;
-(NSString *)versionKey;
-(NSArray *)publisherPaidOfferableConfigurations;
-(FCAssetHandle *)nameImageCompactAssetHandle;
-(BOOL)isNoLongerAvailable;
-(BOOL)isAuthenticationSetup;
-(id)prefetchPurchaseOffer;
-(id)authorizationURL;
-(void)ppt_overrideFeedID:(id)arg1;
-(id<FCTopicProviding>)asTopic;
-(NSArray *)relatedTopicIDsForOnboarding;
-(NSArray *)relatedChannelIDsForOnboarding;
-(NSString *)publisherPaidWebAccessURL;
-(BOOL)publisherPaidWebAccessOptIn;
-(FCAssetHandle *)nameImageMaskWidgetLQAssetHandle;
-(FCAssetHandle *)nameImageMaskWidgetHQAssetHandle;
-(unsigned long long)groupingEligibility;
-(BOOL)isRealTimeTrackingEnabled;
-(BOOL)isArticleReadCountReportingEnabled;
-(NSDate *)publisherSpecifiedArticleIDsModifiedDate;
-(BOOL)isNotificationEnabled;
-(NSString *)identifier;
-(NSString *)name;
-(BOOL)isHidden;
-(NSString *)subtitle;

@end
