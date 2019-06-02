/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray, NTPBWidgetEngagement;

@interface NTPBArticleLikeDislike : PBCodable <NSCopying> {

	long long _backendArticleVersionInt64;
	long long _personalizationTreatmentId;
	long long _previousArticlePublisherArticleVersion;
	long long _publisherArticleVersionInt64;
	NSString* _articleId;
	NSData* _articleSessionId;
	int _articleType;
	NSData* _articleViewingSessionId;
	int _backendArticleVersion;
	NSString* _campaignId;
	NSString* _campaignType;
	int _characterCount;
	NSString* _creativeId;
	NSString* _feedId;
	int _feedType;
	NSData* _feedViewExposureId;
	NSMutableArray* _fractionalCohortMemberships;
	NSString* _groupFeedId;
	int _groupType;
	NSData* _groupViewExposureId;
	NSString* _iadNativeAd;
	NSString* _iadNativeCampaign;
	NSString* _iadNativeCampaignAd;
	NSString* _iadNativeLine;
	NSString* _language;
	int _likeDislikeLocation;
	NSMutableArray* _namedEntities;
	NSString* _nativeCampaignData;
	int _nextArticleAffordanceType;
	NSString* _nextArticleAffordanceTypeFeedId;
	NSString* _previousArticleId;
	NSString* _previousArticleVersion;
	int _publisherArticleVersion;
	NSString* _referencedArticleId;
	NSString* _sectionHeadlineId;
	NSString* _sourceChannelId;
	NSString* _surfacedByChannelId;
	NSString* _surfacedBySectionId;
	NSString* _surfacedByTopicId;
	int _topStoryType;
	int _userAction;
	NTPBWidgetEngagement* _widgetEngagement;
	BOOL _fromNextArticleAffordanceTap;
	BOOL _isBreakingNewsArticle;
	BOOL _isCoverArticle;
	BOOL _isDigitalReplicaAd;
	BOOL _isFreeArticle;
	BOOL _isGroupedArticle;
	BOOL _isNativeAd;
	BOOL _isPaidSubscriberToSourceChannel;
	BOOL _isSearchResultArticle;
	BOOL _isTopStoryArticle;
	BOOL _isUserSubscribedToFeed;
	SCD_Struct_NT16 _has;

}

@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                                //@synthesize userAction=_userAction - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                          //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;                                //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleSessionId; 
@property (nonatomic,retain) NSData * articleSessionId;                                     //@synthesize articleSessionId=_articleSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;                              //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                                    //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                                  //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                                             //@synthesize feedId=_feedId - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                                   //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasIsUserSubscribedToFeed; 
@property (assign,nonatomic) BOOL isUserSubscribedToFeed;                                   //@synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed - In the implementation block
@property (assign,nonatomic) BOOL hasLikeDislikeLocation; 
@property (assign,nonatomic) int likeDislikeLocation;                                       //@synthesize likeDislikeLocation=_likeDislikeLocation - In the implementation block
@property (assign,nonatomic) BOOL hasArticleType; 
@property (assign,nonatomic) int articleType;                                               //@synthesize articleType=_articleType - In the implementation block
@property (nonatomic,retain) NSMutableArray * namedEntities;                                //@synthesize namedEntities=_namedEntities - In the implementation block
@property (assign,nonatomic) BOOL hasCharacterCount; 
@property (assign,nonatomic) int characterCount;                                            //@synthesize characterCount=_characterCount - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                                           //@synthesize language=_language - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersion; 
@property (assign,nonatomic) int publisherArticleVersion;                                   //@synthesize publisherArticleVersion=_publisherArticleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasBackendArticleVersion; 
@property (assign,nonatomic) int backendArticleVersion;                                     //@synthesize backendArticleVersion=_backendArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedByChannelId; 
@property (nonatomic,retain) NSString * surfacedByChannelId;                                //@synthesize surfacedByChannelId=_surfacedByChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedBySectionId; 
@property (nonatomic,retain) NSString * surfacedBySectionId;                                //@synthesize surfacedBySectionId=_surfacedBySectionId - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedByTopicId; 
@property (nonatomic,retain) NSString * surfacedByTopicId;                                  //@synthesize surfacedByTopicId=_surfacedByTopicId - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionHeadlineId; 
@property (nonatomic,retain) NSString * sectionHeadlineId;                                  //@synthesize sectionHeadlineId=_sectionHeadlineId - In the implementation block
@property (assign,nonatomic) BOOL hasIsDigitalReplicaAd; 
@property (assign,nonatomic) BOOL isDigitalReplicaAd;                                       //@synthesize isDigitalReplicaAd=_isDigitalReplicaAd - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalizationTreatmentId; 
@property (assign,nonatomic) long long personalizationTreatmentId;                          //@synthesize personalizationTreatmentId=_personalizationTreatmentId - In the implementation block
@property (assign,nonatomic) BOOL hasIsGroupedArticle; 
@property (assign,nonatomic) BOOL isGroupedArticle;                                         //@synthesize isGroupedArticle=_isGroupedArticle - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupFeedId; 
@property (nonatomic,retain) NSString * groupFeedId;                                        //@synthesize groupFeedId=_groupFeedId - In the implementation block
@property (assign,nonatomic) BOOL hasGroupType; 
@property (assign,nonatomic) int groupType;                                                 //@synthesize groupType=_groupType - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaidSubscriberToSourceChannel; 
@property (assign,nonatomic) BOOL isPaidSubscriberToSourceChannel;                          //@synthesize isPaidSubscriberToSourceChannel=_isPaidSubscriberToSourceChannel - In the implementation block
@property (assign,nonatomic) BOOL hasIsFreeArticle; 
@property (assign,nonatomic) BOOL isFreeArticle;                                            //@synthesize isFreeArticle=_isFreeArticle - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                                         //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignType; 
@property (nonatomic,retain) NSString * campaignType;                                       //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,readonly) BOOL hasCreativeId; 
@property (nonatomic,retain) NSString * creativeId;                                         //@synthesize creativeId=_creativeId - In the implementation block
@property (assign,nonatomic) BOOL hasIsCoverArticle; 
@property (assign,nonatomic) BOOL isCoverArticle;                                           //@synthesize isCoverArticle=_isCoverArticle - In the implementation block
@property (assign,nonatomic) BOOL hasFromNextArticleAffordanceTap; 
@property (assign,nonatomic) BOOL fromNextArticleAffordanceTap;                             //@synthesize fromNextArticleAffordanceTap=_fromNextArticleAffordanceTap - In the implementation block
@property (assign,nonatomic) BOOL hasNextArticleAffordanceType; 
@property (assign,nonatomic) int nextArticleAffordanceType;                                 //@synthesize nextArticleAffordanceType=_nextArticleAffordanceType - In the implementation block
@property (nonatomic,readonly) BOOL hasNextArticleAffordanceTypeFeedId; 
@property (nonatomic,retain) NSString * nextArticleAffordanceTypeFeedId;                    //@synthesize nextArticleAffordanceTypeFeedId=_nextArticleAffordanceTypeFeedId - In the implementation block
@property (assign,nonatomic) BOOL hasIsBreakingNewsArticle; 
@property (assign,nonatomic) BOOL isBreakingNewsArticle;                                    //@synthesize isBreakingNewsArticle=_isBreakingNewsArticle - In the implementation block
@property (assign,nonatomic) BOOL hasTopStoryType; 
@property (assign,nonatomic) int topStoryType;                                              //@synthesize topStoryType=_topStoryType - In the implementation block
@property (assign,nonatomic) BOOL hasIsTopStoryArticle; 
@property (assign,nonatomic) BOOL isTopStoryArticle;                                        //@synthesize isTopStoryArticle=_isTopStoryArticle - In the implementation block
@property (assign,nonatomic) BOOL hasIsSearchResultArticle; 
@property (assign,nonatomic) BOOL isSearchResultArticle;                                    //@synthesize isSearchResultArticle=_isSearchResultArticle - In the implementation block
@property (assign,nonatomic) BOOL hasIsNativeAd; 
@property (assign,nonatomic) BOOL isNativeAd;                                               //@synthesize isNativeAd=_isNativeAd - In the implementation block
@property (nonatomic,readonly) BOOL hasNativeCampaignData; 
@property (nonatomic,retain) NSString * nativeCampaignData;                                 //@synthesize nativeCampaignData=_nativeCampaignData - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousArticleId; 
@property (nonatomic,retain) NSString * previousArticleId;                                  //@synthesize previousArticleId=_previousArticleId - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousArticleVersion; 
@property (nonatomic,retain) NSString * previousArticleVersion;                             //@synthesize previousArticleVersion=_previousArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetEngagement; 
@property (nonatomic,retain) NTPBWidgetEngagement * widgetEngagement;                       //@synthesize widgetEngagement=_widgetEngagement - In the implementation block
@property (nonatomic,retain) NSMutableArray * fractionalCohortMemberships;                  //@synthesize fractionalCohortMemberships=_fractionalCohortMemberships - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersionInt64; 
@property (assign,nonatomic) long long publisherArticleVersionInt64;                        //@synthesize publisherArticleVersionInt64=_publisherArticleVersionInt64 - In the implementation block
@property (assign,nonatomic) BOOL hasBackendArticleVersionInt64; 
@property (assign,nonatomic) long long backendArticleVersionInt64;                          //@synthesize backendArticleVersionInt64=_backendArticleVersionInt64 - In the implementation block
@property (nonatomic,readonly) BOOL hasIadNativeCampaign; 
@property (nonatomic,retain) NSString * iadNativeCampaign;                                  //@synthesize iadNativeCampaign=_iadNativeCampaign - In the implementation block
@property (nonatomic,readonly) BOOL hasIadNativeLine; 
@property (nonatomic,retain) NSString * iadNativeLine;                                      //@synthesize iadNativeLine=_iadNativeLine - In the implementation block
@property (nonatomic,readonly) BOOL hasIadNativeAd; 
@property (nonatomic,retain) NSString * iadNativeAd;                                        //@synthesize iadNativeAd=_iadNativeAd - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousArticlePublisherArticleVersion; 
@property (assign,nonatomic) long long previousArticlePublisherArticleVersion;              //@synthesize previousArticlePublisherArticleVersion=_previousArticlePublisherArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasIadNativeCampaignAd; 
@property (nonatomic,retain) NSString * iadNativeCampaignAd;                                //@synthesize iadNativeCampaignAd=_iadNativeCampaignAd - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupViewExposureId; 
@property (nonatomic,retain) NSData * groupViewExposureId;                                  //@synthesize groupViewExposureId=_groupViewExposureId - In the implementation block
+(Class)namedEntitiesType;
+(Class)fractionalCohortMembershipType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLanguage;
-(void)setFeedId:(NSString *)arg1 ;
-(BOOL)hasFeedId;
-(NSString *)feedId;
-(int)groupType;
-(void)setGroupType:(int)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(BOOL)hasArticleId;
-(int)articleType;
-(void)setArticleType:(int)arg1 ;
-(void)setHasArticleType:(BOOL)arg1 ;
-(BOOL)hasArticleType;
-(id)articleTypeAsString:(int)arg1 ;
-(int)StringAsArticleType:(id)arg1 ;
-(BOOL)hasSourceChannelId;
-(void)setHasPublisherArticleVersion:(BOOL)arg1 ;
-(BOOL)hasPublisherArticleVersion;
-(BOOL)hasArticleViewingSessionId;
-(NSString *)articleId;
-(NSString *)sourceChannelId;
-(NSData *)articleViewingSessionId;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(BOOL)hasFeedViewExposureId;
-(NSData *)feedViewExposureId;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(void)setArticleSessionId:(NSData *)arg1 ;
-(void)setCampaignId:(NSString *)arg1 ;
-(void)setCampaignType:(NSString *)arg1 ;
-(void)setCreativeId:(NSString *)arg1 ;
-(void)setPreviousArticleId:(NSString *)arg1 ;
-(void)setPreviousArticleVersion:(NSString *)arg1 ;
-(void)setGroupViewExposureId:(NSData *)arg1 ;
-(int)userAction;
-(void)setUserAction:(int)arg1 ;
-(void)setHasUserAction:(BOOL)arg1 ;
-(BOOL)hasUserAction;
-(BOOL)hasReferencedArticleId;
-(void)setHasFeedType:(BOOL)arg1 ;
-(BOOL)hasFeedType;
-(id)feedTypeAsString:(int)arg1 ;
-(int)StringAsFeedType:(id)arg1 ;
-(void)setIsUserSubscribedToFeed:(BOOL)arg1 ;
-(void)setHasIsUserSubscribedToFeed:(BOOL)arg1 ;
-(BOOL)hasIsUserSubscribedToFeed;
-(BOOL)hasArticleSessionId;
-(void)setHasGroupType:(BOOL)arg1 ;
-(BOOL)hasGroupType;
-(id)groupTypeAsString:(int)arg1 ;
-(int)StringAsGroupType:(id)arg1 ;
-(BOOL)hasCampaignId;
-(BOOL)hasCampaignType;
-(BOOL)hasCreativeId;
-(void)setIsSearchResultArticle:(BOOL)arg1 ;
-(void)setHasIsSearchResultArticle:(BOOL)arg1 ;
-(BOOL)hasIsSearchResultArticle;
-(BOOL)hasPreviousArticleId;
-(BOOL)hasPreviousArticleVersion;
-(void)setPreviousArticlePublisherArticleVersion:(long long)arg1 ;
-(void)setHasPreviousArticlePublisherArticleVersion:(BOOL)arg1 ;
-(BOOL)hasPreviousArticlePublisherArticleVersion;
-(BOOL)hasGroupViewExposureId;
-(NSString *)referencedArticleId;
-(BOOL)isUserSubscribedToFeed;
-(NSData *)articleSessionId;
-(NSString *)campaignId;
-(NSString *)campaignType;
-(NSString *)creativeId;
-(BOOL)isSearchResultArticle;
-(NSString *)previousArticleId;
-(NSString *)previousArticleVersion;
-(long long)previousArticlePublisherArticleVersion;
-(NSData *)groupViewExposureId;
-(void)addNamedEntities:(id)arg1 ;
-(void)addFractionalCohortMembership:(id)arg1 ;
-(void)setSurfacedByChannelId:(NSString *)arg1 ;
-(void)setSurfacedBySectionId:(NSString *)arg1 ;
-(void)setSurfacedByTopicId:(NSString *)arg1 ;
-(void)setSectionHeadlineId:(NSString *)arg1 ;
-(void)setWidgetEngagement:(NTPBWidgetEngagement *)arg1 ;
-(void)setIadNativeCampaign:(NSString *)arg1 ;
-(void)setIadNativeLine:(NSString *)arg1 ;
-(void)setIadNativeAd:(NSString *)arg1 ;
-(void)setIadNativeCampaignAd:(NSString *)arg1 ;
-(void)clearNamedEntities;
-(unsigned long long)namedEntitiesCount;
-(id)namedEntitiesAtIndex:(unsigned long long)arg1 ;
-(void)setHasBackendArticleVersion:(BOOL)arg1 ;
-(BOOL)hasBackendArticleVersion;
-(BOOL)hasSurfacedByChannelId;
-(BOOL)hasSurfacedBySectionId;
-(BOOL)hasSurfacedByTopicId;
-(BOOL)hasSectionHeadlineId;
-(void)setIsDigitalReplicaAd:(BOOL)arg1 ;
-(void)setHasIsDigitalReplicaAd:(BOOL)arg1 ;
-(BOOL)hasIsDigitalReplicaAd;
-(void)setPersonalizationTreatmentId:(long long)arg1 ;
-(void)setHasPersonalizationTreatmentId:(BOOL)arg1 ;
-(BOOL)hasPersonalizationTreatmentId;
-(BOOL)hasWidgetEngagement;
-(void)clearFractionalCohortMemberships;
-(unsigned long long)fractionalCohortMembershipsCount;
-(id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1 ;
-(void)setIsNativeAd:(BOOL)arg1 ;
-(void)setHasIsNativeAd:(BOOL)arg1 ;
-(BOOL)hasIsNativeAd;
-(void)setPublisherArticleVersionInt64:(long long)arg1 ;
-(void)setHasPublisherArticleVersionInt64:(BOOL)arg1 ;
-(BOOL)hasPublisherArticleVersionInt64;
-(void)setBackendArticleVersionInt64:(long long)arg1 ;
-(void)setHasBackendArticleVersionInt64:(BOOL)arg1 ;
-(BOOL)hasBackendArticleVersionInt64;
-(BOOL)hasIadNativeCampaign;
-(BOOL)hasIadNativeLine;
-(BOOL)hasIadNativeAd;
-(BOOL)hasIadNativeCampaignAd;
-(NSMutableArray *)namedEntities;
-(void)setNamedEntities:(NSMutableArray *)arg1 ;
-(NSString *)surfacedByChannelId;
-(NSString *)surfacedBySectionId;
-(NSString *)surfacedByTopicId;
-(NSString *)sectionHeadlineId;
-(BOOL)isDigitalReplicaAd;
-(long long)personalizationTreatmentId;
-(NTPBWidgetEngagement *)widgetEngagement;
-(NSMutableArray *)fractionalCohortMemberships;
-(void)setFractionalCohortMemberships:(NSMutableArray *)arg1 ;
-(BOOL)isNativeAd;
-(long long)publisherArticleVersionInt64;
-(long long)backendArticleVersionInt64;
-(NSString *)iadNativeCampaign;
-(NSString *)iadNativeLine;
-(NSString *)iadNativeAd;
-(NSString *)iadNativeCampaignAd;
-(void)setNativeCampaignData:(NSString *)arg1 ;
-(void)setGroupFeedId:(NSString *)arg1 ;
-(BOOL)hasNativeCampaignData;
-(BOOL)hasGroupFeedId;
-(void)setIsBreakingNewsArticle:(BOOL)arg1 ;
-(void)setHasIsBreakingNewsArticle:(BOOL)arg1 ;
-(BOOL)hasIsBreakingNewsArticle;
-(NSString *)nativeCampaignData;
-(NSString *)groupFeedId;
-(BOOL)isBreakingNewsArticle;
-(void)setHasTopStoryType:(BOOL)arg1 ;
-(BOOL)hasTopStoryType;
-(id)topStoryTypeAsString:(int)arg1 ;
-(int)StringAsTopStoryType:(id)arg1 ;
-(void)setIsTopStoryArticle:(BOOL)arg1 ;
-(void)setHasIsTopStoryArticle:(BOOL)arg1 ;
-(BOOL)hasIsTopStoryArticle;
-(BOOL)isTopStoryArticle;
-(void)setNextArticleAffordanceTypeFeedId:(NSString *)arg1 ;
-(void)setHasCharacterCount:(BOOL)arg1 ;
-(BOOL)hasCharacterCount;
-(void)setIsGroupedArticle:(BOOL)arg1 ;
-(void)setHasIsGroupedArticle:(BOOL)arg1 ;
-(BOOL)hasIsGroupedArticle;
-(void)setIsFreeArticle:(BOOL)arg1 ;
-(void)setHasIsFreeArticle:(BOOL)arg1 ;
-(BOOL)hasIsFreeArticle;
-(void)setIsCoverArticle:(BOOL)arg1 ;
-(void)setHasIsCoverArticle:(BOOL)arg1 ;
-(BOOL)hasIsCoverArticle;
-(void)setIsPaidSubscriberToSourceChannel:(BOOL)arg1 ;
-(void)setHasIsPaidSubscriberToSourceChannel:(BOOL)arg1 ;
-(BOOL)hasIsPaidSubscriberToSourceChannel;
-(int)nextArticleAffordanceType;
-(void)setNextArticleAffordanceType:(int)arg1 ;
-(void)setHasNextArticleAffordanceType:(BOOL)arg1 ;
-(BOOL)hasNextArticleAffordanceType;
-(id)nextArticleAffordanceTypeAsString:(int)arg1 ;
-(int)StringAsNextArticleAffordanceType:(id)arg1 ;
-(BOOL)hasNextArticleAffordanceTypeFeedId;
-(BOOL)isGroupedArticle;
-(BOOL)isFreeArticle;
-(BOOL)isCoverArticle;
-(BOOL)isPaidSubscriberToSourceChannel;
-(NSString *)nextArticleAffordanceTypeFeedId;
-(int)likeDislikeLocation;
-(void)setLikeDislikeLocation:(int)arg1 ;
-(void)setHasLikeDislikeLocation:(BOOL)arg1 ;
-(BOOL)hasLikeDislikeLocation;
-(void)setFromNextArticleAffordanceTap:(BOOL)arg1 ;
-(void)setHasFromNextArticleAffordanceTap:(BOOL)arg1 ;
-(BOOL)hasFromNextArticleAffordanceTap;
-(BOOL)fromNextArticleAffordanceTap;
-(int)topStoryType;
-(void)setTopStoryType:(int)arg1 ;
-(int)feedType;
-(void)setFeedType:(int)arg1 ;
-(int)publisherArticleVersion;
-(int)backendArticleVersion;
-(void)setPublisherArticleVersion:(int)arg1 ;
-(void)setBackendArticleVersion:(int)arg1 ;
-(int)characterCount;
-(void)setCharacterCount:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
@end

