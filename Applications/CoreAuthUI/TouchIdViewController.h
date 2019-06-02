//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TransitionViewController.h"

@class TouchIDAlertHeaderView, UIAlertController, UIColor;

@interface TouchIdViewController : TransitionViewController
{
    UIAlertController *_alertController;	// 8 = 0x8
    TouchIDAlertHeaderView *_headerView;	// 16 = 0x10
    _Bool _dismissed;	// 24 = 0x18
    _Bool _showAlert;	// 25 = 0x19
    _Bool _fallbackVisible;	// 26 = 0x1a
    _Bool _showFallback;	// 27 = 0x1b
    UIColor *_tintColor;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010000e0c0
- (int)_preferredStatusBarVisibility;	// IMP=0x000000010000e0b8
- (void)dismissChildWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000df48
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000def8
- (void)mechanismEvent:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000dbb0
- (void)_setActionButtons;	// IMP=0x000000010000d378
- (void)_enterPassword;	// IMP=0x000000010000d36c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010000d2f4
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x000000010000d24c
- (void)loadView;	// IMP=0x000000010000cd6c
- (void)didReceiveAuthenticationData;	// IMP=0x000000010000ca4c

@end

