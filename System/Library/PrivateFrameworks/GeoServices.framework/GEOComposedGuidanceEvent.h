/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, GEOGuidanceEvent, GEOComposedRoute, NSMutableArray, GEOJunction, GEOComposedRouteStep, NSArray, GEONameInfo, NSString;

@interface GEOComposedGuidanceEvent : NSObject {

	NSUUID* _uniqueID;
	unsigned long long _creationOrder;
	GEOGuidanceEvent* _guidanceEvent;
	GEOComposedRoute* _route;
	unsigned long long _source;
	unsigned long long _stepIndex;
	unsigned long long _enrouteNoticeIndex;
	unsigned long long _sourceIndex;
	BOOL _clampToStep;
	NSMutableArray* _lanes;
	double _startValidDistance;
	double _endValidDistance;
	double _referencePointDistance;
	double _distanceForStrings;
	GEOJunction* _maneuverJunction;

}

@property (nonatomic,retain) GEOGuidanceEvent * guidanceEvent;                          //@synthesize guidanceEvent=_guidanceEvent - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueID;                                       //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteStep * step; 
@property (nonatomic,readonly) unsigned long long source; 
@property (nonatomic,readonly) unsigned long long enrouteNoticeIndex;                   //@synthesize enrouteNoticeIndex=_enrouteNoticeIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long sourceIndex; 
@property (nonatomic,readonly) BOOL hasSignGuidance; 
@property (nonatomic,readonly) BOOL hasSpokenGuidance; 
@property (nonatomic,readonly) unsigned long long stackRanking; 
@property (nonatomic,readonly) NSArray * signTitles; 
@property (nonatomic,readonly) NSArray * signDetails; 
@property (nonatomic,readonly) GEONameInfo * shieldInfo; 
@property (nonatomic,readonly) int maneuverArrow; 
@property (nonatomic,readonly) int drivingSide; 
@property (nonatomic,readonly) GEOJunction * maneuverJunction; 
@property (nonatomic,readonly) NSString * exclusiveSetIdentifier; 
@property (nonatomic,readonly) NSArray * announcements; 
@property (nonatomic,readonly) double repetitionInterval; 
@property (nonatomic,readonly) BOOL hasHaptics; 
@property (nonatomic,readonly) BOOL isSticky; 
@property (nonatomic,readonly) NSArray * lanes; 
@property (nonatomic,readonly) NSArray * laneTitles; 
@property (nonatomic,readonly) NSArray * laneInstructions; 
@property (nonatomic,readonly) int composedGuidanceEventType; 
@property (nonatomic,readonly) BOOL isLaneGuidanceForManeuver; 
@property (nonatomic,readonly) unsigned long long numChainedAnnouncements; 
@property (nonatomic,readonly) double startValidDistance;                               //@synthesize startValidDistance=_startValidDistance - In the implementation block
@property (nonatomic,readonly) double endValidDistance;                                 //@synthesize endValidDistance=_endValidDistance - In the implementation block
@property (nonatomic,readonly) double referencePointDistance;                           //@synthesize referencePointDistance=_referencePointDistance - In the implementation block
@property (nonatomic,readonly) double distanceForStrings;                               //@synthesize distanceForStrings=_distanceForStrings - In the implementation block
-(NSUUID *)uniqueID;
-(NSArray *)announcements;
-(id)initWithGuidanceEvent:(id)arg1 stepIndex:(unsigned long long)arg2 composedRoute:(id)arg3 clampToStep:(BOOL)arg4 ;
-(int)drivingSide;
-(BOOL)_MapsCarPlay_isEqual:(id)arg1 ;
-(GEOComposedRouteStep *)step;
-(void)_findSource;
-(double)startValidDistance;
-(double)endValidDistance;
-(BOOL)hasSpokenGuidance;
-(BOOL)hasHaptics;
-(BOOL)hasSignGuidance;
-(NSArray *)signDetails;
-(NSArray *)lanes;
-(BOOL)isSticky;
-(NSString *)exclusiveSetIdentifier;
-(BOOL)_needsLazyInit;
-(void)_lazyInit;
-(GEOGuidanceEvent *)guidanceEvent;
-(unsigned long long)stackRanking;
-(NSArray *)signTitles;
-(double)repetitionInterval;
-(double)startDistanceForSpeed:(double)arg1 ;
-(double)endDistanceForSpeed:(double)arg1 ;
-(unsigned long long)sourceIndex;
-(GEONameInfo *)shieldInfo;
-(int)maneuverArrow;
-(GEOJunction *)maneuverJunction;
-(NSArray *)laneTitles;
-(NSArray *)laneInstructions;
-(int)composedGuidanceEventType;
-(BOOL)isLaneGuidanceForManeuver;
-(unsigned long long)numChainedAnnouncements;
-(BOOL)isValidForSpeed:(double)arg1 ;
-(double)triggerDistanceForSpeed:(double)arg1 andDuration:(/*^block*/id)arg2 ;
-(double)desiredTimeGapToEvent:(id)arg1 chained:(BOOL)arg2 ;
-(long long)compareFactoringInSpeed:(id)arg1 speed:(double)arg2 ;
-(void)setGuidanceEvent:(GEOGuidanceEvent *)arg1 ;
-(unsigned long long)enrouteNoticeIndex;
-(double)referencePointDistance;
-(double)distanceForStrings;
-(id)description;
-(unsigned long long)source;
-(long long)compare:(id)arg1 ;
-(long long)comparePriority:(id)arg1 ;
@end

