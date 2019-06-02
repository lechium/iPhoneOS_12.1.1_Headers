/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVTTransitionScheduler.h>

@class NSTimer;

@interface AVTConcurrentTransitionScheduler : NSObject <AVTTransitionScheduler> {

	/*^block*/id _eventHandler;
	NSTimer* _transitionTimer;
	double _delay;

}

@property (nonatomic,retain) NSTimer * transitionTimer;              //@synthesize transitionTimer=_transitionTimer - In the implementation block
@property (nonatomic,readonly) double delay;                         //@synthesize delay=_delay - In the implementation block
@property (nonatomic,copy,readonly) id eventHandler;                 //@synthesize eventHandler=_eventHandler - In the implementation block
-(id)eventHandler;
-(id)initWithEventHandler:(/*^block*/id)arg1 ;
-(id)initWithEventHandler:(/*^block*/id)arg1 delay:(double)arg2 ;
-(void)scheduleEvent;
-(void)didCompleteEvent;
-(NSTimer *)transitionTimer;
-(void)scheduleTransitionTimer;
-(void)setTransitionTimer:(NSTimer *)arg1 ;
-(void)stop;
-(double)delay;
@end

