//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CAAnimationDelegate.h"
#import "SBDosidoAnimator.h"

@class CAMutableMeshTransform, NSString, SBStretchTransformerView, UIView;

@interface SBStretchTransformer : NSObject <CAAnimationDelegate, SBDosidoAnimator>
{
    double _percentage;	// 8 = 0x8
    CAMutableMeshTransform *_mesh;	// 16 = 0x10
    CDUnknownBlockType _completionBlock;	// 24 = 0x18
    double _stretchFactor;	// 32 = 0x20
    UIView *_parentView;	// 40 = 0x28
    SBStretchTransformerView *_transformView;	// 48 = 0x30
    UIView *_view;	// 56 = 0x38
    unsigned long long _anchorEdge;	// 64 = 0x40
    long long _orientation;	// 72 = 0x48
}

@property(nonatomic, setter=_setOrientation:) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic, setter=_setAnchorEdge:) unsigned long long anchorEdge; // @synthesize anchorEdge=_anchorEdge;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;	// IMP=0x000000010033abd4
- (void)_animateToZeroStretchFactor;	// IMP=0x000000010033a6c8
- (void)updateMeshTransform:(id)arg1 stretchFactor:(double)arg2;	// IMP=0x000000010033a0f0
- (void)_setStretchFactor:(double)arg1;	// IMP=0x000000010033a044
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000100339ff8
- (void)cancelDosido;	// IMP=0x0000000100339f3c
- (void)animateDosidoWithFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100339dac
- (void)finishSteppingBackwardToStart;	// IMP=0x0000000100339da0
- (void)finishSteppingForwardToEnd;	// IMP=0x0000000100339d94
@property(nonatomic) double stepPercentage;
@property(readonly, nonatomic, getter=isStepped) _Bool stepped;
- (void)dealloc;	// IMP=0x0000000100339c7c
- (id)initWithParentView:(id)arg1 anchorEdge:(unsigned long long)arg2 orientation:(long long)arg3;	// IMP=0x0000000100339a8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

