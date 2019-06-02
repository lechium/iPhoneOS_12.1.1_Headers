/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CATransaction : NSObject
+(id)_implicitAnimationForLayer:(id)arg1 keyPath:(id)arg2 ;
+(void)pushAnimator:(/*^block*/id)arg1 ;
+(void)popAnimator;
+(void)setCommitHandler:(/*^block*/id)arg1 ;
+(void)setPresentationHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
+(BOOL)animatesFromModelValues;
+(void)setAnimatesFromModelValues:(BOOL)arg1 ;
+(BOOL)disableRunLoopObserverCommits;
+(void)setDisableRunLoopObserverCommits:(BOOL)arg1 ;
+(void)assertInactive;
+(double)inputTime;
+(void)setValue:(id)arg1 forKey:(id)arg2 ;
+(id)valueForKey:(id)arg1 ;
+(void)addCommitHandler:(/*^block*/id)arg1 forPhase:(int)arg2 ;
+(double)animationDuration;
+(id)animationTimingFunction;
+(void)setAnimationDuration:(double)arg1 ;
+(void)setAnimationTimingFunction:(id)arg1 ;
+(void)begin;
+(void)commit;
+(void)synchronize;
+(void)activate;
+(unsigned)currentState;
+(/*^block*/id)animator;
+(void)setCompletionBlock:(/*^block*/id)arg1 ;
+(void)lock;
+(void)unlock;
+(void)setDisableActions:(BOOL)arg1 ;
+(void)flush;
+(/*^block*/id)completionBlock;
+(void)setInputTime:(double)arg1 ;
+(void)setLowLatency:(BOOL)arg1 ;
+(BOOL)lowLatency;
+(void)setEarliestAutomaticCommitTime:(double)arg1 ;
+(double)commitTime;
+(void)setCommitTime:(double)arg1 ;
+(double)earliestAutomaticCommitTime;
+(BOOL)disableActions;
+(int)currentPhase;
+(unsigned)generateSeed;
+(void)activateBackground:(BOOL)arg1 ;
@end
