/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVPlayerItemLoading;
@class SVPlayer;

@interface SVPlaybackCoordinator : NSObject {

	SVPlayer* _player;
	id<SVPlayerItemLoading> _playerItemLoader;

}

@property (nonatomic,readonly) SVPlayer * player;                                     //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) id<SVPlayerItemLoading> playerItemLoader;              //@synthesize playerItemLoader=_playerItemLoader - In the implementation block
-(SVPlayer *)player;
-(void)loadVideoIfNeeded;
-(id<SVPlayerItemLoading>)playerItemLoader;
-(id)initWithPlayer:(id)arg1 playerItemLoader:(id)arg2 ;
-(void)load;
-(void)play;
-(void)pause;
@end
