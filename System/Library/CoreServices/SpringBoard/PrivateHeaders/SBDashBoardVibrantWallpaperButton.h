//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIVibrantButton.h"

@class SBWallpaperEffectView;

@interface SBDashBoardVibrantWallpaperButton : SBUIVibrantButton
{
    SBWallpaperEffectView *_effectView;	// 8 = 0x8
}

@property(readonly, nonatomic) SBWallpaperEffectView *effectView; // @synthesize effectView=_effectView;
- (void).cxx_destruct;	// IMP=0x0000000100229f14
- (void)_updateVibrancy;	// IMP=0x0000000100229ea8
- (void)setLegibilitySettings:(id)arg1;	// IMP=0x0000000100229e58
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100229d94

@end

