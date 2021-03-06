//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, AVPlayer, AVPlayerItem;

@interface PHVoicemailPlayerController : NSObject
{
    _Bool _isWaitingForProximitySensor;	// 8 = 0x8
    _Bool _interrupted;	// 9 = 0x9
    long long _status;	// 16 = 0x10
    id <NSObject> _didStart;	// 24 = 0x18
    id <NSObject> _didEnd;	// 32 = 0x20
    id <NSObject> _timeObserver;	// 40 = 0x28
    AVPlayer *_audioPlayer;	// 48 = 0x30
    AVPlayerItem *_playerItem;	// 56 = 0x38
    CDStruct_1b6d18a9 _duration;	// 64 = 0x40
}

+ (id)sharedPlayerController;	// IMP=0x0000000100010c8c
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) id <NSObject> timeObserver; // @synthesize timeObserver=_timeObserver;
@property(retain, nonatomic) id <NSObject> didEnd; // @synthesize didEnd=_didEnd;
@property(retain, nonatomic) id <NSObject> didStart; // @synthesize didStart=_didStart;
@property(nonatomic) _Bool interrupted; // @synthesize interrupted=_interrupted;
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool isWaitingForProximitySensor; // @synthesize isWaitingForProximitySensor=_isWaitingForProximitySensor;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;	// IMP=0x00000001000978a8
- (void)_proximityStateChanged:(id)arg1;	// IMP=0x00000001000976d8
- (void)updateProximityMonitoring;	// IMP=0x0000000100097624
- (void)handleAudioSessionRouteChangeNotification:(id)arg1;	// IMP=0x0000000100097484
@property(readonly, nonatomic) AVAsset *currentAsset;
- (void)currentAssetDurationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010009713c
- (_Bool)isAtEnd;	// IMP=0x00000001000970a4
- (CDStruct_1b6d18a9)currentTime;	// IMP=0x000000010009707c
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000100096f60
- (void)_pause;	// IMP=0x0000000100096eb4
- (void)pause;	// IMP=0x0000000100010d0c
- (void)_play;	// IMP=0x0000000100096e0c
- (void)play;	// IMP=0x0000000100096b4c
- (void)loadAudio:(id)arg1 withObserverForInterval:(CDStruct_1b6d18a9)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100096698
- (id)_createAVPlayer;	// IMP=0x0000000100096474
- (_Bool)endInterruption;	// IMP=0x00000001000962bc
- (_Bool)beginInterruption;	// IMP=0x0000000100095fd0
- (_Bool)isPlaying;	// IMP=0x0000000100095f30
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100095b4c
- (void)resetAudioPlayer;	// IMP=0x0000000100095910
- (void)dealloc;	// IMP=0x000000010009588c
- (id)init;	// IMP=0x00000001000957f4

@end

