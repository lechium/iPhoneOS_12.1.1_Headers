/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPCNNSmileDetector : NSObject
+(id)detector;
-(float*)getInputBuffer;
-(int)computeSmileScore:(float*)arg1 ;
-(int)detectSmileForFace:(CGRect)arg1 inBuffer:(CVBufferRef)arg2 smile:(BOOL*)arg3 ;
@end

