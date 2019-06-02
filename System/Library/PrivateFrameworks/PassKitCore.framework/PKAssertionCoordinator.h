/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKXPCServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSHashTable, PKXPCService, NSObject, NSString;

@interface PKAssertionCoordinator : NSObject <PKXPCServiceDelegate> {

	NSHashTable* _acquiredAssertions;
	PKXPCService* _remoteService;
	NSObject*<OS_dispatch_queue> _coordinatorSerialQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)remoteService:(id)arg1 didEstablishConnection:(id)arg2 ;
-(void)remoteService:(id)arg1 didInterruptConnection:(id)arg2 ;
-(void)remoteServiceDidSuspend:(id)arg1 ;
-(id)_remoteObjectProxyWithSemaphore:(id)arg1 ;
-(id)_existingRemoteObjectProxy;
-(void)isAssertionValid:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initSharedInstance;
-(void)_removeAssertionWithIdentifier:(id)arg1 ;
-(void)invalidateAssertion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)assertion:(id)arg1 shouldInvalidateWhenBackgrounded:(BOOL)arg2 ;
-(void)acquireAssertionOfType:(unsigned long long)arg1 withReason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_remoteObjectProxy;
-(void)dealloc;
@end

