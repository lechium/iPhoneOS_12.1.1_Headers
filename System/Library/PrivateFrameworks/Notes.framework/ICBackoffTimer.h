/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface ICBackoffTimer : NSObject {

	id _userInfo;
	double _initialTimeInterval;
	id _target;
	SEL _selector;
	unsigned long long _backoffCount;
	double _maxTimeInterval;
	NSTimer* _timer;

}

@property (assign,nonatomic) double initialTimeInterval;                   //@synthesize initialTimeInterval=_initialTimeInterval - In the implementation block
@property (assign,nonatomic,__weak) id target;                             //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                                 //@synthesize selector=_selector - In the implementation block
@property (nonatomic,retain) id userInfo;                                  //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) unsigned long long backoffCount;              //@synthesize backoffCount=_backoffCount - In the implementation block
@property (assign,nonatomic) double maxTimeInterval;                       //@synthesize maxTimeInterval=_maxTimeInterval - In the implementation block
@property (retain) NSTimer * timer;                                        //@synthesize timer=_timer - In the implementation block
-(void)fire:(id)arg1 ;
-(BOOL)isScheduled;
-(id)initWithInitialInterval:(double)arg1 maxInterval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 ;
-(double)nextTimeInterval;
-(void)scheduleToFire;
-(void)setInitialTimeInterval:(double)arg1 ;
-(void)setMaxTimeInterval:(double)arg1 ;
-(void)setBackoffCount:(unsigned long long)arg1 ;
-(double)initialTimeInterval;
-(unsigned long long)backoffCount;
-(double)maxTimeInterval;
-(id)init;
-(void)dealloc;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(id)target;
-(SEL)selector;
-(void)invalidate;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(void)fire;
@end

