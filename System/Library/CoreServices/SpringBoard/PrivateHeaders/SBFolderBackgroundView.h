//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBWallpaperObserver.h"
#import "_UISettingsKeyObserver.h"

@class NSString, SBFolderSettings, UIImageView, _UILegibilitySettings;

@interface SBFolderBackgroundView : UIView <_UISettingsKeyObserver, SBWallpaperObserver>
{
    UIImageView *_tintView;	// 8 = 0x8
    SBFolderSettings *_folderSettings;	// 16 = 0x10
    double _continuousCornerRadius;	// 24 = 0x18
    _UILegibilitySettings *_legibilitySettings;	// 32 = 0x20
}

+ (double)cornerRadiusToInsetContent;	// IMP=0x000000010026487c
+ (struct CGSize)folderBackgroundSize;	// IMP=0x0000000100264604
+ (void)warmupIfNecessary;	// IMP=0x0000000100264600
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (void).cxx_destruct;	// IMP=0x000000010026510c
- (void)_setContinuousCornerRadius:(double)arg1;	// IMP=0x0000000100265080
- (void)_reduceTransparencyChanged;	// IMP=0x0000000100265048
- (_Bool)_hasLowQualityBackground;	// IMP=0x0000000100265044
- (void)_updateForHavingLowQualityBackground:(_Bool)arg1;	// IMP=0x0000000100264d70
- (id)_tintViewBackgroundColorAtFullAlpha;	// IMP=0x0000000100264d50
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x0000000100264d4c
- (void)layoutSubviews;	// IMP=0x0000000100264d10
- (void)dealloc;	// IMP=0x0000000100264cb0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100264b2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

