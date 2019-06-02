/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MKMapView;

@interface MKMapCamera : NSObject <NSSecureCoding, NSCopying> {

	CLLocationCoordinate2D _centerCoordinate;
	double _heading;
	double _pitch;
	double _altitude;
	MKMapView* _mapView;

}

@property (assign,setter=_setPrecisePitch:,getter=_precisePitch,nonatomic) double precisePitch;              //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D centerCoordinate;                                        //@synthesize centerCoordinate=_centerCoordinate - In the implementation block
@property (assign,nonatomic) double heading;                                                                 //@synthesize heading=_heading - In the implementation block
@property (assign,nonatomic) double pitch; 
@property (assign,nonatomic) double altitude;                                                                //@synthesize altitude=_altitude - In the implementation block
+(id)camera;
+(id)cameraLookingAtCenterCoordinate:(CLLocationCoordinate2D)arg1 fromEyeCoordinate:(CLLocationCoordinate2D)arg2 eyeAltitude:(double)arg3 ;
+(id)cameraLookingAtCenterCoordinate:(CLLocationCoordinate2D)arg1 fromDistance:(double)arg2 pitch:(double)arg3 heading:(double)arg4 ;
+(id)_cameraLookingAtGEOMapRect:(const SCD_Struct_MK1*)arg1 aspectRatio:(float)arg2 ;
+(id)_cameraLookingAtMapRect:(SCD_Struct_MK1)arg1 forViewSize:(CGSize)arg2 ;
+(BOOL)supportsSecureCoding;
-(void)setAltitude:(double)arg1 ;
-(double)altitude;
-(void)setPitch:(double)arg1 ;
-(double)pitch;
-(CLLocationCoordinate2D)centerCoordinate;
-(void)setCenterCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)_setMapView:(id)arg1 ;
-(SCD_Struct_MK1)_enclosingGEOMapRectForAspectRatio:(float)arg1 ;
-(void)_setPrecisePitch:(double)arg1 ;
-(double)_precisePitch;
-(id)_mapView;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_updateState;
-(void)setHeading:(double)arg1 ;
-(double)heading;
-(BOOL)_validate;
@end

