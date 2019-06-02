/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoPlaybackEventTrackerFactory.h>

@protocol SVVideoPlaybackEventTrackerFactory <NSObject>
@required
-(id)createEventTrackerForVideo:(id)arg1;

@end


@protocol SVVideoPlaybackStateObserverFactory, SVVideoLoadingStateObserverFactory;
@class NSString;

@interface SVVideoPlaybackEventTrackerFactory : NSObject <SVVideoPlaybackEventTrackerFactory> {

	id<SVVideoPlaybackStateObserverFactory> _playbackStateObserverFactory;
	id<SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;

}

@property (nonatomic,readonly) id<SVVideoPlaybackStateObserverFactory> playbackStateObserverFactory;              //@synthesize playbackStateObserverFactory=_playbackStateObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoLoadingStateObserverFactory> loadingStateObserverFactory;                //@synthesize loadingStateObserverFactory=_loadingStateObserverFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createEventTrackerForVideo:(id)arg1 ;
-(id<SVVideoLoadingStateObserverFactory>)loadingStateObserverFactory;
-(id<SVVideoPlaybackStateObserverFactory>)playbackStateObserverFactory;
-(id)initWithPlaybackStateObserverFactory:(id)arg1 loadingStateObserverFactory:(id)arg2 ;
@end

