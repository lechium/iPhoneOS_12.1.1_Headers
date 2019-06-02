/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEODirectionsError.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, GEOAlert, _GEOTransitRoutingIncidentMessage;

@interface _GEODirectionsError : NSObject <GEODirectionsError, NSSecureCoding> {

	GEOAlert* _alert;
	GEOProblemDetail* _problemDetails;
	unsigned long long _problemDetailsCount;
	_GEOTransitRoutingIncidentMessage* _routingIncidentMessage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> incidentMessage; 
@property (nonatomic,readonly) long long firstDirectionsErrorCode; 
+(BOOL)supportsSecureCoding;
-(void)_copyProblemDetails:(GEOProblemDetail*)arg1 count:(unsigned long long)arg2 ;
-(long long)_errorCodeForProblemDetail:(GEOProblemDetail)arg1 ;
-(BOOL)_errorCode:(long long)arg1 toProblem:(out int*)arg2 ;
-(BOOL)hasError:(long long)arg1 ;
-(id<GEOTransitRoutingIncidentMessage>)incidentMessage;
-(long long)firstDirectionsErrorCode;
-(id)initWithResponse:(id)arg1 ;
-(id)initWithWaypointIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)localizedTitle;
-(NSString *)localizedDescription;
@end
