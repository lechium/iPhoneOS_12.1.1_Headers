/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPImageAnalyzer : NSObject
-(int)calculateTextureness:(float*)arg1 height:(int)arg2 width:(int)arg3 sdof:(BOOL)arg4 result:(char*)arg5 ;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(/*^block*/id)arg4 ;
-(int)processTile:(CVBufferRef)arg1 results:(id)arg2 cancel:(/*^block*/id)arg3 ;
-(int)aggregateTileResults:(id)arg1 tileRect:(CGRect)arg2 imageSize:(CGSize)arg3 landscape:(BOOL)arg4 results:(id)arg5 ;
-(int)analyzePixelBufferInTiles:(CVBufferRef)arg1 results:(id)arg2 cancel:(/*^block*/id)arg3 ;
@end

