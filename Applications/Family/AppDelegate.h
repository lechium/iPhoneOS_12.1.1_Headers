//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "UIApplicationDelegate.h"

@class NSString, UIWindow;

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    UIWindow *_window;	// 8 = 0x8
}

@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;	// IMP=0x000000010000265c
- (_Bool)_handleFamilyURLComponents:(id)arg1 eventType:(id)arg2;	// IMP=0x00000001000021f4
- (_Bool)_handleFamilyURL:(id)arg1;	// IMP=0x0000000100002040
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x0000000100001e50
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x0000000100001e4c
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x0000000100001e48
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x0000000100001e44
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000100001e40
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x0000000100001e3c
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100001d08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

