/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVShareInteractionHandlerFactory.h>

@protocol NUVideoActivityViewControllerFactory, NSSNewsAnalyticsArticleViewingSessionTracker, SVVideoViewControllerProviding, SVVideoPlaybackController, NUURLHandling;
@class NSString;

@interface NUVideoShareInteractionHandlerFactory : NSObject <SVShareInteractionHandlerFactory> {

	id<NUVideoActivityViewControllerFactory> _activityViewControllerFactory;
	id<NSSNewsAnalyticsArticleViewingSessionTracker> _articleViewingSessionTracker;
	id<SVVideoViewControllerProviding> _videoViewControllerProvider;
	id<SVVideoPlaybackController> _playbackController;
	id<NUURLHandling> _URLHandler;

}

@property (nonatomic,readonly) id<NUVideoActivityViewControllerFactory> activityViewControllerFactory;                     //@synthesize activityViewControllerFactory=_activityViewControllerFactory - In the implementation block
@property (nonatomic,readonly) id<NSSNewsAnalyticsArticleViewingSessionTracker> articleViewingSessionTracker;              //@synthesize articleViewingSessionTracker=_articleViewingSessionTracker - In the implementation block
@property (nonatomic,readonly) id<SVVideoViewControllerProviding> videoViewControllerProvider;                             //@synthesize videoViewControllerProvider=_videoViewControllerProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackController> playbackController;                                           //@synthesize playbackController=_playbackController - In the implementation block
@property (nonatomic,readonly) id<NUURLHandling> URLHandler;                                                               //@synthesize URLHandler=_URLHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NUURLHandling>)URLHandler;
-(id<SVVideoPlaybackController>)playbackController;
-(id<SVVideoViewControllerProviding>)videoViewControllerProvider;
-(id)createInteractionHandlerForVideo:(id)arg1 ;
-(id)initWithVideoViewControllerProvider:(id)arg1 playbackController:(id)arg2 activityViewControllerFactory:(id)arg3 articleViewingSessionTracker:(id)arg4 URLHandler:(id)arg5 ;
-(id<NUVideoActivityViewControllerFactory>)activityViewControllerFactory;
-(id<NSSNewsAnalyticsArticleViewingSessionTracker>)articleViewingSessionTracker;
-(id)init;
@end

