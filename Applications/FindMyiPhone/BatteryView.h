//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BatteryOutlineView, StrokedLabel, UIImageView;

@interface BatteryView : UIView
{
    _Bool _chargerConnected;	// 8 = 0x8
    _Bool _lowPowerMode;	// 9 = 0x9
    double _batteryLevel;	// 16 = 0x10
    double _lowBatteryThreshold;	// 24 = 0x18
    StrokedLabel *_batteryLabel;	// 32 = 0x20
    BatteryOutlineView *_batteryOutlineView;	// 40 = 0x28
    UIImageView *_lightningView;	// 48 = 0x30
}

+ (id)imageNamed:(id)arg1;	// IMP=0x000000010007f224
@property(retain, nonatomic) UIImageView *lightningView; // @synthesize lightningView=_lightningView;
@property(retain, nonatomic) BatteryOutlineView *batteryOutlineView; // @synthesize batteryOutlineView=_batteryOutlineView;
@property(retain, nonatomic) StrokedLabel *batteryLabel; // @synthesize batteryLabel=_batteryLabel;
@property(nonatomic) double lowBatteryThreshold; // @synthesize lowBatteryThreshold=_lowBatteryThreshold;
@property(nonatomic) _Bool lowPowerMode; // @synthesize lowPowerMode=_lowPowerMode;
@property(nonatomic) double batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(nonatomic) _Bool chargerConnected; // @synthesize chargerConnected=_chargerConnected;
- (void).cxx_destruct;	// IMP=0x0000000100080d44
- (void)updateAccessiblityLabel;	// IMP=0x0000000100080b5c
- (void)updateBatteryLevelLabelWithLowBatteryThreshold:(double)arg1;	// IMP=0x0000000100080a30
- (void)hideLightningImage;	// IMP=0x00000001000806b8
- (void)showLightningImage;	// IMP=0x0000000100080354
- (id)_queryConstraintBetweenView:(id)arg1 andView:(id)arg2;	// IMP=0x0000000100080084
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000010007ff3c
- (void)_commonConfiguration;	// IMP=0x000000010007f378
- (void)awakeFromNib;	// IMP=0x000000010007f328
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010007f2d0

@end

