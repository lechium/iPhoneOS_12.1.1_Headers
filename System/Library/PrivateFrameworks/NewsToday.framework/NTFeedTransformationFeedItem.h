/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTFeedTransformationItem.h>

@class NSDate, SFSearchResult, NTPBFeedItem, NSString;

@interface NTFeedTransformationFeedItem : NSObject <NTFeedTransformationItem> {

	NSDate* _cacheExpirationDate;
	SFSearchResult* _searchResult;
	NTPBFeedItem* _feedItem;

}

@property (nonatomic,copy,readonly) NTPBFeedItem * feedItem;                                                                 //@synthesize feedItem=_feedItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) unsigned long long todayItemType; 
@property (nonatomic,copy,readonly) NSString * clusterID; 
@property (nonatomic,copy,readonly) NSDate * cacheCutoffTimeRelativeDate; 
@property (nonatomic,copy,readonly) NSDate * cacheExpirationDate;                                                            //@synthesize cacheExpirationDate=_cacheExpirationDate - In the implementation block
@property (nonatomic,copy,readonly) SFSearchResult * searchResult;                                                           //@synthesize searchResult=_searchResult - In the implementation block
@property (getter=isEligibleForLeadingCellAppearance,nonatomic,readonly) BOOL eligibleForLeadingCellAppearance; 
@property (nonatomic,readonly) BOOL usesDynamicSlotAllocation; 
@property (nonatomic,readonly) id<FCFeedTransformationItem> feedTransformationItem; 
@property (nonatomic,readonly) BOOL needsFeedItemHeadlinesFetch; 
@property (nonatomic,copy,readonly) NTPBFeedItem * feedItemForHeadlineFetch; 
@property (nonatomic,readonly) unsigned long long preferredDynamicSlotAllocation; 
-(SFSearchResult *)searchResult;
-(NSString *)clusterID;
-(NTPBFeedItem *)feedItem;
-(BOOL)needsFeedItemHeadlinesFetch;
-(NTPBFeedItem *)feedItemForHeadlineFetch;
-(id)protoitemWithFetchedFeedItemHeadline:(id)arg1 ;
-(id<FCFeedTransformationItem>)feedTransformationItem;
-(unsigned long long)todayItemType;
-(id)initWithFeedItem:(id)arg1 cacheExpirationDate:(id)arg2 ;
-(NSDate *)cacheCutoffTimeRelativeDate;
-(NSDate *)cacheExpirationDate;
-(BOOL)isEligibleForLeadingCellAppearance;
-(BOOL)usesDynamicSlotAllocation;
-(id)init;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

