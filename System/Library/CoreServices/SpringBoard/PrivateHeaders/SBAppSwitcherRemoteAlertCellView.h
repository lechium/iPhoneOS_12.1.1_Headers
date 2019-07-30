//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSwitcherWallpaperPageContentView.h"

@class FBSceneHostManager, SBDisplayItem, SBFakeStatusBarView, SBOrientationTransformWrapperView, SBRemoteAlertAdapter, UIView;

@interface SBAppSwitcherRemoteAlertCellView : SBSwitcherWallpaperPageContentView
{
    SBDisplayItem *_displayItem;	// 8 = 0x8
    SBOrientationTransformWrapperView *_portraitContentWrapper;	// 16 = 0x10
    SBOrientationTransformWrapperView *_rotatingContentWrapper;	// 24 = 0x18
    FBSceneHostManager *_contextHostManager;	// 32 = 0x20
    UIView *_alertContentViewWrapper;	// 40 = 0x28
    SBFakeStatusBarView *_fakeStatusBar;	// 48 = 0x30
    UIView *_contentView;	// 56 = 0x38
    SBRemoteAlertAdapter *_remoteAlert;	// 64 = 0x40
    _Bool _remoteAlertHasCustomWallpaperStyle;	// 72 = 0x48
    _Bool _remoteAlertRemoteTunnelingWasActive;	// 73 = 0x49
    long long _remoteAlertWallpaperStyle;	// 80 = 0x50
}

@property(nonatomic) _Bool remoteAlertRemoteTunnelingWasActive; // @synthesize remoteAlertRemoteTunnelingWasActive=_remoteAlertRemoteTunnelingWasActive;
@property(nonatomic) long long remoteAlertWallpaperStyle; // @synthesize remoteAlertWallpaperStyle=_remoteAlertWallpaperStyle;
@property(nonatomic) _Bool remoteAlertHasCustomWallpaperStyle; // @synthesize remoteAlertHasCustomWallpaperStyle=_remoteAlertHasCustomWallpaperStyle;
@property(readonly, copy, nonatomic) SBDisplayItem *displayItem; // @synthesize displayItem=_displayItem;
- (void).cxx_destruct;	// IMP=0x0000000100135058
- (void)_addStatusBar;	// IMP=0x0000000100134eb4
- (void)viewDismissing:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;	// IMP=0x0000000100134d94
- (void)viewPresenting:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;	// IMP=0x0000000100134d78
- (void)prepareToBecomeVisibleIfNecessary;	// IMP=0x0000000100134d58
- (void)_updateHosting;	// IMP=0x0000000100134a0c
- (void)_updateBackgroundStyle;	// IMP=0x00000001001349b4
- (void)hostAlertWithManager:(id)arg1;	// IMP=0x0000000100134948
- (void)installAlertInViewController:(id)arg1;	// IMP=0x0000000100134778
- (void)setOrientation:(long long)arg1;	// IMP=0x00000001001346e4
- (void)setAlert:(id)arg1;	// IMP=0x0000000100134628
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x00000001001345a4
- (void)layoutSubviews;	// IMP=0x000000010013448c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010013440c
- (void)didMoveToWindow;	// IMP=0x00000001001343bc
- (void)didMoveToSuperview;	// IMP=0x000000010013436c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001001342e4
- (void)dealloc;	// IMP=0x000000010013427c
- (id)initWithFrame:(struct CGRect)arg1 remoteAlert:(id)arg2 displayItem:(id)arg3;	// IMP=0x0000000100134030

@end
