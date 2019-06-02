/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapFeatureAccessFinder.h>

@class GEOTileLoader;

@interface GEOMapFeatureTransitPointFinder : GEOMapFeatureAccessFinder {

	GEOTileLoader* _tileLoader;

}
-(id)_tileFinder;
-(id)initWithTileLoader:(id)arg1 ;
-(id)findTransitPointWithID:(unsigned long long)arg1 near:(SCD_Struct_GE30)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitPointsOfType:(unsigned long long)arg1 near:(SCD_Struct_GE30)arg2 radius:(double)arg3 handler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)findTransitAccessPointsForStation:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findParentOfTransitPoint:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findTransitPointsWithParent:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findGeometryForTransitPoint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_transitPointForFeature:(GEOTransitNodeFeature*)arg1 ;
-(id)_geometryTileFinder;
@end

