/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesUI/NotesUI-Structs.h>
@interface ICDocCamImageFilters : NSObject
+(id)localizedImageFilterNameForType:(short)arg1 ;
+(id)imageFilterNames;
+(short)imageFilterTypeFromName:(id)arg1 ;
+(id)sharedCoreImageContext;
+(UIImage*)convertImageToGrayScale:(UIImage*)arg1 ;
+(UIImage*)histogramEqualizedImage:(UIImage*)arg1 ;
+(UIImage*)normalizedImage:(UIImage*)arg1 ;
+(UIImage*)bradleyAdaptiveThreshold:(UIImage*)arg1 ;
+(UIImage*)filteredImage:(UIImage*)arg1 orientation:(long long)arg2 imageFilterType:(short)arg3 ;
+(UIImage*)colorDocument:(UIImage*)arg1 orientation:(long long)arg2 ;
+(UIImage*)grayscaleDocument:(UIImage*)arg1 orientation:(long long)arg2 ;
+(UIImage*)bradleyAdaptiveThreshold:(UIImage*)arg1 orientation:(long long)arg2 ;
+(UIImage*)whiteboardFilter:(UIImage*)arg1 orientation:(long long)arg2 ;
+(id)perspectiveCorrectedCIImageFromCIImage:(id)arg1 imageQuad:(id)arg2 ;
+(UIImage*)perspectiveCorrectedImageFromImage:(UIImage*)arg1 imageQuad:(id)arg2 ;
+(id)localizedImageFilterNameForName:(id)arg1 ;
+(UIImage*)convertImageTo8BitGrayScale:(UIImage*)arg1 ;
+(UIImage*)sepiaFilter:(UIImage*)arg1 orientation:(long long)arg2 ;
+(UIImage*)sigmoidGrayscale:(UIImage*)arg1 orientation:(long long)arg2 ;
+(UIImage*)sigmoidColor:(UIImage*)arg1 orientation:(long long)arg2 ;
+(UIImage*)whiteboardAndSaturation:(UIImage*)arg1 orientation:(long long)arg2 ;
+(UIImage*)swapRedAndGreen:(UIImage*)arg1 orientation:(long long)arg2 ;
+(UIImage*)icImageCleanupFilter:(UIImage*)arg1 orientation:(long long)arg2 ;
+(UIImage*)grayscale:(UIImage*)arg1 orientation:(long long)arg2 ;
+(UIImage*)autoBlackAndWhitePoint:(UIImage*)arg1 orientation:(long long)arg2 ;
+(UIImage*)histogramEqualization:(UIImage*)arg1 orientation:(long long)arg2 ;
+(UIImage*)normalization:(UIImage*)arg1 orientation:(long long)arg2 ;
+(UIImage*)bradleyAdaptiveThresholdWithBlur:(UIImage*)arg1 orientation:(long long)arg2 ;
+(UIImage*)autoEnhancement:(UIImage*)arg1 orientation:(long long)arg2 ;
+(UIImage*)filteredImage:(UIImage*)arg1 imageFilterType:(short)arg2 ;
+(UIImage*)imageWithRGBColorspaceFromImage:(UIImage*)arg1 ;
+(UIImage*)perspectiveCorrectedImageFromImage:(UIImage*)arg1 normalizedImageQuad:(id)arg2 ;
@end

