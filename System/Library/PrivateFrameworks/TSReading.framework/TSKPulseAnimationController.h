/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSKHighlightController.h>

@protocol TSKPulseAnimationControllerProtocol;
@interface TSKPulseAnimationController : TSKHighlightController {

	id<TSKPulseAnimationControllerProtocol> _delegate;
	BOOL _pulsating;
	BOOL _autohide;
	double _duration;
	double _pulseOffset;

}

@property (assign,nonatomic) BOOL pulsating;                  //@synthesize pulsating=_pulsating - In the implementation block
@property (assign,nonatomic) BOOL autohide;                   //@synthesize autohide=_autohide - In the implementation block
@property (assign,nonatomic) double duration;                 //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double pulseOffset;              //@synthesize pulseOffset=_pulseOffset - In the implementation block
-(BOOL)drawRoundedRect;
-(BOOL)pulsating;
-(void)setPulsating:(BOOL)arg1 ;
-(BOOL)autohide;
-(void)setAutohide:(BOOL)arg1 ;
-(double)pulseOffset;
-(void)setPulseOffset:(double)arg1 ;
-(void)dealloc;
-(void)reset;
-(void)setDuration:(double)arg1 ;
-(void)stop;
-(double)duration;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)startAnimating;
-(void)disconnect;
@end

