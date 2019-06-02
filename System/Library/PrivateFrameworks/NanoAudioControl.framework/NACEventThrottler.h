/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface NACEventThrottler : NSObject {

	double _lastUpdateTime;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _eventBlock;
	double _minimumDelay;
	id _value;

}

@property (nonatomic,copy) id eventBlock;                      //@synthesize eventBlock=_eventBlock - In the implementation block
@property (assign,nonatomic) double minimumDelay;              //@synthesize minimumDelay=_minimumDelay - In the implementation block
@property (nonatomic,retain) id value;                         //@synthesize value=_value - In the implementation block
-(void)_fire;
-(void)setEventBlock:(id)arg1 ;
-(id)eventBlock;
-(void)setMinimumDelay:(double)arg1 ;
-(double)minimumDelay;
-(id)init;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)cancel;
-(id)initWithQueue:(id)arg1 ;
@end

