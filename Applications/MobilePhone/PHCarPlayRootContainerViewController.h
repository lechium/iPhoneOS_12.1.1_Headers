//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UINavigationControllerDelegate.h"

@class NSString, PHCarPlayMainMenuContainerViewController, UINavigationController;

@interface PHCarPlayRootContainerViewController : UIViewController <UINavigationControllerDelegate>
{
    UINavigationController *_wrapperNavigationController;	// 8 = 0x8
    PHCarPlayMainMenuContainerViewController *_mainMenuContainerViewController;	// 16 = 0x10
}

@property(retain) PHCarPlayMainMenuContainerViewController *mainMenuContainerViewController; // @synthesize mainMenuContainerViewController=_mainMenuContainerViewController;
@property(retain) UINavigationController *wrapperNavigationController; // @synthesize wrapperNavigationController=_wrapperNavigationController;
- (void).cxx_destruct;	// IMP=0x00000001000a6e24
- (id)preferredFocusEnvironments;	// IMP=0x00000001000a6cac
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000001000a6b34
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000a6abc
- (void)loadView;	// IMP=0x00000001000a658c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000a651c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

