/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDAssertionObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, HDAssertionManager, RadiosPreferences, NSString;

@interface HDPowerSavingModeManager : NSObject <HDAssertionObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	HDAssertionManager* _assertionManager;
	RadiosPreferences* _radioPrefs;
	BOOL _powerSavingModeEnabled;
	BOOL _supportsCellularTelephony;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(void)assertionManager:(id)arg1 assertionTaken:(id)arg2 ;
-(BOOL)supportsPowerSavingForActivityType:(unsigned long long)arg1 ;
-(id)takeSessionAssertionForOwnerIdentifier:(id)arg1 activityType:(unsigned long long)arg2 ;
-(void)_startObservingPowerSavingModeSetting;
-(void)_stopObservingPowerSavingModeSetting;
-(void)_queue_enablePowerSavingIfNeeded;
-(void)_queue_disablePowerSavingIfNeeded;
-(void)_queue_powerSavingModeDidChange;
-(void)_powerSavingModeDidChange;
-(id)init;
-(void)dealloc;
@end
