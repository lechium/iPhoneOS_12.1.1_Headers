//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SSSDittoDebugViewDelegate.h"
#import "SSSDittoRootViewControllerDelegate.h"
#import "SSSDittoViewController.h"

@class SSSDittoRootViewController, SSSViewControllerManager;

@interface SSSDittoDebugViewController : UIViewController <SSSDittoRootViewControllerDelegate, SSSDittoDebugViewDelegate, SSSDittoViewController>
{
    SSSDittoRootViewController *_rootViewController;	// 8 = 0x8
    SSSViewControllerManager *viewControllerManager;	// 16 = 0x10
}

+ (void)prepareForDebugging;	// IMP=0x0000000100010e28
@property(nonatomic) __weak SSSViewControllerManager *viewControllerManager; // @synthesize viewControllerManager;
- (void).cxx_destruct;	// IMP=0x00000001000116e0
- (void)viewDidLoad;	// IMP=0x00000001000115e8
- (id)debugView;	// IMP=0x00000001000115dc
- (void)loadView;	// IMP=0x000000010001155c
- (void)_addScreenshots;	// IMP=0x00000001000113d0
- (void)dittoDebugView:(id)arg1 requestsPresentationOfViewController:(id)arg2;	// IMP=0x00000001000113b4
- (void)_addScreenshot;	// IMP=0x0000000100011144
- (void)becomeParentOfDittoRootViewController:(id)arg1;	// IMP=0x0000000100010fcc
- (void)dittoRootViewControllerFinishedShowingSharingUI:(id)arg1;	// IMP=0x0000000100010fc8
- (void)dittoRootViewController:(id)arg1 willShowShowSharingUIWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100010fbc
- (void)dittoRootViewController:(id)arg1 willTransitionToState:(unsigned long long)arg2 changeBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100010fb0
- (void)dittoRootViewController:(id)arg1 didTransitionToState:(unsigned long long)arg2;	// IMP=0x0000000100010fac
@property(readonly, nonatomic) SSSDittoRootViewController *rootViewController;
- (void)stopBeingParentOfDittoRootViewController:(id)arg1;	// IMP=0x0000000100010f14
- (void)screenshotEnvironmentDescriptionReceived:(id)arg1;	// IMP=0x0000000100010f10
- (void)_prepareRootViewControllerIfNecessary;	// IMP=0x0000000100010e98

@end
