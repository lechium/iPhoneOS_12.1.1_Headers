/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPAsset.h>

@class NSURL, AVURLAsset, NSDictionary;

@interface VCPURLAsset : VCPAsset {

	NSURL* _imageURL;
	AVURLAsset* _movie;
	long long _mediaType;
	unsigned long long _mediaSubtypes;
	unsigned long long _pixelWidth;
	unsigned long long _pixelHeight;
	BOOL _onceExif;
	NSDictionary* _cachedExif;

}
+(id)imageAssetWithURL:(id)arg1 ;
+(id)livePhotoAssetWithImageURL:(id)arg1 andMovieURL:(id)arg2 ;
+(id)movieAssetWithURL:(id)arg1 ;
-(id)initWithImageURL:(id)arg1 ;
-(long long)mediaType;
-(unsigned long long)pixelWidth;
-(unsigned long long)pixelHeight;
-(id)mainFileURL;
-(unsigned long long)mediaSubtypes;
-(id)exif;
-(CVBufferRef)imageWithPreferredDimension:(unsigned long long)arg1 ;
-(float)photoOffsetSeconds;
-(float)slowmoRate;
-(id)originalMovie;
-(id)initWithImageURL:(id)arg1 andMovieURL:(id)arg2 ;
-(id)initWithMovieURL:(id)arg1 ;
-(id)movie;
-(double)duration;
-(id)modificationDate;
@end

