/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PUEditableAsset;
#import <PhotosEditUI/PhotosEditUI-Structs.h>
@class PLPhotoEditMutableModel, UIImage, NSURL, NSString, PUPhotoEditIrisModel;

@interface PUPhotoEditResourceLoadResult : NSObject {

	BOOL _assetLoadingAsRaw;
	PLPhotoEditMutableModel* _editModel;
	UIImage* _image;
	NSURL* _imageURL;
	NSString* _imageUTI;
	NSURL* _videoComplementURL;
	long long _retrievedVersion;
	long long _penultimateAvailability;
	id<PUEditableAsset> _asset;
	PUPhotoEditIrisModel* _livePhotoModel;
	SCD_Struct_PU5 _videoComplementStillImageTime;
	SCD_Struct_PU5 _videoComplementDuration;

}

@property (setter=_setEditModel:,nonatomic,retain) PLPhotoEditMutableModel * editModel;                                           //@synthesize editModel=_editModel - In the implementation block
@property (setter=_setLivePhotoModel:,nonatomic,retain) PUPhotoEditIrisModel * livePhotoModel;                                    //@synthesize livePhotoModel=_livePhotoModel - In the implementation block
@property (setter=_setImage:,nonatomic,retain) UIImage * image;                                                                   //@synthesize image=_image - In the implementation block
@property (setter=_setImageURL:,nonatomic,retain) NSURL * imageURL;                                                               //@synthesize imageURL=_imageURL - In the implementation block
@property (setter=_setImageUTI:,nonatomic,retain) NSString * imageUTI;                                                            //@synthesize imageUTI=_imageUTI - In the implementation block
@property (setter=_setVideoComplementURL:,nonatomic,retain) NSURL * videoComplementURL;                                           //@synthesize videoComplementURL=_videoComplementURL - In the implementation block
@property (assign,setter=_setVideoComplementStillImageTime:,nonatomic) SCD_Struct_PU5 videoComplementStillImageTime;              //@synthesize videoComplementStillImageTime=_videoComplementStillImageTime - In the implementation block
@property (assign,setter=_setVideoComplementDuration:,nonatomic) SCD_Struct_PU5 videoComplementDuration;                          //@synthesize videoComplementDuration=_videoComplementDuration - In the implementation block
@property (assign,setter=_setRetrievedVersion:,nonatomic) long long retrievedVersion;                                             //@synthesize retrievedVersion=_retrievedVersion - In the implementation block
@property (assign,setter=_setPenultimateAvailability:,nonatomic) long long penultimateAvailability;                               //@synthesize penultimateAvailability=_penultimateAvailability - In the implementation block
@property (setter=_setAsset:,nonatomic,retain) id<PUEditableAsset> asset;                                                         //@synthesize asset=_asset - In the implementation block
@property (assign,setter=_setAssetLoadingAsRaw:,nonatomic) BOOL assetLoadingAsRaw;                                                //@synthesize assetLoadingAsRaw=_assetLoadingAsRaw - In the implementation block
@property (getter=isPenultimateAvailable,nonatomic,readonly) BOOL penultimateAvailable; 
+(id)resultWithAdjustmentsLoadResult:(id)arg1 ;
-(NSURL *)videoComplementURL;
-(id)editSource;
-(void)_setImageURL:(id)arg1 ;
-(void)_setEditModel:(id)arg1 ;
-(void)_setAsset:(id)arg1 ;
-(void)_setImage:(id)arg1 ;
-(PLPhotoEditMutableModel *)editModel;
-(NSURL *)imageURL;
-(long long)retrievedVersion;
-(long long)penultimateAvailability;
-(BOOL)isPenultimateAvailable;
-(NSString *)imageUTI;
-(BOOL)assetLoadingAsRaw;
-(SCD_Struct_PU5)videoComplementStillImageTime;
-(SCD_Struct_PU5)videoComplementDuration;
-(void)_setRetrievedVersion:(long long)arg1 ;
-(void)_setPenultimateAvailability:(long long)arg1 ;
-(void)_setImageUTI:(id)arg1 ;
-(void)_setVideoComplementURL:(id)arg1 ;
-(void)_setVideoComplementStillImageTime:(SCD_Struct_PU5)arg1 ;
-(void)_setVideoComplementDuration:(SCD_Struct_PU5)arg1 ;
-(void)_setAssetLoadingAsRaw:(BOOL)arg1 ;
-(PUPhotoEditIrisModel *)livePhotoModel;
-(void)_setLivePhotoModel:(id)arg1 ;
-(UIImage *)image;
-(id<PUEditableAsset>)asset;
@end

