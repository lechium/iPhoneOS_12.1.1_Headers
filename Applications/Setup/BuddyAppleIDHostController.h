//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BFFFlowItem.h"
#import "BuddyAppleIDControllerDelegate.h"

@class ACAccount, ACAccountStore, BuddyAppleIDController, NSString, UIViewController;

@interface BuddyAppleIDHostController : NSObject <BFFFlowItem, BuddyAppleIDControllerDelegate>
{
    BuddyAppleIDController *_appleIDController;	// 8 = 0x8
    _Bool _isRestore;	// 16 = 0x10
    _Bool _allowBack;	// 17 = 0x11
    UIViewController *_viewController;	// 24 = 0x18
    ACAccountStore *_accountStore;	// 32 = 0x20
    ACAccount *_account;	// 40 = 0x28
    _Bool _ranSilentUpdateProperties;	// 48 = 0x30
    id <BFFFlowItemDelegate> _delegate;	// 56 = 0x38
}

+ (id)cloudConfigSkipKey;	// IMP=0x00000001000c584c
@property(nonatomic) _Bool ranSilentUpdateProperties; // @synthesize ranSilentUpdateProperties=_ranSilentUpdateProperties;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000c6c24
- (void)appleIDControllerFinished:(id)arg1;	// IMP=0x00000001000c6700
- (void)appleIDControllerWantsChoiceController:(id)arg1;	// IMP=0x00000001000c65e4
- (void)controllerWasPopped;	// IMP=0x00000001000c6590
- (void)setExistingAccountType:(int)arg1;	// IMP=0x00000001000c6578
- (void)setExistingAppleID:(id)arg1;	// IMP=0x00000001000c6560
- (id)viewController;	// IMP=0x00000001000c6310
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c5a7c
- (_Bool)_forceInteractiveAuthFromPreTigrisUpgrade;	// IMP=0x00000001000c59fc
- (_Bool)shouldAllowStartOver;	// IMP=0x00000001000c59e4
- (_Bool)controllerAllowsNavigatingBack;	// IMP=0x00000001000c59d4
- (id)initWithAccount:(id)arg1 signInForRestore:(_Bool)arg2;	// IMP=0x00000001000c585c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

