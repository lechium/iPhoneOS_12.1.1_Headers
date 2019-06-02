/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVController.h>

@protocol OS_dispatch_queue;
@class NSObject, MPCPlaybackEngine, MPAVItem;

@interface _MPCAVController : MPAVController {

	NSObject*<OS_dispatch_queue> _unboostedAudioSessionQueue;
	BOOL _allowsNewPlaybackErrorItem;
	MPCPlaybackEngine* _playbackEngine;
	MPAVItem* _firstPlaybackErrorItem;

}

@property (assign,nonatomic) BOOL allowsNewPlaybackErrorItem;                          //@synthesize allowsNewPlaybackErrorItem=_allowsNewPlaybackErrorItem - In the implementation block
@property (nonatomic,retain) MPAVItem * firstPlaybackErrorItem;                        //@synthesize firstPlaybackErrorItem=_firstPlaybackErrorItem - In the implementation block
@property (nonatomic,readonly) long long upNextItemCount; 
@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
+(BOOL)prefersApplicationAudioSession;
+(Class)playlistManagerClass;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setRepeatType:(long long)arg1 ;
-(void)setShuffleType:(long long)arg1 ;
-(void)_connectAVPlayer;
-(id)_expectedAssetTypesForPlaybackMode:(long long)arg1 ;
-(void)_configureAudioSession;
-(void)_itemWillChange:(id)arg1 ;
-(void)_itemDidChange:(id)arg1 ;
-(void)_contentsChanged;
-(void)_delegateAuthorizationForItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(MPCPlaybackEngine *)playbackEngine;
-(long long)upNextItemCount;
-(void)addPlaybackContext:(id)arg1 toQueueWithInsertionType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)_playbackUserDefaultsEQPresetDidChangeNotification:(id)arg1 ;
-(void)setAllowsNewPlaybackErrorItem:(BOOL)arg1 ;
-(MPAVItem *)firstPlaybackErrorItem;
-(void)updateAudioSession;
-(BOOL)allowsNewPlaybackErrorItem;
-(void)setFirstPlaybackErrorItem:(MPAVItem *)arg1 ;
-(void)_networkPolicyItemCellularRestrictedNotification:(id)arg1 ;
-(void)_playbackErrorNotification:(id)arg1 ;
-(void)_setState:(long long)arg1 ;
@end

