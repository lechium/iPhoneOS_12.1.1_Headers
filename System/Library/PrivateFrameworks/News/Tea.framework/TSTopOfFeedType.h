/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/News/Tea.framework/Tea
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol TSTopOfFeedType
@property (retain,nonatomic) id<TSTopOfFeedTypeDelegate> delegate; 
@property (readonly,nonatomic) NSString * topOfFeedID; 
@required
-(double)topOfFeedContentHeight;
-(id)topOfFeedContentHeadlines;
-(id)topOfFeedHeadlineContextForHeadline:(id)arg1;
-(id)topOfFeedContentTitle;
-(id)topOfFeedContentTitleColor;
-(long long)topOfFeedSpecialEventsType;
-(void)topOfFeedContentDidPresentHeadline:(id)arg1;
-(void)topOfFeedContentShouldRefreshWithCompletion:(/*^block*/id)arg1;
-(NSString *)topOfFeedID;
-(void)setDelegate:(id)arg1;
-(id<TSTopOfFeedTypeDelegate>)delegate;

@end

