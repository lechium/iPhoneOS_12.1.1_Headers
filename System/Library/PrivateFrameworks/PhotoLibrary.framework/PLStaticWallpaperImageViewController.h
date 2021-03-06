/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PLWallpaperImageViewController.h>

@interface PLStaticWallpaperImageViewController : PLWallpaperImageViewController

@property (assign,nonatomic) BOOL colorSamplingEnabled; 
-(id)initWithUIImage:(id)arg1 ;
-(void)photoTileViewControllerDidEndGesture:(id)arg1 ;
-(void)setWallpaperForLocations:(long long)arg1 ;
-(void)providerLegibilitySettingsChanged:(id)arg1 ;
-(id)_wallPaperPreviewControllerForPhotoIrisAsset:(id)arg1 ;
-(id)_wallPaperPreviewControllerForAsset:(id)arg1 ;
-(id)initWithImage:(id)arg1 name:(id)arg2 video:(id)arg3 time:(double)arg4 ;
-(void)_fetchImageForWallPaperAsset:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)wallpaperImage;
-(void)setColorSamplingEnabled:(BOOL)arg1 ;
-(BOOL)colorSamplingEnabled;
-(id)initWithUIImage:(id)arg1 name:(id)arg2 ;
-(id)initWithPhoto:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)_preferredWhitePointAdaptivityStyle;
@end

