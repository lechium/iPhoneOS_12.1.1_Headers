/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOHorizontalCelestialBodyData : NSObject {

	double _altitude;
	double _azimuth;

}

@property (nonatomic,readonly) double altitude;              //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,readonly) double azimuth;               //@synthesize azimuth=_azimuth - In the implementation block
-(double)altitude;
-(id)initWithLocation:(SCD_Struct_GE30)arg1 date:(id)arg2 body:(long long)arg3 useHighPrecision:(BOOL)arg4 ;
-(void)_calcuateAzimuthandAltitudeForCoordinate:(SCD_Struct_GE30)arg1 julianDay:(double)arg2 eclipticLongitude:(double)arg3 eclipticLatitude:(double)arg4 radius:(double)arg5 ;
-(id)initWithLocation:(SCD_Struct_GE30)arg1 date:(id)arg2 body:(long long)arg3 ;
-(double)azimuth;
@end

