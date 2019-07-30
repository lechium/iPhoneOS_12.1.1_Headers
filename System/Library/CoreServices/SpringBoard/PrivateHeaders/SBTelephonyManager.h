//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RadiosPreferencesDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString, NSTimer, NWSystemPathMonitor, RadiosPreferences, SBAlertItem, TUCall;

@interface SBTelephonyManager : NSObject <RadiosPreferencesDelegate>
{
    struct __CTServerConnection *_serverConnection;	// 8 = 0x8
    _Bool _containsCellularRadio;	// 16 = 0x10
    _Bool _hasCellularTelephony;	// 17 = 0x11
    _Bool _hasCellularData;	// 18 = 0x12
    struct __CFString *_cachedCTRegistrationCellStatus;	// 24 = 0x18
    struct __CFString *_cachedCTRegistrationDisplayStatus;	// 32 = 0x20
    int _cachedCTRegistrationIsForcedHome;	// 40 = 0x28
    int _cellRegistrationStatus;	// 44 = 0x2c
    int _registrationStatus;	// 48 = 0x30
    NSTimer *_fakeServiceTimer;	// 56 = 0x38
    NSTimer *_fakeCellServiceTimer;	// 64 = 0x40
    _Bool _signalStrengthHasBeenSet;	// 72 = 0x48
    int _signalStrength;	// 76 = 0x4c
    int _signalStrengthBars;	// 80 = 0x50
    NSString *_operatorName;	// 88 = 0x58
    NSString *_lastKnownNetworkCountryCode;	// 96 = 0x60
    unsigned int _usingWifi:1;	// 104 = 0x68
    unsigned int _usingVPN:1;	// 104 = 0x68
    unsigned int _pretendingToSearch:1;	// 104 = 0x68
    unsigned int _callForwardingIndicator:2;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_wirelessModemDynamicStoreQueue;	// 112 = 0x70
    struct __SCDynamicStore *_queue_wirelessModemDynamicStore;	// 120 = 0x78
    struct __CFString *_queue_wirelessModemDynamicStoreSharingKey;	// 128 = 0x80
    _Bool _isNetworkTethering;	// 136 = 0x88
    int _numberOfNetworkTetheredDevices;	// 140 = 0x8c
    unsigned int _hasShownWaitingAlert:1;	// 144 = 0x90
    SBAlertItem *_activationAlertItem;	// 152 = 0x98
    int _numActivationFailures;	// 160 = 0xa0
    int _inEmergencyCallbackMode;	// 164 = 0xa4
    unsigned int _loggingCallAudio:1;	// 168 = 0xa8
    RadiosPreferences *_radioPrefs;	// 176 = 0xb0
    int _needsUserIdentificationModule;	// 184 = 0xb8
    NSString *_simStatus;	// 192 = 0xc0
    int _suppressesCellDataIndicator;	// 200 = 0xc8
    int _suppressesCellIndicators;	// 204 = 0xcc
    int _lteConnectionShows4G;	// 208 = 0xd0
    int _modemDataConnectionType;	// 212 = 0xd4
    _Bool _modemDataConnectionTypeIsKnown;	// 216 = 0xd8
    _Bool _fallingBackToCellular;	// 217 = 0xd9
    struct tcp_connection_fallback_watch_s *_cellularFallbackWatcher;	// 224 = 0xe0
    void *_queue_fastDormancySuspendAssertion;	// 232 = 0xe8
    NWSystemPathMonitor *_systemPathMonitor;	// 240 = 0xf0
    TUCall *_incomingCall;	// 248 = 0xf8
    TUCall *_activeCall;	// 256 = 0x100
    TUCall *_heldCall;	// 264 = 0x108
    TUCall *_outgoingCall;	// 272 = 0x110
}

+ (id)sharedTelephonyManagerCreatingIfNecessary:(_Bool)arg1;	// IMP=0x0000000100092c4c
+ (id)sharedTelephonyManager;	// IMP=0x0000000100092c3c
+ (struct __CTServerConnection *)defaultTelephonyCenter;	// IMP=0x0000000100092c18
@property(retain, nonatomic) TUCall *outgoingCall; // @synthesize outgoingCall=_outgoingCall;
@property(retain, nonatomic) TUCall *heldCall; // @synthesize heldCall=_heldCall;
@property(retain, nonatomic) TUCall *activeCall; // @synthesize activeCall=_activeCall;
@property(retain, nonatomic) TUCall *incomingCall; // @synthesize incomingCall=_incomingCall;
- (void).cxx_destruct;	// IMP=0x00000001000a0920
- (void)_setIsNetworkTethering:(_Bool)arg1 withNumberOfDevices:(int)arg2;	// IMP=0x00000001000a062c
- (int)numberOfNetworkTetheredDevices;	// IMP=0x00000001000a061c
- (_Bool)isNetworkTethering;	// IMP=0x00000001000a060c
- (void)_queue_noteWirelessModemDynamicStoreChanged;	// IMP=0x00000001000a00b0
- (int)registrationCauseCode;	// IMP=0x00000001000a004c
- (_Bool)needsUserIdentificationModule;	// IMP=0x000000010009fee0
- (id)SIMStatus;	// IMP=0x000000010009fe98
- (void)_setSIMStatus:(id)arg1;	// IMP=0x000000010009fc4c
- (int)registrationStatus;	// IMP=0x000000010009fc3c
- (int)cellRegistrationStatus;	// IMP=0x000000010009fc2c
- (id)operatorName;	// IMP=0x000000010009fbbc
- (void)_operatorBundleChanged;	// IMP=0x000000010009fa04
- (void)setOperatorName:(id)arg1;	// IMP=0x000000010009f8cc
- (void)_reallySetOperatorName:(id)arg1;	// IMP=0x000000010009f734
- (void)_fetchOperatorNameWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010009f530
- (int)signalStrengthBars;	// IMP=0x000000010009f4e0
- (int)signalStrength;	// IMP=0x000000010009f490
- (void)_setSignalStrength:(int)arg1 andBars:(int)arg2;	// IMP=0x000000010009f3e4
- (void)_carrierBundleChanged;	// IMP=0x000000010009f1f0
- (_Bool)_pretendingToSearch;	// IMP=0x000000010009f1dc
- (void)_stopFakeCellService;	// IMP=0x000000010009f190
- (void)_cancelFakeCellServiceTimer;	// IMP=0x000000010009f154
- (void)_stopFakeService;	// IMP=0x000000010009f09c
- (void)_startFakeServiceIfNecessary;	// IMP=0x000000010009f010
- (void)_cancelFakeServiceTimer;	// IMP=0x000000010009efd4
- (void)_updateRegistrationNow;	// IMP=0x000000010009ef7c
- (void)_setRegistrationStatus:(int)arg1;	// IMP=0x000000010009ed68
- (void)_setCellRegistrationStatus:(int)arg1;	// IMP=0x000000010009eb10
- (void)_setCachedCTRegistrationCellStatus:(struct __CFString *)arg1 displayStatus:(struct __CFString *)arg2 forcedHome:(_Bool)arg3;	// IMP=0x000000010009e72c
- (struct __CFString *)_cachedCTRegistrationDisplayStatus;	// IMP=0x000000010009e654
- (struct __CFString *)_cachedCTRegistrationCellStatus;	// IMP=0x000000010009e57c
- (void)postponementStatusChanged;	// IMP=0x000000010009e470
- (void)_proximityChanged:(id)arg1;	// IMP=0x000000010009e3dc
- (void)_setIsInEmergencyCallbackMode:(unsigned char)arg1;	// IMP=0x000000010009e23c
- (_Bool)isInEmergencyCallbackMode;	// IMP=0x000000010009e1a4
- (_Bool)isEmergencyCallActive;	// IMP=0x000000010009e040
- (void)_provisioningUpdateWithStatus:(int)arg1;	// IMP=0x000000010009dc68
- (void)_setCurrentActivationAlertItem:(id)arg1;	// IMP=0x000000010009db8c
- (id)copyTelephonyCapabilities;	// IMP=0x000000010009db04
- (id)copyMobileEquipmentInfo;	// IMP=0x000000010009da9c
- (_Bool)isUsingVPNConnection;	// IMP=0x000000010009d964
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010009d708
- (void)_setIsUsingWiFiConnection:(_Bool)arg1;	// IMP=0x000000010009d6d4
- (_Bool)isTTYEnabled;	// IMP=0x000000010009d660
- (_Bool)isUsingSlowDataConnection;	// IMP=0x000000010009d638
- (_Bool)registeredWithoutCellular;	// IMP=0x000000010009d558
- (_Bool)isInAirplaneMode;	// IMP=0x000000010009d518
- (void)setIsInAirplaneMode:(_Bool)arg1;	// IMP=0x000000010009d4bc
- (_Bool)cellularRadioCapabilityIsActive;	// IMP=0x000000010009d1b8
- (void)_setSuppressesCellIndicators:(int)arg1;	// IMP=0x000000010009d108
- (void)_setSuppressesCellDataIndicator:(int)arg1;	// IMP=0x000000010009d0e0
- (void)_postDataConnectionTypeChanged;	// IMP=0x000000010009d088
- (int)dataConnectionType;	// IMP=0x000000010009cf78
- (void)_updateDataConnectionType;	// IMP=0x000000010009cc98
- (int)_updateModemDataConnectionTypeWithCTInfo:(id)arg1;	// IMP=0x000000010009c5fc
- (_Bool)_suppressesCellDataIndicator;	// IMP=0x000000010009c32c
- (_Bool)_lteConnectionShows4G;	// IMP=0x000000010009c0a8
- (void)_resetModemConnectionType;	// IMP=0x000000010009c090
- (void)setNetworkRegistrationEnabled:(_Bool)arg1;	// IMP=0x000000010009bf14
- (_Bool)isNetworkRegistrationEnabled;	// IMP=0x000000010009be70
- (_Bool)MALoggingEnabled;	// IMP=0x000000010009bde0
- (void)dumpBasebandState:(id)arg1;	// IMP=0x000000010009bc90
- (void)_setIsLoggingCallAudio:(_Bool)arg1;	// IMP=0x000000010009bc74
- (_Bool)isLoggingCallAudio;	// IMP=0x000000010009bc60
- (void)disconnectCallAndActivateHeld;	// IMP=0x000000010009bc18
- (void)disconnectAllCalls;	// IMP=0x000000010009bbb4
- (void)swapCalls;	// IMP=0x000000010009badc
- (void)disconnectIncomingCall;	// IMP=0x000000010009ba64
- (_Bool)inCall;	// IMP=0x000000010009b9c4
- (unsigned long long)faceTimeAudioCallCount;	// IMP=0x000000010009b9b4
- (unsigned long long)telephonyCallCount;	// IMP=0x000000010009b9a4
- (unsigned long long)_callCountForService:(int)arg1;	// IMP=0x000000010009b83c
- (_Bool)shouldHangUpOnLock;	// IMP=0x000000010009b79c
- (_Bool)callWouldUseReceiver:(_Bool)arg1;	// IMP=0x000000010009b5c0
- (_Bool)inCallUsingSpeakerOrReceiver;	// IMP=0x000000010009b4dc
- (id)_fastPickedRouteForCall;	// IMP=0x000000010009b298
- (_Bool)multipleCallsExist;	// IMP=0x000000010009b0e8
- (_Bool)outgoingCallExists;	// IMP=0x000000010009b0ac
- (_Bool)incomingCallExists;	// IMP=0x000000010009b070
- (_Bool)heldCallExists;	// IMP=0x000000010009b034
- (_Bool)activeCallExists;	// IMP=0x000000010009aff8
- (id)displayedCall;	// IMP=0x000000010009af6c
- (void)telephonyAudioChangeHandler;	// IMP=0x000000010009af04
- (unsigned long long)callCount;	// IMP=0x000000010009aeb0
- (void)callEventHandler:(id)arg1;	// IMP=0x000000010009a290
- (void)handleCallControlFailure:(id)arg1;	// IMP=0x000000010009a0a4
- (void)updateDisplaySettings:(id)arg1 forOutgoingCallURL:(id)arg2 outURL:(id *)arg3;	// IMP=0x0000000100099e30
- (id)lastKnownNetworkCountryCode;	// IMP=0x0000000100099df0
- (void)_updateLastKnownNetworkCountryCode;	// IMP=0x0000000100099c24
- (void)_updateNetworkLocale;	// IMP=0x0000000100099b0c
- (_Bool)updateLocale;	// IMP=0x00000001000997d0
- (void)_updateState;	// IMP=0x00000001000996d4
- (void)updateCalls;	// IMP=0x0000000100099328
- (void)airplaneModeChanged;	// IMP=0x0000000100099040
- (void)updateAirplaneMode;	// IMP=0x0000000100098ccc
- (void)setFastDormancySuspended:(_Bool)arg1;	// IMP=0x0000000100098b10
- (void)queue_setFastDormancySuspended:(_Bool)arg1 withConnection:(struct __CTServerConnection *)arg2;	// IMP=0x00000001000989c4
- (void)setLimitTransmitPowerPerBandEnabled:(_Bool)arg1;	// IMP=0x000000010009888c
- (id)_phoneApp;	// IMP=0x0000000100098830
- (void)updateSpringBoard;	// IMP=0x00000001000985d4
- (int)callForwardingIndicator;	// IMP=0x00000001000985c0
- (void)updateCallForwardingIndicator;	// IMP=0x00000001000984c0
- (void)setCallForwardingIndicator:(int)arg1;	// IMP=0x00000001000982c0
- (double)inCallDuration;	// IMP=0x000000010009821c
- (_Bool)emergencyCallSupported;	// IMP=0x00000001000981b8
- (_Bool)hasCellularData;	// IMP=0x00000001000981a8
- (_Bool)hasCellularTelephony;	// IMP=0x0000000100098198
- (_Bool)containsCellularRadio;	// IMP=0x0000000100098188
- (void)SBTelephonyDaemonRestartHandler;	// IMP=0x0000000100097f8c
- (void)_serverConnectionDidError:(CDStruct_1ef3fb1f)arg1;	// IMP=0x0000000100097dd4
- (void)_avSystemControllerDidError:(id)arg1;	// IMP=0x0000000100097c6c
- (struct __CTServerConnection *)_serverConnection;	// IMP=0x0000000100097b70
- (void)_performQueryInBackground:(CDUnknownBlockType)arg1 withMainQueueResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000978ec
- (void)_postStartupNotification;	// IMP=0x0000000100097894
- (id)init;	// IMP=0x0000000100092cac

@end
