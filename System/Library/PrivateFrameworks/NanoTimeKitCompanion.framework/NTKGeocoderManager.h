/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLGeocoder, CLLocation, CLPlacemark, CLInUseAssertion, NSMutableArray;

@interface NTKGeocoderManager : NSObject {

	CLGeocoder* _geocoder;
	CLLocation* _cachedLocation;
	CLPlacemark* _cachedPlacemark;
	CLInUseAssertion* _locationInUseAssertion;
	NSMutableArray* _handlers;

}
+(id)sharedManager;
-(id)cachedPlacemarkForLocation:(id)arg1 ;
-(void)_handlePlacemarks:(id)arg1 fromLocation:(id)arg2 error:(id)arg3 ;
-(void)placemarkForLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)init;
@end
