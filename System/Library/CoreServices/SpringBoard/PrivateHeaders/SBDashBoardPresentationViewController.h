//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "BSDescriptionProviding.h"

@class NSArray, NSMutableArray, NSString;

@interface SBDashBoardPresentationViewController : SBDashBoardViewControllerBase <BSDescriptionProviding>
{
    unsigned long long _mutatingPresentation;	// 8 = 0x8
    unsigned long long _transitioning;	// 16 = 0x10
    NSMutableArray *_contentViewControllers;	// 24 = 0x18
    NSArray *_activeContentViewControllers;	// 32 = 0x20
    SBDashBoardPresentationViewController *_isolatedPresentationViewController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100406fe0
- (void)_updatePresentationForViewController:(id)arg1 presentation:(id)arg2 animationSettings:(id)arg3;	// IMP=0x0000000100406714
- (void)_reflowPresentationWithAnimationSettings:(id)arg1;	// IMP=0x00000001004064e4
- (void)_updateContentViewControllersAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001004045f4
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000001004041d8
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100404184
- (id)succinctDescriptionBuilder;	// IMP=0x0000000100404084
- (id)succinctDescription;	// IMP=0x0000000100404030
@property(readonly, copy) NSString *description;
- (_Bool)wouldHandleButtonEvent:(id)arg1;	// IMP=0x0000000100403eb0
- (_Bool)handleEvent:(id)arg1;	// IMP=0x0000000100403ae4
- (_Bool)handleAppearanceUpdateFromController:(id)arg1 animationSettings:(inout id *)arg2;	// IMP=0x00000001004038a0
- (long long)participantState;	// IMP=0x0000000100403824
- (void)rebuildEverythingForReason:(id)arg1;	// IMP=0x00000001004036a0
- (void)aggregatePresentation:(id)arg1;	// IMP=0x0000000100403548
- (void)aggregateBehavior:(id)arg1;	// IMP=0x0000000100403314
- (void)aggregateAppearance:(id)arg1;	// IMP=0x00000001004031bc
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;	// IMP=0x00000001004031b4
- (void)viewWillLayoutSubviews;	// IMP=0x0000000100402f68
- (void)viewDidLoad;	// IMP=0x0000000100402dc8
- (void)updatePresentationAnimated:(_Bool)arg1;	// IMP=0x0000000100402d3c
- (void)dismissPresentationAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100402ab0
- (void)dismissPresentationAnimated:(_Bool)arg1;	// IMP=0x0000000100402aa0
- (void)dismissContentViewControllers:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001004026a4
- (void)dismissContentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001004025bc
- (void)dismissContentViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001004025ac
- (void)presentContentViewControllers:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100402090
- (void)presentContentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100401fa8
- (void)presentContentViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100401f98
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning;
@property(readonly, nonatomic, getter=isPresentingContent) _Bool presentingContent;
@property(readonly, nonatomic, getter=hasContent) _Bool hasContent;
@property(readonly, copy, nonatomic) NSArray *presentedViewControllers; // @synthesize presentedViewControllers=_activeContentViewControllers;
@property(readonly, copy, nonatomic) NSArray *contentViewControllers; // @synthesize contentViewControllers=_contentViewControllers;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100401d8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
