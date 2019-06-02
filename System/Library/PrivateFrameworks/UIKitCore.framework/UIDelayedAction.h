/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, NSString, NSDate;

@interface UIDelayedAction : NSObject {

	id m_target;
	SEL m_action;
	id m_userInfo;
	double m_delay;
	NSTimer* m_timer;
	BOOL m_canceled;
	NSString* m_runLoopMode;
	NSDate* m_startDate;

}

@property (readonly) NSDate * _startDate; 
@property (readonly) BOOL _canceled; 
@property (retain) id target; 
@property (retain) id userInfo; 
-(id)init;
-(void)dealloc;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(double)delay;
-(void)cancel;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 delay:(double)arg4 ;
-(void)touch;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 delay:(double)arg4 mode:(id)arg5 ;
-(void)unschedule;
-(void)touchWithDelay:(double)arg1 ;
-(BOOL)scheduled;
-(void)timerFired:(id)arg1 ;
-(NSDate *)_startDate;
-(BOOL)_canceled;
@end

