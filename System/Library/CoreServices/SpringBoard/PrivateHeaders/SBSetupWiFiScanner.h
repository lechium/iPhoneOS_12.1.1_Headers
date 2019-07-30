//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSThread;

@interface SBSetupWiFiScanner : NSObject
{
    struct __WiFiManagerClient *_wifiManager;	// 8 = 0x8
    struct __WiFiDeviceClient *_wifiDevice;	// 16 = 0x10
    NSThread *_scanningThread;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    long long _state;	// 40 = 0x28
}

@property(nonatomic, getter=_state, setter=_setState:) long long state; // @synthesize state=_state;
@property(copy, getter=_completionHandler, setter=_setCompletionHandler:) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, getter=_scanningThread, setter=_setScanningThread:) NSThread *scanningThread; // @synthesize scanningThread=_scanningThread;
- (void).cxx_destruct;	// IMP=0x000000010029d888
- (void)_thread_cancelScanning;	// IMP=0x000000010029d7f8
- (void)cancel;	// IMP=0x000000010029d788
- (void)_thread_callCompletionHandlerWithGuessedCountries:(id)arg1;	// IMP=0x000000010029d708
- (void)_thread_closeWifiConnection;	// IMP=0x000000010029d65c
- (void)_thread_wifiScanComplete:(struct __CFArray *)arg1 error:(_Bool)arg2;	// IMP=0x000000010029d1a0
- (void)_wifiScanningThread;	// IMP=0x000000010029cf50
- (void)beginScanningWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010029cea4
- (void)dealloc;	// IMP=0x000000010029ce54

@end

