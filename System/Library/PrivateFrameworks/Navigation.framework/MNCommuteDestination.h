/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOComposedRoute, MNCommuteDestinationSuggestion, GEORouteSet, GEODirectionsRequest, MNLocation, GEOETARoute, GEOETATrafficUpdateResponse, NSDictionary, MNObserverHashTable, NSString, GEOComposedWaypoint;

@interface MNCommuteDestination : NSObject <NSSecureCoding, NSCopying> {

	GEOComposedRoute* _nonRecommendedRoute;
	BOOL _invalid;
	BOOL _rerouting;
	MNCommuteDestinationSuggestion* _suggestion;
	GEOComposedRoute* _route;
	GEORouteSet* _routeSet;
	GEODirectionsRequest* _directionsRequest;
	MNLocation* _lastMatchedLocation;
	GEOETARoute* _etaRoute;
	GEOETATrafficUpdateResponse* _etaResponse;
	double _remainingTime;
	double _remainingDistance;
	MNLocation* _lastLocation;
	long long _score;
	NSDictionary* _scores;
	MNObserverHashTable* _observers;

}

@property (nonatomic,retain) GEOComposedRoute * nonRecommendedRoute; 
@property (retain) MNObserverHashTable * observers;                                    //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL invalid;                                             //@synthesize invalid=_invalid - In the implementation block
@property (nonatomic,retain) MNCommuteDestinationSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) GEOComposedWaypoint * waypoint; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain) GEOComposedRoute * route;                                 //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) GEORouteSet * routeSet;                                   //@synthesize routeSet=_routeSet - In the implementation block
@property (nonatomic,retain) GEODirectionsRequest * directionsRequest;                 //@synthesize directionsRequest=_directionsRequest - In the implementation block
@property (nonatomic,retain) MNLocation * lastMatchedLocation;                         //@synthesize lastMatchedLocation=_lastMatchedLocation - In the implementation block
@property (readonly) BOOL canGetETARoute; 
@property (nonatomic,retain) GEOETARoute * etaRoute;                                   //@synthesize etaRoute=_etaRoute - In the implementation block
@property (nonatomic,retain) GEOETATrafficUpdateResponse * etaResponse;                //@synthesize etaResponse=_etaResponse - In the implementation block
@property (readonly) BOOL canCalculateETA; 
@property (assign,nonatomic) double remainingTime;                                     //@synthesize remainingTime=_remainingTime - In the implementation block
@property (assign,nonatomic) double remainingDistance;                                 //@synthesize remainingDistance=_remainingDistance - In the implementation block
@property (assign,nonatomic) BOOL rerouting;                                           //@synthesize rerouting=_rerouting - In the implementation block
@property (nonatomic,retain) MNLocation * lastLocation;                                //@synthesize lastLocation=_lastLocation - In the implementation block
@property (nonatomic,readonly) double geodesicDistance; 
@property (assign,nonatomic) long long score;                                          //@synthesize score=_score - In the implementation block
@property (nonatomic,copy) NSDictionary * scores;                                      //@synthesize scores=_scores - In the implementation block
@property (nonatomic,readonly) NSString * shortDescription; 
+(BOOL)supportsSecureCoding;
-(GEOComposedRoute *)route;
-(GEORouteSet *)routeSet;
-(void)setRouteSet:(GEORouteSet *)arg1 ;
-(void)setScore:(long long)arg1 ;
-(void)setRemainingTime:(double)arg1 ;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(void)setEtaResponse:(GEOETATrafficUpdateResponse *)arg1 ;
-(GEOETATrafficUpdateResponse *)etaResponse;
-(GEOComposedWaypoint *)waypoint;
-(double)remainingTime;
-(MNLocation *)lastMatchedLocation;
-(void)setEtaRoute:(GEOETARoute *)arg1 ;
-(GEOETARoute *)etaRoute;
-(void)setRemainingDistance:(double)arg1 ;
-(double)remainingDistance;
-(double)geodesicDistance;
-(GEODirectionsRequest *)directionsRequest;
-(void)setDirectionsRequest:(GEODirectionsRequest *)arg1 ;
-(void)setLastMatchedLocation:(MNLocation *)arg1 ;
-(BOOL)rerouting;
-(void)setRerouting:(BOOL)arg1 ;
-(GEOComposedRoute *)nonRecommendedRoute;
-(void)setNonRecommendedRoute:(GEOComposedRoute *)arg1 ;
-(BOOL)canGetETARoute;
-(BOOL)canCalculateETA;
-(void)updateFrom:(id)arg1 ;
-(long long)score;
-(MNCommuteDestinationSuggestion *)suggestion;
-(void)setLastLocation:(MNLocation *)arg1 ;
-(MNLocation *)lastLocation;
-(void)setSuggestion:(MNCommuteDestinationSuggestion *)arg1 ;
-(NSDictionary *)scores;
-(void)setScores:(NSDictionary *)arg1 ;
-(BOOL)invalid;
-(void)setInvalid:(BOOL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(void)removeObserver:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setObservers:(MNObserverHashTable *)arg1 ;
-(MNObserverHashTable *)observers;
-(void)addObserver:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(NSString *)shortDescription;
@end

