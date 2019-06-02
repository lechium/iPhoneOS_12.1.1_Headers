/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPVideoView.h>

@class AVQueuePlayer, AVPlayerLooper, AVPlayerLayer;

@interface LPStreamingVideoView : LPVideoView {

	AVQueuePlayer* _player;
	AVPlayerLooper* _looper;
	AVPlayerLayer* _playerLayer;
	/*^block*/id _readyForDisplayCallback;
	BOOL _hasCreatedVideoPlayerView;
	BOOL _isWaitingToRetryAfterFailingToPlay;
	unsigned _playbackRetryCountWithoutSuccess;
	BOOL _desiredPlayingState;
	float _desiredVolume;

}
-(void)setPlaying:(BOOL)arg1 ;
-(BOOL)shouldAutoPlay;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 configuration:(id)arg5 ;
-(void)createPlayerItemAdjustedForLoopingWithAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetToPlaceholderView;
-(void)didFailToPlay;
-(void)createPlayerIfNeeded;
-(void)layoutComponentView;
-(void)fullScreenVideoDidPresent;
-(void)fullScreenVideoWillDismiss;
-(BOOL)releaseDecodingResourcesIfInactive;
-(BOOL)usesSharedAudioSession;
-(BOOL)shouldShowMuteButton;
-(id)createFullScreenVideoViewController;
-(BOOL)usesCustomFullScreenImplementation;
-(id)createVideoPlayerView;
-(void)prepareForDisplayWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)destroyPlayer;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setVolume:(double)arg1 ;
-(double)volume;
@end
