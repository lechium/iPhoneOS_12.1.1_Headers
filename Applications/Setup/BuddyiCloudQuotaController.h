//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BFFFlowItem.h"
#import "ICQUpgradeFlowManagerDelegate.h"

@class ICQUpgradeFlowManager, NSString, UIViewController;

@interface BuddyiCloudQuotaController : NSObject <ICQUpgradeFlowManagerDelegate, BFFFlowItem>
{
    UIViewController *_viewController;	// 8 = 0x8
    ICQUpgradeFlowManager *_flowManager;	// 16 = 0x10
    CDUnknownBlockType _pushCompletion;	// 24 = 0x18
    id <BFFFlowItemDelegate> _delegate;	// 32 = 0x20
}

+ (id)cloudConfigSkipKey;	// IMP=0x000000010002151c
+ (_Bool)controllerNeedsToRun;	// IMP=0x00000001000214c0
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100021e64
- (void)upgradeFlowManagerDidComplete:(id)arg1;	// IMP=0x0000000100021d38
- (void)upgradeFlowManagerDidCancel:(id)arg1;	// IMP=0x0000000100021c40
- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;	// IMP=0x0000000100021b44
- (void)upgradeFlowManager:(id)arg1 didPresentViewController:(id)arg2;	// IMP=0x0000000100021acc
- (void)controllerWasPopped;	// IMP=0x0000000100021a7c
- (_Bool)controllerAllowsNavigatingBack;	// IMP=0x0000000100021a74
- (id)viewController;	// IMP=0x0000000100021a64
- (void)cancelHostedPresentation;	// IMP=0x0000000100021980
- (void)presentHostedViewControllerOnNavigationController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000217d0
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002152c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
