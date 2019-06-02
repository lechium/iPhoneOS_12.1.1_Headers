/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/News/Tea.framework/Tea
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSBridgedNewsActivityFactoryType
@required
-(id)saved;
-(id)history;
-(id)forYouFeedWithFeedViewContext:(id)arg1 articleViewContext:(id)arg2 analyticsReferral:(id)arg3;
-(id)feedWithTagProviding:(id)arg1 fragmentIdentifier:(id)arg2 feedViewContext:(id)arg3 articleViewContext:(id)arg4 analyticsReferral:(id)arg5;
-(void)feedWithTagIdentifier:(id)arg1 fragmentIdentifier:(id)arg2 feedViewContext:(id)arg3 articleViewContext:(id)arg4 analyticsReferral:(id)arg5 completion:(/*^block*/id)arg6;
-(id)headlineWithHeadlineProviding:(id)arg1 articleContext:(id)arg2 notificationSenderChannelID:(id)arg3 articlePresentationStyle:(long long)arg4 showShareSheet:(BOOL)arg5 forceArticleUpdate:(BOOL)arg6;
-(id)unrealizedHeadlineWithArticleID:(id)arg1 articleContext:(id)arg2 notificationSenderChannelID:(id)arg3 articlePresentationStyle:(long long)arg4 showShareSheet:(BOOL)arg5 forceArticleUpdate:(BOOL)arg6;
-(id)editorialFeedWithIdentifier:(id)arg1 articleViewContext:(id)arg2 analyticsReferral:(id)arg3;
-(id)videoPlayerWithWidgetPlaylist:(id)arg1 analyticsReferral:(id)arg2;
-(id)videoPlayerWithArticleIDs:(id)arg1 analyticsReferral:(id)arg2;
-(id)pickYourFavorites;
-(id)previewWithHeadline:(id)arg1;
-(id)adPreviewWithIdentifier:(id)arg1;
-(id)notifications;

@end

