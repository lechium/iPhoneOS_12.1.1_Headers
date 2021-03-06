//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIDynamicBehavior.h"

#import "UICollisionBehaviorDelegate.h"

@class NSString, UIAttachmentBehavior, UICollisionBehavior, UIDynamicItemBehavior, UIGravityBehavior, _UIFeedbackEdgeBehavior;

@interface SBBounceBehavior : UIDynamicBehavior <UICollisionBehaviorDelegate>
{
    double _midwayPosition;	// 8 = 0x8
    double _completionThreshold;	// 16 = 0x10
    double _previousLinearVelocity;	// 24 = 0x18
    struct CGRect _targetFrame;	// 32 = 0x20
    id <UIDynamicItem> _item;	// 64 = 0x40
    UIDynamicItemBehavior *_bodyBehavior;	// 72 = 0x48
    UICollisionBehavior *_collisionBehavior;	// 80 = 0x50
    UIGravityBehavior *_gravityBehavior;	// 88 = 0x58
    UIDynamicItemBehavior *_pushBehavior;	// 96 = 0x60
    UIAttachmentBehavior *_draggingBehavior;	// 104 = 0x68
    double _gravity;	// 112 = 0x70
    double _velocity;	// 120 = 0x78
    double _elasticity;	// 128 = 0x80
    double _friction;	// 136 = 0x88
    double _resistance;	// 144 = 0x90
    double _minVelocityToAssist;	// 152 = 0x98
    double _maxVelocityToAssist;	// 160 = 0xa0
    double _maxVelocityAssistance;	// 168 = 0xa8
    _UIFeedbackEdgeBehavior *_hapticBehavior;	// 176 = 0xb0
    struct UIEdgeInsets _boundaryInsets;	// 184 = 0xb8
}

@property(nonatomic) struct UIEdgeInsets boundaryInsets; // @synthesize boundaryInsets=_boundaryInsets;
@property(retain, nonatomic) _UIFeedbackEdgeBehavior *hapticBehavior; // @synthesize hapticBehavior=_hapticBehavior;
@property(nonatomic) double maxVelocityAssistance; // @synthesize maxVelocityAssistance=_maxVelocityAssistance;
@property(nonatomic) double maxVelocityToAssist; // @synthesize maxVelocityToAssist=_maxVelocityToAssist;
@property(nonatomic) double minVelocityToAssist; // @synthesize minVelocityToAssist=_minVelocityToAssist;
@property(nonatomic) double resistance; // @synthesize resistance=_resistance;
@property(nonatomic) double friction; // @synthesize friction=_friction;
@property(nonatomic) double elasticity; // @synthesize elasticity=_elasticity;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double gravity; // @synthesize gravity=_gravity;
- (void).cxx_destruct;	// IMP=0x00000001005b1744
- (_Bool)allowsAnimatorToStop;	// IMP=0x00000001005b15e0
- (double)_maxVelocityToAssist;	// IMP=0x00000001005b15a8
- (double)_minVelocityToAssist;	// IMP=0x00000001005b1570
- (double)_velocityAssistance;	// IMP=0x00000001005b1538
- (_Bool)_shouldAssistWithVelocity:(double)arg1;	// IMP=0x00000001005b14dc
- (double)_adjustedVelocity:(double)arg1;	// IMP=0x00000001005b148c
- (double)_itemOriginY;	// IMP=0x00000001005b1430
- (_Bool)_itemStopped;	// IMP=0x00000001005b13a0
- (_Bool)_itemCompleted;	// IMP=0x00000001005b136c
- (_Bool)_itemPastMidway;	// IMP=0x00000001005b1338
- (double)_percentRemaining;	// IMP=0x00000001005b1314
- (double)_percentComplete;	// IMP=0x00000001005b12c0
- (void)_removeDraggingBehavior;	// IMP=0x00000001005b1270
- (void)_beginInteraction;	// IMP=0x00000001005b1230
- (void)finishInteraction;	// IMP=0x00000001005b1218
- (void)finishInteractionWithVelocity:(struct CGPoint)arg1;	// IMP=0x00000001005b1208
- (void)finishInteractionWithVelocity:(struct CGPoint)arg1 removingGravityAtMidway:(_Bool)arg2;	// IMP=0x00000001005b1144
- (void)updateInteractionWithPoint:(struct CGPoint)arg1;	// IMP=0x00000001005b10f4
- (void)initiateInteractionFromPoint:(struct CGPoint)arg1;	// IMP=0x00000001005b1050
- (void)bounce;	// IMP=0x00000001005b0ff4
- (void)_setupCollisionBoundaries;	// IMP=0x00000001005b0e0c
- (void)_frameCollisionBoundaryPoints:(struct CGPoint *)arg1;	// IMP=0x00000001005b0dc0
- (_Bool)_isGravityDown;	// IMP=0x00000001005b0d90
- (_Bool)isActive;	// IMP=0x00000001005b0d34
- (void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3 atPoint:(struct CGPoint)arg4;	// IMP=0x00000001005b0c94
- (id)initWithItem:(id)arg1;	// IMP=0x00000001005b0c2c
- (id)initWithItem:(id)arg1 targetFrame:(struct CGRect)arg2 feedbackBehavior:(id)arg3;	// IMP=0x00000001005b07c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

