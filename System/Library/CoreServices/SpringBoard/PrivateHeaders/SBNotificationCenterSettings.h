//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@class SBBounceSettings;

@interface SBNotificationCenterSettings : SBUISettings
{
    SBBounceSettings *_bounceSettings;	// 8 = 0x8
    double _grabberAnimationDuration;	// 16 = 0x10
    double _actionButtonVibrantTintLevel;	// 24 = 0x18
    double _actionButtonVibrantTintAlpha;	// 32 = 0x20
    double _actionButtonSelectedVibrantTintLevel;	// 40 = 0x28
    double _actionButtonSelectedVibrantTintAlpha;	// 48 = 0x30
    double _actionButtonOverlayTintLevel;	// 56 = 0x38
    double _actionButtonOverlayTintAlpha;	// 64 = 0x40
    double _actionButtonSelectedOverlayTintLevel;	// 72 = 0x48
    double _actionButtonSelectedOverlayTintAlpha;	// 80 = 0x50
    double _modeButtonTintLevel;	// 88 = 0x58
    double _modeButtonTintAlpha;	// 96 = 0x60
    double _modeLabelTintLevel;	// 104 = 0x68
    double _modeLabelTintAlpha;	// 112 = 0x70
}

+ (id)settingsControllerModule;	// IMP=0x00000001002ed6dc
@property(nonatomic) double modeLabelTintAlpha; // @synthesize modeLabelTintAlpha=_modeLabelTintAlpha;
@property(nonatomic) double modeLabelTintLevel; // @synthesize modeLabelTintLevel=_modeLabelTintLevel;
@property(nonatomic) double modeButtonTintAlpha; // @synthesize modeButtonTintAlpha=_modeButtonTintAlpha;
@property(nonatomic) double modeButtonTintLevel; // @synthesize modeButtonTintLevel=_modeButtonTintLevel;
@property(nonatomic) double actionButtonSelectedOverlayTintAlpha; // @synthesize actionButtonSelectedOverlayTintAlpha=_actionButtonSelectedOverlayTintAlpha;
@property(nonatomic) double actionButtonSelectedOverlayTintLevel; // @synthesize actionButtonSelectedOverlayTintLevel=_actionButtonSelectedOverlayTintLevel;
@property(nonatomic) double actionButtonOverlayTintAlpha; // @synthesize actionButtonOverlayTintAlpha=_actionButtonOverlayTintAlpha;
@property(nonatomic) double actionButtonOverlayTintLevel; // @synthesize actionButtonOverlayTintLevel=_actionButtonOverlayTintLevel;
@property(nonatomic) double actionButtonSelectedVibrantTintAlpha; // @synthesize actionButtonSelectedVibrantTintAlpha=_actionButtonSelectedVibrantTintAlpha;
@property(nonatomic) double actionButtonSelectedVibrantTintLevel; // @synthesize actionButtonSelectedVibrantTintLevel=_actionButtonSelectedVibrantTintLevel;
@property(nonatomic) double actionButtonVibrantTintAlpha; // @synthesize actionButtonVibrantTintAlpha=_actionButtonVibrantTintAlpha;
@property(nonatomic) double actionButtonVibrantTintLevel; // @synthesize actionButtonVibrantTintLevel=_actionButtonVibrantTintLevel;
@property double grabberAnimationDuration; // @synthesize grabberAnimationDuration=_grabberAnimationDuration;
@property(retain, nonatomic) SBBounceSettings *bounceSettings; // @synthesize bounceSettings=_bounceSettings;
- (void).cxx_destruct;	// IMP=0x00000001002ee06c
- (void)setDefaultValues;	// IMP=0x00000001002ed590

@end

