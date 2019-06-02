/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <QuartzCore/CATextLayer.h>

@protocol OS_dispatch_source;
@class NSObject, AVPlayer, AVPlayerLayer, NSMutableDictionary;

@interface AVNetworkPlaybackPerfHUDLayer : CATextLayer {

	NSObject*<OS_dispatch_source> _hudTimer;
	AVPlayer* _player;
	AVPlayerLayer* _playerLayer;
	BOOL _showHud;
	int _colorId;
	double _opacity;
	int _fontSizeInt;
	BOOL _updateUISettings;
	int _hudXoffset;
	int _hudYoffset;
	unsigned long long _hudUpdateInterval;
	BOOL _showCompleteURI;
	long long _prevVariantIdx;
	long long _prevStallCount;
	long long _totalStallCount;
	NSMutableDictionary* _loadingStatusCache;

}

@property (__weak) AVPlayer * player;                        //@synthesize player=_player - In the implementation block
@property (__weak) AVPlayerLayer * playerLayer;              //@synthesize playerLayer=_playerLayer - In the implementation block
+(BOOL)runningAnInternalBuild;
+(id)convertBitrate:(double)arg1 ;
-(BOOL)hudEnabled;
-(void)startDispatchTimer;
-(void)currentItemChanged;
-(void)currentItemTracksChanged;
-(void)readHudSettingsAndCallCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateBounds:(CGRect)arg1 ;
-(void)getHudSetting;
-(void)_hudUpdate;
-(id)getVideoRange:(opaqueCMFormatDescriptionRef)arg1 ;
-(id)getTrackFormatDesc:(id)arg1 ;
-(float)getScaleFactorForDisplaySize:(CGSize)arg1 ;
-(BOOL)valueLoadedForKey:(id)arg1 onObject:(id)arg2 ;
-(AVPlayerLayer *)playerLayer;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)setPlayerLayer:(AVPlayerLayer *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setColor:(int)arg1 ;
@end

