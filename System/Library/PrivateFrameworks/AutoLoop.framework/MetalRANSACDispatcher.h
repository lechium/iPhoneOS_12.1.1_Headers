/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLCommandQueue, MTLDevice, MTLFunction, MTLLibrary, MTLComputePipelineState, MTLBuffer;
#import <AutoLoop/AutoLoop-Structs.h>
@interface MetalRANSACDispatcher : NSObject {

	float inlierLimit;
	id<MTLCommandQueue> m_metalCommandQueue;
	id<MTLDevice> m_metalDevice;
	id<MTLFunction> m_metalKernelFunction;
	id<MTLLibrary> m_metalLibrary;
	id<MTLComputePipelineState> m_metalPipeline;
	unsigned long long _m_numThreadsPerGroup;
	unsigned long long _m_maxCorrespondences;
	id<MTLBuffer> _m_mX;
	id<MTLBuffer> _m_mXhat;
	id<MTLBuffer> _m_ScoreBuffer;
	id<MTLBuffer> _m_RansacParams;
	id<MTLBuffer> _m_RansacHomographies;
	id<MTLBuffer> _m_ModelScores;
	CGSize frameSize;

}

@property (nonatomic,retain) id<MTLDevice> m_metalDevice; 
@property (nonatomic,retain) id<MTLLibrary> m_metalLibrary; 
@property (nonatomic,retain) id<MTLCommandQueue> m_metalCommandQueue; 
@property (nonatomic,retain) id<MTLFunction> m_metalKernelFunction; 
@property (nonatomic,retain) id<MTLComputePipelineState> m_metalPipeline; 
@property (assign,nonatomic) unsigned long long m_numThreadsPerGroup;                  //@synthesize m_numThreadsPerGroup=_m_numThreadsPerGroup - In the implementation block
@property (assign,nonatomic) unsigned long long m_maxCorrespondences;                  //@synthesize m_maxCorrespondences=_m_maxCorrespondences - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> m_mX;                                       //@synthesize m_mX=_m_mX - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> m_mXhat;                                    //@synthesize m_mXhat=_m_mXhat - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> m_ScoreBuffer;                              //@synthesize m_ScoreBuffer=_m_ScoreBuffer - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> m_RansacParams;                             //@synthesize m_RansacParams=_m_RansacParams - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> m_RansacHomographies;                       //@synthesize m_RansacHomographies=_m_RansacHomographies - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> m_ModelScores;                              //@synthesize m_ModelScores=_m_ModelScores - In the implementation block
@property (assign,nonatomic) float inlierLimit; 
@property (assign,nonatomic) CGSize frameSize; 
-(id)initWithMaxCorrespondences:(unsigned long long)arg1 ;
-(void)setInlierLimit:(float)arg1 ;
-(void)performRansacOnData:(unsigned)arg1 firstPointSet:(const float*)arg2 secondPointSet:(const float*)arg3 pointWeights:(const float*)arg4 homographies:(const ransac_homography_record*)arg5 numHomographies:(unsigned)arg6 homScores:(float*)arg7 ;
-(void)assureSizeAndCopyToMetalBuffer:(id*)arg1 fromData:(const void*)arg2 dataSize:(unsigned long long)arg3 metalResourceOptions:(unsigned long long)arg4 ;
-(id<MTLCommandQueue>)m_metalCommandQueue;
-(void)setM_metalCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(id<MTLDevice>)m_metalDevice;
-(void)setM_metalDevice:(id<MTLDevice>)arg1 ;
-(id<MTLFunction>)m_metalKernelFunction;
-(void)setM_metalKernelFunction:(id<MTLFunction>)arg1 ;
-(id<MTLLibrary>)m_metalLibrary;
-(void)setM_metalLibrary:(id<MTLLibrary>)arg1 ;
-(id<MTLComputePipelineState>)m_metalPipeline;
-(void)setM_metalPipeline:(id<MTLComputePipelineState>)arg1 ;
-(float)inlierLimit;
-(CGSize)frameSize;
-(unsigned long long)m_numThreadsPerGroup;
-(void)setM_numThreadsPerGroup:(unsigned long long)arg1 ;
-(unsigned long long)m_maxCorrespondences;
-(void)setM_maxCorrespondences:(unsigned long long)arg1 ;
-(id<MTLBuffer>)m_mX;
-(void)setM_mX:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)m_mXhat;
-(void)setM_mXhat:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)m_ScoreBuffer;
-(void)setM_ScoreBuffer:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)m_RansacParams;
-(void)setM_RansacParams:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)m_RansacHomographies;
-(void)setM_RansacHomographies:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)m_ModelScores;
-(void)setM_ModelScores:(id<MTLBuffer>)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
@end

