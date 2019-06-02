//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIRemoteAlertServiceViewController.h"

#import "SUSUISoftwareUpdateAuthenticationViewControllerDelegate.h"

@class NSString, SUSUIAuthenticationAlertAction, SUSUISoftwareUpdateAuthenticationViewController;

@interface SUSUIRemoteAuthenticationContainerViewController : SBUIRemoteAlertServiceViewController <SUSUISoftwareUpdateAuthenticationViewControllerDelegate>
{
    SUSUISoftwareUpdateAuthenticationViewController *_authVC;	// 8 = 0x8
    SUSUIAuthenticationAlertAction *_action;	// 16 = 0x10
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x00000001000076a4
- (void).cxx_destruct;	// IMP=0x00000001000089b0
- (void)_setRootViewController:(id)arg1;	// IMP=0x0000000100008860
- (void)_fireActionWithResponseIfNecessary:(_Bool)arg1;	// IMP=0x0000000100008814
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000001000087b4
- (void)viewControllerWantsIdleTimerReset:(id)arg1;	// IMP=0x00000001000085ac
- (void)viewControllerWantsDismissal:(id)arg1;	// IMP=0x00000001000084a0
- (void)viewControllerAuthenticatedWithResult:(_Bool)arg1;	// IMP=0x00000001000083a4
- (void)viewController:(id)arg1 wantsStatusBarHidden:(_Bool)arg2 withDuration:(double)arg3;	// IMP=0x0000000100008264
- (void)handleLockButtonPressed;	// IMP=0x00000001000081a0
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007cb4
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100007b90
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100007a88
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100007980
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100007878
- (void)loadView;	// IMP=0x00000001000076ac
- (id)init;	// IMP=0x00000001000075c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

