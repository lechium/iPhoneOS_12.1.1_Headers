//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIStatusBarStyleDelegate.h"

@class NSMutableSet, NSString, SBStarkStatusBarStateProvider, UIStatusBar, UIView;

@interface SBStarkStatusBarViewController : UIViewController <UIStatusBarStyleDelegate>
{
    id <SBStarkSessionConfiguring> _configuration;	// 8 = 0x8
    SBStarkStatusBarStateProvider *_statusBarStateProvider;	// 16 = 0x10
    UIStatusBar *_statusBarView;	// 24 = 0x18
    id <UIStatusBarStyleDelegate> _statusBarStyleDelegate;	// 32 = 0x20
    NSMutableSet *_statusBarHideReasons;	// 40 = 0x28
    long long _requestedStyle;	// 48 = 0x30
    _Bool _styleHasBeenRequested;	// 56 = 0x38
    double _statusBarWidth;	// 64 = 0x40
    UIView *_separatorView;	// 72 = 0x48
    _Bool _separatorHidden;	// 80 = 0x50
    id <SBStarkStatusBarViewControllerDelegate> _delegate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000100321af8
- (void)statusBar:(id)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3;	// IMP=0x0000000100321ae0
- (void)statusBar:(id)arg1 didAnimateFromHeight:(double)arg2 toHeight:(double)arg3 animation:(int)arg4;	// IMP=0x0000000100321adc
- (void)statusBar:(id)arg1 willAnimateFromHeight:(double)arg2 toHeight:(double)arg3 duration:(double)arg4 animation:(int)arg5;	// IMP=0x0000000100321a80
- (long long)statusBar:(id)arg1 styleForRequestedStyle:(long long)arg2 overrides:(int)arg3;	// IMP=0x0000000100321a5c
@property(nonatomic, getter=isSeparatorHidden) _Bool separatorHidden;
- (void)_backPressed:(id)arg1;	// IMP=0x0000000100321980
- (_Bool)_isStatusBarHidden;	// IMP=0x0000000100321950
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100321938
- (void)loadView;	// IMP=0x0000000100321518
- (void)_layoutStatusBar:(id)arg1;	// IMP=0x0000000100321384
- (id)newFakeStatusBarWithStyle:(long long)arg1;	// IMP=0x000000010032121c
- (id)newFakeStatusBar;	// IMP=0x0000000100321204
- (void)updateStatusBarWithRequestedStyle:(long long)arg1 animationFactory:(id)arg2;	// IMP=0x00000001003210f0
- (void)setStatusBarHidden:(_Bool)arg1 forReason:(id)arg2 withAnimationFactory:(id)arg3;	// IMP=0x0000000100320e08
@property(nonatomic) __weak id <UIStatusBarStyleDelegate> statusBarStyleDelegate;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100320d48
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100320d34
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000100320b7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
