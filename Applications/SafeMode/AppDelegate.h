//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "UIApplicationDelegate.h"

@class NSString, UIWindow;

__attribute__((visibility("hidden")))
@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    UIWindow *_window;	// 8 = 0x8
}

@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;	// IMP=0x00000001000068bc
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x0000000100006894
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x0000000100006890
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x000000010000688c
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000100006888
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x0000000100006884
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x000000010000687c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

