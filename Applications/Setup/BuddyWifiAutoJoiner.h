//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BuddyWifiAutoJoiner : NSObject
{
    struct __WiFiManagerClient *_wifiManagerRef;	// 8 = 0x8
}

+ (void)stopAutojoiningWiFiNetworks;	// IMP=0x000000010005adf8
+ (void)beginAutojoiningWiFiNetworks;	// IMP=0x000000010005adb8
+ (id)_sharedInstance;	// IMP=0x000000010005ad64
- (void)stopAutojoiningWiFiNetworks;	// IMP=0x000000010005b22c
- (void)beginAutojoiningWiFiNetworks;	// IMP=0x000000010005b174
- (struct __CFArray *)_copyAutoJoinableWiFiNetworks;	// IMP=0x000000010005afc4
- (struct __WiFiNetwork *)createNetworkWithSSID:(id)arg1;	// IMP=0x000000010005ae84
- (void)dealloc;	// IMP=0x000000010005ae38

@end

