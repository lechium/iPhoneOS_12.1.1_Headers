/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCTrendingStoriesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation {

	long long _desiredArticlesCount;

}

@property (assign,nonatomic) long long desiredArticlesCount;              //@synthesize desiredArticlesCount=_desiredArticlesCount - In the implementation block
-(void)performOperation;
-(long long)desiredArticlesCount;
-(void)setDesiredArticlesCount:(long long)arg1 ;
-(id)_filterTrendingHeadlines:(id)arg1 ;
@end

