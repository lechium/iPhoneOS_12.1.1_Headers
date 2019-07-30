//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSearchEtceteraMultiplexingViewController.h"

@class _UILegibilitySettings;

@interface SBHomeScreenSearchableTodayViewController : SBSearchEtceteraMultiplexingViewController
{
    _UILegibilitySettings *_legibilitySettings;	// 32 = 0x20
}

@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (void).cxx_destruct;	// IMP=0x000000010057822c
- (struct CGPoint)_offsetForScrollView:(id)arg1;	// IMP=0x0000000100578164
- (double)_maxClippingOffset;	// IMP=0x0000000100577fc0
- (void)_updateAppearanceForScrollViewsAnimated:(_Bool)arg1;	// IMP=0x0000000100577f14
- (void)_updateAppearanceForScrollViews;	// IMP=0x0000000100577f04
- (id)_eligibleScrollViews;	// IMP=0x0000000100577d94
- (id)_todayLayoutContentView;	// IMP=0x0000000100577d18
- (id)_todayViewController;	// IMP=0x0000000100577cc4
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000100577c2c
- (void)willActivateHosting;	// IMP=0x0000000100577bb8
- (id)requestedLegibilitySettings;	// IMP=0x0000000100577ba8
- (id)displayLayoutElementIdentifier;	// IMP=0x0000000100577b98
- (unsigned long long)defaultSearchViewDismissalReason;	// IMP=0x0000000100577b90
- (unsigned long long)defaultSearchViewPresentationSource;	// IMP=0x0000000100577b88
- (unsigned long long)initialPresentationMode;	// IMP=0x0000000100577b80
- (void)textSelectionInteractionDidEnd;	// IMP=0x0000000100577b68
- (void)textSelectionInteractionWillBegin;	// IMP=0x0000000100577b50
- (void)presentationControllerDidEndDismissing:(id)arg1;	// IMP=0x0000000100577b38
- (void)presentationControllerDidEndPresenting:(id)arg1;	// IMP=0x0000000100577b20
- (void)didChangeToMode:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100577ad0
- (void)willChangeToMode:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100577a5c
- (void)_setRequestDisableRootFolderParallax:(_Bool)arg1 reason:(id)arg2;	// IMP=0x0000000100577980
- (void)_setRequestDisableRootFolderScrolling:(_Bool)arg1 reason:(id)arg2;	// IMP=0x00000001005778a4
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100577810
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001005777b4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001005776a8
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100577560
- (void)dismissSearchForHardwareKeyboard:(_Bool)arg1;	// IMP=0x0000000100577548
- (id)init;	// IMP=0x0000000100577510

@end

