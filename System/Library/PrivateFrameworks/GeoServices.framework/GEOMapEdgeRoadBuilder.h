/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapEdgeBuilder.h>

@interface GEOMapEdgeRoadBuilder : GEOMapEdgeBuilder {

	deque<GEORoadEdge, std::__1::allocator<GEORoadEdge> >* _edges;

}
-(id)initWithMap:(id)arg1 roadFeature:(SCD_Struct_GE200*)arg2 shouldFlip:(BOOL)arg3 ;
-(unsigned long long)_maxTileCount;
-(void)_buildCompleteEdge;
-(BOOL)_findEdgeAheadInTile:(id)arg1 ;
-(BOOL)_findEdgeBehindInTile:(id)arg1 ;
-(BOOL)_shouldFindEdgeAhead;
-(BOOL)_shouldFindEdgeBehind;
-(Matrix<float, 2, 1>)_firstPoint;
-(Matrix<float, 2, 1>)_lastPoint;
-(id)_firstTile;
-(id)_lastTile;
-(id)_tileFinderForMap:(id)arg1 center:(SCD_Struct_GE30)arg2 radius:(double)arg3 ;
-(unsigned long long)_connectionTypeForEdge:(SCD_Struct_GE81*)arg1 points:(SCD_Struct_GE198*)arg2 connectingTilePoint:(Matrix<float, 2, 1>)arg3 ;
-(void)dealloc;
@end
