/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NUAnimatable, NUAnimationObserver;
@interface NUAnimation : NSObject {

	 _ctrl1;
	 _ctrl2;
	[75 _values];
	int _valuesCount;
	float _prevTime;
	float _pauseTime;
	BOOL _repeat;
	BOOL _paused;
	float _startTime;
	float _duration;
	float _delay;
	int _frameInterval;
	unsigned long long _function;
	unsigned long long _key;
	id<NUAnimatable> _animatable;
	id<NUAnimationObserver> _observer;
	 _from;
	 _to;

}

@property (assign,nonatomic) float startTime;                                      //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) float duration;                                       //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) float delay;                                          //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) int frameInterval;                                    //@synthesize frameInterval=_frameInterval - In the implementation block
@property (assign,nonatomic)  from;                                                //@synthesize from=_from - In the implementation block
@property (assign,nonatomic)  to;                                                  //@synthesize to=_to - In the implementation block
@property (assign,getter=isRepeat,nonatomic) BOOL repeat;                          //@synthesize repeat=_repeat - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                          //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) unsigned long long function;                          //@synthesize function=_function - In the implementation block
@property (assign,nonatomic) unsigned long long key;                               //@synthesize key=_key - In the implementation block
@property (assign,nonatomic,__weak) id<NUAnimatable> animatable;                   //@synthesize animatable=_animatable - In the implementation block
@property (assign,nonatomic,__weak) id<NUAnimationObserver> observer;              //@synthesize observer=_observer - In the implementation block
-(void)setFunction:(unsigned long long)arg1 ;
-(void)setFrom:;
-(void)setTo:;
-()from;
-()to;
-(int)frameInterval;
-(id<NUAnimatable>)animatable;
-(id)initWithAnimatable:(id)arg1 values:(2*)arg2 count:(int)arg3 key:(unsigned long long)arg4 ;
-(void)setAnimatable:(id<NUAnimatable>)arg1 ;
-(BOOL)isRepeat;
-(unsigned long long)function;
-(void)apply:(float)arg1 ;
-(id)initWithAnimatable:(id)arg1 value:(unsigned long long)arg2 ;
-(id)initWithAnimatable:(id)arg1 from:(unsigned long long)arg2 ;
-(id)initWithAnimatable:(id)arg1 from:(unsigned long long)arg2 ;
-(void)setRepeat:(BOOL)arg1 ;
-(void)setDuration:(float)arg1 ;
-(float)startTime;
-(void)setStartTime:(float)arg1 ;
-(float)duration;
-(float)delay;
-(void)setDelay:(float)arg1 ;
-(void)setObserver:(id<NUAnimationObserver>)arg1 ;
-(id<NUAnimationObserver>)observer;
-(unsigned long long)key;
-(void)setPaused:(BOOL)arg1 ;
-(void)setKey:(unsigned long long)arg1 ;
-(BOOL)update:(float)arg1 ;
-(BOOL)isPaused;
-(void)setFrameInterval:(int)arg1 ;
@end

