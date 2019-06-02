/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedRouteStep;

@interface _GEORouteMatchUpdater_FerryProgression : _GEORouteMatchUpdater {

	GEOComposedRouteStep* _boardStep;
	GEOComposedRouteStep* _alightStep;
	SCD_Struct_GE30 _alightLocationCoordinate;
	double _startProgressionDistanceToDestination;
	unsigned long long _progressionCount;

}
-(id)initWithRoute:(id)arg1 tripLeg:(id)arg2 ;
-(BOOL)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(unsigned long long)priority;
@end

