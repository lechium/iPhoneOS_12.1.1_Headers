/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDAssertionObserver.h>

@protocol OS_dispatch_queue;
@class NSOperationQueue, HDAssertionManager, NSObject, NSLock, NSString;

@interface HDMaintenanceWorkCoordinator : NSObject <HDAssertionObserver> {

	NSOperationQueue* _maintenanceWorkQueue;
	HDAssertionManager* _assertionManager;
	NSObject*<OS_dispatch_queue> _assertionQueue;
	NSLock* _lock;

}

@property (readonly) BOOL suspended; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(void)enqueueMaintenanceOperation:(id)arg1 ;
-(BOOL)suspended;
-(id)takeMaintenanceSuspensionAssertionForOwner:(id)arg1 ;
-(id)init;
@end

