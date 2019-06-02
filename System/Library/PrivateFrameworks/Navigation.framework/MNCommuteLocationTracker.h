/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNLocationTracker.h>
#import <libobjc.A.dylib/GEOETAUpdaterDelegate.h>

@protocol GEOMapServiceTicket, GEODirectionServiceTicket;
@class GEOComposedWaypoint, MNLocation, MNActiveRouteInfo, GEONavigationMapMatcher, GEOETAUpdater, MNNavigationTraceManager, MNCommuteDestinationSuggestion, GEOComposedRoute, NSString;

@interface MNCommuteLocationTracker : MNLocationTracker <GEOETAUpdaterDelegate> {

	GEOComposedWaypoint* _lastOrigin;
	MNLocation* _lastLocation;
	MNActiveRouteInfo* _routeInfo;
	id<GEOMapServiceTicket> _currentLocationTicket;
	id<GEODirectionServiceTicket> _directionsRequestTicket;
	GEONavigationMapMatcher* _mapMatcher;
	GEOETAUpdater* _etaUpdater;
	MNNavigationTraceManager* _traceManager;
	BOOL _requestNonRecommendedRoutes;
	BOOL _routingInProgress;
	unsigned long long _destinationID;
	MNCommuteDestinationSuggestion* _suggestion;

}

@property (assign,nonatomic) BOOL routingInProgress;                                     //@synthesize routingInProgress=_routingInProgress - In the implementation block
@property (nonatomic,readonly) MNCommuteDestinationSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * destination; 
@property (nonatomic,readonly) GEOComposedRoute * route; 
@property (assign,nonatomic) BOOL requestNonRecommendedRoutes;                           //@synthesize requestNonRecommendedRoutes=_requestNonRecommendedRoutes - In the implementation block
@property (assign,nonatomic) unsigned long long destinationID;                           //@synthesize destinationID=_destinationID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)transportType;
-(GEOComposedRoute *)route;
-(id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1 ;
-(void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2 ;
-(void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2 ;
-(void)etaUpdater:(id)arg1 receivedError:(id)arg2 ;
-(void)etaUpdaterUpdatedETA:(id)arg1 ;
-(void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4 ;
-(id)_matchedLocationForLocation:(id)arg1 ;
-(void)startTracking;
-(void)_setAuditToken:(id)arg1 ;
-(id)_routeAttributes;
-(void)setRoutingInProgress:(BOOL)arg1 ;
-(BOOL)routingInProgress;
-(void)_requestRouteFromWaypoint:(id)arg1 location:(id)arg2 ;
-(BOOL)requestNonRecommendedRoutes;
-(id)_directionsRequestFeedback;
-(void)_handleDirectionsResponse:(id)arg1 error:(id)arg2 forRequest:(id)arg3 ;
-(void)_requestRouteFromLocation:(id)arg1 ;
-(id)_matchedLocationForMatchResult:(id)arg1 originalLocation:(id)arg2 ;
-(id)initWithSuggestion:(id)arg1 traceManager:(id)arg2 ;
-(void)setRequestNonRecommendedRoutes:(BOOL)arg1 ;
-(void)stopTracking;
-(void)updateETA;
-(MNCommuteDestinationSuggestion *)suggestion;
-(void)updateLocation:(id)arg1 ;
-(unsigned long long)destinationID;
-(void)setDestinationID:(unsigned long long)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(GEOComposedWaypoint *)destination;
@end

