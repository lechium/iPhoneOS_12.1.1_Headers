//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CBSServerProtocol.h"
#import "NSXPCListenerDelegate.h"

@class NSString, NSXPCListener;

@interface CBServer : NSObject <NSXPCListenerDelegate, CBSServerProtocol>
{
    id <CBRemoteAlertServerDelegate> _remoteAlertsDelegate;	// 8 = 0x8
    id <CBSystemServicesServerDelegate> _systemServicesDelegate;	// 16 = 0x10
    NSXPCListener *_listener;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000001000219d4
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(nonatomic) __weak id <CBSystemServicesServerDelegate> systemServicesDelegate; // @synthesize systemServicesDelegate=_systemServicesDelegate;
@property(nonatomic) __weak id <CBRemoteAlertServerDelegate> remoteAlertsDelegate; // @synthesize remoteAlertsDelegate=_remoteAlertsDelegate;
- (void).cxx_destruct;	// IMP=0x000000010002219c
- (_Bool)_auditToken:(CDStruct_6ad76789 *)arg1 hasEntitlement:(id)arg2;	// IMP=0x0000000100022088
- (unsigned long long)_getEntitlementLevelForConnection:(id)arg1;	// IMP=0x0000000100021fa0
- (void)_setClassesForRemoteAlertsOnInterface:(id)arg1;	// IMP=0x0000000100021ef4
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100021d4c
- (void)exitCheckerBoard;	// IMP=0x0000000100021c98
- (void)receiveResponseFromAlertWithIdentifier:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100021bfc
- (void)createAlert:(id)arg1 timeout:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100021b60
- (void)start;	// IMP=0x0000000100021ae0
- (id)init;	// IMP=0x0000000100021a54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

