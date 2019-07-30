//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SBDismissOnlyAlertItem;

@interface SBLockdownManager : NSObject
{
    int _state;	// 8 = 0x8
    _Bool _settingUpActivationState;	// 12 = 0xc
    _Bool _isBricked;	// 13 = 0xd
    _Bool _hasShownMismatchedSIM;	// 14 = 0xe
    SBDismissOnlyAlertItem *_activatingAlertItem;	// 16 = 0x10
    NSString *_unqiueDeviceIdentifier;	// 24 = 0x18
}

+ (_Bool)_isDeveloperDevice;	// IMP=0x000000010012c5e0
+ (id)sharedInstance;	// IMP=0x000000010012b450
- (void).cxx_destruct;	// IMP=0x000000010012c670
- (int)lockdownState;	// IMP=0x000000010012c5a0
- (_Bool)brickedDevice;	// IMP=0x000000010012c558
- (void)_setupActivationState;	// IMP=0x000000010012c0cc
- (void)_serviceAvailabilityChanged:(id)arg1;	// IMP=0x000000010012c0c0
- (void)_activationFailed;	// IMP=0x000000010012bf64
- (void)_resetActivationState;	// IMP=0x000000010012bed4
- (void)_postAlertsIfNeeded;	// IMP=0x000000010012bcb4
- (_Bool)_shouldShowTelephonyAlerts;	// IMP=0x000000010012bc60
- (void)_setCurrentAlertItem:(id)arg1;	// IMP=0x000000010012bb84
- (_Bool)_isRegisteredToNetwork;	// IMP=0x000000010012bb24
- (void)_setHasEverRegistered:(_Bool)arg1;	// IMP=0x000000010012ba28
- (_Bool)_hasEverRegistered;	// IMP=0x000000010012b71c
- (id)init;	// IMP=0x000000010012b5bc

@end

