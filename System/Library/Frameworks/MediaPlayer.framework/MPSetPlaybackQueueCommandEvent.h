/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class MPRemotePlaybackQueue;

@interface MPSetPlaybackQueueCommandEvent : MPRemoteCommandEvent {

	MPRemotePlaybackQueue* _playbackQueue;

}

@property (nonatomic,readonly) MPRemotePlaybackQueue * playbackQueue;              //@synthesize playbackQueue=_playbackQueue - In the implementation block
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithCommand:(id)arg1 playbackQueue:(id)arg2 ;
-(MPRemotePlaybackQueue *)playbackQueue;
@end

