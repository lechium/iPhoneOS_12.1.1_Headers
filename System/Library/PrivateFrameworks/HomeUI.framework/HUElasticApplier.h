/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUApplier.h>

@class CADisplayLink;

@interface HUElasticApplier : HUApplier {

	BOOL _completesWhenAtRest;
	BOOL _progressBeginsFromInitialInputProgress;
	BOOL _applyOnlyOnProgressChanges;
	double _friction;
	double _tension;
	double _currentVelocity;
	/*^block*/id _progressInputBlock;
	CADisplayLink* _displayLink;
	unsigned long long _frameCount;
	unsigned long long _restingFrameCount;
	double _previousForce;

}

@property (nonatomic,copy) id progressInputBlock;                                      //@synthesize progressInputBlock=_progressInputBlock - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                              //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) unsigned long long frameCount;                            //@synthesize frameCount=_frameCount - In the implementation block
@property (assign,nonatomic) unsigned long long restingFrameCount;                     //@synthesize restingFrameCount=_restingFrameCount - In the implementation block
@property (assign,nonatomic) double previousForce;                                     //@synthesize previousForce=_previousForce - In the implementation block
@property (assign,nonatomic) double currentVelocity;                                   //@synthesize currentVelocity=_currentVelocity - In the implementation block
@property (assign,nonatomic) double friction;                                          //@synthesize friction=_friction - In the implementation block
@property (assign,nonatomic) double tension;                                           //@synthesize tension=_tension - In the implementation block
@property (assign,nonatomic) BOOL completesWhenAtRest;                                 //@synthesize completesWhenAtRest=_completesWhenAtRest - In the implementation block
@property (assign,nonatomic) BOOL progressBeginsFromInitialInputProgress;              //@synthesize progressBeginsFromInitialInputProgress=_progressBeginsFromInitialInputProgress - In the implementation block
@property (assign,nonatomic) BOOL applyOnlyOnProgressChanges;                          //@synthesize applyOnlyOnProgressChanges=_applyOnlyOnProgressChanges - In the implementation block
-(void)setCurrentVelocity:(double)arg1 ;
-(BOOL)complete:(BOOL)arg1 ;
-(id)initWithProgressInputBlock:(/*^block*/id)arg1 ;
-(void)_displayLinkTick;
-(void)_invalidateDisplayLinkIfNecessary;
-(void)setProgressBeginsFromInitialInputProgress:(BOOL)arg1 ;
-(void)setCompletesWhenAtRest:(BOOL)arg1 ;
-(void)setProgressInputBlock:(id)arg1 ;
-(void)_updateProgressForInitialUpdate:(BOOL)arg1 ;
-(id)progressInputBlock;
-(BOOL)applyOnlyOnProgressChanges;
-(unsigned long long)restingFrameCount;
-(void)setRestingFrameCount:(unsigned long long)arg1 ;
-(BOOL)completesWhenAtRest;
-(void)setApplyOnlyOnProgressChanges:(BOOL)arg1 ;
-(BOOL)progressBeginsFromInitialInputProgress;
-(double)previousForce;
-(void)setPreviousForce:(double)arg1 ;
-(id)init;
-(double)friction;
-(void)setFriction:(double)arg1 ;
-(BOOL)start;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)setFrameCount:(unsigned long long)arg1 ;
-(unsigned long long)frameCount;
-(double)currentVelocity;
-(double)tension;
-(void)setTension:(double)arg1 ;
@end

