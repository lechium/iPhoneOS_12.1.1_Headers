/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class MKMapItemPhoto, MKPlacePhotosView, NSURLSessionTask, UIImageView, UIImage, NSString;

@interface _MKPlacePhotoView : UIScrollView <UIScrollViewDelegate> {

	BOOL _isZoomed;
	MKMapItemPhoto* _photo;
	MKPlacePhotosView* _viewer;
	NSURLSessionTask* _task;
	BOOL _hasLoadedFullPhoto;
	UIImageView* _imageView;
	UIImage* _thumbnail;

}

@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                    //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedFullPhoto;                //@synthesize hasLoadedFullPhoto=_hasLoadedFullPhoto - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 photo:(id)arg2 viewer:(id)arg3 ;
-(void)loadFullPhoto;
-(void)urlRequestFinished:(id)arg1 withError:(id)arg2 ;
-(void)unloadFullPhoto;
-(void)zoomToPoint:(id)arg1 ;
-(void)toggleBackground;
-(BOOL)hasLoadedFullPhoto;
-(void)setHasLoadedFullPhoto:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UIImageView *)imageView;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
@end
