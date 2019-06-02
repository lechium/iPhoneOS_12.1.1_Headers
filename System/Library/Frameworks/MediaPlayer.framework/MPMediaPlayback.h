/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPMediaPlayback
@property (nonatomic,readonly) BOOL isPreparedToPlay; 
@property (assign,nonatomic) double currentPlaybackTime; 
@property (assign,nonatomic) float currentPlaybackRate; 
@required
-(BOOL)isPreparedToPlay;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(float)currentPlaybackRate;
-(void)setCurrentPlaybackRate:(float)arg1;
-(void)endSeeking;
-(double)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(double)arg1;
-(void)prepareToPlay;
-(void)stop;
-(void)play;
-(void)pause;

@end

