/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLImageLoadingUtilities : NSObject
+(id)newImageForAsset:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(BOOL)arg3 outImageProperties:(const _CFDictionary*)arg4 outDeliveredPlaceholder:(BOOL*)arg5 ;
+(id)newImageForAsset:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(BOOL)arg3 optimalSourcePixelSize:(CGSize)arg4 networkAccessAllowed:(BOOL)arg5 networkAccessForced:(BOOL)arg6 trackCPLDownload:(BOOL)arg7 outImageProperties:(const _CFDictionary*)arg8 outImageDataInfo:(id*)arg9 outCPLDownloadContext:(id*)arg10 ;
+(BOOL)canAccessImageForAsset:(id)arg1 ;
+(id)preheatItemSourceForFormatID:(int)arg1 ;
+(void)_assetsdImageForAsset:(id)arg1 withFormat:(id)arg2 allowPlaceholder:(BOOL)arg3 optimalSourcePixelSize:(CGSize)arg4 networkAccessAllowed:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 sync:(BOOL)arg7 isCanceledHandler:(/*^block*/id)arg8 completion:(/*^block*/id)arg9 ;
+(void)imageForAsset:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(BOOL)arg3 optimalSourcePixelSize:(CGSize)arg4 networkAccessAllowed:(BOOL)arg5 networkAccessForced:(BOOL)arg6 trackCPLDownload:(BOOL)arg7 isCanceledHandler:(/*^block*/id)arg8 completion:(/*^block*/id)arg9 sync:(BOOL)arg10 ;
+(id)_fullSizeLargeImageLoaderForFormatID:(int)arg1 ;
+(id)_fullScreenLargeImageLoader;
+(id)_filledScreenLargeImageLoader;
+(id)_filledHalfScreenLargeImageLoader;
+(id)newImageDataForAsset:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(BOOL)arg3 wantURLOnly:(BOOL)arg4 networkAccessAllowed:(BOOL)arg5 networkAccessForced:(BOOL)arg6 trackCPLDownload:(BOOL)arg7 outImageDataInfo:(id*)arg8 outCPLDownloadContext:(id*)arg9 ;
@end

