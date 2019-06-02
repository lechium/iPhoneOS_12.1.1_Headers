/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVPlayerItemObserving.h>

@class AVPlayerItem, SVPlayer, SVKeyValueObserver, NSString;

@interface SVPlayerItemObserver : NSObject <SVPlayerItemObserving> {

	/*^block*/id _changeBlock;
	AVPlayerItem* _item;
	SVPlayer* _player;
	SVKeyValueObserver* _observer;

}

@property (nonatomic,readonly) SVPlayer * player;                          //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) SVKeyValueObserver * observer;              //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic,__weak) AVPlayerItem * item;                   //@synthesize item=_item - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onChange:,nonatomic,copy) id changeBlock;                //@synthesize changeBlock=_changeBlock - In the implementation block
-(id)initWithPlayer:(id)arg1 ;
-(id)changeBlock;
-(SVPlayer *)player;
-(void)onChange:(/*^block*/id)arg1 ;
-(void)setItem:(AVPlayerItem *)arg1 ;
-(AVPlayerItem *)item;
-(SVKeyValueObserver *)observer;
@end

