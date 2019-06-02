/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKQuickRouteManagerDelegate, MKQuickRouteTransportTypeFinding, MKQuickRouteConfigurableView;
#import <MapKit/MapKit-Structs.h>
@class _MKRouteETAFetcher, _MKRouteETA, NSError, NSObject, GEOAutomobileOptions, GEOTransitOptions, MKMapItem;

@interface _MKQuickRouteManager : NSObject {

	_MKRouteETAFetcher* _etaFetcher;
	double _maxDistanceToRequestETA;
	_MKRouteETA* _lastETA;
	unsigned long long _lastPreferredDirectionsType;
	NSError* _lastError;
	double _closeWalkTravelTime;
	double _maxWalkingDistance;
	BOOL _viewHasChangedSinceLastUpdate;
	BOOL _fetchAllTransportTypes;
	id<MKQuickRouteManagerDelegate> _delegate;
	id<MKQuickRouteTransportTypeFinding> _transportTypeFinder;
	NSObject*<MKQuickRouteConfigurableView> _view;
	CLLocationCoordinate2D _coordinate;

}

@property (nonatomic,readonly) BOOL isOnlyDriving; 
@property (assign,nonatomic,__weak) id<MKQuickRouteManagerDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MKQuickRouteTransportTypeFinding> transportTypeFinder;                          //@synthesize transportTypeFinder=_transportTypeFinder - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<MKQuickRouteConfigurableView> view;                                      //@synthesize view=_view - In the implementation block
@property (nonatomic,copy) GEOAutomobileOptions * automobileOptions; 
@property (nonatomic,copy) GEOTransitOptions * transitOptions; 
@property (nonatomic,retain) MKMapItem * mapItem; 
@property (assign,nonatomic) CLLocationCoordinate2D coordinate;                                                        //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,retain) MKMapItem * originMapItem; 
@property (getter=isUsingCurrentLocationForOrigin,nonatomic,readonly) BOOL usingCurrentLocationForOrigin; 
@property (assign,nonatomic) BOOL fetchAllTransportTypes;                                                              //@synthesize fetchAllTransportTypes=_fetchAllTransportTypes - In the implementation block
+(double)_maxDistanceToRequestETA;
+(unsigned long long)counterpartForTransportType:(unsigned long long)arg1 ;
+(BOOL)isLikelyToReturnETAForLocation:(id)arg1 ;
+(unsigned long long)directionsTypeForMapItem:(id)arg1 delegate:(id)arg2 mapType:(unsigned long long)arg3 ;
-(CLLocationCoordinate2D)coordinate;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(GEOAutomobileOptions *)automobileOptions;
-(GEOTransitOptions *)transitOptions;
-(void)setOriginMapItem:(MKMapItem *)arg1 ;
-(id)routeETAForTransportType:(unsigned long long)arg1 ;
-(BOOL)isUsingCurrentLocationForOrigin;
-(CLLocationCoordinate2D)originCoordinate;
-(CLLocationCoordinate2D)destinationCoordinate;
-(MKMapItem *)originMapItem;
-(void)_performWithTransportType:(/*^block*/id)arg1 ;
-(BOOL)_transportTypeShouldBeSmart;
-(void)setFetchAllTransportTypes:(BOOL)arg1 ;
-(void)updateETA;
-(void)requestNewETAForPreferredTransportType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)bestETAForPreferredDirectionsType:(unsigned long long)arg1 ;
-(unsigned long long)directionsTypeForMapType:(unsigned long long)arg1 ;
-(unsigned long long)directionsTypeForOriginCoordinate:(CLLocationCoordinate2D)arg1 destinationCoordinate:(CLLocationCoordinate2D)arg2 preferredDirectionsType:(unsigned long long)arg3 ;
-(unsigned long long)guessTransportTypeForDistance:(double)arg1 preferredDirectionsType:(unsigned long long)arg2 ;
-(BOOL)haveETAsForPreferredTransportType:(unsigned long long)arg1 ;
-(BOOL)isOnlyDriving;
-(id<MKQuickRouteTransportTypeFinding>)transportTypeFinder;
-(void)setTransportTypeFinder:(id<MKQuickRouteTransportTypeFinding>)arg1 ;
-(BOOL)fetchAllTransportTypes;
-(void)_resetState;
-(id)init;
-(id)description;
-(void)setDelegate:(id<MKQuickRouteManagerDelegate>)arg1 ;
-(NSObject*<MKQuickRouteConfigurableView>)view;
-(id<MKQuickRouteManagerDelegate>)delegate;
-(void)setView:(NSObject*<MKQuickRouteConfigurableView>)arg1 ;
@end

