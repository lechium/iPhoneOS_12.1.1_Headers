/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVPlayerProviding.h>
#import <libobjc.A.dylib/SVVideoTransitionObserver.h>
#import <libobjc.A.dylib/SVVolumeObserving.h>

@protocol SVPlayerFactory, SVVideoViewControllerProviding;
@class SVWeakObjectCache, NSString;

@interface SVPlayerManager : NSObject <SVPlayerProviding, SVVideoTransitionObserver, SVVolumeObserving> {

	id<SVPlayerFactory> _playerFactory;
	id<SVVideoViewControllerProviding> _videoViewControllerProvider;
	SVWeakObjectCache* _players;

}

@property (nonatomic,readonly) id<SVPlayerFactory> playerFactory;                                           //@synthesize playerFactory=_playerFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoViewControllerProviding> videoViewControllerProvider;              //@synthesize videoViewControllerProvider=_videoViewControllerProvider - In the implementation block
@property (nonatomic,readonly) SVWeakObjectCache * players;                                                 //@synthesize players=_players - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)muteStateChanged:(id)arg1 ;
-(id<SVPlayerFactory>)playerFactory;
-(SVWeakObjectCache *)players;
-(id<SVVideoViewControllerProviding>)videoViewControllerProvider;
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)playerForVideo:(id)arg1 ;
-(id)initWithPlayerFactory:(id)arg1 videoViewControllerProvider:(id)arg2 ;
@end

