//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBWallpaperEffectView, _UIBackdropView;

@interface SBAppResizingBlurContainerView : UIView
{
    SBWallpaperEffectView *_wallpaperEffectView;	// 8 = 0x8
    UIView *_appSnapshotView;	// 16 = 0x10
    _UIBackdropView *_blurView;	// 24 = 0x18
}

@property(retain, nonatomic) _UIBackdropView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *appSnapshotView; // @synthesize appSnapshotView=_appSnapshotView;
@property(retain, nonatomic) SBWallpaperEffectView *wallpaperEffectView; // @synthesize wallpaperEffectView=_wallpaperEffectView;
- (void).cxx_destruct;	// IMP=0x0000000100375394
- (void)layoutSubviews;	// IMP=0x00000001003751a8

@end

