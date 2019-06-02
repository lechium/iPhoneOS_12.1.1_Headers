/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HKAnimatableObjectPropertyAnimation : NSObject {

	/*^block*/id _animationTimingFunction;
	double _currentAnimationTime;
	double _duration;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) double duration;                   //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(/*^block*/id)timingFunctionForMediaTimingFunction:(id)arg1 ;
+(/*^block*/id)linearTimingFunction;
+(id)animationWithDuration:(double)arg1 timingFunction:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_currentValue;
-(void)_setStartValue:(id)arg1 ;
-(void)_setCurrentValue:(id)arg1 ;
-(BOOL)isFinishedAnimating;
-(void)_updateWithProgress:(float)arg1 ;
-(id)_endValue;
-(id)_startValue;
-(void)_setEndValue:(id)arg1 ;
-(id)valueByAddingCurrentValueToValue:(id)arg1 ;
-(void)callAndReleaseCompletionHandler;
-(double)duration;
-(id)completionHandler;
-(void)update:(double)arg1 ;
@end

