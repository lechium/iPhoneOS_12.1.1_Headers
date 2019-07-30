//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBViewControllerContextTransitioning.h"
#import "SBViewControllerTransitionCoordinator.h"

@class BSUIAnimationFactory, FBDisplayLayoutTransition, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIView;

@interface SBViewControllerTransitionContext : NSObject <SBViewControllerContextTransitioning, SBViewControllerTransitionCoordinator>
{
    long long _presentationStyle;	// 8 = 0x8
    struct CGAffineTransform _targetTransform;	// 16 = 0x10
    NSMutableDictionary *_viewControllersByKey;	// 64 = 0x40
    NSMutableDictionary *_viewsByKey;	// 72 = 0x48
    NSMapTable *_initialFramesByViewController;	// 80 = 0x50
    NSMapTable *_finalFramesByViewController;	// 88 = 0x58
    _Bool _transitionStarted;	// 96 = 0x60
    _Bool _animationFinished;	// 97 = 0x61
    _Bool _transitionFinished;	// 98 = 0x62
    _Bool _transitionIsCancelled;	// 99 = 0x63
    _Bool _transitionWasEverCancelled;	// 100 = 0x64
    _Bool _transitionBeganInteractively;	// 101 = 0x65
    _Bool _transitionWasInteractive;	// 102 = 0x66
    _Bool _wantsAnimation;	// 103 = 0x67
    _Bool _transitionDidBeginCalled;	// 104 = 0x68
    double _transitionPercentComplete;	// 112 = 0x70
    unsigned long long _transitionAnimationOptions;	// 120 = 0x78
    BSUIAnimationFactory *_transitionAnimationFactory;	// 128 = 0x80
    id <UIViewControllerAnimatedTransitioning> _animator;	// 136 = 0x88
    id <UIViewControllerInteractiveTransitioning> _interactor;	// 144 = 0x90
    NSMutableArray *_alongsideAnimations;	// 152 = 0x98
    NSMutableArray *_alongsideCompletions;	// 160 = 0xa0
    NSMutableArray *_alongsideInteractionEndedHandlers;	// 168 = 0xa8
    NSMutableSet *_alongsideAnimationViews;	// 176 = 0xb0
    NSMutableArray *_transitionContinuations;	// 184 = 0xb8
    unsigned long long _outstandingClientCompletionCount;	// 192 = 0xc0
    FBDisplayLayoutTransition *_layoutTransition;	// 200 = 0xc8
    id <SBViewControllerTransitionContextDelegate> _delegate;	// 208 = 0xd0
    UIView *_containerView;	// 216 = 0xd8
}

@property(nonatomic) _Bool wantsAnimation; // @synthesize wantsAnimation=_wantsAnimation;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <SBViewControllerTransitionContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGAffineTransform targetTransform; // @synthesize targetTransform=_targetTransform;
@property(nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
- (void).cxx_destruct;	// IMP=0x00000001002b8908
- (id)succinctDescriptionBuilder;	// IMP=0x00000001002b87e0
- (id)succinctDescription;	// IMP=0x00000001002b878c
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000001002b8550
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000001002b84fc
@property(readonly, copy) NSString *description;
- (void)notifyWhenInteractionChangesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001002b84e4
- (void)_runInteractionEndedHandlers;	// IMP=0x00000001002b8324
- (void)_runAlongsideAnimationBlocksInEnclosingAnimationContext;	// IMP=0x00000001002b8164
- (void)_runAlongsideAnimationBlocksWithFactory:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000001002b7ed8
- (void)_startInteractiveTransition;	// IMP=0x00000001002b7ea8
- (id)_interactiveAnimator;	// IMP=0x00000001002b7e64
- (_Bool)_animatorIsInteractive;	// IMP=0x00000001002b7e10
- (_Bool)_objectSupportsRestarting:(id)arg1;	// IMP=0x00000001002b7dac
- (_Bool)_interactorSupportsRestarting;	// IMP=0x00000001002b7d94
- (_Bool)_animatorSupportsRestarting;	// IMP=0x00000001002b7d44
- (id)_reversibleAnimator;	// IMP=0x00000001002b7d00
- (_Bool)_animatorIsReversible;	// IMP=0x00000001002b7ce0
- (void)_updateTransitionAnimationFactoryAndOptions;	// IMP=0x00000001002b7be8
- (CDUnknownBlockType)_acquireTransitionCompletion;	// IMP=0x00000001002b7b20
- (void)addTransitionContinuation:(CDUnknownBlockType)arg1;	// IMP=0x00000001002b7934
- (void)_completeTransition;	// IMP=0x00000001002b7614
- (void)_completeTransitionIfPossible;	// IMP=0x00000001002b75e4
- (_Bool)requiresRestartableAnimations;	// IMP=0x00000001002b75d8
- (_Bool)requiresInteractiveAnimations;	// IMP=0x00000001002b75cc
- (_Bool)requiresCancellableAnimations;	// IMP=0x00000001002b7588
- (void)notifyWhenInteractionEndsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001002b7520
- (_Bool)animateAlongsideTransitionInView:(id)arg1 animation:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001002b7464
- (_Bool)animateAlongsideTransition:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002b7354
- (unsigned long long)transitionAnimationOptions;	// IMP=0x00000001002b7344
- (id)transitionAnimationFactory;	// IMP=0x00000001002b7334
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionVelocity;
@property(readonly, nonatomic) double percentComplete;
@property(readonly, nonatomic) double transitionDuration;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
- (_Bool)wasPreviousPhaseInteractive;	// IMP=0x00000001002b7218
@property(readonly, nonatomic) _Bool initiallyInteractive;
- (_Bool)transitionWasRestarted;	// IMP=0x00000001002b71c0
- (void)restartTransition;	// IMP=0x00000001002b6c64
- (_Bool)supportsRestarting;	// IMP=0x00000001002b6c08
- (_Bool)supportsCancelling;	// IMP=0x00000001002b6bfc
- (void)cancelTransition;	// IMP=0x00000001002b6744
- (struct CGRect)finalFrameForViewController:(id)arg1;	// IMP=0x00000001002b66c4
- (struct CGRect)initialFrameForViewController:(id)arg1;	// IMP=0x00000001002b6644
- (id)viewForKey:(id)arg1;	// IMP=0x00000001002b662c
- (id)viewControllerForKey:(id)arg1;	// IMP=0x00000001002b6614
- (void)completeTransition:(_Bool)arg1;	// IMP=0x00000001002b62a4
- (void)pauseInteractiveTransition;	// IMP=0x00000001002b62a0
- (void)cancelInteractiveTransition;	// IMP=0x00000001002b6190
- (void)finishInteractiveTransition;	// IMP=0x00000001002b5f18
- (void)updateInteractiveTransition:(double)arg1;	// IMP=0x00000001002b5d3c
@property(readonly, nonatomic) _Bool transitionWasCancelled;
@property(readonly, nonatomic) _Bool isInterruptible;
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated;
- (void)startTransition;	// IMP=0x00000001002b579c
@property(readonly, nonatomic) _Bool isTransitioning;
- (void)setFinalFrame:(struct CGRect)arg1 forViewController:(id)arg2;	// IMP=0x00000001002b56ac
- (void)setInitialFrame:(struct CGRect)arg1 forViewController:(id)arg2;	// IMP=0x00000001002b55ec
- (void)setView:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001002b5590
- (void)setViewController:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001002b5534
@property(retain, nonatomic) id <UIViewControllerInteractiveTransitioning> interactor;
@property(retain, nonatomic) id <UIViewControllerAnimatedTransitioning> animator;
- (void)dealloc;	// IMP=0x00000001002b5218
- (id)init;	// IMP=0x00000001002b4fb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

