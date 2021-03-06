//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBIconAnimatorDelegate.h"
#import "SBViewControllerInteractiveAnimatedTransitioning.h"

@class NSString, SBFolderController, SBIconAnimationSettings, SBIconAnimator, SBTreeNodeViewController;

@interface SBHomeScreenIconTransitionAnimator : NSObject <SBIconAnimatorDelegate, SBViewControllerInteractiveAnimatedTransitioning>
{
    id <SBViewControllerContextTransitioning> _transitionContext;	// 8 = 0x8
    unsigned long long _transitionToken;	// 16 = 0x10
    SBIconAnimationSettings *_currentSettings;	// 24 = 0x18
    unsigned long long _currentOperation;	// 32 = 0x20
    _Bool _receivedFirstInteractiveUpdate;	// 40 = 0x28
    _Bool _needsTransitionTokenIncrementOnNextUpdate;	// 41 = 0x29
    SBIconAnimator *_iconAnimator;	// 48 = 0x30
    SBFolderController *_folderController;	// 56 = 0x38
    SBTreeNodeViewController *_childViewController;	// 64 = 0x40
    unsigned long long _operation;	// 72 = 0x48
    double _initialDelay;	// 80 = 0x50
    id <SBHomeScreenIconTransitionAnimatorDelegate> _delegate;	// 88 = 0x58
}

@property(nonatomic) __weak id <SBHomeScreenIconTransitionAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double initialDelay; // @synthesize initialDelay=_initialDelay;
@property(readonly, nonatomic) unsigned long long operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) SBTreeNodeViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(readonly, nonatomic) SBFolderController *folderController; // @synthesize folderController=_folderController;
@property(readonly, nonatomic) SBIconAnimator *iconAnimator; // @synthesize iconAnimator=_iconAnimator;
- (void).cxx_destruct;	// IMP=0x000000010017ec90
@property(readonly, nonatomic) SBIconAnimationSettings *currentSettings;
- (void)iconAnimatorWasInvalidated:(id)arg1;	// IMP=0x000000010017ea5c
- (void)animationEnded:(_Bool)arg1;	// IMP=0x000000010017e9f0
- (_Bool)supportsRestarting;	// IMP=0x000000010017e9e8
- (double)percentComplete;	// IMP=0x000000010017e994
- (void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;	// IMP=0x000000010017e754
- (void)updateTransition:(id)arg1 withPercentComplete:(double)arg2;	// IMP=0x000000010017e508
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;	// IMP=0x000000010017e0b8
- (void)animateTransition:(id)arg1;	// IMP=0x000000010017de20
- (id)transitionAnimationFactory:(id)arg1;	// IMP=0x000000010017dcc8
- (double)transitionDuration:(id)arg1;	// IMP=0x000000010017dc08
- (void)reverse;	// IMP=0x000000010017dbc4
- (void)restart;	// IMP=0x000000010017db68
- (void)cancel;	// IMP=0x000000010017db1c
@property(readonly, nonatomic) unsigned long long currentOperation;
@property(readonly, nonatomic, getter=wasRestarted) _Bool restarted;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
- (id)initWithIconAnimator:(id)arg1 folderController:(id)arg2 childViewController:(id)arg3 operation:(unsigned long long)arg4;	// IMP=0x000000010017d970

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

