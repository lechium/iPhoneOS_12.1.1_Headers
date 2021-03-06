//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIRemoteAlertServiceViewController.h"

@class PHHIDEventMonitor, PHInCallRootViewController;

@interface PHInCallRemoteAlertShellViewController : SBUIRemoteAlertServiceViewController
{
    _Bool _hasStartedInitialSuppressionOfInCallStatusBarForFullscreenUIReason;	// 8 = 0x8
    PHHIDEventMonitor *_hidEventMonitor;	// 16 = 0x10
    PHInCallRootViewController *_inCallRootViewController;	// 24 = 0x18
    CDUnknownBlockType _pipFinishedTransitionBlock;	// 32 = 0x20
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x00000001000060e0
@property(nonatomic) _Bool hasStartedInitialSuppressionOfInCallStatusBarForFullscreenUIReason; // @synthesize hasStartedInitialSuppressionOfInCallStatusBarForFullscreenUIReason=_hasStartedInitialSuppressionOfInCallStatusBarForFullscreenUIReason;
@property(copy) CDUnknownBlockType pipFinishedTransitionBlock; // @synthesize pipFinishedTransitionBlock=_pipFinishedTransitionBlock;
@property(retain, nonatomic) PHInCallRootViewController *inCallRootViewController; // @synthesize inCallRootViewController=_inCallRootViewController;
@property(retain, nonatomic) PHHIDEventMonitor *hidEventMonitor; // @synthesize hidEventMonitor=_hidEventMonitor;
- (void).cxx_destruct;	// IMP=0x0000000100023858
- (void)pipDidCancelNotification:(id)arg1;	// IMP=0x00000001000d0b34
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000001000060e8
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x00000001000d0a90
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x00000001000d09f0
- (id)_childViewController;	// IMP=0x000000010001cf70
- (void)handleButtonActions:(id)arg1;	// IMP=0x00000001000d015c
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cff8c
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cfdcc
- (void)handleDoubleHeightStatusBarTap;	// IMP=0x00000001000cfd24
- (void)handleHeadsetButtonPressed:(_Bool)arg1;	// IMP=0x00000001000cfc74
- (void)handleVolumeDownButtonPressed;	// IMP=0x00000001000cfbcc
- (void)handleVolumeUpButtonPressed;	// IMP=0x00000001000cfb24
- (void)handleLockButtonPressed;	// IMP=0x00000001000cfa7c
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;	// IMP=0x000000010002317c
- (void)noteActivatedForActivityContinuationWithIdentifier:(id)arg1;	// IMP=0x00000001000cf494
- (void)noteActivatedForCustomReason:(id)arg1;	// IMP=0x00000001000cf1a8
- (void)_willAppearInRemoteViewController:(id)arg1;	// IMP=0x000000010001cd5c
- (void)_stealViewControllerFromPIP;	// IMP=0x00000001000ceda0
- (void)_createRootViewController;	// IMP=0x0000000100006fa8
- (void)updateSuppressionIfNecessary;	// IMP=0x000000010001f600
- (_Bool)prefersHomeIndicatorAutoHidden;	// IMP=0x00000001000ced98
- (id)childViewControllerForHomeIndicatorAutoHidden;	// IMP=0x00000001000ced8c
- (id)_childViewControllerForWhitePointAdaptivityStyle;	// IMP=0x00000001000ced80
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100023184
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010001e818
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x00000001000cec68
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010001d264
- (void)loadView;	// IMP=0x0000000100006438
- (void)dealloc;	// IMP=0x0000000100023488
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010000601c

@end

