/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoPlaybackController.h>
#import <libobjc.A.dylib/SVVideoTransitionObserver.h>

@protocol SVVideoPlaybackPolicy, SVVideoPlaybackAdvancing, SVPlaybackCoordinatorProviding, SVVideoLoadingStateObserverFactory, SVVideoPlaybackStateObserverFactory, SVVideoPlaybackStateObserving, SVVideoLoadingStateObserving;
@class SVPlaybackCoordinator, NSString;

@interface SVVideoPlaybackManager : NSObject <SVVideoPlaybackController, SVVideoTransitionObserver> {

	id<SVVideoPlaybackPolicy> _playbackPolicy;
	id<SVVideoPlaybackAdvancing> _playbackAdvancer;
	id<SVPlaybackCoordinatorProviding> _playbackCoordinatorProvider;
	id<SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
	id<SVVideoPlaybackStateObserverFactory> _playbackStateObserverFactory;
	SVPlaybackCoordinator* _playbackCoordinator;
	id<SVVideoPlaybackStateObserving> _playbackStateObserver;
	id<SVVideoLoadingStateObserving> _loadingStateObserver;

}

@property (nonatomic,readonly) id<SVVideoPlaybackPolicy> playbackPolicy;                                          //@synthesize playbackPolicy=_playbackPolicy - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackAdvancing> playbackAdvancer;                                     //@synthesize playbackAdvancer=_playbackAdvancer - In the implementation block
@property (nonatomic,readonly) id<SVPlaybackCoordinatorProviding> playbackCoordinatorProvider;                    //@synthesize playbackCoordinatorProvider=_playbackCoordinatorProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoLoadingStateObserverFactory> loadingStateObserverFactory;                //@synthesize loadingStateObserverFactory=_loadingStateObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackStateObserverFactory> playbackStateObserverFactory;              //@synthesize playbackStateObserverFactory=_playbackStateObserverFactory - In the implementation block
@property (nonatomic,retain) SVPlaybackCoordinator * playbackCoordinator;                                         //@synthesize playbackCoordinator=_playbackCoordinator - In the implementation block
@property (nonatomic,retain) id<SVVideoPlaybackStateObserving> playbackStateObserver;                             //@synthesize playbackStateObserver=_playbackStateObserver - In the implementation block
@property (nonatomic,retain) id<SVVideoLoadingStateObserving> loadingStateObserver;                               //@synthesize loadingStateObserver=_loadingStateObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SVPlaybackCoordinator *)playbackCoordinator;
-(id<SVVideoPlaybackAdvancing>)playbackAdvancer;
-(id<SVVideoPlaybackPolicy>)playbackPolicy;
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id<SVVideoLoadingStateObserverFactory>)loadingStateObserverFactory;
-(id<SVVideoLoadingStateObserving>)loadingStateObserver;
-(id<SVVideoPlaybackStateObserverFactory>)playbackStateObserverFactory;
-(void)setPlaybackStateObserver:(id<SVVideoPlaybackStateObserving>)arg1 ;
-(void)setLoadingStateObserver:(id<SVVideoLoadingStateObserving>)arg1 ;
-(id<SVVideoPlaybackStateObserving>)playbackStateObserver;
-(id)initWithPlaybackPolicy:(id)arg1 playbackAdvancer:(id)arg2 playbackCoordinatorProvider:(id)arg3 playbackStateObserverFactory:(id)arg4 loadingStateObserverFactory:(id)arg5 ;
-(id<SVPlaybackCoordinatorProviding>)playbackCoordinatorProvider;
-(void)setPlaybackCoordinator:(SVPlaybackCoordinator *)arg1 ;
-(void)playWithoutRequestingPlayback;
-(void)play;
-(void)pause;
@end

