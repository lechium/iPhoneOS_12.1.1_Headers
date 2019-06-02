/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKShape.h>

@interface MKMultiPoint : MKShape {

	CGSize* _points;
	unsigned long long _pointCount;
	SCD_Struct_MK1 _boundingRect;

}

@property (nonatomic,readonly) unsigned long long pointCount;              //@synthesize pointCount=_pointCount - In the implementation block
-(CLLocationCoordinate2D)coordinate;
-(unsigned long long)pointCount;
-(CGSize*)points;
-(BOOL)intersectsMapRect:(SCD_Struct_MK1)arg1 ;
-(SCD_Struct_MK1)boundingMapRect;
-(void)_calculateBounds;
-(void)_setBounds:(SCD_Struct_MK1)arg1 ;
-(void)_wrapAroundTheDateline:(const CLLocationCoordinate2D*)arg1 count:(unsigned long long)arg2 ;
-(void)_setCoordinates:(const CLLocationCoordinate2D*)arg1 count:(unsigned long long)arg2 ;
-(void)_setPoints:(const CGSize*)arg1 count:(unsigned long long)arg2 ;
-(void)_assignPoints:(CGSize*)arg1 count:(unsigned long long)arg2 ;
-(void)getCoordinates:(CLLocationCoordinate2D*)arg1 range:(NSRange)arg2 ;
-(void)dealloc;
@end

