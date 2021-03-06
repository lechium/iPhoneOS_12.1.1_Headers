//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAnimationCurveSettings.h"

@class BSAnimationSettings;

@interface SBAnimationSettings : SBAnimationCurveSettings
{
    BSAnimationSettings *_exportedSettings;	// 48 = 0x30
    long long _animationType;	// 56 = 0x38
    double _delay;	// 64 = 0x40
    double _duration;	// 72 = 0x48
    double _mass;	// 80 = 0x50
    double _stiffness;	// 88 = 0x58
    double _damping;	// 96 = 0x60
    double _epsilon;	// 104 = 0x68
    double _calculatedDuration;	// 112 = 0x70
    double _speed;	// 120 = 0x78
}

+ (id)_moduleWithSectionTitle:(id)arg1 delay:(_Bool)arg2;	// IMP=0x0000000100414e3c
+ (id)_moduleWithSectionTitle:(id)arg1;	// IMP=0x0000000100414e2c
+ (id)settingsControllerModule;	// IMP=0x0000000100414e18
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double calculatedDuration; // @synthesize calculatedDuration=_calculatedDuration;
@property(nonatomic) double epsilon; // @synthesize epsilon=_epsilon;
@property(nonatomic) double damping; // @synthesize damping=_damping;
@property(nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property(nonatomic) double mass; // @synthesize mass=_mass;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
- (void).cxx_destruct;	// IMP=0x0000000100415a04
- (id)BSAnimationSettings;	// IMP=0x0000000100414b44
- (void)_invalidate;	// IMP=0x0000000100414b2c
- (void)setDefaultValues;	// IMP=0x0000000100414a20

@end

