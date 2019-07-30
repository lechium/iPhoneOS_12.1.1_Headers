//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBWallpaperObserver.h"

@class NSString, SBDockIconListView, SBHighlightView, SBWallpaperEffectView, UIImageView, _UILegibilitySettings;

@interface SBDockView : UIView <SBWallpaperObserver>
{
    SBDockIconListView *_iconListView;	// 8 = 0x8
    SBHighlightView *_highlightView;	// 16 = 0x10
    SBWallpaperEffectView *_backgroundView;	// 24 = 0x18
    UIImageView *_backgroundImageView;	// 32 = 0x20
    UIView *_accessibilityBackgroundView;	// 40 = 0x28
    _Bool _forSnapshot;	// 48 = 0x30
    _UILegibilitySettings *_legibilitySettings;	// 56 = 0x38
    unsigned long long _dockEdge;	// 64 = 0x40
}

+ (double)defaultHeight;	// IMP=0x00000001003f7ae8
@property(nonatomic) unsigned long long dockEdge; // @synthesize dockEdge=_dockEdge;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (void).cxx_destruct;	// IMP=0x00000001003f85f8
- (void)wallpaperDidChangeForVariant:(long long)arg1;	// IMP=0x00000001003f8560
- (void)_backgroundContrastDidChange:(id)arg1;	// IMP=0x00000001003f83b0
- (id)_updatedBackgroundImage;	// IMP=0x00000001003f821c
- (void)setBackgroundAlpha:(double)arg1;	// IMP=0x00000001003f8194
- (void)layoutSubviews;	// IMP=0x00000001003f7f94
- (id)dockListView;	// IMP=0x00000001003f7ef0
- (void)dealloc;	// IMP=0x00000001003f7e28
- (id)initWithDockListView:(id)arg1 forSnapshot:(_Bool)arg2;	// IMP=0x00000001003f7afc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

