/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTAuthorizationManager.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, NSString;

@interface RTAuthorizationManager_Embedded : RTAuthorizationManager <CLLocationManagerDelegate> {

	CLLocationManager* _magicalMomentsLocationManager;
	BOOL _magicalMomentsLocationEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isLocationServicesEnabled;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)_setup;
-(id)initWithMetricManager:(id)arg1 platform:(id)arg2 userSessionMonitor:(id)arg3 ;
-(void)_fetchMagicalMomentsLocationUsageEnabled:(/*^block*/id)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)_handleMagicalMomentsLocationAuthChange:(int)arg1 ;
@end

