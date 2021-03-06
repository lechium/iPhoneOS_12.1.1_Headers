//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBValueConvergenceAnimator : NSObject
{
    double _previousForce;	// 8 = 0x8
    double _diff;	// 16 = 0x10
    _Bool _finishesOnValueConvergence;	// 24 = 0x18
    double _currentValue;	// 32 = 0x20
    double _targetValue;	// 40 = 0x28
    CDUnknownBlockType _convergenceFunction;	// 48 = 0x30
    CDUnknownBlockType _applier;	// 56 = 0x38
    CDUnknownBlockType _completion;	// 64 = 0x40
    long long _frameInterval;	// 72 = 0x48
    double _startTime;	// 80 = 0x50
    double _lastFireTime;	// 88 = 0x58
}

@property(nonatomic) double lastFireTime; // @synthesize lastFireTime=_lastFireTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long frameInterval; // @synthesize frameInterval=_frameInterval;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType applier; // @synthesize applier=_applier;
@property(copy, nonatomic) CDUnknownBlockType convergenceFunction; // @synthesize convergenceFunction=_convergenceFunction;
@property(nonatomic) _Bool finishesOnValueConvergence; // @synthesize finishesOnValueConvergence=_finishesOnValueConvergence;
@property(nonatomic) double targetValue; // @synthesize targetValue=_targetValue;
@property(nonatomic) double currentValue; // @synthesize currentValue=_currentValue;
- (void).cxx_destruct;	// IMP=0x00000001005aa398
- (void)_convergeValue;	// IMP=0x00000001005aa224
- (void)_reset;	// IMP=0x00000001005aa1fc
@property(readonly, nonatomic) double elapsedTime;
- (void)_invokeCompletionWithFinished:(_Bool)arg1;	// IMP=0x00000001005aa16c
- (void)_invokeApplier;	// IMP=0x00000001005aa134
- (_Bool)isRunning;	// IMP=0x00000001005aa0d8
- (void)stop;	// IMP=0x00000001005aa088
- (void)start;	// IMP=0x00000001005aa038
- (void)setConvergenceFunctionWithConstant:(long long)arg1;	// IMP=0x00000001005a9b80
- (void)dealloc;	// IMP=0x00000001005a9b30
- (id)init;	// IMP=0x00000001005a9ae8

@end

