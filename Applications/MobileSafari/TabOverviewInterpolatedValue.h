//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable;

@interface TabOverviewInterpolatedValue : NSObject
{
    NSHashTable *_dependants;	// 8 = 0x8
    NSHashTable *_dependencies;	// 16 = 0x10
    double _instantaneousTargetValue;	// 24 = 0x18
    double _lastRenderedValue;	// 32 = 0x20
    double _value;	// 40 = 0x28
    double _targetValue;	// 48 = 0x30
    double _epsilon;	// 56 = 0x38
    double _decelerationFactor;	// 64 = 0x40
}

@property(nonatomic) double decelerationFactor; // @synthesize decelerationFactor=_decelerationFactor;
@property(nonatomic) double epsilon; // @synthesize epsilon=_epsilon;
@property(nonatomic) double targetValue; // @synthesize targetValue=_targetValue;
@property(readonly, nonatomic) double value; // @synthesize value=_value;
- (void).cxx_destruct;	// IMP=0x0000000100137b90
- (_Bool)isSteadyAtTargetValue:(double)arg1;	// IMP=0x0000000100137ad0
- (id)description;	// IMP=0x0000000100137980
- (void)addDependency:(id)arg1;	// IMP=0x00000001001378cc
- (void)_recursivelyRemoveDependency:(id)arg1;	// IMP=0x0000000100137774
- (void)_removeDependency:(id)arg1;	// IMP=0x0000000100137718
- (void)_addDependant:(id)arg1;	// IMP=0x0000000100137690
- (void)_removeFromDependants;	// IMP=0x0000000100137548
- (void)resetLastRenderedValue;	// IMP=0x000000010013752c
- (void)resetToValue:(double)arg1;	// IMP=0x00000001001374bc
- (_Bool)interpolateByTimeInterval:(double)arg1;	// IMP=0x0000000100137314
- (_Bool)_dependenciesAreInSteadyState;	// IMP=0x00000001001371dc
@property(readonly, nonatomic, getter=isInSteadyState) _Bool inSteadyState;
- (id)initWithValue:(double)arg1 decelerationFactor:(double)arg2;	// IMP=0x000000010013703c

@end

