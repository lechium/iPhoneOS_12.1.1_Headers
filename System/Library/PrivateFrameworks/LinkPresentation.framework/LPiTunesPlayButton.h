/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPPlayButton.h>
#import <libobjc.A.dylib/MPUNowPlayingDelegate.h>

@class LPiTunesPlaybackInformation, MPUNowPlayingController, LPStatisticsTimingToken, NSString;

@interface LPiTunesPlayButton : LPPlayButton <MPUNowPlayingDelegate> {

	LPiTunesPlaybackInformation* _playbackInformation;
	MPUNowPlayingController* _nowPlayingController;
	LPStatisticsTimingToken* _playbackStartTimingToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startPlaying;
-(BOOL)matchesNowPlayingItem;
-(void)startListeningForPlayback;
-(void)stopListeningForPlayback;
-(MRSystemAppPlaybackQueueRef)createPlaybackQueue;
-(id)mediaPlaybackApplicationID;
-(id)initWithPlaybackInformation:(id)arg1 style:(id)arg2 ;
-(void)updatePlayState;
-(void)updateProgressForCurrentlyActiveTrackAnimated:(BOOL)arg1 ;
-(void)nowPlayingController:(id)arg1 nowPlayingInfoDidChange:(id)arg2 ;
-(void)nowPlayingController:(id)arg1 playbackStateDidChange:(BOOL)arg2 ;
-(void)nowPlayingController:(id)arg1 elapsedTimeDidChange:(double)arg2 ;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)buttonPressed:(id)arg1 ;
@end
