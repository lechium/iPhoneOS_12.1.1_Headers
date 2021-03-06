/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol WBSURLCompletionMatchData <NSObject>
@property (nonatomic,readonly) NSString * originalURLString; 
@property (nonatomic,readonly) BOOL containsBookmark; 
@property (nonatomic,readonly) double lastVisitedTimeInterval; 
@property (nonatomic,readonly) BOOL lastVisitWasFailure; 
@property (nonatomic,readonly) long long visitCount; 
@optional
-(long long)visitCount;

@required
-(id)pageTitleAtIndex:(unsigned long long)arg1;
-(id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1;
-(NSString *)originalURLString;
-(BOOL)containsBookmark;
-(id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1;
-(id)userVisibleURLStringAtIndex:(unsigned long long)arg1;
-(double)lastVisitedTimeInterval;
-(void)enumeratePageTitlesUsingBlock:(/*^block*/id)arg1;
-(void)enumerateUserVisibleURLsUsingBlock:(/*^block*/id)arg1;
-(float)topSitesScoreForPageTitleAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
-(float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
-(id)matchDataByMergingWithMatchData:(id)arg1;
-(BOOL)matchesAutocompleteTrigger:(id)arg1;
-(BOOL)lastVisitWasFailure;

@end

