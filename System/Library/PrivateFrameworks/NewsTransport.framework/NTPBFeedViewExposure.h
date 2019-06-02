/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NTPBFeedViewExposure : PBCodable <NSCopying> {

	long long _previousArticlePublisherArticleVersion;
	int _areaPresentationReason;
	NSString* _campaignId;
	NSString* _campaignType;
	int _countOfTotalGroupExposures;
	int _countOfTotalGroupsExposed;
	NSString* _creativeId;
	int _feedCellHostType;
	int _feedCellSection;
	NSString* _feedId;
	int _feedType;
	NSData* _feedViewExposureId;
	int _groupType;
	NSData* _groupViewExposureId;
	int _presentationReason;
	NSString* _presentationReasonSearchString;
	NSString* _previousArticleId;
	NSString* _previousArticleVersion;
	int _rankInToc;
	NSString* _referringSourceApplication;
	NSString* _referringUrl;
	NSString* _sourceChannelId;
	NSString* _userActivityType;
	NSString* _viewFrameInScreen;
	BOOL _adSupportedChannel;
	BOOL _cameFromGroup;
	BOOL _isNewUserToFeed;
	BOOL _isPaidSubscriberToFeed;
	BOOL _isSubscribedToGroupFeed;
	BOOL _isUserSubscribedToFeed;
	SCD_Struct_NT8 _has;

}

@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                                  //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                                             //@synthesize feedId=_feedId - In the implementation block
@property (assign,nonatomic) BOOL hasIsUserSubscribedToFeed; 
@property (assign,nonatomic) BOOL isUserSubscribedToFeed;                                   //@synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed - In the implementation block
@property (assign,nonatomic) BOOL hasPresentationReason; 
@property (assign,nonatomic) int presentationReason;                                        //@synthesize presentationReason=_presentationReason - In the implementation block
@property (nonatomic,readonly) BOOL hasPresentationReasonSearchString; 
@property (nonatomic,retain) NSString * presentationReasonSearchString;                     //@synthesize presentationReasonSearchString=_presentationReasonSearchString - In the implementation block
@property (nonatomic,readonly) BOOL hasViewFrameInScreen; 
@property (nonatomic,retain) NSString * viewFrameInScreen;                                  //@synthesize viewFrameInScreen=_viewFrameInScreen - In the implementation block
@property (assign,nonatomic) BOOL hasFeedCellSection; 
@property (assign,nonatomic) int feedCellSection;                                           //@synthesize feedCellSection=_feedCellSection - In the implementation block
@property (assign,nonatomic) BOOL hasFeedCellHostType; 
@property (assign,nonatomic) int feedCellHostType;                                          //@synthesize feedCellHostType=_feedCellHostType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                                   //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasIsNewUserToFeed; 
@property (assign,nonatomic) BOOL isNewUserToFeed;                                          //@synthesize isNewUserToFeed=_isNewUserToFeed - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                                    //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringSourceApplication; 
@property (nonatomic,retain) NSString * referringSourceApplication;                         //@synthesize referringSourceApplication=_referringSourceApplication - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringUrl; 
@property (nonatomic,retain) NSString * referringUrl;                                       //@synthesize referringUrl=_referringUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasUserActivityType; 
@property (nonatomic,retain) NSString * userActivityType;                                   //@synthesize userActivityType=_userActivityType - In the implementation block
@property (assign,nonatomic) BOOL hasCameFromGroup; 
@property (assign,nonatomic) BOOL cameFromGroup;                                            //@synthesize cameFromGroup=_cameFromGroup - In the implementation block
@property (assign,nonatomic) BOOL hasGroupType; 
@property (assign,nonatomic) int groupType;                                                 //@synthesize groupType=_groupType - In the implementation block
@property (assign,nonatomic) BOOL hasIsSubscribedToGroupFeed; 
@property (assign,nonatomic) BOOL isSubscribedToGroupFeed;                                  //@synthesize isSubscribedToGroupFeed=_isSubscribedToGroupFeed - In the implementation block
@property (assign,nonatomic) BOOL hasCountOfTotalGroupExposures; 
@property (assign,nonatomic) int countOfTotalGroupExposures;                                //@synthesize countOfTotalGroupExposures=_countOfTotalGroupExposures - In the implementation block
@property (assign,nonatomic) BOOL hasCountOfTotalGroupsExposed; 
@property (assign,nonatomic) int countOfTotalGroupsExposed;                                 //@synthesize countOfTotalGroupsExposed=_countOfTotalGroupsExposed - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaidSubscriberToFeed; 
@property (assign,nonatomic) BOOL isPaidSubscriberToFeed;                                   //@synthesize isPaidSubscriberToFeed=_isPaidSubscriberToFeed - In the implementation block
@property (assign,nonatomic) BOOL hasAdSupportedChannel; 
@property (assign,nonatomic) BOOL adSupportedChannel;                                       //@synthesize adSupportedChannel=_adSupportedChannel - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                                         //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignType; 
@property (nonatomic,retain) NSString * campaignType;                                       //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,readonly) BOOL hasCreativeId; 
@property (nonatomic,retain) NSString * creativeId;                                         //@synthesize creativeId=_creativeId - In the implementation block
@property (assign,nonatomic) BOOL hasAreaPresentationReason; 
@property (assign,nonatomic) int areaPresentationReason;                                    //@synthesize areaPresentationReason=_areaPresentationReason - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousArticleId; 
@property (nonatomic,retain) NSString * previousArticleId;                                  //@synthesize previousArticleId=_previousArticleId - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousArticleVersion; 
@property (nonatomic,retain) NSString * previousArticleVersion;                             //@synthesize previousArticleVersion=_previousArticleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousArticlePublisherArticleVersion; 
@property (assign,nonatomic) long long previousArticlePublisherArticleVersion;              //@synthesize previousArticlePublisherArticleVersion=_previousArticlePublisherArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupViewExposureId; 
@property (nonatomic,retain) NSData * groupViewExposureId;                                  //@synthesize groupViewExposureId=_groupViewExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasRankInToc; 
@property (assign,nonatomic) int rankInToc;                                                 //@synthesize rankInToc=_rankInToc - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setFeedId:(NSString *)arg1 ;
-(BOOL)hasFeedId;
-(NSString *)feedId;
-(int)groupType;
-(void)setGroupType:(int)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasSourceChannelId;
-(NSString *)sourceChannelId;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(BOOL)hasFeedViewExposureId;
-(NSData *)feedViewExposureId;
-(void)setCampaignId:(NSString *)arg1 ;
-(void)setCampaignType:(NSString *)arg1 ;
-(void)setCreativeId:(NSString *)arg1 ;
-(void)setPreviousArticleId:(NSString *)arg1 ;
-(void)setPreviousArticleVersion:(NSString *)arg1 ;
-(void)setGroupViewExposureId:(NSData *)arg1 ;
-(void)setHasFeedType:(BOOL)arg1 ;
-(BOOL)hasFeedType;
-(id)feedTypeAsString:(int)arg1 ;
-(int)StringAsFeedType:(id)arg1 ;
-(void)setIsUserSubscribedToFeed:(BOOL)arg1 ;
-(void)setHasIsUserSubscribedToFeed:(BOOL)arg1 ;
-(BOOL)hasIsUserSubscribedToFeed;
-(void)setHasGroupType:(BOOL)arg1 ;
-(BOOL)hasGroupType;
-(id)groupTypeAsString:(int)arg1 ;
-(int)StringAsGroupType:(id)arg1 ;
-(BOOL)hasCampaignId;
-(BOOL)hasCampaignType;
-(BOOL)hasCreativeId;
-(BOOL)hasPreviousArticleId;
-(BOOL)hasPreviousArticleVersion;
-(void)setPreviousArticlePublisherArticleVersion:(long long)arg1 ;
-(void)setHasPreviousArticlePublisherArticleVersion:(BOOL)arg1 ;
-(BOOL)hasPreviousArticlePublisherArticleVersion;
-(BOOL)hasGroupViewExposureId;
-(BOOL)isUserSubscribedToFeed;
-(NSString *)campaignId;
-(NSString *)campaignType;
-(NSString *)creativeId;
-(NSString *)previousArticleId;
-(NSString *)previousArticleVersion;
-(long long)previousArticlePublisherArticleVersion;
-(NSData *)groupViewExposureId;
-(int)feedCellSection;
-(void)setFeedCellSection:(int)arg1 ;
-(void)setHasFeedCellSection:(BOOL)arg1 ;
-(BOOL)hasFeedCellSection;
-(id)feedCellSectionAsString:(int)arg1 ;
-(int)StringAsFeedCellSection:(id)arg1 ;
-(void)setAdSupportedChannel:(BOOL)arg1 ;
-(void)setHasAdSupportedChannel:(BOOL)arg1 ;
-(BOOL)hasAdSupportedChannel;
-(BOOL)adSupportedChannel;
-(int)areaPresentationReason;
-(void)setAreaPresentationReason:(int)arg1 ;
-(void)setHasAreaPresentationReason:(BOOL)arg1 ;
-(BOOL)hasAreaPresentationReason;
-(id)areaPresentationReasonAsString:(int)arg1 ;
-(int)StringAsAreaPresentationReason:(id)arg1 ;
-(int)feedCellHostType;
-(void)setFeedCellHostType:(int)arg1 ;
-(void)setHasFeedCellHostType:(BOOL)arg1 ;
-(BOOL)hasFeedCellHostType;
-(id)feedCellHostTypeAsString:(int)arg1 ;
-(int)StringAsFeedCellHostType:(id)arg1 ;
-(void)setViewFrameInScreen:(NSString *)arg1 ;
-(void)setReferringSourceApplication:(NSString *)arg1 ;
-(void)setReferringUrl:(NSString *)arg1 ;
-(void)setUserActivityType:(NSString *)arg1 ;
-(BOOL)hasViewFrameInScreen;
-(BOOL)hasReferringSourceApplication;
-(BOOL)hasReferringUrl;
-(BOOL)hasUserActivityType;
-(void)setIsSubscribedToGroupFeed:(BOOL)arg1 ;
-(void)setHasIsSubscribedToGroupFeed:(BOOL)arg1 ;
-(BOOL)hasIsSubscribedToGroupFeed;
-(void)setIsPaidSubscriberToFeed:(BOOL)arg1 ;
-(void)setHasIsPaidSubscriberToFeed:(BOOL)arg1 ;
-(BOOL)hasIsPaidSubscriberToFeed;
-(NSString *)viewFrameInScreen;
-(NSString *)referringSourceApplication;
-(NSString *)referringUrl;
-(NSString *)userActivityType;
-(BOOL)isSubscribedToGroupFeed;
-(BOOL)isPaidSubscriberToFeed;
-(void)setCameFromGroup:(BOOL)arg1 ;
-(void)setHasCameFromGroup:(BOOL)arg1 ;
-(BOOL)hasCameFromGroup;
-(BOOL)cameFromGroup;
-(void)setPresentationReasonSearchString:(NSString *)arg1 ;
-(int)presentationReason;
-(void)setPresentationReason:(int)arg1 ;
-(void)setHasPresentationReason:(BOOL)arg1 ;
-(BOOL)hasPresentationReason;
-(id)presentationReasonAsString:(int)arg1 ;
-(int)StringAsPresentationReason:(id)arg1 ;
-(BOOL)hasPresentationReasonSearchString;
-(void)setIsNewUserToFeed:(BOOL)arg1 ;
-(void)setHasIsNewUserToFeed:(BOOL)arg1 ;
-(BOOL)hasIsNewUserToFeed;
-(void)setCountOfTotalGroupExposures:(int)arg1 ;
-(void)setHasCountOfTotalGroupExposures:(BOOL)arg1 ;
-(BOOL)hasCountOfTotalGroupExposures;
-(void)setCountOfTotalGroupsExposed:(int)arg1 ;
-(void)setHasCountOfTotalGroupsExposed:(BOOL)arg1 ;
-(BOOL)hasCountOfTotalGroupsExposed;
-(void)setRankInToc:(int)arg1 ;
-(void)setHasRankInToc:(BOOL)arg1 ;
-(BOOL)hasRankInToc;
-(NSString *)presentationReasonSearchString;
-(BOOL)isNewUserToFeed;
-(int)countOfTotalGroupExposures;
-(int)countOfTotalGroupsExposed;
-(int)rankInToc;
-(int)feedType;
-(void)setFeedType:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

