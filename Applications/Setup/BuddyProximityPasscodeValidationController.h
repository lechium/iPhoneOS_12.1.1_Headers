//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "BFFFlowItem.h"
#import "BFFPasscodeInputViewDelegate.h"

@class NSString, OBPrivacyLinkController;

@interface BuddyProximityPasscodeValidationController : UIViewController <BFFPasscodeInputViewDelegate, BFFFlowItem>
{
    id <BFFFlowItemDelegate> _delegate;	// 8 = 0x8
    OBPrivacyLinkController *_privacyLink;	// 16 = 0x10
}

+ (id)cloudConfigSkipKey;	// IMP=0x00000001000cf3f8
+ (_Bool)controllerNeedsToRun;	// IMP=0x00000001000cf328
@property(retain) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000cfcf4
- (void)passcodeInput:(id)arg1 tappedFooterButton:(id)arg2;	// IMP=0x00000001000cf5c0
- (void)passcodeInput:(id)arg1 enteredPasscode:(id)arg2;	// IMP=0x00000001000cf51c
- (void)passcodeInput:(id)arg1 willChangeContents:(id)arg2;	// IMP=0x00000001000cf510
- (void)startOver;	// IMP=0x00000001000cf408
- (_Bool)isEphemeral;	// IMP=0x00000001000cf400
- (void)scrollToFitContent;	// IMP=0x00000001000cf20c
- (_Bool)sourceHasAppleID;	// IMP=0x00000001000cf160
- (_Bool)shouldSetPasscode;	// IMP=0x00000001000cf0d4
- (void)validatePasscode:(id)arg1;	// IMP=0x00000001000ce594
- (void)nextButtonTapped;	// IMP=0x00000001000ce500
- (void)updateActions;	// IMP=0x00000001000ce3d8
- (id)passcodeInputView;	// IMP=0x00000001000cdb7c
- (id)passcodeView;	// IMP=0x00000001000cdb70
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000001000cdaf0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000cda5c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000cd9ac
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000cd768
- (void)viewDidLoad;	// IMP=0x00000001000cd5a4
- (void)loadView;	// IMP=0x00000001000cd518

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
