/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreLocation/CoreLocation-Structs.h>
@class NSString, CLLocation, CLHeading, NSSet;

@interface CLLocationManager : NSObject {

	id _internal;

}

@property (assign,getter=isMatchInfoEnabled,nonatomic) BOOL matchInfoEnabled; 
@property (assign,nonatomic) BOOL privateMode; 
@property (nonatomic,readonly) BOOL locationServicesAvailable; 
@property (nonatomic,readonly) BOOL locationServicesApproved; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (assign,nonatomic) BOOL supportInfo; 
@property (nonatomic,readonly) CLClientRef internalClient; 
@property (assign,getter=isPersistentMonitoringEnabled,nonatomic) BOOL persistentMonitoringEnabled; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (assign,getter=isDynamicAccuracyReductionEnabled,nonatomic) BOOL dynamicAccuracyReductionEnabled; 
@property (assign,nonatomic) BOOL allowsAlteredAccessoryLocations; 
@property (assign,nonatomic) id<CLLocationManagerDelegate> delegate; 
@property (nonatomic,readonly) BOOL locationServicesEnabled; 
@property (nonatomic,copy) NSString * purpose; 
@property (assign,nonatomic) long long activityType; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,nonatomic) BOOL pausesLocationUpdatesAutomatically; 
@property (assign,nonatomic) BOOL allowsBackgroundLocationUpdates; 
@property (assign,nonatomic) BOOL showsBackgroundLocationIndicator; 
@property (nonatomic,copy,readonly) CLLocation * location; 
@property (nonatomic,readonly) BOOL headingAvailable; 
@property (assign,nonatomic) double headingFilter; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy,readonly) CLHeading * heading; 
@property (nonatomic,readonly) double maximumRegionMonitoringDistance; 
@property (nonatomic,copy,readonly) NSSet * monitoredRegions; 
@property (nonatomic,copy,readonly) NSSet * rangedRegions; 
+(id)_af_createSiriLocationManagerWithSetupBlock:(/*^block*/id)arg1 ;
+(BOOL)shutdownDaemon;
+(int)_authorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2 ;
+(int)_regionMonitoringAuthorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2 ;
+(BOOL)significantLocationChangeMonitoringAvailable;
+(BOOL)isMonitoringAvailableForClass:(Class)arg1 ;
+(BOOL)regionMonitoringAvailable;
+(BOOL)regionMonitoringEnabled;
+(BOOL)deferredLocationUpdatesAvailable;
+(BOOL)isPeerRangingAvailable;
+(int)regionMonitoringAuthorizationStatusForBundleIdentifier:(id)arg1 ;
+(int)regionMonitoringAuthorizationStatusForBundle:(id)arg1 ;
+(void)setAuthorizationStatus:(BOOL)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setAuthorizationStatus:(BOOL)arg1 forBundle:(id)arg2 ;
+(void)setAuthorizationStatusByType:(int)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setBackgroundIndicatorEnabled:(BOOL)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setBackgroundIndicatorEnabled:(BOOL)arg1 forBundle:(id)arg2 ;
+(void)setDefaultEffectiveBundle:(id)arg1 ;
+(void)dumpDiagnosticFilesWithHandler:(/*^block*/id)arg1 ;
+(BOOL)bundleSupported:(id)arg1 ;
+(BOOL)advertiseAsBeacon:(id)arg1 withPower:(id)arg2 ;
+(BOOL)isMicroLocationAvailable;
+(unsigned long long)entityClassesForLocationDictionary:(id)arg1 ;
+(BOOL)isLocationActiveForLocationDictionary:(id)arg1 ;
+(BOOL)hasUsedBackgroundLocationServices:(id)arg1 ;
+(BOOL)backgroundIndicatorEnabledForLocationDictionary:(id)arg1 ;
+(void)setBackgroundIndicatorEnabled:(BOOL)arg1 forLocationDictionary:(id)arg2 ;
+(int)authorizationStatusForBundleIdentifier:(id)arg1 ;
+(BOOL)mapCorrectionAvailable;
+(BOOL)headingAvailable;
+(BOOL)locationServicesEnabled;
+(void)setDefaultEffectiveBundleIdentifier:(id)arg1 ;
+(void)setLocationServicesEnabled:(BOOL)arg1 ;
+(BOOL)dumpLogsWithMessage:(id)arg1 ;
+(BOOL)isRangingAvailable;
+(void)setAuthorizationStatusByType:(int)arg1 forBundle:(id)arg2 ;
+(unsigned long long)activeLocationServiceTypesForLocationDictionary:(id)arg1 ;
+(id)dateLocationLastUsedForLocationDictionary:(id)arg1 ;
+(unsigned long long)allowableAuthorizationForLocationDictionary:(id)arg1 ;
+(void)setEntityAuthorization:(unsigned long long)arg1 forLocationDictionary:(id)arg2 ;
+(BOOL)isStatusBarIconEnabledForLocationEntityClass:(unsigned long long)arg1 ;
+(void)setStatusBarIconEnabled:(BOOL)arg1 forLocationEntityClass:(unsigned long long)arg2 ;
+(int)_authorizationStatus;
+(int)authorizationStatusForBundle:(id)arg1 ;
+(unsigned long long)entityAuthorizationForLocationDictionary:(id)arg1 ;
+(unsigned long long)primaryEntityClassForLocationDictionary:(id)arg1 ;
+(BOOL)isEntityAuthorizedForLocationDictionary:(id)arg1 ;
+(void)setEntityAuthorized:(BOOL)arg1 forLocationDictionary:(id)arg2 ;
+(BOOL)locationServicesEnabled:(BOOL)arg1 ;
+(int)authorizationStatus;
+(id)sharedManager;
-(void)setPurpose:(NSString *)arg1 ;
-(NSString *)purpose;
-(void)onClientEvent:(int)arg1 supportInfo:(id)arg2 ;
-(double)headingFilter;
-(void)setPersistentMonitoringEnabled:(BOOL)arg1 ;
-(BOOL)allowsAlteredAccessoryLocations;
-(void)setDynamicAccuracyReductionEnabled:(BOOL)arg1 ;
-(BOOL)pausesLocationUpdatesAutomatically;
-(void)setPausesLocationUpdatesAutomatically:(BOOL)arg1 ;
-(BOOL)allowsBackgroundLocationUpdates;
-(void)setAllowsBackgroundLocationUpdates:(BOOL)arg1 ;
-(BOOL)showsBackgroundLocationIndicator;
-(void)setShowsBackgroundLocationIndicator:(BOOL)arg1 ;
-(NSSet *)rangedRegions;
-(void)onDidBecomeActive:(id)arg1 ;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 bundle:(id)arg2 ;
-(void)onClientEventAuthStatus:(id)arg1 ;
-(void)onClientEventLocation:(id)arg1 forceMapMatching:(BOOL)arg2 type:(id)arg3 ;
-(void)onClientEventLocationUnavailable:(id)arg1 ;
-(void)onClientEventHeading:(id)arg1 ;
-(void)onClientEventHeadingCalibration:(id)arg1 ;
-(void)onClientEventError:(id)arg1 ;
-(void)onClientEventRegion:(id)arg1 ;
-(void)onClientEventRegionState:(id)arg1 ;
-(void)onClientEventRegionError:(id)arg1 ;
-(void)onClientEventRanging:(id)arg1 ;
-(void)onClientEventRangingError:(id)arg1 ;
-(void)onClientEventPeerRanging:(id)arg1 ;
-(void)onClientEventPeerRangingRequestProcessed:(id)arg1 ;
-(void)onClientEventPeerRangingError:(id)arg1 ;
-(void)onClientEventRegionResponseDelayed:(id)arg1 ;
-(void)onClientEventRegionSetupCompleted:(id)arg1 ;
-(void)onClientEventAutopauseStatus:(id)arg1 ;
-(void)onClientEventBatch:(id)arg1 ;
-(void)onClientEventInterrupted:(id)arg1 ;
-(void)onClientEventVehicleSpeed:(id)arg1 ;
-(void)onClientEventVehicleHeading:(id)arg1 ;
-(void)onClientEventSignificantLocationVisit:(id)arg1 ;
-(void)onClientEventMicroLocations:(id)arg1 ;
-(void)resumeLocationUpdates;
-(void)pauseLocationUpdates:(BOOL)arg1 ;
-(BOOL)locationServicesAvailable;
-(void)setSupportInfo:(BOOL)arg1 ;
-(BOOL)supportInfo;
-(CLClientRef)internalClient;
-(void)allowDeferredLocationUpdatesUntilTraveled:(double)arg1 timeout:(double)arg2 ;
-(void)disallowDeferredLocationUpdates;
-(void)startAppStatusUpdates;
-(void)stopAppStatusUpdates;
-(void)startTechStatusUpdates;
-(void)stopTechStatusUpdates;
-(void)startMonitoringForRegion:(id)arg1 desiredAccuracy:(double)arg2 ;
-(void)requestStateForRegion:(id)arg1 ;
-(double)maximumRegionMonitoringDistance;
-(void)startRangingBeaconsInRegion:(id)arg1 ;
-(void)stopRangingBeaconsInRegion:(id)arg1 ;
-(void)requestRangingToPeers:(id)arg1 timeoutSeconds:(double)arg2 ;
-(void)respondToRangingFromPeers:(id)arg1 timeoutSeconds:(double)arg2 ;
-(void)startRangingToPeers:(id)arg1 intervalSeconds:(unsigned long long)arg2 ;
-(void)stopRangingToPeers:(id)arg1 ;
-(void)startRangingFromPeers:(id)arg1 ;
-(void)stopRangingFromPeers:(id)arg1 ;
-(id)appsUsingLocation;
-(id)appsUsingLocationWithDetails;
-(id)technologiesInUse;
-(void)onLocationRequestTimeout;
-(void)onRangingRequestTimeout;
-(BOOL)isPersistentMonitoringEnabled;
-(BOOL)isDynamicAccuracyReductionEnabled;
-(void)_startLeechingVisits;
-(void)startUpdatingMicroLocation;
-(void)registerAsLocationClient;
-(void)startUpdatingHeading;
-(void)stopUpdatingHeading;
-(void)setHeadingFilter:(double)arg1 ;
-(void)setHeadingOrientation:(int)arg1 ;
-(BOOL)locationServicesApproved;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(void)stopUpdatingVehicleHeading;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(void)dismissHeadingCalibrationDisplay;
-(double)desiredAccuracy;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1 ;
-(double)distanceFilter;
-(void)setMatchInfoEnabled:(BOOL)arg1 ;
-(int)headingOrientation;
-(double)expectedGpsUpdateInterval;
-(BOOL)isMatchInfoEnabled;
-(void)setAllowsAlteredAccessoryLocations:(BOOL)arg1 ;
-(BOOL)headingAvailable;
-(void)startUpdatingLocationWithPrompt;
-(BOOL)locationServicesEnabled;
-(void)setDistanceFilter:(double)arg1 ;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)requestWhenInUseAuthorization;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)setIsActuallyAWatchKitExtension:(BOOL)arg1 ;
-(void)requestAlwaysAuthorization;
-(void)resetApps;
-(id)initWithEffectiveBundle:(id)arg1 ;
-(BOOL)privateMode;
-(void)setPrivateMode:(BOOL)arg1 ;
-(void)startMonitoringSignificantLocationChanges;
-(void)requestLocation;
-(void)startMonitoringForRegion:(id)arg1 ;
-(void)stopMonitoringForRegion:(id)arg1 ;
-(NSSet *)monitoredRegions;
-(void)markAsHavingReceivedLocation;
-(void)requestCurrentMicroLocation;
-(void)startMonitoringVisits;
-(void)stopMonitoringVisits;
-(void)stopUpdatingMicroLocation;
-(void)startUpdatingMicroLocationForLocationOfInterest:(id)arg1 ;
-(void)_startMonitoringSignificantLocationChangesOfDistance:(double)arg1 withPowerBudget:(int)arg2 ;
-(void)stopMonitoringSignificantLocationChanges;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(id<CLLocationManagerDelegate>)delegate;
-(long long)activityType;
-(CLHeading *)heading;
-(CLLocation *)location;
-(void)setActivityType:(long long)arg1 ;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 ;
@end

