/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOMapFeatureAccess;

@interface GEORouteRoadMatcher : NSObject {

	GEOMapFeatureAccess* _mapFeatureAccess;

}
-(BOOL)allowsNetworkTileLoad;
-(SCD_Struct_GE69*)findRoadOnCoordinate:(SCD_Struct_GE30)arg1 withCourse:(double)arg2 ;
-(id)init;
@end

