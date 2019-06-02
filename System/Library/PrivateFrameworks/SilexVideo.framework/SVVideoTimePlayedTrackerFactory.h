/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoTimePlayedTrackerFactory.h>

@protocol SVVideoTimePlayedTrackerFactory <NSObject>
@required
-(id)createTimePlayedTrackerForVideo:(id)arg1;

@end


@protocol SVVideoPeriodicTimeObserverFactory, SVVideoTimeProviderFactory, SVVideoPlaybackStateObserverFactory, SVVideoTimeJumpObserverFactory;
@class NSString;

@interface SVVideoTimePlayedTrackerFactory : NSObject <SVVideoTimePlayedTrackerFactory> {

	id<SVVideoPeriodicTimeObserverFactory> _timeObserverFactory;
	id<SVVideoTimeProviderFactory> _timeProviderFactory;
	id<SVVideoPlaybackStateObserverFactory> _playbackStateObserverFactory;
	id<SVVideoTimeJumpObserverFactory> _timeJumpObserverFactory;

}

@property (nonatomic,readonly) id<SVVideoPeriodicTimeObserverFactory> timeObserverFactory;                        //@synthesize timeObserverFactory=_timeObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoTimeProviderFactory> timeProviderFactory;                                //@synthesize timeProviderFactory=_timeProviderFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackStateObserverFactory> playbackStateObserverFactory;              //@synthesize playbackStateObserverFactory=_playbackStateObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoTimeJumpObserverFactory> timeJumpObserverFactory;                        //@synthesize timeJumpObserverFactory=_timeJumpObserverFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoTimeProviderFactory>)timeProviderFactory;
-(id<SVVideoPlaybackStateObserverFactory>)playbackStateObserverFactory;
-(id)createTimePlayedTrackerForVideo:(id)arg1 ;
-(id)initWithTimeObserverFactory:(id)arg1 timeProviderFactory:(id)arg2 playbackStateObserverFactory:(id)arg3 timeJumpObserverFactory:(id)arg4 ;
-(id<SVVideoPeriodicTimeObserverFactory>)timeObserverFactory;
-(id<SVVideoTimeJumpObserverFactory>)timeJumpObserverFactory;
@end

