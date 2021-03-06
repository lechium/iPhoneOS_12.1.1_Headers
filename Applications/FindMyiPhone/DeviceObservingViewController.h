//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMSlidingPaneViewController.h"

@class FMIPDevice, NSMutableSet;

@interface DeviceObservingViewController : FMSlidingPaneViewController
{
    NSMutableSet *_deviceKVOTokens;	// 8 = 0x8
    FMIPDevice *_simulatedSelectedDevice;	// 16 = 0x10
    id _stopObservingAccountToken;	// 24 = 0x18
    id _selectedDeviceObservationToken;	// 32 = 0x20
}

@property(retain, nonatomic) id selectedDeviceObservationToken; // @synthesize selectedDeviceObservationToken=_selectedDeviceObservationToken;
@property(retain, nonatomic) id stopObservingAccountToken; // @synthesize stopObservingAccountToken=_stopObservingAccountToken;
@property(nonatomic) __weak FMIPDevice *simulatedSelectedDevice; // @synthesize simulatedSelectedDevice=_simulatedSelectedDevice;
@property(retain, nonatomic) NSMutableSet *deviceKVOTokens; // @synthesize deviceKVOTokens=_deviceKVOTokens;
- (void).cxx_destruct;	// IMP=0x000000010008cca8
- (void)_addDeviceObserversForDevice:(id)arg1;	// IMP=0x000000010008cb98
- (void)_removeDeviceObservers;	// IMP=0x000000010008c824
- (void)simulateSelectedDevice:(id)arg1;	// IMP=0x000000010008c6ac
- (void)selectedDeviceChanged:(id)arg1;	// IMP=0x000000010008c6a8
- (void)removeObserversForDevice:(id)arg1;	// IMP=0x000000010008c6a4
- (id)addObserversForDevice:(id)arg1;	// IMP=0x000000010008c694
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010008c4c4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010008bee4
- (void)viewDidLoad;	// IMP=0x000000010008be68

@end

