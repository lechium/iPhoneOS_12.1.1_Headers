//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@interface SBIconColorSettings : SBUISettings
{
    _Bool _blurryFolderIcons;	// 8 = 0x8
    _Bool _blurryCloseBoxes;	// 9 = 0x9
    _Bool _suppressJitter;	// 10 = 0xa
    _Bool _closeBoxesEverywhere;	// 11 = 0xb
    double _maxSaturationBoost;	// 16 = 0x10
    double _maxSaturation;	// 24 = 0x18
    double _maxBrightnessBoost;	// 32 = 0x20
    double _maxBrightness;	// 40 = 0x28
    double _colorAlpha;	// 48 = 0x30
    double _whiteAlpha;	// 56 = 0x38
}

+ (id)settingsControllerModule;	// IMP=0x00000001005bbd4c
@property(nonatomic) _Bool closeBoxesEverywhere; // @synthesize closeBoxesEverywhere=_closeBoxesEverywhere;
@property(nonatomic) _Bool suppressJitter; // @synthesize suppressJitter=_suppressJitter;
@property(nonatomic) double whiteAlpha; // @synthesize whiteAlpha=_whiteAlpha;
@property(nonatomic) double colorAlpha; // @synthesize colorAlpha=_colorAlpha;
@property(nonatomic) double maxBrightness; // @synthesize maxBrightness=_maxBrightness;
@property(nonatomic) double maxBrightnessBoost; // @synthesize maxBrightnessBoost=_maxBrightnessBoost;
@property(nonatomic) double maxSaturation; // @synthesize maxSaturation=_maxSaturation;
@property(nonatomic) double maxSaturationBoost; // @synthesize maxSaturationBoost=_maxSaturationBoost;
@property(nonatomic) _Bool blurryCloseBoxes; // @synthesize blurryCloseBoxes=_blurryCloseBoxes;
@property(nonatomic) _Bool blurryFolderIcons; // @synthesize blurryFolderIcons=_blurryFolderIcons;
- (void)setDefaultValues;	// IMP=0x00000001005bbc5c

@end

