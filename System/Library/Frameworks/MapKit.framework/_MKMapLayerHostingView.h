/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class VKMapView;

@interface _MKMapLayerHostingView : UIView {

	VKMapView* _mapView;

}

@property (nonatomic,retain) VKMapView * mapView;              //@synthesize mapView=_mapView - In the implementation block
+(Class)layerClass;
-(void)setMapView:(VKMapView *)arg1 ;
-(VKMapView *)mapView;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
@end

