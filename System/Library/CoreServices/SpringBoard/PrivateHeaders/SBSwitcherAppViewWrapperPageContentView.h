//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSwitcherWallpaperPageContentView.h"

@class SBAppSwitcherSettings, SBAppView, SBDisplayItem, SBFakeStatusBarView, SBLayoutState, SBOrientationTransformWrapperView;

@interface SBSwitcherAppViewWrapperPageContentView : SBSwitcherWallpaperPageContentView
{
    SBAppView *_appView;	// 8 = 0x8
    SBOrientationTransformWrapperView *_appTransformView;	// 16 = 0x10
    SBDisplayItem *_displayItem;	// 24 = 0x18
    SBLayoutState *_layoutState;	// 32 = 0x20
    SBFakeStatusBarView *_fakeStatusBar;	// 40 = 0x28
    id <SBSwitcherAppViewWrapperPageContentViewDelegate> _delegate;	// 48 = 0x30
    SBAppSwitcherSettings *_settings;	// 56 = 0x38
    _Bool _presenting;	// 64 = 0x40
    _Bool _interactive;	// 65 = 0x41
    int _savedStatusBarStyleOverride;	// 68 = 0x44
}

@property(retain, nonatomic) SBDisplayItem *displayItem; // @synthesize displayItem=_displayItem;
@property(nonatomic) __weak id <SBSwitcherAppViewWrapperPageContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SBAppView *appView; // @synthesize appView=_appView;
- (void).cxx_destruct;	// IMP=0x000000010033015c
- (void)_createStatusBarIfNeeded;	// IMP=0x000000010032ff68
- (void)_updateBreadcrumbOverrides;	// IMP=0x000000010032fe1c
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x000000010032fd98
- (void)interactionDidEnd:(_Bool)arg1;	// IMP=0x000000010032fc74
- (void)viewDismissing:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;	// IMP=0x000000010032fb54
- (void)viewPresenting:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;	// IMP=0x000000010032f974
- (void)prepareToBecomeVisibleIfNecessary;	// IMP=0x000000010032f968
- (void)_layoutFakeStatusBar;	// IMP=0x000000010032f800
- (void)layoutSubviews;	// IMP=0x000000010032f5c4
- (void)setContentMode:(long long)arg1;	// IMP=0x000000010032f574
- (void)invalidate;	// IMP=0x000000010032f55c
- (double)cornerRadius;	// IMP=0x000000010032f508
- (void)setCornerRadius:(double)arg1;	// IMP=0x000000010032f444
- (void)setOrientation:(long long)arg1;	// IMP=0x000000010032f344
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010032f318
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010032f2fc
- (id)initWithFrame:(struct CGRect)arg1 appView:(id)arg2 displayItem:(id)arg3 layoutState:(id)arg4 delegate:(id)arg5;	// IMP=0x000000010032ecbc

@end

