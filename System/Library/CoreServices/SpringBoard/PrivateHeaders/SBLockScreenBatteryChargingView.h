//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewBase.h"

@class _UILegibilitySettings;

@interface SBLockScreenBatteryChargingView : SBDashBoardViewBase
{
    _UILegibilitySettings *_legibilitySettings;	// 8 = 0x8
    double _alignmentPercent;	// 16 = 0x10
}

+ (id)maskImageNameForExternalChargingBattery;	// IMP=0x00000001003913bc
+ (id)maskImageNameForInternalChargingBattery;	// IMP=0x000000010039133c
+ (id)maskImageNameForChargingBattery;	// IMP=0x00000001003912bc
+ (id)batteryChargingViewWithDoubleBattery;	// IMP=0x000000010039127c
+ (id)batteryChargingViewWithSingleBattery;	// IMP=0x000000010039123c
@property(nonatomic) double alignmentPercent; // @synthesize alignmentPercent=_alignmentPercent;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (void).cxx_destruct;	// IMP=0x00000001003916ec
- (id)_chargePercentFont;	// IMP=0x00000001003916c4
- (id)_updateChargeString:(id)arg1 oldLabel:(id)arg2;	// IMP=0x0000000100391518
@property(nonatomic) _Bool batteryVisible;
@property(readonly, nonatomic) double desiredVisibilityDuration;
- (void)setSecondaryBatteryText:(id)arg1 forBattery:(id)arg2;	// IMP=0x00000001003914e8
- (void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2;	// IMP=0x00000001003914e4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001003913e8

@end

