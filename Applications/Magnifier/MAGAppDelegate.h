//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "SBSHardwareButtonEventConsuming.h"
#import "UIApplicationDelegate.h"

@class NSString, UIWindow;

__attribute__((visibility("hidden")))
@interface MAGAppDelegate : UIResponder <SBSHardwareButtonEventConsuming, UIApplicationDelegate>
{
    id <BSInvalidatable> _eventConsumerToken;	// 8 = 0x8
    UIWindow *_window;	// 16 = 0x10
}

@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;	// IMP=0x0000000100002a10
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x00000001000029e8
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x000000010000295c
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x0000000100002958
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000100002954
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x00000001000028b4
- (id)rootVC;	// IMP=0x0000000100002860
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00000001000026a8
- (void)consumeSinglePressUpForButtonKind:(long long)arg1;	// IMP=0x0000000100002380
- (void)systemNavigationActionChanged:(id)arg1;	// IMP=0x00000001000021ec
- (void)reevaluateNavigationAction;	// IMP=0x0000000100001d60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
