/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedGroupEmittingCursor.h>

@class NSDate, NSArray;

@interface FCTopStoriesFeedGroupCursor : FCFeedGroupEmittingCursor {

	BOOL _collapsed;
	NSDate* _publishDate;
	NSArray* _articleIDs;
	NSDate* _optionalStoriesLastRefreshDate;

}

@property (nonatomic,copy) NSDate * publishDate;                                 //@synthesize publishDate=_publishDate - In the implementation block
@property (nonatomic,copy) NSArray * articleIDs;                                 //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,copy) NSDate * optionalStoriesLastRefreshDate;              //@synthesize optionalStoriesLastRefreshDate=_optionalStoriesLastRefreshDate - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                  //@synthesize collapsed=_collapsed - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)publishDate;
-(void)setPublishDate:(NSDate *)arg1 ;
-(NSArray *)articleIDs;
-(void)setArticleIDs:(NSArray *)arg1 ;
-(NSDate *)optionalStoriesLastRefreshDate;
-(void)setOptionalStoriesLastRefreshDate:(NSDate *)arg1 ;
-(void)setCollapsed:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isCollapsed;
@end
