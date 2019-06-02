/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group, NUDevice;
#import <NeutrinoCore/NeutrinoCore-Structs.h>
@class NSObject, NUObservatory, NURenderJobStatistics, NSError, NURenderRequest, NSArray, NURenderNode, NUImageGeometry, NUComposition, NURenderPipeline, NUGeometrySpaceMap, CIImage, AVComposition, AVVideoComposition, AVAudioMix, NUPriority;

@interface NURenderJob : NSObject {

	NSObject*<OS_dispatch_queue> _stateQueue;
	NUObservatory* _observatory;
	NURenderJobStatistics* _stats;
	NSError* _error;
	BOOL _isAborted;
	BOOL _failed;
	BOOL _isExecuting;
	BOOL _isCanceled;
	BOOL _isFinished;
	int _rendererType;
	long long _currentStage;
	NURenderRequest* _request;
	unsigned long long _number;
	NSArray* _dependentJobs;
	NURenderNode* _prepareNode;
	NURenderNode* _renderNode;
	NUImageGeometry* _outputGeometry;
	NSObject*<OS_dispatch_group> _replyGroup;
	id<NUDevice> _device;
	NUComposition* _composition;
	NURenderPipeline* _renderPipeline;
	NUGeometrySpaceMap* _resolvedSpaceMap;
	NUImageGeometry* _fullSizeGeometry;
	CIImage* _outputImage;
	AVComposition* _outputVideo;
	AVVideoComposition* _outputVideoComposition;
	AVAudioMix* _outputAudioMix;
	SCD_Struct_NU5 _renderScale;

}

@property (nonatomic,readonly) id<NUDevice> device;                                    //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) id<NURenderer> renderer; 
@property (nonatomic,readonly) int rendererType;                                       //@synthesize rendererType=_rendererType - In the implementation block
@property (nonatomic,retain) NUComposition * composition;                              //@synthesize composition=_composition - In the implementation block
@property (nonatomic,retain) NURenderPipeline * renderPipeline;                        //@synthesize renderPipeline=_renderPipeline - In the implementation block
@property (nonatomic,retain) NURenderNode * prepareNode;                               //@synthesize prepareNode=_prepareNode - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU5 renderScale;                               //@synthesize renderScale=_renderScale - In the implementation block
@property (nonatomic,retain) NURenderNode * renderNode;                                //@synthesize renderNode=_renderNode - In the implementation block
@property (nonatomic,retain) NUGeometrySpaceMap * resolvedSpaceMap;                    //@synthesize resolvedSpaceMap=_resolvedSpaceMap - In the implementation block
@property (nonatomic,retain) NUImageGeometry * outputGeometry;                         //@synthesize outputGeometry=_outputGeometry - In the implementation block
@property (nonatomic,retain) NUImageGeometry * fullSizeGeometry;                       //@synthesize fullSizeGeometry=_fullSizeGeometry - In the implementation block
@property (nonatomic,retain) CIImage * outputImage;                                    //@synthesize outputImage=_outputImage - In the implementation block
@property (nonatomic,retain) AVComposition * outputVideo;                              //@synthesize outputVideo=_outputVideo - In the implementation block
@property (nonatomic,retain) AVVideoComposition * outputVideoComposition;              //@synthesize outputVideoComposition=_outputVideoComposition - In the implementation block
@property (nonatomic,retain) AVAudioMix * outputAudioMix;                              //@synthesize outputAudioMix=_outputAudioMix - In the implementation block
@property (nonatomic,readonly) id<NURenderStatistics> statistics;                      //@synthesize stats=_stats - In the implementation block
@property (retain) NSArray * dependentJobs;                                            //@synthesize dependentJobs=_dependentJobs - In the implementation block
@property (nonatomic,readonly) BOOL wantsOutputGeometry; 
@property (nonatomic,readonly) BOOL wantsOutputImage; 
@property (nonatomic,readonly) BOOL wantsOutputVideoFrame; 
@property (nonatomic,readonly) BOOL wantsOutputVideo; 
@property (nonatomic,readonly) BOOL wantsRenderStage; 
@property (nonatomic,readonly) BOOL wantsCompleteStage; 
@property (nonatomic,readonly) BOOL wantsPrepareNodeCached; 
@property (nonatomic,readonly) BOOL wantsRenderNodeCached; 
@property (nonatomic,readonly) BOOL wantsRenderScaleClampedToNativeScale; 
@property (readonly) NURenderRequest * request;                                        //@synthesize request=_request - In the implementation block
@property (readonly) NUPriority * priority; 
@property (readonly) unsigned long long number;                                        //@synthesize number=_number - In the implementation block
@property (readonly) long long currentStage;                                           //@synthesize currentStage=_currentStage - In the implementation block
@property (readonly) BOOL isExecuting;                                                 //@synthesize isExecuting=_isExecuting - In the implementation block
@property (readonly) BOOL isCanceled;                                                  //@synthesize isCanceled=_isCanceled - In the implementation block
@property (readonly) BOOL isAborted;                                                   //@synthesize isAborted=_isAborted - In the implementation block
@property (readonly) BOOL isFinished;                                                  //@synthesize isFinished=_isFinished - In the implementation block
@property (readonly) BOOL succeeded; 
@property (readonly) SCD_Struct_NU5 imageSize; 
@property (readonly) id<NUScalePolicy> scalePolicy; 
@property (readonly) id<NUExtentPolicy> extentPolicy; 
@property (nonatomic,retain) NSObject*<OS_dispatch_group> replyGroup;                  //@synthesize replyGroup=_replyGroup - In the implementation block
@property (readonly) NSError * error; 
@property (readonly) BOOL failed; 
-(void)_run:(long long)arg1 ;
-(void)reply:(id)arg1 ;
-(BOOL)isAborted;
-(BOOL)prepare:(out id*)arg1 ;
-(NURenderNode *)prepareNode;
-(BOOL)wantsRenderStage;
-(BOOL)wantsCompleteStage;
-(BOOL)requiresVideoComposition;
-(id)newRenderPipelineStateForEvaluationMode:(long long)arg1 ;
-(NURenderNode *)renderNode;
-(NUImageGeometry *)outputGeometry;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(BOOL)wantsPrepareNodeCached;
-(BOOL)wantsRenderNodeCached;
-(BOOL)wantsRenderScaleClampedToNativeScale;
-(id<NUScalePolicy>)scalePolicy;
-(BOOL)renderVideoFrames:(id)arg1 intoPixelBuffer:(CVBufferRef)arg2 time:(SCD_Struct_NU7)arg3 colorSpace:(id)arg4 error:(out id*)arg5 ;
-(id)renderNodeWithPipelineState:(id)arg1 error:(out id*)arg2 ;
-(id)generateVideoComposition:(out id*)arg1 ;
-(NUImageGeometry *)fullSizeGeometry;
-(AVAudioMix *)outputAudioMix;
-(BOOL)wantsOutputVideo;
-(void)addStageObserver:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(id<NUExtentPolicy>)extentPolicy;
-(void)setRenderNode:(NURenderNode *)arg1 ;
-(int)rendererType;
-(id)renderImage:(id)arg1 into:(id)arg2 colorSpace:(id)arg3 roi:(id)arg4 imageSize:(SCD_Struct_NU5)arg5 error:(out id*)arg6 ;
-(void)setReplyGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setPrepareNode:(NURenderNode *)arg1 ;
-(void)setOutputGeometry:(NUImageGeometry *)arg1 ;
-(void)addCancelObserver:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(NSArray *)dependentJobs;
-(NSObject*<OS_dispatch_group>)replyGroup;
-(void)cancelCoalescedJob;
-(BOOL)_shouldWaitForDependentJobs;
-(long long)resolvedSampleMode:(long long)arg1 ;
-(long long)willRun;
-(BOOL)runStage:(long long)arg1 error:(out id*)arg2 ;
-(void)didRun;
-(void)_didPrepare;
-(long long)_nextStageForStage:(long long)arg1 ;
-(void)_setCurrentStage:(long long)arg1 ;
-(void)finalize:(BOOL)arg1 ;
-(SCD_Struct_NU28)_atomicCancel;
-(void)_cancelCoalescedJob;
-(BOOL)_shouldCancelCoalescedJob;
-(void)_notifyCanceled:(long long)arg1 ;
-(void)abortStage:(long long)arg1 ;
-(void)abortPrepare;
-(void)abortRender;
-(void)abortComplete;
-(void)respond;
-(void)_notifyStageTransition:(long long)arg1 ;
-(void)_reply:(id)arg1 ;
-(BOOL)wantsOutputVideoFrame;
-(id)prepareNodeWithPipelineState:(id)arg1 error:(out id*)arg2 ;
-(void)setResolvedSpaceMap:(NUGeometrySpaceMap *)arg1 ;
-(id)evaluateOutputGeometry:(out id*)arg1 ;
-(void)setFullSizeGeometry:(NUImageGeometry *)arg1 ;
-(NUGeometrySpaceMap *)resolvedSpaceMap;
-(void)setDependentJobs:(NSArray *)arg1 ;
-(void)setOutputImage:(CIImage *)arg1 ;
-(void)setOutputVideoComposition:(AVVideoComposition *)arg1 ;
-(void)setOutputAudioMix:(AVAudioMix *)arg1 ;
-(id)validateComposition:(out id*)arg1 ;
-(id)pipelineForComposition:(id)arg1 error:(out id*)arg2 ;
-(void)setRenderPipeline:(NURenderPipeline *)arg1 ;
-(id)evaluateComposition:(id)arg1 pipeline:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(NUComposition *)composition;
-(AVComposition *)outputVideo;
-(BOOL)succeeded;
-(AVVideoComposition *)outputVideoComposition;
-(void)setOutputVideo:(AVComposition *)arg1 ;
-(unsigned long long)number;
-(BOOL)isCanceled;
-(BOOL)render:(out id*)arg1 ;
-(BOOL)failed;
-(void)setComposition:(NUComposition *)arg1 ;
-(id<NUDevice>)device;
-(id<NURenderStatistics>)statistics;
-(BOOL)complete:(out id*)arg1 ;
-(NURenderPipeline *)renderPipeline;
-(id<NURenderer>)renderer;
-(void)fail:(id)arg1 ;
-(void)run:(long long)arg1 ;
-(void)setRenderScale:(SCD_Struct_NU5)arg1 ;
-(SCD_Struct_NU5)renderScale;
-(long long)currentStage;
-(id)init;
-(id)description;
-(void)removeObserver:(id)arg1 ;
-(NUPriority *)priority;
-(SCD_Struct_NU5)imageSize;
-(void)cancel;
-(BOOL)isFinished;
-(NURenderRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(void)_cancel;
-(id)result;
-(void)cleanUp;
-(void)finish;
-(NSError *)error;
-(BOOL)isExecuting;
-(void)_finish;
-(CIImage *)outputImage;
@end
