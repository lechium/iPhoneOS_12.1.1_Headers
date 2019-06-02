/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MNLocation, NSDictionary;

@interface MNTraceEvent : NSObject {

	NSString* _cachedPrimaryDescription;
	NSString* _cachedSecondaryDescription;
	double _timeSinceStartOfRoute;
	unsigned long long _stepIndex;
	unsigned long long _stage;
	double _distanceToStartOfManeuver;
	MNLocation* _location;
	unsigned long long _eventType;
	NSDictionary* _eventData;

}

@property (nonatomic,readonly) double timeSinceStartOfRoute;                  //@synthesize timeSinceStartOfRoute=_timeSinceStartOfRoute - In the implementation block
@property (nonatomic,readonly) unsigned long long stepIndex;                  //@synthesize stepIndex=_stepIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long stage;                      //@synthesize stage=_stage - In the implementation block
@property (nonatomic,readonly) double distanceToStartOfManeuver;              //@synthesize distanceToStartOfManeuver=_distanceToStartOfManeuver - In the implementation block
@property (nonatomic,readonly) MNLocation * location;                         //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) unsigned long long eventType;                    //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) NSString * primaryDescription; 
@property (nonatomic,readonly) NSString * secondaryDescription; 
@property (nonatomic,copy) NSDictionary * eventData;                          //@synthesize eventData=_eventData - In the implementation block
-(void)setEventType:(unsigned long long)arg1 ;
-(unsigned long long)stepIndex;
-(double)timeSinceStartOfRoute;
-(NSString *)secondaryDescription;
-(id)initWithTime:(double)arg1 stepIndex:(unsigned long long)arg2 stage:(unsigned long long)arg3 distance:(double)arg4 location:(id)arg5 eventType:(unsigned long long)arg6 eventData:(id)arg7 ;
-(id)instructionsFromSignDescription:(id)arg1 ;
-(id)stringByInstructions:(id)arg1 ;
-(void)_calculateDescription;
-(NSString *)primaryDescription;
-(id)shieldToText:(id)arg1 ;
-(double)distanceToStartOfManeuver;
-(void)setEventData:(NSDictionary *)arg1 ;
-(NSDictionary *)eventData;
-(id)description;
-(unsigned long long)eventType;
-(MNLocation *)location;
-(unsigned long long)stage;
@end

