/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/FigCapturePipeline.h>

@class NSString, BWFigVideoCaptureDevice, BWNodeOutput, BWVISNode, BWPixelTransferNode, BWRemoteQueueSinkNode;

@interface FigCaptureVideoDataSinkPipeline : FigCapturePipeline {

	NSString* _sinkID;
	BWFigVideoCaptureDevice* _captureDevice;
	BWNodeOutput* _videoDataPipelineUpstreamOutput;
	BWVISNode* _visNode;
	BWPixelTransferNode* _videoDataConverterRotatorNode;
	BWRemoteQueueSinkNode* _remoteQueueSinkNode;
	BWNodeOutput* _faceTrackingVideoCaptureOutput;
	BWNodeOutput* _offlineVISMotionDataCaptureOutput;

}

@property (assign,nonatomic) BOOL discardsSampleData; 
@property (nonatomic,readonly) NSString * sinkID;                                             //@synthesize sinkID=_sinkID - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * faceTrackingVideoCaptureOutput;                 //@synthesize faceTrackingVideoCaptureOutput=_faceTrackingVideoCaptureOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * offlineVISMotionDataCaptureOutput;              //@synthesize offlineVISMotionDataCaptureOutput=_offlineVISMotionDataCaptureOutput - In the implementation block
@property (nonatomic,readonly) BWRemoteQueueSinkNode * remoteQueueSinkNode;                   //@synthesize remoteQueueSinkNode=_remoteQueueSinkNode - In the implementation block
+(void)initialize;
-(NSString *)sinkID;
-(int)_buildVideoDataSinkPipelineWithConfiguration:(id)arg1 sourceVideoOutput:(id)arg2 captureDevice:(id)arg3 graph:(id)arg4 delegate:(id)arg5 ;
-(void)setDiscardsSampleData:(BOOL)arg1 ;
-(BOOL)discardsSampleData;
-(id)initWithConfiguration:(id)arg1 sourceVideoOutput:(id)arg2 captureDevice:(id)arg3 graph:(id)arg4 delegate:(id)arg5 ;
-(BWNodeOutput *)faceTrackingVideoCaptureOutput;
-(BWNodeOutput *)offlineVISMotionDataCaptureOutput;
-(BWRemoteQueueSinkNode *)remoteQueueSinkNode;
-(void)reconfigure:(id)arg1 ;
-(void)dealloc;
@end

