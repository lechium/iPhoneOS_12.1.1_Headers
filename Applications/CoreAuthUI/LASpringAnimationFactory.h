//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAMediaTimingFunction;

@interface LASpringAnimationFactory : NSObject
{
    double _duration;	// 8 = 0x8
    _Bool _needsDurationUpdate;	// 16 = 0x10
    double _mass;	// 24 = 0x18
    double _stiffness;	// 32 = 0x20
    double _damping;	// 40 = 0x28
    double _velocity;	// 48 = 0x30
    CAMediaTimingFunction *_timing;	// 56 = 0x38
}

+ (id)springAnimationWithKeyPath:(id)arg1 velocity:(double)arg2;	// IMP=0x0000000100011a34
+ (id)springAnimationWithKeyPath:(id)arg1;	// IMP=0x0000000100011a24
+ (double)defaultDuration;	// IMP=0x00000001000119e4
+ (id)defaultTimingFunction;	// IMP=0x00000001000119e0
@property(retain, nonatomic) CAMediaTimingFunction *timing; // @synthesize timing=_timing;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double damping; // @synthesize damping=_damping;
@property(nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property(nonatomic) double mass; // @synthesize mass=_mass;
- (void).cxx_destruct;	// IMP=0x00000001000121e0
@property(readonly, nonatomic) double duration;
- (void)_updateDurationIfNecessary;	// IMP=0x0000000100011fec
- (id)_timingFunctionForAnimation;	// IMP=0x0000000100011fdc
- (id)_springAnimationWithKeyPath:(id)arg1;	// IMP=0x0000000100011ebc
- (id)springAnimationWithKeyPath:(id)arg1;	// IMP=0x0000000100011e78
- (void)dealloc;	// IMP=0x0000000100011e44
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 timing:(id)arg5;	// IMP=0x0000000100011d64
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4;	// IMP=0x0000000100011cd0
- (id)initWithVelocity:(double)arg1 timing:(id)arg2;	// IMP=0x0000000100011cac
- (id)initWithVelocity:(double)arg1;	// IMP=0x0000000100011c38
- (id)init;	// IMP=0x0000000100011c28

@end

