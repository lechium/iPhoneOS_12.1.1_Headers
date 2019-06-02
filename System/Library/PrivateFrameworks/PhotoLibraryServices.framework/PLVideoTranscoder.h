/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLVideoTranscoder : NSObject
+(id)generatePosterFrameForVideoAtURL:(id)arg1 maxSize:(CGSize)arg2 error:(id*)arg3 ;
+(id)generatePosterFrameForAVAsset:(id)arg1 maxSize:(CGSize)arg2 error:(id*)arg3 ;
+(id)exportPresetsCompatibleWithVideoAtURL:(id)arg1 ;
+(void)transcodeVideoWithObjectBuilder:(id)arg1 outputURL:(id)arg2 startTime:(SCD_Struct_PL30)arg3 endTime:(SCD_Struct_PL30)arg4 presetName:(id)arg5 outputFileType:(id)arg6 metadata:(id)arg7 completionHandler:(/*^block*/id)arg8 ;
+(void)transcodeVideo:(id)arg1 outputURL:(id)arg2 presetName:(id)arg3 outputFileType:(id)arg4 metadata:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
@end

