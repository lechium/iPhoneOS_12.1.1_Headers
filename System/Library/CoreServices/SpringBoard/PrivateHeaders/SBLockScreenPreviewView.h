//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBDashBoardPageControl, SBFLockScreenDateView, SBFakeStatusBarView, SBUICallToActionLabel, SBUILegibilityView, SBWallpaperController, UILabel, _UILegibilityLabel, _UILegibilitySettings;

@interface SBLockScreenPreviewView : UIView
{
    UIView *_wallpaperView;	// 8 = 0x8
    SBFLockScreenDateView *_dateView;	// 16 = 0x10
    _UILegibilityLabel *_slideToUnlockLegibilityLabel;	// 24 = 0x18
    SBFakeStatusBarView *_statusBar;	// 32 = 0x20
    _UILegibilitySettings *_legibilitySettings;	// 40 = 0x28
    SBWallpaperController *_wallpaperController;	// 48 = 0x30
    SBUILegibilityView *_cameraView;	// 56 = 0x38
    UILabel *_slideToUnlockView;	// 64 = 0x40
    SBDashBoardPageControl *_dashBoardPageControl;	// 72 = 0x48
    SBUICallToActionLabel *_callToActionLabel;	// 80 = 0x50
    _Bool _useDashBoard;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010026b0d4
- (void)_layoutCallToActionLabel;	// IMP=0x000000010026aff4
- (void)_layoutPageControl;	// IMP=0x000000010026af54
- (void)_layoutCameraView;	// IMP=0x000000010026ae90
- (void)_layoutSlideToUnlockView;	// IMP=0x000000010026ad10
- (void)_layoutWallpaperView;	// IMP=0x000000010026acd4
- (void)_layoutDateView;	// IMP=0x000000010026ac24
- (void)_layoutStatusBar;	// IMP=0x000000010026abd4
- (void)layoutSubviews;	// IMP=0x000000010026ab18
- (void)_setupCallToActionLabel;	// IMP=0x000000010026aa8c
- (void)_setupPageControl;	// IMP=0x000000010026a9c0
- (void)_setupCameraView;	// IMP=0x000000010026a8b8
- (void)_setupSlideToUnlockView;	// IMP=0x000000010026a5d4
- (void)_setupStatusBar;	// IMP=0x000000010026a494
- (void)_setupDateView;	// IMP=0x000000010026a3b4
- (void)_setupWallpaperView;	// IMP=0x000000010026a288
- (id)_legibilityPrototypeSettings;	// IMP=0x000000010026a204
- (id)initWithFrame:(struct CGRect)arg1 wallpaperController:(id)arg2;	// IMP=0x000000010026a040

@end

