//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface SBBluetoothAccessoryBatteryMonitor : NSObject
{
    NSMutableSet *_accessoryNamesInLowPower;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100101470
- (id)descriptionBuilder;	// IMP=0x0000000100101404
- (id)description;	// IMP=0x00000001001013b0
- (void)dealloc;	// IMP=0x0000000100101330
- (void)_popLowPowerAlertForAccessoryIfNecessary:(id)arg1;	// IMP=0x00000001001011bc
- (id)init;	// IMP=0x0000000100100ed8

@end
