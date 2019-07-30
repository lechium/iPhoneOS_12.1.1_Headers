//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SBRemoteViewsController : NSObject
{
    NSMutableDictionary *_registeredRemoteViewInfos;	// 8 = 0x8
    NSMutableDictionary *_unregisteredRemoteViewInfos;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000001001d4f94
- (void).cxx_destruct;	// IMP=0x00000001001d5ba8
- (void)unregisterRemoteViewsForApplication:(id)arg1;	// IMP=0x00000001001d5988
- (id)proxyRemoteViewForIdentifier:(id)arg1;	// IMP=0x00000001001d56a4
- (void)_sequesterProxyRemoteView:(id)arg1;	// IMP=0x00000001001d5600
- (id)_newProxyRemoteViewForIdentifier:(id)arg1;	// IMP=0x00000001001d5574
- (void)unregisterRemoteIdentifier:(id)arg1 application:(id)arg2;	// IMP=0x00000001001d5454
- (void)registerRemoteContextID:(unsigned int)arg1 forIdentifier:(id)arg2 opaque:(_Bool)arg3 size:(struct CGSize)arg4 application:(id)arg5;	// IMP=0x00000001001d51e0
- (void)unregisterProxyRemoteView:(id)arg1;	// IMP=0x00000001001d50e0
- (id)init;	// IMP=0x00000001001d5028

@end

