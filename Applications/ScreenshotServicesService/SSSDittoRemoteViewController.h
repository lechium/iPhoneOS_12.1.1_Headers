//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SSRemoteViewControllerHostToServiceInterface.h"
#import "SSSDittoRootViewControllerDelegate.h"
#import "SSSDittoViewController.h"

@class SSSDittoRootViewController, SSSViewControllerManager;

@interface SSSDittoRemoteViewController : UIViewController <SSSDittoRootViewControllerDelegate, SSSDittoViewController, SSRemoteViewControllerHostToServiceInterface>
{
    SSSViewControllerManager *_viewControllerManager;	// 8 = 0x8
    SSSDittoRootViewController *_rootViewController;	// 16 = 0x10
    _Bool _willSoonUnparentChildDittoRootViewController;	// 24 = 0x18
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x0000000100037b84
+ (id)_exportedInterface;	// IMP=0x0000000100037b68
+ (id)_remoteViewControllerInterface;	// IMP=0x0000000100037b4c
@property(nonatomic) _Bool willSoonUnparentChildDittoRootViewController; // @synthesize willSoonUnparentChildDittoRootViewController=_willSoonUnparentChildDittoRootViewController;
@property(nonatomic) __weak SSSViewControllerManager *viewControllerManager; // @synthesize viewControllerManager=_viewControllerManager;
- (void).cxx_destruct;	// IMP=0x0000000100037bcc
- (void)tearDownScreenshotExperience;	// IMP=0x0000000100037a90
- (void)informHostThatScreenshotsHaveDismissed;	// IMP=0x00000001000379a4
- (_Bool)shouldAutorotate;	// IMP=0x000000010003799c
- (id)childViewControllerForStatusBarHidden;	// IMP=0x0000000100037984
- (id)childViewControllerForStatusBarStyle;	// IMP=0x000000010003796c
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000100037964
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000010003783c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000377a8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100037734
- (void)viewDidLoad;	// IMP=0x0000000100037698
- (void)loadView;	// IMP=0x000000010003764c
- (id)loadedView;	// IMP=0x0000000100037640
- (void)_statusBarHeightChanged;	// IMP=0x0000000100037468
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000373a8
@property(readonly, nonatomic) SSSDittoRootViewController *rootViewController;
- (void)stopBeingParentOfDittoRootViewController:(id)arg1;	// IMP=0x00000001000372f4
- (void)becomeParentOfDittoRootViewController:(id)arg1;	// IMP=0x00000001000372a0
- (void)dittoRootViewController:(id)arg1 wantsBackground:(_Bool)arg2 duration:(double)arg3;	// IMP=0x000000010003729c
- (void)dittoRootViewControllerFinishedShowingSharingUI:(id)arg1;	// IMP=0x0000000100037298
- (void)dittoRootViewController:(id)arg1 willShowShowSharingUIWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010003722c
- (void)dittoRootViewController:(id)arg1 didTransitionToState:(unsigned long long)arg2;	// IMP=0x0000000100037228
- (void)dittoRootViewController:(id)arg1 willTransitionToState:(unsigned long long)arg2 changeBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100037194
- (void)_performDismiss;	// IMP=0x0000000100037154
- (void)_addRootViewController;	// IMP=0x0000000100037034

@end
