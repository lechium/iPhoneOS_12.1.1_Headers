/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosEditUI/PhotosEditUI-Structs.h>
#import <PhotosUICore/PXRunNode.h>
#import <libobjc.A.dylib/PUImageInfoNode.h>
#import <libobjc.A.dylib/PUVideoURLExportNode.h>
#import <libobjc.A.dylib/PUAdjustmentURLNode.h>
#import <libobjc.A.dylib/PUReviewImageURLNode.h>
#import <libobjc.A.dylib/PUReviewVideoURLNode.h>
#import <libobjc.A.dylib/PUImageDataRenderNode.h>

@class NSURL, NSData, NSString, PUEditableMediaProviderImageDataNode, PUImageDataRenderNode, PUEditableMediaProviderVideoURLNode, PUVideoExportNode, PUPhotoEditIrisModel, NSArray;

@interface PUReviewInternalSaveNode : PXRunNode <PUImageInfoNode, PUVideoURLExportNode, PUAdjustmentURLNode, PUReviewImageURLNode, PUReviewVideoURLNode, PUImageDataRenderNode> {

	BOOL _useEmbeddedPreview;
	NSURL* _imageDataURL;
	long long _imageExifOrientation;
	NSURL* _providedFullsizeImageURL;
	NSURL* _providedVideoURL;
	NSURL* _videoURL;
	NSURL* _adjustmentURL;
	NSData* _imageData;
	NSString* _imageDataUTI;
	PUEditableMediaProviderImageDataNode* _imageDataNode;
	PUImageDataRenderNode* _imageRenderNode;
	PUEditableMediaProviderVideoURLNode* _videoURLNode;
	PUVideoExportNode* _videoRenderNode;
	NSURL* _directory;
	PUPhotoEditIrisModel* _livePhotoModel;
	CGSize _renderedVideoSize;
	CGSize _baseImageSize;
	CGSize _renderedImageSize;

}

@property (nonatomic,readonly) PUEditableMediaProviderImageDataNode * imageDataNode;              //@synthesize imageDataNode=_imageDataNode - In the implementation block
@property (nonatomic,readonly) PUImageDataRenderNode * imageRenderNode;                           //@synthesize imageRenderNode=_imageRenderNode - In the implementation block
@property (nonatomic,readonly) PUEditableMediaProviderVideoURLNode * videoURLNode;                //@synthesize videoURLNode=_videoURLNode - In the implementation block
@property (nonatomic,readonly) PUVideoExportNode * videoRenderNode;                               //@synthesize videoRenderNode=_videoRenderNode - In the implementation block
@property (nonatomic,readonly) NSURL * directory;                                                 //@synthesize directory=_directory - In the implementation block
@property (nonatomic,copy,readonly) PUPhotoEditIrisModel * livePhotoModel;                        //@synthesize livePhotoModel=_livePhotoModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long state; 
@property (getter=isWaiting,readonly) BOOL waiting; 
@property (getter=isRunning,readonly) BOOL running; 
@property (getter=isComplete,readonly) BOOL complete; 
@property (getter=isCanceled,readonly) BOOL canceled; 
@property (assign,nonatomic,__weak) id<PXRunNodeDelegate> delegate; 
@property (nonatomic,copy,readonly) NSArray * dependencies; 
@property (nonatomic,readonly) NSURL * imageDataURL;                                              //@synthesize imageDataURL=_imageDataURL - In the implementation block
@property (nonatomic,readonly) NSString * imageDataUTI;                                           //@synthesize imageDataUTI=_imageDataUTI - In the implementation block
@property (nonatomic,readonly) BOOL useEmbeddedPreview;                                           //@synthesize useEmbeddedPreview=_useEmbeddedPreview - In the implementation block
@property (nonatomic,readonly) long long imageExifOrientation;                                    //@synthesize imageExifOrientation=_imageExifOrientation - In the implementation block
@property (nonatomic,readonly) NSURL * videoURL;                                                  //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,readonly) CGSize renderedVideoSize;                                          //@synthesize renderedVideoSize=_renderedVideoSize - In the implementation block
@property (nonatomic,readonly) NSURL * adjustmentURL;                                             //@synthesize adjustmentURL=_adjustmentURL - In the implementation block
@property (nonatomic,readonly) NSURL * providedFullsizeImageURL;                                  //@synthesize providedFullsizeImageURL=_providedFullsizeImageURL - In the implementation block
@property (nonatomic,readonly) NSURL * providedVideoURL;                                          //@synthesize providedVideoURL=_providedVideoURL - In the implementation block
@property (nonatomic,readonly) NSData * imageData;                                                //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,readonly) CGSize baseImageSize;                                              //@synthesize baseImageSize=_baseImageSize - In the implementation block
@property (nonatomic,readonly) CGSize renderedImageSize;                                          //@synthesize renderedImageSize=_renderedImageSize - In the implementation block
-(NSURL *)directory;
-(CGSize)baseImageSize;
-(NSURL *)providedFullsizeImageURL;
-(NSURL *)providedVideoURL;
-(NSURL *)videoURL;
-(NSData *)imageData;
-(PUEditableMediaProviderImageDataNode *)imageDataNode;
-(PUEditableMediaProviderVideoURLNode *)videoURLNode;
-(NSURL *)imageDataURL;
-(NSString *)imageDataUTI;
-(BOOL)useEmbeddedPreview;
-(long long)imageExifOrientation;
-(CGSize)renderedVideoSize;
-(PUPhotoEditIrisModel *)livePhotoModel;
-(NSURL *)adjustmentURL;
-(CGSize)renderedImageSize;
-(id)initWithDirectory:(id)arg1 imageDataNode:(id)arg2 imageRenderNode:(id)arg3 videoURLNode:(id)arg4 videoRenderNode:(id)arg5 livePhotoModel:(id)arg6 ;
-(PUImageDataRenderNode *)imageRenderNode;
-(long long)_baseExifOrientation;
-(double)_baseDuration;
-(PUVideoExportNode *)videoRenderNode;
-(id)_exportProperties;
-(long long)_adjustmentBaseVersion;
-(void)run;
@end

