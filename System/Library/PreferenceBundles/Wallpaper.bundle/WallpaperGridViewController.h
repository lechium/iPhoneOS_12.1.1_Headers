/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/PLWallpaperImageViewControllerDelegate.h>

@class NSArray, NSCache, NSString;

@interface WallpaperGridViewController : UICollectionViewController <PLWallpaperImageViewControllerDelegate> {

	NSArray* _wallpaperItems;
	NSCache* _thumbnailCache;
	double _layoutReferenceWidth;

}

@property (assign,nonatomic) double layoutReferenceWidth;              //@synthesize layoutReferenceWidth=_layoutReferenceWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)layoutReferenceWidth;
-(void)_updateLayout;
-(void)wallpaperImageViewController:(id)arg1 didSetWallpaperWithOptions:(id)arg2 ;
-(void)wallpaperImageViewControllerDidFinishSaving:(id)arg1 ;
-(void)wallpaperImageViewControllerDidCancel:(id)arg1 ;
-(void)setLayoutReferenceWidth:(double)arg1 ;
-(id)initWithWallpaperItems:(id)arg1 ;
-(id)_thumbnailForWallpaperItem:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
@end

