/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <NewsCore/FCHeadline.h>
#import <libobjc.A.dylib/FCHeadlineStocksFields.h>

@protocol FCChannelProviding;
@class NSString, FCHeadlineExperimentalTitleMetadata, NSDate, FCHeadlineThumbnail, NSURL, NSArray, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort, FCTopStoriesStyleConfiguration, FCCoverArt, NTPBArticleRecord, FCInterestToken;

@interface FCArticleHeadline : FCHeadline <FCHeadlineStocksFields> {

	BOOL _hasThumbnail;
	BOOL _sponsored;
	BOOL _deleted;
	BOOL _isDraft;
	BOOL _featureCandidate;
	BOOL _needsRapidUpdates;
	BOOL _showMinimalChrome;
	BOOL _boundToContext;
	BOOL _hiddenFromFeeds;
	BOOL _pressRelease;
	BOOL _hiddenFromAutoFavorites;
	BOOL _webEmbedsEnabled;
	BOOL _paid;
	BOOL _canBePurchased;
	NSString* _versionIdentifier;
	NSString* _identifier;
	NSString* _articleID;
	NSString* _referencedArticleID;
	NSString* _clusterID;
	unsigned long long _contentType;
	NSString* _title;
	NSString* _titleCompact;
	FCHeadlineExperimentalTitleMetadata* _experimentalTitleMetadata;
	NSString* _primaryAudience;
	NSDate* _publishDate;
	long long _publisherArticleVersion;
	long long _backendArticleVersion;
	id<FCChannelProviding> _sourceChannel;
	NSString* _sourceName;
	FCHeadlineThumbnail* _thumbnailLQ;
	FCHeadlineThumbnail* _thumbnail;
	FCHeadlineThumbnail* _thumbnailMedium;
	FCHeadlineThumbnail* _thumbnailHQ;
	FCHeadlineThumbnail* _thumbnailUltraHQ;
	FCHeadlineThumbnail* _thumbnailWidgetLQ;
	FCHeadlineThumbnail* _thumbnailWidget;
	FCHeadlineThumbnail* _thumbnailWidgetHQ;
	NSString* _shortExcerpt;
	NSString* _accessoryText;
	NSURL* _contentURL;
	NSDate* _lastModifiedDate;
	NSDate* _lastFetchedDate;
	NSArray* _topics;
	NSArray* _topicIDs;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort* _globalCohort;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort* _publisherCohort;
	NSURL* _videoURL;
	double _videoDuration;
	NSArray* _iAdCategories;
	NSArray* _iAdKeywords;
	NSArray* _iAdSectionIDs;
	NSArray* _blockedStorefrontIDs;
	NSArray* _allowedStorefrontIDs;
	NSArray* _relatedArticleIDs;
	NSArray* _moreFromPublisherArticleIDs;
	unsigned long long _storyType;
	FCTopStoriesStyleConfiguration* _storyStyle;
	long long _minimumNewsVersion;
	FCCoverArt* _coverArt;
	NSString* _videoCallToActionTitle;
	NSURL* _videoCallToActionURL;
	NTPBArticleRecord* _articleRecord;
	FCInterestToken* _articleInterestToken;
	long long _behaviorFlags;
	CGRect _thumbnailFocalFrame;

}

@property (nonatomic,retain) NTPBArticleRecord * articleRecord;                   //@synthesize articleRecord=_articleRecord - In the implementation block
@property (nonatomic,retain) FCInterestToken * articleInterestToken;              //@synthesize articleInterestToken=_articleInterestToken - In the implementation block
@property (nonatomic,copy) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long behaviorFlags;                             //@synthesize behaviorFlags=_behaviorFlags - In the implementation block
@property (nonatomic,copy,readonly) NSString * stocksClusterID; 
@property (nonatomic,copy,readonly) NSString * stocksMetadataJSON; 
@property (nonatomic,copy,readonly) NSString * stocksScoresJSON; 
+(BOOL)_forceArticlesToBeShownAsSponsored;
+(BOOL)_simulateTopStoriesBadges;
-(void)setSourceName:(id)arg1 ;
-(id)sourceName;
-(void)setDeleted:(BOOL)arg1 ;
-(BOOL)hasThumbnail;
-(id)lastModifiedDate;
-(BOOL)isDeleted;
-(id)videoURL;
-(id)versionIdentifier;
-(unsigned long long)contentType;
-(id)contentURL;
-(id)accessoryText;
-(id)articleID;
-(void)setArticleID:(id)arg1 ;
-(id)contentManifestWithContext:(id)arg1 ;
-(id)primaryAudience;
-(id)publishDate;
-(id)sourceChannel;
-(id)shortExcerpt;
-(id)topicIDs;
-(id)endOfArticleTopicIDs;
-(double)videoDuration;
-(BOOL)isFeatureCandidate;
-(BOOL)isSponsored;
-(id)iAdCategories;
-(id)iAdKeywords;
-(id)iAdSectionIDs;
-(id)blockedStorefrontIDs;
-(id)allowedStorefrontIDs;
-(BOOL)isDraft;
-(BOOL)webEmbedsEnabled;
-(id)topics;
-(unsigned long long)storyType;
-(BOOL)isHiddenFromFeeds;
-(id)articleRecirculationConfigJSON;
-(id)referencedArticleID;
-(id)clusterID;
-(void)setClusterID:(id)arg1 ;
-(void)setPublishDate:(id)arg1 ;
-(long long)publisherArticleVersion;
-(long long)backendArticleVersion;
-(void)setSourceChannel:(id)arg1 ;
-(CGRect)thumbnailFocalFrame;
-(void)setThumbnailFocalFrame:(CGRect)arg1 ;
-(void)setHasThumbnail:(BOOL)arg1 ;
-(id)thumbnailLQ;
-(void)setThumbnailLQ:(id)arg1 ;
-(id)thumbnailMedium;
-(void)setThumbnailMedium:(id)arg1 ;
-(id)thumbnailHQ;
-(void)setThumbnailHQ:(id)arg1 ;
-(id)thumbnailUltraHQ;
-(void)setThumbnailUltraHQ:(id)arg1 ;
-(void)setShortExcerpt:(id)arg1 ;
-(id)lastFetchedDate;
-(void)setTopicIDs:(id)arg1 ;
-(void)setSponsored:(BOOL)arg1 ;
-(id)relatedArticleIDs;
-(id)moreFromPublisherArticleIDs;
-(void)setStoryType:(unsigned long long)arg1 ;
-(id)storyStyle;
-(void)setStoryStyle:(id)arg1 ;
-(BOOL)needsRapidUpdates;
-(BOOL)showMinimalChrome;
-(BOOL)isBoundToContext;
-(BOOL)isPressRelease;
-(BOOL)isHiddenFromAutoFavorites;
-(long long)minimumNewsVersion;
-(BOOL)isPaid;
-(void)setPaid:(BOOL)arg1 ;
-(id)coverArt;
-(id)publisherID;
-(id)globalCohort;
-(id)publisherCohort;
-(void)setTitleCompact:(id)arg1 ;
-(void)setBehaviorFlags:(long long)arg1 ;
-(id)initWithArticleRecord:(id)arg1 articleInterestToken:(id)arg2 sourceChannel:(id)arg3 storyStyleConfigs:(id)arg4 storyTypeTimeout:(long long)arg5 rapidUpdatesTimeout:(long long)arg6 assetManager:(id)arg7 experimentalTitleProvider:(id)arg8 ;
-(void)setArticleRecord:(NTPBArticleRecord *)arg1 ;
-(NTPBArticleRecord *)articleRecord;
-(BOOL)canBePurchased;
-(id)titleCompact;
-(id)thumbnailWidgetLQ;
-(id)thumbnailWidget;
-(id)thumbnailWidgetHQ;
-(id)videoCallToActionTitle;
-(id)videoCallToActionURL;
-(id)publisherSpecifiedArticleIDs;
-(id)stocksFields;
-(id)backingArticleRecordData;
-(id)experimentalTitleMetadata;
-(void)setExperimentalTitleMetadata:(id)arg1 ;
-(long long)behaviorFlags;
-(NSString *)stocksClusterID;
-(NSString *)stocksMetadataJSON;
-(NSString *)stocksScoresJSON;
-(id)initWithArticleRecordData:(id)arg1 sourceChannel:(id)arg2 assetManager:(id)arg3 ;
-(FCInterestToken *)articleInterestToken;
-(void)setArticleInterestToken:(FCInterestToken *)arg1 ;
-(void)setContentType:(unsigned long long)arg1 ;
-(id)init;
-(id)identifier;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setIdentifier:(id)arg1 ;
-(id)thumbnail;
-(void)setThumbnail:(id)arg1 ;
@end

