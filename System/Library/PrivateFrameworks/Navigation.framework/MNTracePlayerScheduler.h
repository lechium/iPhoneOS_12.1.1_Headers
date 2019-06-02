/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNTracePlayerSchedulerDelegate;
@class NSTimer, NSMutableArray, MNTracePlayerTimelineStream;

@interface MNTracePlayerScheduler : NSObject {

	id<MNTracePlayerSchedulerDelegate> _delegate;
	NSTimer* _timer;
	double _lastTimerScheduleTime;
	double _speedMultiplier;
	NSMutableArray* _timelineStreams;
	double _position;
	MNTracePlayerTimelineStream* _nextTimelineStream;

}

@property (assign,nonatomic,__weak) id<MNTracePlayerSchedulerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double speedMultiplier;                                          //@synthesize speedMultiplier=_speedMultiplier - In the implementation block
@property (assign,nonatomic) double position;                                                 //@synthesize position=_position - In the implementation block
-(void)setSpeedMultiplier:(double)arg1 ;
-(double)speedMultiplier;
-(void)_timerUpdated:(id)arg1 ;
-(void)addTimelineStream:(id)arg1 ;
-(void)removeTimelineStream:(id)arg1 ;
-(void)removeAllTimelineStreams;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<MNTracePlayerSchedulerDelegate>)arg1 ;
-(id<MNTracePlayerSchedulerDelegate>)delegate;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(void)_update;
-(void)resume;
-(void)pause;
@end

