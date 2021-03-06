//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NCNotificationViewControllerDelegate.h"

@class NCNotificationViewController, NSString;

@interface SBNotificationLongLookBannerDestination : NSObject <NCNotificationViewControllerDelegate>
{
    NCNotificationViewController *_presentedBanner;	// 8 = 0x8
    id <NCNotificationAlertDestination><NCNotificationViewControllerDelegatePrivate> _parentDestination;	// 16 = 0x10
}

+ (_Bool)shouldNotificationRequestPresentAsLongLook:(id)arg1;	// IMP=0x00000001003f92c8
@property(nonatomic) __weak id <NCNotificationAlertDestination><NCNotificationViewControllerDelegatePrivate> parentDestination; // @synthesize parentDestination=_parentDestination;
@property(retain, nonatomic) NCNotificationViewController *presentedBanner; // @synthesize presentedBanner=_presentedBanner;
- (void).cxx_destruct;	// IMP=0x00000001003f9cfc
- (void)notificationViewController:(id)arg1 didDismissLongLook:(_Bool)arg2;	// IMP=0x00000001003f9bf0
- (void)notificationViewController:(id)arg1 didPresentLongLook:(_Bool)arg2;	// IMP=0x00000001003f9b60
- (void)notificationViewController:(id)arg1 didCommitToLongLookPresentation:(_Bool)arg2 withCoordinator:(id)arg3;	// IMP=0x00000001003f9ad8
- (void)notificationViewController:(id)arg1 executeAction:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001003f9a18
- (void)notificationViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001003f9958
- (void)_setReadyForNotificationRequests;	// IMP=0x00000001003f97f8
- (id)_delegate;	// IMP=0x00000001003f97a8
- (_Bool)_presentedBannerMatchesNotificationRequest:(id)arg1;	// IMP=0x00000001003f9650
- (void)dismissPresentedBannerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001003f9638
- (void)postNotificationRequest:(id)arg1 withPresentingViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001003f94dc
- (_Bool)canWithdrawNotificationRequest:(id)arg1;	// IMP=0x00000001003f94d0
- (_Bool)canModifyNotificationRequest:(id)arg1;	// IMP=0x00000001003f94c4
- (_Bool)canReceiveNotificationRequest:(id)arg1;	// IMP=0x00000001003f9420
- (_Bool)shouldReceiveNotificationRequest:(id)arg1;	// IMP=0x00000001003f93a8
@property(readonly, nonatomic, getter=isPresentingBanner) _Bool presentingBanner;
- (id)initWithParentDestination:(id)arg1;	// IMP=0x00000001003f9318

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

