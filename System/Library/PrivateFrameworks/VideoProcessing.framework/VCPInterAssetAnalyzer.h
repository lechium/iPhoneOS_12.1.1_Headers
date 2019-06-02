/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPInterAssetAnalyzer : NSObject
+(CGSize)thumbnailSizeForAsset:(id)arg1 withResources:(id)arg2 ;
+(BOOL)canUseLastFrameOfAsset:(id)arg1 withResources:(id)arg2 ;
-(int)generateFeatureLastFrame:(id)arg1 feature:(id*)arg2 ;
-(CVBufferRef)getThumbnailForAsset:(id)arg1 withResouces:(id)arg2 ;
-(int)distanceFromFeatureArray:(id)arg1 toFeatureArray:(id)arg2 distance:(float*)arg3 ;
-(int)generateFeatureForAsset:(id)arg1 withResources:(id)arg2 lastFrame:(BOOL)arg3 feature:(id*)arg4 ;
-(int)distanceFromAsset:(id)arg1 toAsset:(id)arg2 distance:(float*)arg3 ;
-(id)init;
@end

