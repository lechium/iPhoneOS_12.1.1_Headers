/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OFNSOperation.h>

@class CLGeocoder, CLLocation, NSArray;

@interface OFCLGeocoderOperation : OFNSOperation {

	CLGeocoder* _geocoder;
	CLLocation* _location;
	double _accuracy;
	NSArray* _placemarks;

}

@property (retain) NSArray * placemarks;              //@synthesize placemarks=_placemarks - In the implementation block
+(id)operationWithLocation:(id)arg1 ;
+(double)recommendedAccuracy;
+(id)operationWithLocation:(id)arg1 accuracy:(double)arg2 ;
-(void)setPlacemarks:(NSArray *)arg1 ;
-(id)initWithLocation:(id)arg1 accuracy:(double)arg2 ;
-(unsigned long long)launchOperation;
-(void)finishOperation;
-(void)cleanupOperation;
-(NSArray *)placemarks;
-(void)dealloc;
-(void)cancelOperation;
@end
