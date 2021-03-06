//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TabOverviewInterpolatedLocation : NSObject
{
    CDStruct_5ca50560 _instantaneousTargetLocation;	// 8 = 0x8
    struct CGPoint _interactionFixedPoint;	// 40 = 0x28
    _Bool _interactionIncludesScale;	// 56 = 0x38
    double _interactionLogScaleVelocity;	// 64 = 0x40
    struct CGPoint _interactionVelocity;	// 72 = 0x48
    double _lastInteractionTimestamp;	// 88 = 0x58
    CDStruct_5ca50560 _lastRenderedLocation;	// 96 = 0x60
    double _decelerationFactor;	// 128 = 0x80
    CDStruct_5ca50560 _location;	// 136 = 0x88
    CDStruct_5ca50560 _targetLocation;	// 168 = 0xa8
}

@property(nonatomic) double decelerationFactor; // @synthesize decelerationFactor=_decelerationFactor;
@property(nonatomic) CDStruct_5ca50560 targetLocation; // @synthesize targetLocation=_targetLocation;
@property(readonly, nonatomic) CDStruct_5ca50560 location; // @synthesize location=_location;
- (void)moveLogScaleBy:(double)arg1 centeringOffset:(struct CGPoint)arg2 withLastCenteringOffset:(struct CGPoint)arg3 atTime:(double)arg4;	// IMP=0x0000000100017eb8
- (void)moveBy:(struct CGPoint)arg1 atTime:(double)arg2;	// IMP=0x0000000100017e2c
- (void)_moveBy:(struct CGPoint)arg1;	// IMP=0x0000000100017d6c
- (void)endInteraction;	// IMP=0x0000000100017b88
- (void)beginInteractionAtTime:(double)arg1;	// IMP=0x0000000100017b6c
- (void)resetRenderedLocation;	// IMP=0x0000000100017b40
- (_Bool)interpolateByTimeInterval:(double)arg1 roundingAtSize:(struct CGSize)arg2 zScaleFactor:(double)arg3 withHorizontalBounceFactor:(double)arg4 verticalBounceFactor:(double)arg5 constraints:(CDUnknownBlockType)arg6;	// IMP=0x00000001000175e8
- (_Bool)isInSteadyStateWithConstraints:(CDUnknownBlockType)arg1 epsilon:(double)arg2;	// IMP=0x00000001000174f0
- (_Bool)isInSteadyStateWithConstraints:(CDUnknownBlockType)arg1;	// IMP=0x00000001000174e0
- (double)decelerationFactorForTargetLocation:(CDStruct_5ca50560)arg1;	// IMP=0x00000001000173fc
- (void)shiftTargetLocation:(CDStruct_5ca50560)arg1;	// IMP=0x0000000100017184
- (void)resetToLocation:(CDStruct_5ca50560)arg1;	// IMP=0x0000000100017144
- (id)initWithLocation:(CDStruct_5ca50560)arg1 decelerationFactor:(double)arg2;	// IMP=0x000000010001706c

@end

