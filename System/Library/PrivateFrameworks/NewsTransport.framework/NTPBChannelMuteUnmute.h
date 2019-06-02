/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NTPBChannelMuteUnmute : PBCodable <NSCopying> {

	long long _previousArticlePublisherArticleVersion;
	NSString* _articleId;
	NSData* _articleSessionId;
	NSString* _articleSessionIdDeprecated;
	NSData* _articleViewingSessionId;
	NSString* _articleViewingSessionIdDeprecated;
	NSString* _campaignId;
	NSString* _campaignType;
	NSString* _channelMuteUnmuteFeedId;
	NSString* _creativeId;
	int _feedType;
	NSData* _feedViewExposureId;
	NSString* _feedViewExposureIdDeprecated;
	int _feedViewPresentationReason;
	int _groupType;
	NSData* _groupViewExposureId;
	int _muteUnmuteLocation;
	NSString* _previousArticleId;
	NSString* _previousArticleVersion;
	NSString* _referencedArticleId;
	NSString* _sourceChannelId;
	int _userAction;
	BOOL _isSearchResultArticle;
	BOOL _isUserSubscribedToFeed;
	SCD_Struct_NT7 _has;

}

@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                                //@synthesize userAction=_userAction - In the implementation block
@property (assign,nonatomic) BOOL hasMuteUnmuteLocation; 
@property (assign,nonatomic) int muteUnmuteLocation;                                        //@synthesize muteUnmuteLocation=_muteUnmuteLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                          //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;                                //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleSessionIdDeprecated; 
@property (nonatomic,retain) NSString * articleSessionIdDeprecated;                         //@synthesize articleSessionIdDeprecated=_articleSessionIdDeprecated - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionIdDeprecated; 
@property (nonatomic,retain) NSString * articleViewingSessionIdDeprecated;                  //@synthesize articleViewingSessionIdDeprecated=_articleViewingSessionIdDeprecated - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                                    //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                                  //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelMuteUnmuteFeedId; 
@property (nonatomic,retain) NSString * channelMuteUnmuteFeedId;                            //@synthesize channelMuteUnmuteFeedId=_channelMuteUnmuteFeedId - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureIdDeprecated; 
@property (nonatomic,retain) NSString * feedViewExposureIdDeprecated;                       //@synthesize feedViewExposureIdDeprecated=_feedViewExposureIdDeprecated - In the implementation block
@property (assign,nonatomic) BOOL hasIsUserSubscribedToFeed; 
@property (assign,nonatomic) BOOL isUserSubscribedToFeed;                                   //@synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleSessionId; 
@property (nonatomic,retain) NSData * articleSessionId;                                     //@synthesize articleSessionId=_articleSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;                              //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                                   //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasGroupType; 
@property (assign,nonatomic) int groupType;                                                 //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                                         //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignType; 
@property (nonatomic,retain) NSString * campaignType;                                       //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,readonly) BOOL hasCreativeId; 
@property (nonatomic,retain) NSString * creativeId;                                         //@synthesize creativeId=_creativeId - In the implementation block
@property (assign,nonatomic) BOOL hasFeedViewPresentationReason; 
@property (assign,nonatomic) int feedViewPresentationReason;                                //@synthesize feedViewPresentationReason=_feedViewPresentationReason - In the implementation block
@property (assign,nonatomic) BOOL hasIsSearchResultArticle; 
@property (assign,nonatomic) BOOL isSearchResultArticle;                                    //@synthesize isSearchResultArticle=_isSearchResultArticle - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousArticleId; 
@property (nonatomic,retain) NSString * previousArticleId;                                  //@synthesize previousArticleId=_previousArticleId - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousArticleVersion; 
@property (nonatomic,retain) NSString * previousArticleVersion;                             //@synthesize previousArticleVersion=_previousArticleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousArticlePublisherArticleVersion; 
@property (assign,nonatomic) long long previousArticlePublisherArticleVersion;              //@synthesize previousArticlePublisherArticleVersion=_previousArticlePublisherArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupViewExposureId; 
@property (nonatomic,retain) NSData * groupViewExposureId;                                  //@synthesize groupViewExposureId=_groupViewExposureId - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)groupType;
-(void)setGroupType:(int)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(BOOL)hasArticleId;
-(BOOL)hasSourceChannelId;
-(BOOL)hasArticleViewingSessionId;
-(NSString *)articleId;
-(NSString *)sourceChannelId;
-(NSData *)articleViewingSessionId;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(BOOL)hasFeedViewExposureId;
-(NSData *)feedViewExposureId;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(void)setArticleSessionIdDeprecated:(NSString *)arg1 ;
-(void)setArticleViewingSessionIdDeprecated:(NSString *)arg1 ;
-(void)setChannelMuteUnmuteFeedId:(NSString *)arg1 ;
-(void)setFeedViewExposureIdDeprecated:(NSString *)arg1 ;
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
-(int)muteUnmuteLocation;
-(void)setMuteUnmuteLocation:(int)arg1 ;
-(void)setHasMuteUnmuteLocation:(BOOL)arg1 ;
-(BOOL)hasMuteUnmuteLocation;
-(BOOL)hasReferencedArticleId;
-(BOOL)hasArticleSessionIdDeprecated;
-(BOOL)hasArticleViewingSessionIdDeprecated;
-(void)setHasFeedType:(BOOL)arg1 ;
-(BOOL)hasFeedType;
-(id)feedTypeAsString:(int)arg1 ;
-(int)StringAsFeedType:(id)arg1 ;
-(BOOL)hasChannelMuteUnmuteFeedId;
-(BOOL)hasFeedViewExposureIdDeprecated;
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
-(int)feedViewPresentationReason;
-(void)setFeedViewPresentationReason:(int)arg1 ;
-(void)setHasFeedViewPresentationReason:(BOOL)arg1 ;
-(BOOL)hasFeedViewPresentationReason;
-(id)feedViewPresentationReasonAsString:(int)arg1 ;
-(int)StringAsFeedViewPresentationReason:(id)arg1 ;
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
-(NSString *)articleSessionIdDeprecated;
-(NSString *)articleViewingSessionIdDeprecated;
-(NSString *)channelMuteUnmuteFeedId;
-(NSString *)feedViewExposureIdDeprecated;
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
-(int)feedType;
-(void)setFeedType:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

