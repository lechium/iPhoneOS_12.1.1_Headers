/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXAVPlayerFactory.h>

@protocol SXAVPlayerFactory <NSObject>
@required
-(id)createPlayerWithURL:(id)arg1;

@end


@protocol SXAVPlayerItemFactory;
@class NSString;

@interface SXAVPlayerFactory : NSObject <SXAVPlayerFactory> {

	int _audioMode;
	id<SXAVPlayerItemFactory> _playerItemFactory;

}

@property (nonatomic,readonly) int audioMode;                                            //@synthesize audioMode=_audioMode - In the implementation block
@property (nonatomic,readonly) id<SXAVPlayerItemFactory> playerItemFactory;              //@synthesize playerItemFactory=_playerItemFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)audioMode;
-(id<SXAVPlayerItemFactory>)playerItemFactory;
-(id)createPlayerWithURL:(id)arg1 ;
-(id)initWithAudioMode:(int)arg1 playerItemFactory:(id)arg2 ;
@end

