/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISObservable.h>
#import <libobjc.A.dylib/ISChangeObserver.h>
#import <libobjc.A.dylib/ISWrappedAVPlayerDelegate.h>

@protocol OS_dispatch_queue, ISBasePlayerDelegate;
@class AVPlayer, NSObject, NSHashTable, NSString, ISPlayerItem, NSError, ISWrappedAVPlayer, ISBehavior, ISPlayerState, ISPlayerOutputContent;

@interface ISBasePlayer : ISObservable <ISChangeObserver, ISWrappedAVPlayerDelegate> {

	float _videoVolume;
	AVPlayer* _providedAVPlayer;
	NSObject*<OS_dispatch_queue> _outputQueue;
	NSHashTable* _outputs;
	NSString* _apertureMode;
	SCD_Struct_IS10 _isValid;
	BOOL _audioEnabled;
	float _audioVolume;
	ISPlayerItem* _playerItem;
	long long _status;
	NSError* _error;
	id<ISBasePlayerDelegate> _delegate;
	ISWrappedAVPlayer* _videoPlayer;
	ISBehavior* _activeBehavior;
	id __videoWillPlayToEndObserver;
	id __videoWillPlayToPhotoObserver;
	ISPlayerState* _lastAppliedLayoutInfo;
	ISPlayerOutputContent* __outputContent;
	double _lastAppliedScale;
	SCD_Struct_IS4 __videoForwardPlaybackEndTime;

}

@property (setter=setActiveBehavior:,nonatomic,retain) ISBehavior * activeBehavior;                                            //@synthesize activeBehavior=_activeBehavior - In the implementation block
@property (setter=_setVideoWillPlayToEndObserver:,nonatomic,retain) id _videoWillPlayToEndObserver;                            //@synthesize _videoWillPlayToEndObserver=__videoWillPlayToEndObserver - In the implementation block
@property (setter=_setVideoWillPlayToPhotoObserver:,nonatomic,retain) id _videoWillPlayToPhotoObserver;                        //@synthesize _videoWillPlayToPhotoObserver=__videoWillPlayToPhotoObserver - In the implementation block
@property (setter=_setLastAppliedLayoutInfo:,nonatomic,retain) ISPlayerState * lastAppliedLayoutInfo;                          //@synthesize lastAppliedLayoutInfo=_lastAppliedLayoutInfo - In the implementation block
@property (setter=_setOutputContent:,nonatomic,retain) ISPlayerOutputContent * _outputContent;                                 //@synthesize _outputContent=__outputContent - In the implementation block
@property (assign,setter=_setLastAppliedScale:,nonatomic) double lastAppliedScale;                                             //@synthesize lastAppliedScale=_lastAppliedScale - In the implementation block
@property (assign,setter=_setStatus:,nonatomic) long long status;                                                              //@synthesize status=_status - In the implementation block
@property (assign,setter=_setVideoForwardPlaybackEndTime:,nonatomic) SCD_Struct_IS4 _videoForwardPlaybackEndTime;              //@synthesize _videoForwardPlaybackEndTime=__videoForwardPlaybackEndTime - In the implementation block
@property (setter=_setError:,nonatomic,retain) NSError * error;                                                                //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) ISPlayerItem * playerItem;                                                                        //@synthesize playerItem=_playerItem - In the implementation block
@property (assign,nonatomic) float audioVolume;                                                                                //@synthesize audioVolume=_audioVolume - In the implementation block
@property (assign,getter=isAudioEnabled,nonatomic) BOOL audioEnabled;                                                          //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<ISBasePlayerDelegate> delegate;                                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ISWrappedAVPlayer * videoPlayer;                                                                //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)statusDidChange;
-(id)apertureMode;
-(void)removeOutput:(id)arg1 ;
-(void)_updateIfNeeded;
-(BOOL)_needsUpdate;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(ISWrappedAVPlayer *)videoPlayer;
-(void)playerItemDidChange;
-(void)avPlayerDidDeallocate;
-(ISPlayerItem *)playerItem;
-(id)mutableChangeObject;
-(void)_updateVideoPlayerIfNeeded;
-(void)_invalidateVideoPlayer;
-(void)_invalidateStatus;
-(void)_updateStatusIfNeeded;
-(void)_setStatus:(long long)arg1 ;
-(void)didPerformChanges;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(void)_setError:(id)arg1 ;
-(void)avPlayer:(id)arg1 itemDidPlayToEnd:(id)arg2 ;
-(void)_setVideoPlayer:(id)arg1 ;
-(void)setPlayerItem:(ISPlayerItem *)arg1 ;
-(id)initWithVideoPlayer:(id)arg1 ;
-(float)audioVolume;
-(void)setAudioVolume:(float)arg1 ;
-(BOOL)isAudioEnabled;
-(void)applyScale:(double)arg1 withTransitionOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setActiveBehavior:(ISBehavior *)arg1 ;
-(id)_videoWillPlayToEndObserver;
-(void)configurePlayerItem;
-(void)_invalidateContentFromPlayerItem;
-(void)_invalidateWillPlayToEndObserver;
-(void)_invalidateWillPlayToPhotoObserver;
-(void)didAddOutput:(id)arg1 ;
-(void)willRemoveOutput:(id)arg1 ;
-(void)_configureNewOutput:(id)arg1 ;
-(ISBehavior *)activeBehavior;
-(void)_invalidateVideoPlayerVolume;
-(void)activeBehaviorDidChange;
-(void)_setLastAppliedScale:(double)arg1 ;
-(void)enumerateOutputsWithBlock:(/*^block*/id)arg1 ;
-(void)_setLastAppliedLayoutInfo:(id)arg1 ;
-(ISPlayerOutputContent *)_outputContent;
-(ISPlayerState *)lastAppliedLayoutInfo;
-(void)_setOutputContent:(id)arg1 ;
-(SCD_Struct_IS4)_videoForwardPlaybackEndTime;
-(double)videoWillPlayToEndInterval;
-(void)_videoWillPlayToEnd;
-(void)_setVideoWillPlayToEndObserver:(id)arg1 ;
-(id)_videoWillPlayToPhotoObserver;
-(double)videoWillPlayToPhotoInterval;
-(void)_videoWillPlayToPhoto;
-(void)_setVideoWillPlayToPhotoObserver:(id)arg1 ;
-(void)_handleErrorsIfNeeded;
-(void)_updateVideoPlayerVolumeIfNeeded;
-(void)_updateContentFromPlayerItemIfNeeded;
-(void)_updateWillPlayToEndObserverIfNeeded;
-(void)_updateWillPlayToPhotoObserverIfNeeded;
-(float)videoVolume;
-(void)_handleMediaServicesReset;
-(void)applyOutputInfo:(id)arg1 fromBehavior:(id)arg2 withTransitionOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)behavior:(id)arg1 seekVideoPlayerToTime:(SCD_Struct_IS4)arg2 toleranceBefore:(SCD_Struct_IS4)arg3 toleranceAfter:(SCD_Struct_IS4)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_setForwardPlaybackEndTime:(SCD_Struct_IS4)arg1 ;
-(void)setVideoVolume:(float)arg1 ;
-(void)_videoDidPlayToEnd;
-(void)behavior:(id)arg1 didSetOutputInfo:(id)arg2 withTransitionOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)behavior:(id)arg1 setVideoPlayRate:(float)arg2 ;
-(float)videoPlayRate;
-(BOOL)behavior:(id)arg1 seekVideoPlayerToTime:(SCD_Struct_IS4)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)behavior:(id)arg1 prerollVideoAtRate:(float)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)behavior:(id)arg1 setVideoForwardPlaybackEndTime:(SCD_Struct_IS4)arg2 ;
-(void)behavior:(id)arg1 setVideoVolume:(float)arg2 ;
-(id)behavior:(id)arg1 addBoundaryTimeObserverForTimes:(id)arg2 queue:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)behavior:(id)arg1 removeTimeObserver:(id)arg2 ;
-(void)behavior:(id)arg1 playVideoToTime:(SCD_Struct_IS4)arg2 initialRate:(float)arg3 overDuration:(double)arg4 progressHandler:(/*^block*/id)arg5 ;
-(double)lastAppliedScale;
-(void)_setVideoForwardPlaybackEndTime:(SCD_Struct_IS4)arg1 ;
-(void)addOutput:(id)arg1 ;
-(void)setApertureMode:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<ISBasePlayerDelegate>)arg1 ;
-(id<ISBasePlayerDelegate>)delegate;
-(long long)status;
-(NSError *)error;
@end

