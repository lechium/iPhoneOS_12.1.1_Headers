//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BFFFlowItem.h"
#import "BFFNavigationControllerDelegate.h"
#import "BuddyActivationConfigurationDelegate.h"
#import "WFBuddyViewControllerDelegate.h"

@class BFFNavigationController, NSString, NSTimer, UIAlertController, WFBuddyViewController, WFNetworkListController;

@interface BuddyWiFiController : NSObject <WFBuddyViewControllerDelegate, BFFNavigationControllerDelegate, BuddyActivationConfigurationDelegate, BFFFlowItem>
{
    WFBuddyViewController *_viewController;	// 8 = 0x8
    BFFNavigationController *_navigationController;	// 16 = 0x10
    WFNetworkListController *_wifiManager;	// 24 = 0x18
    UIAlertController *_badWifiAlert;	// 32 = 0x20
    NSTimer *_wifiTimeoutTimer;	// 40 = 0x28
    _Bool _showingWifiTimeoutSpinner;	// 48 = 0x30
    _Bool _wifiWillPush;	// 49 = 0x31
    _Bool _appleIDWifiSkipAlertShown;	// 50 = 0x32
    _Bool _showNetworkSettings;	// 51 = 0x33
    _Bool _supportsCellularActivation;	// 52 = 0x34
    id <BFFFlowItemDelegate> _delegate;	// 56 = 0x38
}

+ (id)cloudConfigSkipKey;	// IMP=0x00000001000cfe94
+ (_Bool)controllerNeedsToRun;	// IMP=0x00000001000cfe20
+ (_Bool)deviceHasWiFi;	// IMP=0x00000001000cfd38
+ (_Bool)controllerAffectedByTapFreeSetup;	// IMP=0x00000001000cfd30
@property(nonatomic) _Bool supportsCellularActivation; // @synthesize supportsCellularActivation=_supportsCellularActivation;
@property(nonatomic) _Bool showNetworkSettings; // @synthesize showNetworkSettings=_showNetworkSettings;
@property(readonly, nonatomic) _Bool appleIDWifiSkipAlertShown; // @synthesize appleIDWifiSkipAlertShown=_appleIDWifiSkipAlertShown;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000d1cac
- (void)activationConfigurationChanged;	// IMP=0x00000001000d1bc0
- (void)buddyViewControllerDidPressAlternateSetupButton:(id)arg1;	// IMP=0x00000001000d1ab4
- (void)updateActivationState;	// IMP=0x00000001000d1a40
- (void)wifiTimeoutFired:(id)arg1;	// IMP=0x00000001000d13f8
- (void)_clearWifiTimeoutTimer;	// IMP=0x00000001000d13bc
- (void)wifiNetworkJoinStarted:(id)arg1;	// IMP=0x00000001000d1240
- (void)wifiNetworkJoinFinished:(id)arg1;	// IMP=0x00000001000d0fac
- (void)_resetWifiControllerTimeoutSpinner;	// IMP=0x00000001000d0ec8
- (void)_showNavBarSpinner;	// IMP=0x00000001000d0dfc
- (void)updateNextButton;	// IMP=0x00000001000d0b18
- (void)reachabilityChanged:(_Bool)arg1;	// IMP=0x00000001000d096c
- (void)_wifiControllerDone:(id)arg1;	// IMP=0x00000001000d0360
- (void)_wifiControllerReallyDone;	// IMP=0x00000001000d0270
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 operation:(long long)arg3 animated:(_Bool)arg4;	// IMP=0x00000001000d01d8
- (void)controllerWasPopped;	// IMP=0x00000001000d01c8
- (void)setNavigationController:(id)arg1;	// IMP=0x00000001000d0144
- (id)viewController;	// IMP=0x00000001000d0134
- (void)stopScanning;	// IMP=0x00000001000d011c
- (void)startScanning;	// IMP=0x00000001000d0104
- (id)init;	// IMP=0x00000001000cfe9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

