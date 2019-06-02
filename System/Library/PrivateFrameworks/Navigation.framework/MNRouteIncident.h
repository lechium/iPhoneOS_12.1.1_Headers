/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEORouteIncident;

@interface MNRouteIncident : NSObject <NSSecureCoding> {

	GEORouteIncident* _geoRouteIncident;
	double _offsetInMeters;

}

@property (nonatomic,readonly) GEORouteIncident * geoRouteIncident;              //@synthesize geoRouteIncident=_geoRouteIncident - In the implementation block
@property (nonatomic,readonly) double offsetInMeters;                            //@synthesize offsetInMeters=_offsetInMeters - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithGeoRouteIncident:(id)arg1 offsetInMeters:(double)arg2 ;
-(GEORouteIncident *)geoRouteIncident;
-(double)offsetInMeters;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

