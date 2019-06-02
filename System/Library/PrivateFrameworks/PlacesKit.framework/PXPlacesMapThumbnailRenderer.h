/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <libobjc.A.dylib/PXPlacesMapAnnotationPopoverImageRenderer.h>
#import <libobjc.A.dylib/PXPlacesMapGeotaggableInfoDelegate.h>

@protocol PXPlacesMapPipelineComponentProvider, PXPlacesMapGeotaggableInfoDelegate;
@class PKExtendedTraitCollection, NSString;

@interface PXPlacesMapThumbnailRenderer : NSObject <PXPlacesMapAnnotationPopoverImageRenderer, PXPlacesMapGeotaggableInfoDelegate> {

	unsigned long long _popoverImageType;
	id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
	id<PXPlacesMapGeotaggableInfoDelegate> _informationDelegate;
	PKExtendedTraitCollection* _extendedTraitCollection;
	id _extendedTraitObserver;

}

@property (retain) id<PXPlacesMapGeotaggableInfoDelegate> informationDelegate;                                       //@synthesize informationDelegate=_informationDelegate - In the implementation block
@property (retain) PKExtendedTraitCollection * extendedTraitCollection;                                              //@synthesize extendedTraitCollection=_extendedTraitCollection - In the implementation block
@property (retain) id extendedTraitObserver;                                                                         //@synthesize extendedTraitObserver=_extendedTraitObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; 
@property (readonly) UIEdgeInsets minimumEdgeInsets; 
@property (readonly) unsigned long long popoverImageType;                                                            //@synthesize popoverImageType=_popoverImageType - In the implementation block
-(void)setExtendedTraitCollection:(PKExtendedTraitCollection *)arg1 ;
-(id)initWithTraitCollection:(id)arg1 andInforamtionDelegate:(id)arg2 popoverImageType:(unsigned long long)arg3 ;
-(UIEdgeInsets)minimumEdgeInsets;
-(void)imageForGeotaggable:(id)arg1 ofSize:(CGSize)arg2 networkAccessAllowed:(BOOL)arg3 andCompletion:(/*^block*/id)arg4 ;
-(PKExtendedTraitCollection *)extendedTraitCollection;
-(long long)annotationType;
-(id<PXPlacesMapPipelineComponentProvider>)pipelineComponentProvider;
-(void)setPipelineComponentProvider:(id<PXPlacesMapPipelineComponentProvider>)arg1 ;
-(BOOL)supportsMoveAnimations;
-(id)viewForAnnotation:(id)arg1 andMapView:(id)arg2 ;
-(id)annotationForGeotaggables:(id)arg1 initialCoordinate:(CLLocationCoordinate2D)arg2 ;
-(id<PXPlacesMapGeotaggableInfoDelegate>)informationDelegate;
-(void)setInformationDelegate:(id<PXPlacesMapGeotaggableInfoDelegate>)arg1 ;
-(id)extendedTraitObserver;
-(unsigned long long)popoverImageType;
-(void)setExtendedTraitObserver:(id)arg1 ;
-(void)dealloc;
-(void)reset;
@end
