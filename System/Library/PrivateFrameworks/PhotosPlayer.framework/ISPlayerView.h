/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/ISChangeObserver.h>
#import <libobjc.A.dylib/ISBasePlayerDelegate.h>

@protocol ISPlayerViewDelegate;
@class NSError, ISBasePlayerUIView, ISWrappedAVPlayer, ISPlayerItem, UIGestureRecognizer, NSMutableSet, NSString;

@interface ISPlayerView : UIView <ISChangeObserver, ISBasePlayerDelegate> {

	SCD_Struct_IS1 _delegateRespondsTo;
	SCD_Struct_IS2 _isValid;
	BOOL _audioMuted;
	BOOL _isReadyForDisplay;
	BOOL _isInteracting;
	BOOL _readyForDisplay;
	long long _playbackState;
	long long _status;
	NSError* _error;
	id<ISPlayerViewDelegate> _delegate;
	ISBasePlayerUIView* __playerView;
	ISWrappedAVPlayer* __videoPlayer;
	ISPlayerItem* __playerItem;
	UIGestureRecognizer* __gestureRecognizer;
	NSMutableSet* __activeGestures;
	unsigned long long _playbackStyle;
	CGSize _dimensionsOfReservedVideoMemory;

}

@property (setter=_setPlayerView:,nonatomic,retain) ISBasePlayerUIView * _playerView;                             //@synthesize _playerView=__playerView - In the implementation block
@property (nonatomic,readonly) ISWrappedAVPlayer * _videoPlayer;                                                  //@synthesize _videoPlayer=__videoPlayer - In the implementation block
@property (setter=_setPlayerItem:,nonatomic,retain) ISPlayerItem * _playerItem;                                   //@synthesize _playerItem=__playerItem - In the implementation block
@property (setter=_setGestureRecognizer:,nonatomic,retain) UIGestureRecognizer * _gestureRecognizer;              //@synthesize _gestureRecognizer=__gestureRecognizer - In the implementation block
@property (assign,setter=_setStatus:,nonatomic) long long status;                                                 //@synthesize status=_status - In the implementation block
@property (assign,setter=_setPlaybackState:,nonatomic) long long playbackState;                                   //@synthesize playbackState=_playbackState - In the implementation block
@property (assign,setter=_setReadyForDisplay:,nonatomic) BOOL readyForDisplay;                                    //@synthesize readyForDisplay=_readyForDisplay - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _activeGestures;                                                    //@synthesize _activeGestures=__activeGestures - In the implementation block
@property (assign,nonatomic) unsigned long long playbackStyle;                                                    //@synthesize playbackStyle=_playbackStyle - In the implementation block
@property (assign,nonatomic) CGSize dimensionsOfReservedVideoMemory;                                              //@synthesize dimensionsOfReservedVideoMemory=_dimensionsOfReservedVideoMemory - In the implementation block
@property (assign,nonatomic) BOOL audioMuted;                                                                     //@synthesize audioMuted=_audioMuted - In the implementation block
@property (nonatomic,readonly) BOOL isReadyForDisplay;                                                            //@synthesize isReadyForDisplay=_isReadyForDisplay - In the implementation block
@property (nonatomic,readonly) BOOL isInteracting;                                                                //@synthesize isInteracting=_isInteracting - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * gestureRecognizer; 
@property (assign,nonatomic,__weak) id<ISPlayerViewDelegate> delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setAllowPlayerReuse:(BOOL)arg1 ;
-(CGSize)dimensionsOfReservedVideoMemory;
-(void)setDimensionsOfReservedVideoMemory:(CGSize)arg1 ;
-(BOOL)readyForDisplay;
-(void)prepareWithPhoto:(CGImageRef)arg1 videoAsset:(id)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4 ;
-(void)_setPlaybackState:(long long)arg1 ;
-(UIGestureRecognizer *)_gestureRecognizer;
-(void)_setGestureRecognizer:(id)arg1 ;
-(void)_updateIfNeeded;
-(BOOL)_needsUpdate;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(unsigned long long)playbackStyle;
-(void)setPlaybackStyle:(unsigned long long)arg1 ;
-(void)_invalidateStatus;
-(void)_updateStatusIfNeeded;
-(void)_setStatus:(long long)arg1 ;
-(ISWrappedAVPlayer *)_videoPlayer;
-(ISBasePlayerUIView *)_playerView;
-(void)_setReadyForDisplay:(BOOL)arg1 ;
-(void)_setPlayerView:(id)arg1 ;
-(void)_setPlayerItem:(id)arg1 ;
-(ISPlayerItem *)_playerItem;
-(void)_invalidatePlaybackState;
-(void)_updatePlaybackStateIfNeeded;
-(void)_invalidatePlayerItemLoadingTarget;
-(void)_updatePlayerItemLoadingTargetIfNeeded;
-(id)initWithVideoPlayer:(id)arg1 ;
-(BOOL)isReadyForDisplay;
-(void)setAudioMuted:(BOOL)arg1 ;
-(BOOL)audioMuted;
-(void)prepareWithPlayerItem:(id)arg1 ;
-(void)_invalidatePlayerView;
-(void)_invalidatePlayerMuted;
-(void)_invalidatePlayerPlayerItem;
-(void)_invalidateReadyForDisplay;
-(NSMutableSet *)_activeGestures;
-(void)_setInteracting:(BOOL)arg1 ;
-(void)_updatePlayerViewIfNeeded;
-(void)_updatePlayerPlayerItemIfNeeded;
-(void)_updatePlayerMutedIfNeeded;
-(void)_updateReadyForDisplayIfNeeded;
-(id)videoPlayerForPlayer:(id)arg1 ;
-(void)_handleGesture:(id)arg1 ;
-(long long)playbackState;
-(void)setDelegate:(id<ISPlayerViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(id<ISPlayerViewDelegate>)delegate;
-(UIGestureRecognizer *)gestureRecognizer;
-(long long)status;
-(NSError *)error;
-(BOOL)isInteracting;
@end

