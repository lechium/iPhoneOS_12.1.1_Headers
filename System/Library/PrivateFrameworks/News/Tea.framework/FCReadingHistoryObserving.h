/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/News/Tea.framework/Tea
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCReadingHistoryObserving <NSObject>
@optional
-(void)readingHistory:(id)arg1 didRemoveArticlesWithIDs:(id)arg2;
-(void)readingHistory:(id)arg1 didAddArticlesWithIDs:(id)arg2;
-(void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2;
-(void)readingHistoryLikelyClearedRemotely:(id)arg1;
-(void)readingHistory:(id)arg1 didAddHeadline:(id)arg2 fromGroupType:(long long)arg3 swipedToArticle:(BOOL)arg4 withOnScreenChecker:(/*^block*/id)arg5;
-(void)readingHistory:(id)arg1 didAddHeadline:(id)arg2 fromGroupType:(long long)arg3 swipedToArticle:(BOOL)arg4 withOnScreenChecker:(/*^block*/id)arg5;
-(void)readingHistoryDidClear:(id)arg1;

@end

