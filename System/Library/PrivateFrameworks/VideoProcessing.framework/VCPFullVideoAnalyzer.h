/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableDictionary, VCPFrameAnalysisStats;

@interface VCPFullVideoAnalyzer : VCPVideoAnalyzer {

	EncodeAnalysis* _encodeAnalysis;
	PreEncodeAnalysis* _preencodeAnalysis;
	ObstructionAnalysis* _obstructionAnalysis;
	SceneAnalysis* _sceneAnalysis;
	MotionFilter* _motionFilter;
	MetaDataAnalysis* _metadataAnalysis;
	IrisAnalysis* _irisAnalysis;
	FrameBuffer* _frameBuffer;
	Histogram* _idealHistogram;
	BOOL _isTimelapse;
	BOOL _isIris;
	BOOL _isSlowMo;
	int _orientation;
	BOOL _finalized;
	BOOL _hasInterestingScene;
	BOOL _isCaptureAnalysis;
	NSMutableDictionary* _privateResults;
	VCPFrameAnalysisStats* _videoFrameAnalysis;
	float _actionScore;

}

@property (assign) float actionScore;              //@synthesize actionScore=_actionScore - In the implementation block
-(id)initWithTransform:(CGAffineTransform)arg1 ;
-(float)actionScore;
-(void)setActionScore:(float)arg1 ;
-(int)seedAnalyzersWithPixelBuffer:(CVBufferRef)arg1 startTime:(SCD_Struct_VC6)arg2 ;
-(void)reviseFrameTrackScore:(Frame*)arg1 saliencyRegions:(id)arg2 ;
-(float)computeExposureScoreOfFrame:(Frame*)arg1 ;
-(int)addSceneAnalysisResult:(id)arg1 to:(id)arg2 optional:(BOOL)arg3 ;
-(int)addResult:(CFArrayRef)arg1 to:(id)arg2 forKey:(id)arg3 optional:(BOOL)arg4 ;
-(id)initWithVideoTrack:(id)arg1 withMetaOrientation:(id)arg2 withPrivateResults:(id)arg3 withFrameStats:(id)arg4 isTimelapse:(BOOL)arg5 isIris:(BOOL)arg6 irisPhotoOffsetSec:(float)arg7 irisPhotoExposureSec:(float)arg8 slowMoRate:(float)arg9 ;
-(void)prepareVideoAnalysisByScenes:(id)arg1 ;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(int)finishAnalysisPass:(SCD_Struct_VC9)arg1 ;
-(id)privateResults;
-(float)getSceneSwichFrequency;
-(void)setNextCaptureFrame:(CVBufferRef)arg1 ;
-(int)process:(int)arg1 ;
-(void)dealloc;
-(id)results;
@end

