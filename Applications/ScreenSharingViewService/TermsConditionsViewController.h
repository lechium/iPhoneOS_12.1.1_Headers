//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIRemoteAlertServiceViewController.h"

@class NSXPCConnection, UITextView;

@interface TermsConditionsViewController : SBUIRemoteAlertServiceViewController
{
    UITextView *termsTextView;	// 8 = 0x8
    NSXPCConnection *helperToolConnection;	// 16 = 0x10
    id helperTool;	// 24 = 0x18
}

@property(retain) id helperTool; // @synthesize helperTool;
@property(retain) NSXPCConnection *helperToolConnection; // @synthesize helperToolConnection;
- (void).cxx_destruct;	// IMP=0x0000000100005bb4
- (void)handleDoubleHeightStatusBarTap;	// IMP=0x0000000100005b78
- (void)decline:(id)arg1;	// IMP=0x0000000100005b68
- (void)agree:(id)arg1;	// IMP=0x0000000100005b58
- (void)postResultNotification:(_Bool)arg1;	// IMP=0x0000000100005a78
- (void)setUserInfo:(id)arg1;	// IMP=0x0000000100005a74
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100005a40
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000059e8
- (void)viewDidLoad;	// IMP=0x00000001000058dc
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000001000057c8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000053c0

@end
