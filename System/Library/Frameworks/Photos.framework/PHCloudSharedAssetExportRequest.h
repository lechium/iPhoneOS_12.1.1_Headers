/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetExportRequest.h>

@interface PHCloudSharedAssetExportRequest : PHAssetExportRequest {

	int _imageManagerImageRequestId;
	int _imageManagerVideoRequestId;

}
+(id)exportRequestForAsset:(id)arg1 error:(id*)arg2 ;
-(void)_requestLivePhotoURLsForAsset:(id)arg1 progressHandler:(/*^block*/id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)_requestImageURLForAsset:(id)arg1 progressHandler:(/*^block*/id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)_requestVideoURLForAsset:(id)arg1 progressHandler:(/*^block*/id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)exportWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

