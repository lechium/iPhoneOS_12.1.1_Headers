//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKTitledBuddyViewController.h"

@class UIBarButtonItem, UIViewController, WDProfile;

@interface WDAppleInternalConsentViewController : HKTitledBuddyViewController
{
    UIBarButtonItem *_navigationCancelButton;	// 8 = 0x8
    UIViewController *_actionViewController;	// 16 = 0x10
    WDProfile *_profile;	// 24 = 0x18
}

@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) UIViewController *actionViewController; // @synthesize actionViewController=_actionViewController;
- (void).cxx_destruct;	// IMP=0x00000001000ef438
- (void)declineButtonTapped:(id)arg1;	// IMP=0x00000001000ef3dc
- (void)acceptButtonTapped:(id)arg1;	// IMP=0x00000001000ef2e4
- (void)cancelButtonTapped:(id)arg1;	// IMP=0x00000001000ef2d0
- (void)buttonAtIndexTapped:(long long)arg1;	// IMP=0x00000001000ef2a4
- (id)bottomAnchoredButtons;	// IMP=0x00000001000ef1c0
- (void)updateBodyTextAttributesWithMutableString:(id)arg1;	// IMP=0x00000001000eef38
- (long long)bodyTextAlignment;	// IMP=0x00000001000eef30
- (id)bodyString;	// IMP=0x00000001000eeebc
- (id)titleString;	// IMP=0x00000001000eee48
- (_Bool)shouldCustomizeNavigationBar;	// IMP=0x00000001000eee40
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000eee0c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000eed44
- (void)viewDidLoad;	// IMP=0x00000001000eec0c
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000001000eec04
- (id)initWithProfile:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x00000001000eeb38

@end

