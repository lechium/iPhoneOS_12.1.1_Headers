//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SSSContainerViewControllerDelegate.h"
#import "SSSDittoDismissTimerDelegate.h"

@class SSSContainerViewController, SSSDittoDismissTimer, SSSViewControllerManager;

@interface SSSDittoRootViewController : UIViewController <SSSContainerViewControllerDelegate, SSSDittoDismissTimerDelegate>
{
    SSSContainerViewController *_containerViewController;	// 8 = 0x8
    unsigned long long _containerViewControllerTargetState;	// 16 = 0x10
    _Bool _isInDragAndDrop;	// 24 = 0x18
    SSSDittoDismissTimer *_dismissTimer;	// 32 = 0x20
    id <SSSDittoRootViewControllerDelegate> _delegate;	// 40 = 0x28
    id <SSSDittoViewController> _hostingViewController;	// 48 = 0x30
    SSSViewControllerManager *_viewControllerManager;	// 56 = 0x38
}

@property(nonatomic) __weak SSSViewControllerManager *viewControllerManager; // @synthesize viewControllerManager=_viewControllerManager;
@property(nonatomic) __weak id <SSSDittoViewController> hostingViewController; // @synthesize hostingViewController=_hostingViewController;
@property(nonatomic) __weak id <SSSDittoRootViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100013e94
@property(readonly, nonatomic) _Bool shouldAnimateDragCancel;
@property(readonly, nonatomic) unsigned long long state;
- (void)performProgrammaticDismiss;	// IMP=0x0000000100013dc0
- (void)_dismissAnimated:(_Bool)arg1;	// IMP=0x0000000100013da4
- (void)containerViewControllerDidEndDismissAnimation:(id)arg1;	// IMP=0x0000000100013ccc
- (void)containerViewController:(id)arg1 willBeginDismissAnimationWithSettings:(id)arg2;	// IMP=0x0000000100013c64
- (void)dittoDismissTimerFired:(id)arg1;	// IMP=0x0000000100013c04
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000100013bfc
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100013bac
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100013b4c
- (void)viewDidLoad;	// IMP=0x0000000100013aac
- (void)pipify;	// IMP=0x0000000100013a3c
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000001000139f0
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100013900
- (void)_updateForSize:(struct CGSize)arg1;	// IMP=0x0000000100013880
- (void)_updateForCurrentSize;	// IMP=0x0000000100013824
- (void)_postNotificationForDidChangeToState:(unsigned long long)arg1;	// IMP=0x00000001000137f0
- (void)_postNotificationForWillChangeToState:(unsigned long long)arg1;	// IMP=0x00000001000137bc
- (void)_postNotificationName:(id)arg1;	// IMP=0x0000000100013748
- (void)containerViewControllerEndedShowingWaitingForImageIdentifierUpdatesUI:(id)arg1;	// IMP=0x000000010001372c
- (void)containerViewControllerBeganShowingWaitingForImageIdentifierUpdatesUI:(id)arg1;	// IMP=0x0000000100013710
- (void)containerViewControllerEndedShowingSharingUI:(id)arg1;	// IMP=0x00000001000136a8
- (void)containerViewController:(id)arg1 willShowSharingUIWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100013618
- (void)containerViewControllerEndedDragAndDrop:(id)arg1 shouldDismiss:(_Bool)arg2;	// IMP=0x00000001000135b0
- (void)containerViewControllerBeganDragAndDrop:(id)arg1;	// IMP=0x0000000100013584
- (void)containerViewControllerHadGestureInteraction:(id)arg1;	// IMP=0x000000010001356c
- (void)containerViewController:(id)arg1 didTransitionToState:(unsigned long long)arg2;	// IMP=0x00000001000134dc
- (void)containerViewController:(id)arg1 willTransitionToState:(unsigned long long)arg2 changeBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100013424
- (int)_preferredStatusBarVisibility;	// IMP=0x000000010001341c
- (long long)preferredStatusBarStyle;	// IMP=0x0000000100013414
- (id)childViewControllerForStatusBarHidden;	// IMP=0x0000000100013404
- (id)childViewControllerForStatusBarStyle;	// IMP=0x00000001000133f4
- (void)_addContainerViewController:(id)arg1;	// IMP=0x0000000100013330
- (void)_createAndParentContainerViewControllerIfPossible;	// IMP=0x00000001000132b0
- (void)_createContainerViewControllerIfNecessary;	// IMP=0x0000000100013228
- (void)screenshotReceived:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100013184
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000130c8

@end
