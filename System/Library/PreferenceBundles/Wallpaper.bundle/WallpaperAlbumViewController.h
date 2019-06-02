/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUI/PUPhotosAlbumViewController.h>
#import <libobjc.A.dylib/PSController.h>

@protocol PSController;
@class WallpaperAlbumViewControllerSpec, UIViewController, PSRootController, PSSpecifier, PLStaticWallpaperImageViewController, PUPhotosGridDownloadHelper, NSString;

@interface WallpaperAlbumViewController : PUPhotosAlbumViewController <PSController> {

	WallpaperAlbumViewControllerSpec* _wallpaperAlbumSpec;
	UIViewController*<PSController> _parentController;
	PSRootController* _rootController;
	PSSpecifier* _specifier;
	PLStaticWallpaperImageViewController* _imageViewController;
	PUPhotosGridDownloadHelper* _downloadHelper;

}

@property (nonatomic,retain) WallpaperAlbumViewControllerSpec * wallpaperAlbumSpec;                   //@synthesize wallpaperAlbumSpec=_wallpaperAlbumSpec - In the implementation block
@property (assign,nonatomic) UIViewController*<PSController> parentController;                        //@synthesize parentController=_parentController - In the implementation block
@property (assign,nonatomic) PSRootController * rootController;                                       //@synthesize rootController=_rootController - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                                                 //@synthesize specifier=_specifier - In the implementation block
@property (nonatomic,retain) PLStaticWallpaperImageViewController * imageViewController;              //@synthesize imageViewController=_imageViewController - In the implementation block
@property (nonatomic,readonly) PUPhotosGridDownloadHelper * downloadHelper;                           //@synthesize downloadHelper=_downloadHelper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)formSheetViewWillDisappear;
-(void)popupViewWillDisappear;
-(void)popupViewDidDisappear;
-(void)formSheetViewDidDisappear;
-(void)editImageViewController:(id)arg1 didEditImageWithOptions:(id)arg2 ;
-(void)editImageViewControllerDidCancel:(id)arg1 ;
-(id)initWithSpec:(id)arg1 ;
-(BOOL)canNavigateToPhotoInteractively:(BOOL)arg1 ;
-(BOOL)canDragOut;
-(id)newGridLayout;
-(void)updateLayoutMetrics;
-(BOOL)allowSlideshowButton;
-(BOOL)canDragIn;
-(BOOL)allowsPeeking;
-(BOOL)isPreheatingEnabled;
-(void)navigateToPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)shouldShowMenu;
-(BOOL)canBeShownFromSuspendedState;
-(void)setParentController:(UIViewController*<PSController>)arg1 ;
-(UIViewController*<PSController>)parentController;
-(void)setRootController:(PSRootController *)arg1 ;
-(PSRootController *)rootController;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)specifier;
-(void)didLock;
-(void)willUnlock;
-(void)didUnlock;
-(void)didWake;
-(void)showController:(id)arg1 ;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)handleURL:(id)arg1 ;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
-(void)setAlbum:(id)arg1 existingFetchResult:(id)arg2 ;
-(WallpaperAlbumViewControllerSpec *)wallpaperAlbumSpec;
-(PUPhotosGridDownloadHelper *)downloadHelper;
-(void)_showWallpaperImageViewControllerForPhoto:(id)arg1 ;
-(void)setImageViewController:(PLStaticWallpaperImageViewController *)arg1 ;
-(PLStaticWallpaperImageViewController *)imageViewController;
-(void)dismissDidSetWallpaper:(BOOL)arg1 ;
-(void)setWallpaperAlbumSpec:(WallpaperAlbumViewControllerSpec *)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(long long)_preferredWhitePointAdaptivityStyle;
-(void)suspend;
@end
