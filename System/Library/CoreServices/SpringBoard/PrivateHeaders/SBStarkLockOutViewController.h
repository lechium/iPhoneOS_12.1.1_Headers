//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class FBSceneHostManager, NSString, SBStarkLockOutView, SBStarkScreenController, SBUIAnimationController;

@interface SBStarkLockOutViewController : UIViewController
{
    id <SBStarkSessionConfiguring> _configuration;	// 8 = 0x8
    SBStarkScreenController *_screenController;	// 16 = 0x10
    long long _mode;	// 24 = 0x18
    SBStarkLockOutView *_modeView;	// 32 = 0x20
    SBStarkLockOutView *_previousModeView;	// 40 = 0x28
    FBSceneHostManager *_layoutWindowHostManager;	// 48 = 0x30
    NSString *_layoutWindowHostRequester;	// 56 = 0x38
    _Bool _inDealloc;	// 64 = 0x40
    _Bool _pendingAnimated;	// 65 = 0x41
    long long _pendingMode;	// 72 = 0x48
    SBUIAnimationController *_startupAnimation;	// 80 = 0x50
}

@property(retain, nonatomic) SBStarkScreenController *screenController; // @synthesize screenController=_screenController;
@property(readonly, nonatomic) SBStarkLockOutView *lockoutView; // @synthesize lockoutView=_modeView;
- (void).cxx_destruct;	// IMP=0x000000010049e7f4
- (void)_updateLockOutModeIfPending;	// IMP=0x000000010049e778
- (id)_newModeViewForMode:(long long)arg1;	// IMP=0x000000010049e1cc
- (void)animationControllerDidFinishAnimation:(id)arg1;	// IMP=0x000000010049e040
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;	// IMP=0x000000010049e03c
- (id)preferredFocusedItem;	// IMP=0x000000010049dfc4
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010049df74
- (void)viewWillLayoutSubviews;	// IMP=0x000000010049dee8
- (void)loadView;	// IMP=0x000000010049de3c
- (void)setLockOutMode:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000010049d88c
@property(nonatomic) long long lockOutMode;
- (void)dealloc;	// IMP=0x000000010049d7d4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010049d7c4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010049d7b4
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000010049d614

@end

