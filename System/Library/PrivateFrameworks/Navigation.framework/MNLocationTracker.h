/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Navigation/Navigation-Structs.h>
@class MNObserverHashTable, GEOApplicationAuditToken, MNLocation, MNNavigationSession;

@interface MNLocationTracker : NSObject {

	MNObserverHashTable* _safeDelegate;
	int _state;
	GEOApplicationAuditToken* _auditToken;
	MNLocation* _lastMatchedLocation;
	MNNavigationSession* _navigationSession;
	BOOL _localizeRoadNames;

}

@property (nonatomic,readonly) MNObserverHashTable * safeDelegate;                                                         //@synthesize safeDelegate=_safeDelegate - In the implementation block
@property (nonatomic,__weak,readonly) MNNavigationSession * navigationSession;                                             //@synthesize navigationSession=_navigationSession - In the implementation block
@property (assign,setter=_setState:,nonatomic) int state;                                                                  //@synthesize state=_state - In the implementation block
@property (setter=_setAuditToken:,getter=_auditToken,nonatomic,retain) GEOApplicationAuditToken * auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,readonly) int transportType; 
@property (nonatomic,readonly) MNLocation * lastMatchedLocation;                                                           //@synthesize lastMatchedLocation=_lastMatchedLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasArrived; 
@property (nonatomic,readonly) BOOL shouldProjectAlongRoute; 
-(int)transportType;
-(BOOL)hasArrived;
-(void)_updateShouldLocalizeRoadNames;
-(id)_matchedLocationForLocation:(id)arg1 ;
-(void)_switchedToStepAtIndex:(unsigned long long)arg1 ;
-(MNNavigationSession *)navigationSession;
-(BOOL)_checkArrivalForLocation:(id)arg1 route:(id)arg2 destination:(id)arg3 ;
-(id)initWithNavigationSession:(id)arg1 ;
-(BOOL)shouldProjectAlongRoute;
-(void)startTracking;
-(void)updateDestination:(id)arg1 finishedHandler:(/*^block*/id)arg2 ;
-(void)reroute:(id)arg1 reason:(unsigned long long)arg2 ;
-(id)matchedLocationForLocation:(id)arg1 ;
-(void)updateVehicleSpeed:(double)arg1 timestamp:(id)arg2 ;
-(void)updateVehicleHeading:(double)arg1 timestamp:(id)arg2 ;
-(BOOL)shouldAllowPause;
-(void)_setIsNavigatingInLowGuidance:(BOOL)arg1 ;
-(void)_updateMatchedLocation:(id)arg1 ;
-(void)_roadFeaturesForFeature:(SCD_Struct_MN5*)arg1 outRoadName:(id*)arg2 outShieldText:(id*)arg3 outShieldType:(long long*)arg4 ;
-(BOOL)_checkArrivalForLocation:(id)arg1 ;
-(MNLocation *)lastMatchedLocation;
-(MNObserverHashTable *)safeDelegate;
-(id)_auditToken;
-(void)_setAuditToken:(id)arg1 ;
-(void)resetForTracePlayerAtLocation:(id)arg1 ;
-(void)traceForcedRerouteWithResponse:(id)arg1 request:(id)arg2 ;
-(void)traceForcedActiveTransportTypeChange:(int)arg1 ;
-(void)tracePaused;
-(void)traceJumpedInTime;
-(void)forceOnRoute:(id)arg1 atLocation:(id)arg2 ;
-(void)stopTracking;
-(void)updateLocation:(id)arg1 ;
-(void)_defaultsDidChange;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(int)state;
-(void)_setState:(int)arg1 ;
-(void)resume;
-(void)pause;
-(BOOL)paused;
@end

