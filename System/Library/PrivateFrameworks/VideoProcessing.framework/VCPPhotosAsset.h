/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPAsset.h>

@class PHAsset, NSArray, NSDictionary;

@interface VCPPhotosAsset : VCPAsset {

	PHAsset* _asset;
	NSArray* _cachedResources;
	BOOL _onceExif;
	NSDictionary* _cachedExif;

}

@property (nonatomic,readonly) NSArray * resources; 
+(id)assetWithPHAsset:(id)arg1 ;
-(NSArray *)resources;
-(id)fingerprint;
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
-(id)initWithPHAsset:(id)arg1 ;
-(id)movie;
-(double)duration;
-(id)localIdentifier;
-(id)modificationDate;
@end

