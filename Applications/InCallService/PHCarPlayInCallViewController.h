//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIRemoteAlertServiceViewController.h"

#import "MPCarPlayInCallViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSString, PHCarPlayHardwareControlsBroadcaster, PHCarPlayMainInCallViewController, UIView, UIViewController;

@interface PHCarPlayInCallViewController : SBUIRemoteAlertServiceViewController <UIGestureRecognizerDelegate, MPCarPlayInCallViewControllerDelegate, UINavigationControllerDelegate>
{
    _Bool _nextBackDismissesNavController;	// 8 = 0x8
    UIViewController *_contactsViewController;	// 16 = 0x10
    UIView *_flippyViewContainer;	// 24 = 0x18
    PHCarPlayMainInCallViewController *_mainInCallViewController;	// 32 = 0x20
    PHCarPlayHardwareControlsBroadcaster *_hardwareControlBroadcaster;	// 40 = 0x28
}

@property(retain) PHCarPlayHardwareControlsBroadcaster *hardwareControlBroadcaster; // @synthesize hardwareControlBroadcaster=_hardwareControlBroadcaster;
@property(retain) PHCarPlayMainInCallViewController *mainInCallViewController; // @synthesize mainInCallViewController=_mainInCallViewController;
@property(retain) UIView *flippyViewContainer; // @synthesize flippyViewContainer=_flippyViewContainer;
- (void).cxx_destruct;	// IMP=0x000000010003aa68
- (id)preferredFocusEnvironments;	// IMP=0x000000010003a91c
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000010003a914
- (void)screenDidDisconnectNotification:(id)arg1;	// IMP=0x000000010003a728
- (void)hardwareControlEventNotification:(id)arg1;	// IMP=0x000000010003a48c
- (void)dismissalRequestedFromInCallViewController:(id)arg1;	// IMP=0x000000010003a480
- (void)presentKeypadViewControllerRequestedFromInCallViewController:(id)arg1;	// IMP=0x000000010003a420
- (void)cancelAddCallViewController:(id)arg1;	// IMP=0x000000010003a40c
- (void)backPressed:(id)arg1;	// IMP=0x000000010003a3e4
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000010003a16c
- (void)presentAddCallViewControllerRequestedFromInCallViewController:(id)arg1;	// IMP=0x000000010003a0b8
- (_Bool)activePhoneCallExists;	// IMP=0x0000000100039f50
- (void)animateOutIfNecessary;	// IMP=0x0000000100039844
- (id)incomingCall;	// IMP=0x00000001000396b0
- (void)updateMainInCallControllerCalls;	// IMP=0x0000000100039598
- (void)updateTPInCallControllerPhoneCalls;	// IMP=0x00000001000394b0
- (void)queueUpdateToTPIncallControllerPhoneCalls;	// IMP=0x0000000100039450
- (void)conferencedCallsChangedNotification:(id)arg1;	// IMP=0x0000000100039444
- (void)callStatusChangedNotification:(id)arg1;	// IMP=0x00000001000393d8
- (void)muteStateChangedNotification:(id)arg1;	// IMP=0x0000000100039328
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100039234
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100038ee8
- (void)loadView;	// IMP=0x0000000100038608
- (void)dealloc;	// IMP=0x0000000100038538
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100038474

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
