/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIDynamicAnimation.h>

@class NSMutableArray, NSArray;

@interface _UIDynamicAnimationGroup : _UIDynamicAnimation {

	/*^block*/id _applier;
	NSMutableArray* _animations;
	NSMutableArray* _runningAnimations;

}

@property (nonatomic,copy) NSArray * animations;              //@synthesize animations=_animations - In the implementation block
-(void)dealloc;
-(BOOL)_animateForInterval:(double)arg1 ;
-(void)_stopAnimation;
-(void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2 ;
-(void)runWithCompletion:(/*^block*/id)arg1 ;
-(void)runWithGroupApplier:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 forScreen:(id)arg3 runLoopMode:(id)arg4 ;
-(void)runWithGroupApplier:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAnimations:(NSArray *)arg1 ;
-(void)addAnimation:(id)arg1 ;
-(void)removeAnimation:(id)arg1 ;
-(NSArray *)animations;
@end

