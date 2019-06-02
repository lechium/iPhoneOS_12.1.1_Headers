/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, CADisplayLink;

@interface QLImageAnimationTimer : NSObject {

	NSMutableSet* _observers;
	CADisplayLink* _displayLink;

}

@property (nonatomic,retain) NSMutableSet * observers;                 //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;              //@synthesize displayLink=_displayLink - In the implementation block
+(id)sharedTimer;
-(void)removeAnimationTimerObserver:(id)arg1 ;
-(void)addAnimationTimerObserver:(id)arg1 ;
-(void)animationTimerFired:(id)arg1 ;
-(id)init;
-(void)setObservers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)observers;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
@end
