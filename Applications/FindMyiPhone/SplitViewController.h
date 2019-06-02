//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISplitViewController.h"

#import "UISplitViewControllerDelegate.h"

@class FMIPNavigationController, UINavigationController;

@interface SplitViewController : UISplitViewController <UISplitViewControllerDelegate>
{
    UINavigationController *_delegateMasterVC;	// 8 = 0x8
    FMIPNavigationController *_delegateDetailVC;	// 16 = 0x10
}

@property(retain, nonatomic) FMIPNavigationController *delegateDetailVC; // @synthesize delegateDetailVC=_delegateDetailVC;
@property(retain, nonatomic) UINavigationController *delegateMasterVC; // @synthesize delegateMasterVC=_delegateMasterVC;
- (void).cxx_destruct;	// IMP=0x000000010007625c
- (void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2;	// IMP=0x0000000100075fcc
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;	// IMP=0x0000000100075f3c
- (_Bool)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;	// IMP=0x0000000100075d64
- (long long)targetDisplayModeForActionInSplitViewController:(id)arg1;	// IMP=0x0000000100075d3c
- (id)primaryViewControllerForExpandingSplitViewController:(id)arg1;	// IMP=0x0000000100075d30
- (id)primaryViewControllerForCollapsingSplitViewController:(id)arg1;	// IMP=0x0000000100075d24
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100075be8
- (void)showPrimaryPaneWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000759fc
- (void)hidePrimaryPane;	// IMP=0x0000000100075930
- (void)viewDidLoad;	// IMP=0x000000010007567c

@end

