/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISObservable.h>

@class CADisplayLink, _ISAnimatedImageTimerForwardingProxy;

@interface ISAnimatedImageTimer : ISObservable {

	CADisplayLink* _displayLink;
	_ISAnimatedImageTimerForwardingProxy* _displayLinkProxy;
	double _timestamp;

}

@property (assign,setter=_setTimestamp:,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(id)sharedTimer;
-(id)mutableChangeObject;
-(void)_updateDisplayLink;
-(void)hasObserversDidChange;
-(void)_iosInitialization;
-(void)_iosDealloc;
-(void)_iosUpdateDisplayLink;
-(void)_fireTimerWithInterval:(double)arg1 ;
-(void)_iosAnimationTimerFired:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(double)timestamp;
-(void)_setTimestamp:(double)arg1 ;
@end

