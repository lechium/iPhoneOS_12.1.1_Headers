//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBBatteryWidgetVisibilityController : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x000000010005ae90
- (void)_makeVisible;	// IMP=0x000000010005b318
- (_Bool)_isVisible;	// IMP=0x000000010005b2e8
- (_Bool)_isAlwaysVisible;	// IMP=0x000000010005b270
- (void)_setVisibleIfNecessary:(_Bool)arg1;	// IMP=0x000000010005b224
- (void)_setHasContent:(_Bool)arg1;	// IMP=0x000000010005b1cc
- (_Bool)_containsExternalBattery;	// IMP=0x000000010005b124
- (void)_connectedDevicesDidChange;	// IMP=0x000000010005b0b8
- (id)init;	// IMP=0x000000010005af44

@end

