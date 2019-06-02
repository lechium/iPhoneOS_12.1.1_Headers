/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXPlacesMapViewPort : NSObject <NSCopying> {

	double _zoomLevel;
	double _pitch;
	double _scale;
	CGSize _viewSize;
	SCD_Struct_PX4 _mapRect;

}

@property (assign,nonatomic) SCD_Struct_PX4 mapRect;              //@synthesize mapRect=_mapRect - In the implementation block
@property (assign,nonatomic) CGSize viewSize;                     //@synthesize viewSize=_viewSize - In the implementation block
@property (assign,nonatomic) double zoomLevel;                    //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (assign,nonatomic) double pitch;                        //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) double scale;                        //@synthesize scale=_scale - In the implementation block
-(void)setMapRect:(SCD_Struct_PX4)arg1 ;
-(void)setZoomLevel:(double)arg1 ;
-(void)setPitch:(double)arg1 ;
-(double)pitch;
-(SCD_Struct_PX4)mapRect;
-(double)zoomLevel;
-(id)viewPortsBySplitingAt180thMerdian;
-(id)initWithMapRect:(SCD_Struct_PX4)arg1 andViewSize:(CGSize)arg2 zoomLevel:(double)arg3 pitch:(double)arg4 ;
-(BOOL)isSpanning180thMerdian;
-(BOOL)isEqual:(id)arg1 ;
-(double)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setScale:(double)arg1 ;
-(CGSize)viewSize;
-(void)setViewSize:(CGSize)arg1 ;
@end

