/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEONavigationMapMatcher.h>

@interface GEONavigationDrivingMapMatcher : GEONavigationMapMatcher
-(int)transportType;
-(BOOL)_locationMeetsSpeedThresholdForRoadMatch:(id)arg1 distanceFromRoute:(double)arg2 ;
-(BOOL)_shouldConsiderRoadMatch:(id)arg1 overRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(BOOL)_isParkingLotFormOfWay:(int)arg1 ;
-(id)matchLocation:(id)arg1 transportType:(int)arg2 ;
-(double)_approximateMaxSpeedForRoad:(SCD_Struct_GE69*)arg1 ;
-(id)_routeMatcherForRoute:(id)arg1 ;
@end

