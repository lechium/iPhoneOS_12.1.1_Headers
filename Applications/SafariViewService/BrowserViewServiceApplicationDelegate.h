//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIApplicationDelegate.h"
#import "_SFSharedSiteMetadataManagerProvider.h"

@class NSString, UIWindow;

@interface BrowserViewServiceApplicationDelegate : NSObject <UIApplicationDelegate, _SFSharedSiteMetadataManagerProvider>
{
}

+ (void)initialize;	// IMP=0x00000001000024ac
- (id)newSharedSiteMetadataManager;	// IMP=0x000000010000268c
- (void)applicationDidFinishLaunching:(id)arg1;	// IMP=0x0000000100002650

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

