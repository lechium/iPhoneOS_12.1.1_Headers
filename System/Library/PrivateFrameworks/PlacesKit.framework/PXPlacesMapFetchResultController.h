/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXPlacesMapControllerAccess, PXPlacesMapGeotaggableInfoDelegate, OS_dispatch_queue;
@class PXPlacesPhotoAssetsStore, PXPlacesMapPipeline, NSObject, PXPlacesMapView, PXPlacesMapController;

@interface PXPlacesMapFetchResultController : NSObject {

	id<PXPlacesMapControllerAccess> _mapViewController;
	unsigned long long _contentMode;
	id<PXPlacesMapGeotaggableInfoDelegate> _geotaggableInfoDelegate;
	PXPlacesPhotoAssetsStore* _providedAssetStore;
	PXPlacesMapPipeline* _providedPipeline;
	PXPlacesPhotoAssetsStore* _albumAssetStore;
	PXPlacesMapPipeline* _albumPipeline;
	PXPlacesMapPipeline* _currentPipeline;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) id<PXPlacesMapControllerAccess> mapViewController;                                  //@synthesize mapViewController=_mapViewController - In the implementation block
@property (assign,nonatomic,__weak) id<PXPlacesMapGeotaggableInfoDelegate> geotaggableInfoDelegate;              //@synthesize geotaggableInfoDelegate=_geotaggableInfoDelegate - In the implementation block
@property (retain) PXPlacesPhotoAssetsStore * providedAssetStore;                                                //@synthesize providedAssetStore=_providedAssetStore - In the implementation block
@property (retain) PXPlacesMapPipeline * providedPipeline;                                                       //@synthesize providedPipeline=_providedPipeline - In the implementation block
@property (nonatomic,retain) PXPlacesPhotoAssetsStore * albumAssetStore;                                         //@synthesize albumAssetStore=_albumAssetStore - In the implementation block
@property (nonatomic,retain) PXPlacesMapPipeline * albumPipeline;                                                //@synthesize albumPipeline=_albumPipeline - In the implementation block
@property (nonatomic,retain) PXPlacesMapPipeline * currentPipeline;                                              //@synthesize currentPipeline=_currentPipeline - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                                           //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) PXPlacesMapView * mapView; 
@property (nonatomic,readonly) PXPlacesMapController * mapController; 
@property (assign,nonatomic) unsigned long long contentMode;                                                     //@synthesize contentMode=_contentMode - In the implementation block
-(PXPlacesMapView *)mapView;
-(id)initWithGeotaggableInfoDelegate:(id)arg1 andMapViewController:(id)arg2 ;
-(PXPlacesMapController *)mapController;
-(id<PXPlacesMapControllerAccess>)mapViewController;
-(void)focusOnProvidedAssetsAnimated:(BOOL)arg1 ;
-(void)resumeWithCompletion:(/*^block*/id)arg1 ;
-(id)visibleGeotaggables;
-(void)focusOnGeotaggablesAnimated:(BOOL)arg1 ;
-(id<PXPlacesMapGeotaggableInfoDelegate>)geotaggableInfoDelegate;
-(void)setGeotaggableInfoDelegate:(id<PXPlacesMapGeotaggableInfoDelegate>)arg1 ;
-(void)loadProvidedAssetStoreWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)loadFetchResults:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)reloadContentModeWithCompletion:(/*^block*/id)arg1 ;
-(void)loadFetchResult:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setMapViewController:(id<PXPlacesMapControllerAccess>)arg1 ;
-(id)currentAssetStore;
-(PXPlacesPhotoAssetsStore *)albumAssetStore;
-(PXPlacesPhotoAssetsStore *)providedAssetStore;
-(PXPlacesMapPipeline *)albumPipeline;
-(PXPlacesMapPipeline *)providedPipeline;
-(PXPlacesMapPipeline *)currentPipeline;
-(void)setCurrentPipeline:(PXPlacesMapPipeline *)arg1 ;
-(void)setProvidedAssetStore:(PXPlacesPhotoAssetsStore *)arg1 ;
-(void)setProvidedPipeline:(PXPlacesMapPipeline *)arg1 ;
-(void)focusOnProvidedAssetsImmediately;
-(void)setAlbumAssetStore:(PXPlacesPhotoAssetsStore *)arg1 ;
-(void)setAlbumPipeline:(PXPlacesMapPipeline *)arg1 ;
-(void)setContentMode:(unsigned long long)arg1 ;
-(unsigned long long)contentMode;
@end

