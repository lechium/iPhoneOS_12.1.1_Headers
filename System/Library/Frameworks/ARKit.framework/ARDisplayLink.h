/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ARKit/ARKit-Structs.h>
@class CADisplayLink, ARRunLoop;

@interface ARDisplayLink : NSObject {

	CADisplayLink* _displayLink;
	/*^block*/id _callback;
	os_unfair_lock_s _lock;
	double _actualVsyncOffset;
	long long _preferredFramesPerSecond;
	double _vsyncOffset;
	ARRunLoop* _runloop;

}

@property (assign) long long preferredFramesPerSecond;              //@synthesize preferredFramesPerSecond=_preferredFramesPerSecond - In the implementation block
@property (assign) double vsyncOffset;                              //@synthesize vsyncOffset=_vsyncOffset - In the implementation block
@property (nonatomic,readonly) ARRunLoop * runloop;                 //@synthesize runloop=_runloop - In the implementation block
-(long long)preferredFramesPerSecond;
-(id)initWithPreferredFramesPerSecond:(long long)arg1 callback:(/*^block*/id)arg2 ;
-(double)vsyncOffset;
-(void)setVsyncOffset:(double)arg1 ;
-(ARRunLoop *)runloop;
-(void)_recomputeActualVsyncOffsetWithVsyncOffset:(double)arg1 preferredFramesPerSecond:(long long)arg2 ;
-(void)displayLinkCallback;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
@end

