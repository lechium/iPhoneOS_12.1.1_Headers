/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKCompanionResourceDirectoryEditor.h>

@class NSMutableDictionary, NSMutableArray, NSCache;

@interface NTKCompanionCustomPhotosEditor : NTKCompanionResourceDirectoryEditor {

	NSMutableDictionary* _pickedPhotos;
	NSMutableDictionary* _newPhotos;
	NSMutableArray* _orderList;
	NSCache* _scaledImageCache;
	BOOL _previewIsValid;

}

@property (nonatomic,readonly) long long photosCount; 
-(long long)photosCount;
-(BOOL)canChangeOriginalCropOfPhotoAtIndex:(long long)arg1 ;
-(CGSize)minimumNormalizedCropSizeForPhotoAtIndex:(long long)arg1 ;
-(CGRect)originalCropForPhotoAtIndex:(long long)arg1 ;
-(void)imageAndCropForPhotoAtIndex:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)imageInPhotoLibraryForPhotoAtIndex:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)deletePhotoAtIndex:(long long)arg1 ;
-(BOOL)setOriginalCrop:(CGRect)arg1 forPhotoAtIndex:(long long)arg2 ;
-(id)initWithResourceDirectory:(id)arg1 forDevice:(id)arg2 ;
-(void)_readPickedPhotosFrom:(id)arg1 ;
-(void)_fetchAssetsForPickedPhotos;
-(id)_copyOrTranscodePhotosTo:(id)arg1 ;
-(void)_reinitializeWithImageList:(id)arg1 andResourceDirectory:(id)arg2 ;
-(id)_fetchAssetsForNewPhotos:(id)arg1 ;
-(BOOL)addAssetsFromAssetList:(id)arg1 ;
-(BOOL)isPhotoInPhotoLibraryAtIndex:(long long)arg1 ;
-(void)generateGalleryPreviewResourceDirectoryWithCompletion:(/*^block*/id)arg1 ;
-(void)finalizeWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)addPhotosFromUIImagePicker:(id)arg1 ;
-(void)movePhotoAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
@end

