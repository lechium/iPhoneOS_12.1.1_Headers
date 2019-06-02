/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/News/Tea.framework/Tea
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSNewsReferralItemWidgetArticleList, FCVideoGroupsConfig, NTPBDiscoverMoreVideosInfo;

@interface TSNewsReferralItemWidgetVideoPlaylist : NSObject {

	 widgetArticleList;
	 preferredMuteState;
	 videoGroupsConfig;
	 discoverMoreVideosInfo;
	 prerollLoadingTimeout;
	 onboardingVersion;

}

@property (readonly,nonatomic) TSNewsReferralItemWidgetArticleList * widgetArticleList; 
@property (readonly,nonatomic) BOOL preferredMuteState; 
@property (readonly,nonatomic) FCVideoGroupsConfig * videoGroupsConfig; 
@property (readonly,nonatomic) NTPBDiscoverMoreVideosInfo * discoverMoreVideosInfo; 
@property (readonly,nonatomic) double prerollLoadingTimeout; 
@property (readonly,nonatomic) long long onboardingVersion; 
-(NTPBDiscoverMoreVideosInfo *)discoverMoreVideosInfo;
-(double)prerollLoadingTimeout;
-(long long)onboardingVersion;
-(BOOL)preferredMuteState;
-(TSNewsReferralItemWidgetArticleList *)widgetArticleList;
-(FCVideoGroupsConfig *)videoGroupsConfig;
-(id)initWithWidgetArticleList:(id)arg1 preferredMuteState:(BOOL)arg2 videoGroupsConfig:(id)arg3 discoverMoreVideosInfo:(id)arg4 prerollLoadingTimeout:(double)arg5 onboardingVersion:(long long)arg6 ;
-(id)init;
@end

