//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CBUserSettings : NSObject
{
    _Bool _checkedInWiFiSettings;	// 8 = 0x8
    _Bool _wifiPowerStateOn;	// 9 = 0x9
}

+ (id)sharedInstance;	// IMP=0x00000001000038f4
@property(nonatomic) _Bool wifiPowerStateOn; // @synthesize wifiPowerStateOn=_wifiPowerStateOn;
@property(nonatomic) _Bool checkedInWiFiSettings; // @synthesize checkedInWiFiSettings=_checkedInWiFiSettings;
- (void)checkInWiFiSettings:(_Bool)arg1;	// IMP=0x0000000100003a3c
- (id)init;	// IMP=0x0000000100003974

@end

