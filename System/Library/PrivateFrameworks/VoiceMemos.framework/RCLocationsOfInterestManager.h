/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol RCLocationsOfInterestDelegate, OS_dispatch_queue;
@class CLLocationManager, CLLocation, CLGeocoder, NSArray, NSObject, NSString;

@interface RCLocationsOfInterestManager : NSObject <CLLocationManagerDelegate> {

	int _authorizationStatus;
	CLLocationManager* _locationManager;
	CLLocation* _currentLocation;
	CLGeocoder* _geographyCoder;
	NSArray* _locationsOfInterest;
	NSArray* _placesOfInterest;
	BOOL _ignoringLocationUpdates;
	id<RCLocationsOfInterestDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	double _searchRadius;

}

@property (assign,nonatomic,__weak) id<RCLocationsOfInterestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) BOOL active; 
@property (nonatomic,readonly) BOOL authorized; 
@property (assign,nonatomic) double searchRadius;                                            //@synthesize searchRadius=_searchRadius - In the implementation block
@property (readonly) CLLocation * currentLocation;                                           //@synthesize currentLocation=_currentLocation - In the implementation block
@property (copy,readonly) NSArray * locationsOfInterest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultManager;
-(CLLocation *)currentLocation;
-(NSArray *)locationsOfInterest;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(BOOL)authorized;
-(double)searchRadius;
-(void)setSearchRadius:(double)arg1 ;
-(id)init;
-(void)setDelegate:(id<RCLocationsOfInterestDelegate>)arg1 ;
-(id<RCLocationsOfInterestDelegate>)delegate;
-(void)stop;
-(BOOL)active;
-(void)start;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

