/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterInputHelper.h>

@class AVAssetWriterInputWritingHelper, AVAssetWriterInputPassDescription;

@interface AVAssetWriterInputInterPassAnalysisHelper : AVAssetWriterInputHelper {

	AVAssetWriterInputWritingHelper* _writingHelper;
	AVAssetWriterInputPassDescription* _initialPassDescription;

}
-(id)initWithConfigurationState:(id)arg1 ;
-(BOOL)shouldRespondToInitialPassDescription;
-(long long)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(id)initWithWritingHelper:(id)arg1 ;
-(void)startPassAnalysis;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(BOOL)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_AV5)arg2 ;
-(BOOL)isReadyForMoreMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)canPerformMultiplePasses;
-(id)currentPassDescription;
-(void)markCurrentPassAsFinished;
-(void)markAsFinished;
-(void)dealloc;
-(long long)status;
@end

