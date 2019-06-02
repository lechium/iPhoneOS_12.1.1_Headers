/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreIndoor/CoreIndoor-Structs.h>
@class GeographicCoordinate, NSSet, CLIndoorAvailabilityTileParams;

@interface CLAvailableVenuesStateMachine : NSObject {

	GeographicCoordinate* _lastFix;
	double _maxLoadRadius;
	NSSet* _disabledVenues;
	CLIndoorAvailabilityTileParams* _availabilityTileParams;

}

@property (readonly) GeographicCoordinate * lastFix;                                       //@synthesize lastFix=_lastFix - In the implementation block
@property (assign) double maxLoadRadius;                                                   //@synthesize maxLoadRadius=_maxLoadRadius - In the implementation block
@property (retain) NSSet * disabledVenues;                                                 //@synthesize disabledVenues=_disabledVenues - In the implementation block
@property (readonly) CLIndoorAvailabilityTileParams * availabilityTileParams;              //@synthesize availabilityTileParams=_availabilityTileParams - In the implementation block
+(double)deg2rad:(double)arg1 ;
+(double)metersFromGreatCircleDistance:(double)arg1 ;
+(long long)getLocationContextFromVenueBounds:(const VenueBounds*)arg1 ;
+(double)distBetweenLatLon:(id)arg1 latlon1:(id)arg2 ;
-(void)setDisabledVenues:(NSSet *)arg1 ;
-(NSSet *)disabledVenues;
-(BOOL)isVenueDisabled:(id)arg1 locationId:(id)arg2 ;
-(id)getNearbyLocationGroupsForTile:(id)arg1 withUpdatedPos:(id)arg2 nearLocationsOfInterest:(id)arg3 ;
-(id)getNearbyLocationGroups:(id)arg1 withUpdatedPos:(id)arg2 nearLocationsOfInterest:(id)arg3 ;
-(id)openTileParserAtPath:(id)arg1 ;
-(id)recomputeIfNecessary:(id)arg1 withGlobalAvailabilityTile:(id)arg2 andAdditionalLOIs:(id)arg3 ;
-(BOOL)shouldRecompute:(id)arg1 ;
-(id)computeAvailableVenues:(id)arg1 nearCoordinates:(id)arg2 ;
-(id)getNearbyLocationGroupsForTile:(id)arg1 withUpdatedPos:(id)arg2 ;
-(id)getNearbyLocationGroups:(id)arg1 withUpdatedPos:(id)arg2 ;
-(void)clearLastFix;
-(GeographicCoordinate *)lastFix;
-(double)maxLoadRadius;
-(void)setMaxLoadRadius:(double)arg1 ;
-(CLIndoorAvailabilityTileParams *)availabilityTileParams;
-(id)init;
@end

