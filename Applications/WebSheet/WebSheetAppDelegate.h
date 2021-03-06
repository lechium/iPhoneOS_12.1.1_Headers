//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplication.h"

#import "SBSRemoteAlertHandleObserver.h"
#import "UIApplicationDelegate.h"

@class NSString, UIWindow, WebSheetViewController;

@interface WebSheetAppDelegate : UIApplication <SBSRemoteAlertHandleObserver, UIApplicationDelegate>
{
    struct _ShowWebSheetContext _showWebSheetContext;	// 8 = 0x8
    _Bool _openWiFiPreferencesOnExit;	// 40 = 0x28
    WebSheetViewController *_webSheetCont;	// 48 = 0x30
}

@property(nonatomic) _Bool openWiFiPreferencesOnExit; // @synthesize openWiFiPreferencesOnExit=_openWiFiPreferencesOnExit;
@property(retain, nonatomic) WebSheetViewController *webSheetCont; // @synthesize webSheetCont=_webSheetCont;
- (void)dealloc;	// IMP=0x0000000100008898
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x00000001000087fc
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x0000000100008774
- (_Bool)canShowAlerts;	// IMP=0x000000010000876c
- (void)applicationDidFinishLaunching:(id)arg1;	// IMP=0x000000010000861c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

