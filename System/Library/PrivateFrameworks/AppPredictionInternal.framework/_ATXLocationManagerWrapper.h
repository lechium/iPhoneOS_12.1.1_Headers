/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/_ATXLocationManagerWrapperProtocol.h>

@class CLLocation, RTRoutineManager, _ATXLocation, NSDate, CLLocationManager, NSString;

@interface _ATXLocationManagerWrapper : NSObject <CLLocationManagerDelegate, _ATXLocationManagerWrapperProtocol> {

	CLLocation* _currentLocation;
	RTRoutineManager* _routineManager;
	_ATXLocation* _currentLOI;
	_ATXLocation* _previousLOI;
	CLLocation* _homeLOI;
	CLLocation* _workLOI;
	CLLocation* _schoolLOI;
	CLLocation* _gymLOI;
	long long _currentLOIType;
	NSDate* _lastLOIUpdateTimestamp;
	NSDate* _lastPreviousLOIUpdateTimestamp;
	CLLocationManager* _locationManager;

}

@property (retain) CLLocationManager * locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultPath;
+(id)stringForLOIType:(long long)arg1 ;
+(id)_makeLocationManager;
+(id)_sharedLocationManager;
+(void)initSharedLocationManager;
+(id)sharedInstance;
-(id)getCurrentLocation;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(id)locationOfInterestAtCurrentLocation;
-(double)distanceFromHomeOfCurrentLocation;
-(double)distanceFromWorkOfCurrentLocation;
-(double)distanceFromSchoolOfCurrentLocation;
-(double)distanceFromGymOfCurrentLocation;
-(long long)currentLOIType;
-(void)fetchAllLocationsOfInterest:(/*^block*/id)arg1 ;
-(void)clearLocationOfInterest;
-(void)_updateCurrentLocationOfInterest;
-(void)_handleRoutineError:(id)arg1 forThing:(id)arg2 ;
-(void)_updateLocationOfInterestIfTimeElapsed;
-(id)previousLOIAndCurrentLOI;
-(void)_updateDistancesFromLOIsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)writePersistantVariables;
-(void)loadPersistantVariables;
-(void)loadPersistantVariablesAtPath:(id)arg1 ;
-(CLLocationManager *)locationManager;
-(id)initWithLocationManager:(id)arg1 ;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(id)init;
-(void)dealloc;
@end

