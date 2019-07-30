//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIChevronView.h"

#import "SBUILegibility.h"

@class NSString, SBWallpaperEffectView, _UILegibilitySettings;

@interface SBDashBoardVibrantWallpaperChevronView : SBUIChevronView <SBUILegibility>
{
    double _legibilityStrength;	// 8 = 0x8
    _UILegibilitySettings *_legibilitySettings;	// 16 = 0x10
    SBWallpaperEffectView *_effectView;	// 24 = 0x18
}

@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(nonatomic) double strength; // @synthesize strength=_legibilityStrength;
- (void).cxx_destruct;	// IMP=0x00000001001a5a28
- (void)_updateVibrancy;	// IMP=0x00000001001a5924
- (id)initWithColor:(id)arg1;	// IMP=0x00000001001a5810
- (id)init;	// IMP=0x00000001001a5780

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
