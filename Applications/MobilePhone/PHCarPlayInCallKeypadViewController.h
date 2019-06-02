//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHCarPlayGenericDialerViewController.h"

@class UIButton, UIView;

@interface PHCarPlayInCallKeypadViewController : PHCarPlayGenericDialerViewController
{
    UIButton *_backButton;	// 8 = 0x8
    UIButton *_endButton;	// 16 = 0x10
    UIView *_fakeNavigationBar;	// 24 = 0x18
}

@property(retain) UIView *fakeNavigationBar; // @synthesize fakeNavigationBar=_fakeNavigationBar;
@property(retain) UIButton *endButton; // @synthesize endButton=_endButton;
@property(retain) UIButton *backButton; // @synthesize backButton=_backButton;
- (void).cxx_destruct;	// IMP=0x00000001000170a0
- (id)preferredFocusEnvironments;	// IMP=0x0000000100016f04
- (void)hardwareControlEventNotification:(id)arg1;	// IMP=0x0000000100016d24
- (void)postMessageOverlayIfNeeded;	// IMP=0x00000001000168bc
- (void)setLimitedSoftPhoneKeypad:(_Bool)arg1;	// IMP=0x00000001000167f4
- (void)limitedUINotification:(id)arg1;	// IMP=0x00000001000167b4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010001673c
- (void)endButtonTapped:(id)arg1;	// IMP=0x00000001000166b8
- (void)backButtonTapped:(id)arg1;	// IMP=0x0000000100016670
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100015fe4
- (void)loadView;	// IMP=0x0000000100014f1c
- (void)dealloc;	// IMP=0x0000000100014ea4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100014d6c

@end
