/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NTKAVListing.h>

@class CLKVideo, UIImage, CLKDevice, NSString, NTKPhotoAnalysis;

@interface NTKTimelapseListing : NSObject <NSCopying, NTKAVListing> {

	CLKDevice* _device;
	CLKVideo* _video;
	UIImage* _image;
	NSString* _videoName;
	NSString* _imageName;
	NTKPhotoAnalysis* _photoAnalysis;
	unsigned long long _theme;
	long long _videoIndex;

}

@property (nonatomic,readonly) unsigned long long theme;                      //@synthesize theme=_theme - In the implementation block
@property (nonatomic,readonly) long long videoIndex;                          //@synthesize videoIndex=_videoIndex - In the implementation block
@property (nonatomic,readonly) NTKPhotoAnalysis * photoAnalysis;              //@synthesize photoAnalysis=_photoAnalysis - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLKVideo * video; 
@property (nonatomic,readonly) UIImage * image; 
-(CLKVideo *)video;
-(unsigned long long)theme;
-(BOOL)snapshotDiffers:(id)arg1 ;
-(void)discardAssets;
-(id)initForDevice:(id)arg1 withTheme:(unsigned long long)arg2 videoIndex:(long long)arg3 photoAnalysis:(id)arg4 ;
-(NTKPhotoAnalysis *)photoAnalysis;
-(BOOL)isSimilarTo:(id)arg1 ;
-(long long)videoIndex;
-(void)_setHasAssets;
-(BOOL)isEqual:(id)arg1 ;
-(UIImage *)image;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

