//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

@class BCBatteryDeviceController, NSMutableArray, SBLockScreenBatteryChargingView;

@interface SBDashBoardChargingViewController : SBDashBoardViewControllerBase
{
    BCBatteryDeviceController *_batteryController;	// 8 = 0x8
    SBLockScreenBatteryChargingView *_chargingView;	// 16 = 0x10
    NSMutableArray *_connectedDevices;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010057aa30
- (void)_updateTextForBatteries;	// IMP=0x000000010057a924
- (long long)presentationStyle;	// IMP=0x000000010057a91c
- (long long)presentationPriority;	// IMP=0x000000010057a914
- (long long)presentationType;	// IMP=0x000000010057a90c
- (_Bool)handleEvent:(id)arg1;	// IMP=0x000000010057a7f4
- (void)aggregateAppearance:(id)arg1;	// IMP=0x000000010057a580
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010057a4fc
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010057a23c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010057a1ec
- (void)viewDidLoad;	// IMP=0x000000010057a170
- (void)loadView;	// IMP=0x000000010057a0c4
- (void)dealloc;	// IMP=0x000000010057a038
- (id)init;	// IMP=0x0000000100579f04

@end

