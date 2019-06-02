/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISImageDataGenerator.h>

@class AVAssetReader, AVAssetTrack;

@interface ISAVAssetReaderImageDataGenerator : ISImageDataGenerator {

	AVAssetReader* __assetReader;
	AVAssetTrack* __videoTrack;
	CGAffineTransform __preferredTransform;

}

@property (setter=_setAssetReader:,nonatomic,retain) AVAssetReader * _assetReader;                              //@synthesize _assetReader=__assetReader - In the implementation block
@property (setter=_setVideoTrack:,nonatomic,retain) AVAssetTrack * _videoTrack;                                 //@synthesize _videoTrack=__videoTrack - In the implementation block
@property (assign,setter=_setPreferredTransform:,nonatomic) CGAffineTransform _preferredTransform;              //@synthesize _preferredTransform=__preferredTransform - In the implementation block
-(CGAffineTransform)preferredTransform;
-(id)initWithAsset:(id)arg1 videoComposition:(id)arg2 error:(id*)arg3 ;
-(AVAssetReader *)_assetReader;
-(AVAssetTrack *)_videoTrack;
-(CGAffineTransform)_preferredTransform;
-(void)generateImageDataForTimeRange:(SCD_Struct_IS5)arg1 minimumFrameInterval:(SCD_Struct_IS4)arg2 pixelBufferSize:(CGSize)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_setAssetReader:(id)arg1 ;
-(void)_setVideoTrack:(id)arg1 ;
-(void)_setPreferredTransform:(CGAffineTransform)arg1 ;
-(long long)status;
-(id)error;
@end

