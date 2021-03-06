//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBApplicationServerRemovabilityDelegate.h"

@class FBServiceClientAuthenticator, NSString;

@interface SBApplicationRemovabilityService : NSObject <SBApplicationServerRemovabilityDelegate>
{
    FBServiceClientAuthenticator *_serviceClientAuthenticator;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010007b8e4
- (void).cxx_destruct;	// IMP=0x000000010007c4f8
- (void)applicationServer:(id)arg1 client:(id)arg2 setRemovalAllowed:(_Bool)arg3 forBundleIdentifier:(id)arg4;	// IMP=0x000000010007c118
- (void)applicationServer:(id)arg1 client:(id)arg2 fetchRemovabilityForBundleIdentifier:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x000000010007bc34
- (void)_authenticateClient:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010007ba28
- (id)init;	// IMP=0x000000010007b964

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

