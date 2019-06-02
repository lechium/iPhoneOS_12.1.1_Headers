/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/News/Tea.framework/Tea
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString, FCColorGradient;


@protocol TSHeadlineGroupConfigurable
@property (copy,nonatomic) NSArray * initialHeadlines; 
@property (copy,nonatomic) NSString * groupID; 
@property (copy,nonatomic) NSString * groupTitle; 
@property (copy,nonatomic) NSString * groupSubtitle; 
@property (retain,nonatomic) FCColorGradient * backgroundColorGradient; 
@property (copy,nonatomic) NSString * feedViewExposureID; 
@property (copy,nonatomic) NSString * channelID; 
@property (retain,nonatomic) id<TSGroupRankProvider> groupRankProvider; 
@required
-(NSString *)groupTitle;
-(void)setGroupTitle:(id)arg1;
-(NSString *)groupID;
-(void)setGroupID:(id)arg1;
-(NSString *)channelID;
-(FCColorGradient *)backgroundColorGradient;
-(void)setChannelID:(id)arg1;
-(NSString *)groupSubtitle;
-(void)setBackgroundColorGradient:(id)arg1;
-(NSString *)feedViewExposureID;
-(NSArray *)initialHeadlines;
-(void)setInitialHeadlines:(id)arg1;
-(void)setGroupSubtitle:(id)arg1;
-(void)setFeedViewExposureID:(id)arg1;
-(id<TSGroupRankProvider>)groupRankProvider;
-(void)setGroupRankProvider:(id)arg1;

@end

