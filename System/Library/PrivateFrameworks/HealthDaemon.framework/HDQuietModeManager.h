/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDAssertionObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, HDAssertionManager, HDDNDModeAssertionService, NSString;

@interface HDQuietModeManager : NSObject <HDAssertionObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	HDAssertionManager* _assertionManager;
	BOOL _enableDNDDuringWorkout;
	HDDNDModeAssertionService* _dndModeAssertionService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(id)takeQuietModeAssertionForOwnerIdentifier:(id)arg1 ;
-(void)_observeDNDWorkoutDefault;
-(void)_queue_takeQuietModeAssertion;
-(void)_queue_releaseQuietModeAssertion;
-(void)_loadWorkoutDNDDefault;
-(void)unitTest_setDNDModeAssertionService:(id)arg1 ;
-(void)unitTest_setEnableDND:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
@end

