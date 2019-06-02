/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MKPlaceAttributionCellDelegate.h>
#import <libobjc.A.dylib/MKPlacePhotosViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol MKPlaceCardPhotosControllerDelegateMKPlaceCardActionControllerDelegate;
@class MKPlacePhotosView, UIView, NSArray, UIScrollView, MKPhotoSmallAttributionView, MKMapItem, NSLayoutConstraint, MKPlaceAttributionCell, _MKPlaceViewController, NSString;

@interface MKPlacePhotosViewController : UIViewController <MKPlaceAttributionCellDelegate, MKPlacePhotosViewDelegate, UIScrollViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {

	MKPlacePhotosView* _currentPhotoViewer;
	UIView* _bottomHairline;
	NSArray* _photoViews;
	UIScrollView* _photosContainerScrollView;
	UIView* _photosContainer;
	MKPhotoSmallAttributionView* _photosSmallAttributionsView;
	double _lastPhotoScrollOffset;
	BOOL _photoScrollViewScrollingLeft;
	BOOL _photoScrollViewScrollingRight;
	BOOL _canUseFullscreenViewer;
	BOOL _canUseGallery;
	BOOL _photoLoaded;
	BOOL _loadAppImageCanceledOrFailed;
	BOOL _isRTL;
	unsigned long long _photosCount;
	MKMapItem* _mapItem;
	NSLayoutConstraint* _heightConstraint;
	NSLayoutConstraint* _bottomConstraint;
	NSArray* _photos;
	unsigned long long _mode;
	unsigned long long _originalMode;
	MKPlaceAttributionCell* _attributionCell;
	UIScrollView* _parentScrollView;
	BOOL _showsBottomHairline;
	_MKPlaceViewController* _owner;
	id<MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> _photosControllerDelegate;

}

@property (assign,nonatomic,__weak) _MKPlaceViewController * owner;                                                                                     //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> photosControllerDelegate;              //@synthesize photosControllerDelegate=_photosControllerDelegate - In the implementation block
@property (assign,nonatomic) BOOL showsBottomHairline;                                                                                                  //@synthesize showsBottomHairline=_showsBottomHairline - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)infoCardThemeChanged:(id)arg1 ;
-(id)infoCardChildPossibleActions;
-(id)attributionString;
-(void)openURL;
-(void)placePhotoViewerWillClose:(id)arg1 photo:(id)arg2 onIndex:(unsigned long long)arg3 ;
-(id)placePhotoViewerViewForPhotoAtIndex:(unsigned long long)arg1 ;
-(void)placePhotoViewerAttributionTappedForPhotoAtIndex:(unsigned long long)arg1 photo:(id)arg2 ;
-(id)initWithMapItem:(id)arg1 mode:(unsigned long long)arg2 ;
-(void)_didBecomeActive:(id)arg1 ;
-(void)_willResignActive:(id)arg1 ;
-(void)updateBottomHairlineVisibility;
-(void)addAttributionCell;
-(void)_createImageViews;
-(void)layoutImages;
-(void)updateAttributionPositionWithOffset:(double)arg1 ;
-(void)_catchScrollNotification:(id)arg1 ;
-(void)_updateAlphaAttribution;
-(void)_updatePhotoBackgroundColor:(id)arg1 ;
-(void)_cancelLoadPhotos;
-(void)_loadPhotos;
-(void)_photoSelected:(id)arg1 ;
-(void)_photoTappedAtIndex:(unsigned long long)arg1 ;
-(void)_callPhotoDelegateForPhotoAt:(unsigned long long)arg1 ;
-(id<MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate>)photosControllerDelegate;
-(void)setPhotosControllerDelegate:(id<MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate>)arg1 ;
-(void)setShowsBottomHairline:(BOOL)arg1 ;
-(BOOL)showsBottomHairline;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(CGSize)sizeForIndex:(unsigned long long)arg1 ;
-(void)viewLayoutMarginsDidChange;
-(_MKPlaceViewController *)owner;
-(void)setOwner:(_MKPlaceViewController *)arg1 ;
@end

