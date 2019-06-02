/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPMediaPlayback.h>

@class NSURL, UIView;

@interface MPMoviePlayerController : NSObject <MPMediaPlayback> {

	id _implementation;

}

@property (nonatomic,copy) NSURL * contentURL; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) UIView * backgroundView; 
@property (nonatomic,readonly) long long playbackState; 
@property (nonatomic,readonly) unsigned long long loadState; 
@property (assign,nonatomic) long long controlStyle; 
@property (assign,nonatomic) long long repeatMode; 
@property (assign,nonatomic) BOOL shouldAutoplay; 
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen; 
@property (assign,nonatomic) long long scalingMode; 
@property (nonatomic,readonly) BOOL readyForDisplay; 
@property (nonatomic,readonly) unsigned long long movieMediaTypes; 
@property (assign,nonatomic) long long movieSourceType; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double playableDuration; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (assign,nonatomic) double initialPlaybackTime; 
@property (assign,nonatomic) double endPlaybackTime; 
@property (assign,nonatomic) BOOL allowsAirPlay; 
@property (getter=isAirPlayVideoActive,nonatomic,readonly) BOOL airPlayVideoActive; 
@property (nonatomic,readonly) BOOL isPreparedToPlay; 
@property (assign,nonatomic) double currentPlaybackTime; 
@property (assign,nonatomic) float currentPlaybackRate; 
+(void)allInstancesResignActive;
-(unsigned long long)loadState;
-(BOOL)shouldAutoplay;
-(void)setShouldAutoplay:(BOOL)arg1 ;
-(void)setFullscreen:(BOOL)arg1 ;
-(long long)scalingMode;
-(void)setScalingMode:(long long)arg1 ;
-(BOOL)allowsAirPlay;
-(void)setAllowsAirPlay:(BOOL)arg1 ;
-(BOOL)isAirPlayVideoActive;
-(BOOL)isPreparedToPlay;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)skipToNextItem;
-(void)skipToBeginning;
-(void)skipToPreviousItem;
-(unsigned long long)movieMediaTypes;
-(void)setMovieSourceType:(long long)arg1 ;
-(long long)movieSourceType;
-(double)playableDuration;
-(void)setEndPlaybackTime:(double)arg1 ;
-(double)endPlaybackTime;
-(float)currentPlaybackRate;
-(void)setCurrentPlaybackRate:(float)arg1 ;
-(void)_resignActive;
-(BOOL)_isReadyForDisplay;
-(BOOL)readyForDisplay;
-(void)endSeeking;
-(CGSize)naturalSize;
-(double)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(double)arg1 ;
-(double)initialPlaybackTime;
-(id)initWithContentURL:(id)arg1 ;
-(NSURL *)contentURL;
-(void)setInitialPlaybackTime:(double)arg1 ;
-(void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setContentURL:(NSURL *)arg1 ;
-(void)prepareToPlay;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1 ;
-(long long)controlStyle;
-(void)setControlStyle:(long long)arg1 ;
-(id)initWithPlayerItem:(id)arg1 ;
-(long long)playbackState;
-(id)init;
-(void)dealloc;
-(UIView *)view;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(UIView *)backgroundView;
-(void)stop;
-(double)duration;
-(id)initWithAsset:(id)arg1 ;
-(void)play;
-(void)forwardInvocation:(id)arg1 ;
-(BOOL)isFullscreen;
-(void)pause;
@end
