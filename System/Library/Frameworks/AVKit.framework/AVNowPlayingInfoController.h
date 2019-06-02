/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVObservationController, NSObject, AVPlayerController;

@interface AVNowPlayingInfoController : NSObject {

	id _playerControllerCurrentTimeJumpedObserver;
	BOOL _nowPlayingInfoNeedsUpdate;
	BOOL _enabled;
	void* _commandHandlerIdentifier;
	AVObservationController* _keyValueObservationController;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	BOOL _requiresLinearPlayback;
	AVPlayerController* _playerController;
	AVPlayerController* _playerControllerToActivateAfterDelay;

}

@property (nonatomic,retain) AVPlayerController * playerController;                                         //@synthesize playerController=_playerController - In the implementation block
@property (assign,nonatomic,__weak) AVPlayerController * playerControllerToActivateAfterDelay;              //@synthesize playerControllerToActivateAfterDelay=_playerControllerToActivateAfterDelay - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL requiresLinearPlayback;                                                   //@synthesize requiresLinearPlayback=_requiresLinearPlayback - In the implementation block
+(void)sharedNowPlayingInfoControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)startNowPlayingUpdatesForPlayerController:(id)arg1 afterDelay:(double)arg2 ;
-(void)stopNowPlayingUpdatesForPlayerController:(id)arg1 ;
-(void)_setNowPlayingInfoNeedsUpdate;
-(void)_updateNowPlayingInfoIfNeeded;
-(void)_updateNowPlayingInfo:(id)arg1 commandsAndStates:(id)arg2 playbackState:(unsigned)arg3 ;
-(id)_makeNowPlayingInfo;
-(id)_makeCommandsAndStatesDictionaryForPlayerController:(id)arg1 ;
-(void)_updateRegisteredRemoteCommandEnabledStatesWithCommandsAndStates:(id)arg1 ;
-(unsigned)_handleRemoteCommand:(unsigned)arg1 options:(id)arg2 ;
-(BOOL)requiresLinearPlayback;
-(AVPlayerController *)playerControllerToActivateAfterDelay;
-(void)setPlayerControllerToActivateAfterDelay:(AVPlayerController *)arg1 ;
-(void)setRequiresLinearPlayback:(BOOL)arg1 ;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
@end

