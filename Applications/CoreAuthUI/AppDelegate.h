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
- (void).cxx_destruct;	// IMP=0x000000010000a1f8
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x000000010000a1d0
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x000000010000a1cc
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x000000010000a1c8
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x000000010000a1c4
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x000000010000a1c0
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x000000010000a1b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

