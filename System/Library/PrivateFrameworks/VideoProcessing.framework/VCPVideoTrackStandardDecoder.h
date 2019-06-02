/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoTrackDecoder.h>

@class AVAssetReader, AVAssetReaderTrackOutput;

@interface VCPVideoTrackStandardDecoder : VCPVideoTrackDecoder {

	AVAssetReader* _assetReader;
	AVAssetReaderTrackOutput* _trackOutput;
	opaqueCMSampleBufferRef _nextSample;
	long long _status;

}
-(id)initWithTrack:(id)arg1 timerange:(const SCD_Struct_VC9*)arg2 ;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(void)dealloc;
-(long long)status;
@end

