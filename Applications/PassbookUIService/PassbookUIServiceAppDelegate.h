//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "UIApplicationDelegate.h"

@class NSString, PKPassLibrary, UIWindow;

@interface PassbookUIServiceAppDelegate : UIResponder <UIApplicationDelegate>
{
    PKPassLibrary *_passLibrary;	// 8 = 0x8
}

@property(readonly, nonatomic) PKPassLibrary *passLibrary; // @synthesize passLibrary=_passLibrary;
- (void).cxx_destruct;	// IMP=0x0000000100004cd8
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x0000000100004ac8
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x000000010000496c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
