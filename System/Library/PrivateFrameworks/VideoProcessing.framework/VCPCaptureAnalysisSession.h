/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPVideoFacePoseAnalyzer, VCPVideoFaceMeshAnalyzer, VCPFullVideoAnalyzer, VCPVideoFullFaceDetector, VCPSceneChangeAnalyzer, NSDictionary;

@interface VCPCaptureAnalysisSession : NSObject {

	unsigned long long _analysisTypes;
	VCPVideoFacePoseAnalyzer* _poseAnalyzer;
	VCPVideoFaceMeshAnalyzer* _meshAnalyzer;
	VCPFullVideoAnalyzer* _videoAnalysis;
	VCPVideoFullFaceDetector* _faceDetector;
	VCPSceneChangeAnalyzer* _sceneChangeAnalyzer;
	Rotator* _rotator;
	Rotator* _rotatorForFacePose;
	CGAffineTransform _preferredTransform;
	float _focalLengthInPixels;
	int _rotationAngleForFacePose;
	int _preferredAngle;

}

@property (readonly) NSDictionary * aggregatedResults; 
+(id)analyzerForAnalysisTypes:(unsigned long long)arg1 withPreferredTransform:(CGAffineTransform)arg2 properties:(id)arg3 ;
-(BOOL)finalizeAnalysis;
-(id)initWithAnalysisTypes:(unsigned long long)arg1 withPreferredTransform:(CGAffineTransform)arg2 withFocalLengthInPixels:(float)arg3 ;
-(CGAffineTransform)transformForAngle:(int)arg1 pixelBuffer:(CVBufferRef)arg2 ;
-(CGAffineTransform)flipTransform:(CGAffineTransform)arg1 ;
-(SCD_Struct_VC10)rotateTransform:(SCD_Struct_VC10)arg1 byAngle:(int)arg2 ;
-(NSDictionary *)aggregatedResults;
-(BOOL)updatePreferredTransform:(const CGAffineTransform*)arg1 properties:(id)arg2 ;
-(id)analyzePixelBuffer:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 properties:(id)arg4 error:(id*)arg5 ;
-(id)init;
-(void)dealloc;
@end

