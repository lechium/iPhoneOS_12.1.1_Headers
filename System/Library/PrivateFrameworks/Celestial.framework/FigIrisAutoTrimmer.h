/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSArray, NSData, NSMutableArray;

@interface FigIrisAutoTrimmer : NSObject {

	BOOL _motionAvailable;
	SCD_Struct_Fi82 _captureMotionDelta;
	double _captureMotionDeltaPeriod;
	BOOL _haveCaptureMotionDelta;
	SCD_Struct_Fi82 _lastAttitude;
	SCD_Struct_Fi82 _lastDelta;
	double _lastCheckedTimestamp;
	int _lastStatus;
	int _svmKernelType;
	int _svmVectorCount;
	int _svmParamCount;
	float _svmRBFRho;
	float _svmRBFGamma;
	NSArray* _svmKeys;
	NSData* _svmNormalization;
	NSData* _svmVectors;
	NSMutableArray* _motionSamples;
	unsigned long long _estimatedIntermediatesCount;
	SCD_Struct_BW2 _maxHoldDuration;
	long long _maxHoldFrames;
	double _bufferHistorySeconds;
	double _motionSampleRate;
	unsigned long long _nominalHistorySize;

}

@property (nonatomic,readonly) BOOL trimmingActive; 
+(void)initialize;
-(void)setBufferHistorySeconds:(double)arg1 ;
-(void)setMaxHoldDuration:(SCD_Struct_BW2)arg1 ;
-(void)startMotionProcessing;
-(void)stopMotionProcessing;
-(int)emissionStatusForHostPTS:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)beginTrimmingForStillImageHostPTS:(SCD_Struct_BW2)arg1 minimumPTS:(SCD_Struct_BW2)arg2 ;
-(void)processISPMotionData:(id)arg1 forHostTime:(SCD_Struct_BW2)arg2 ;
-(void)processDetectedFaces:(id)arg1 forHostTime:(SCD_Struct_BW2)arg2 ;
-(void)processInferences:(id)arg1 forHostTime:(SCD_Struct_BW2)arg2 ;
-(void)_initSVM:(id)arg1 fromFile:(id)arg2 ;
-(void)_processMotionSample:(const SCD_Struct_Fi82*)arg1 gravity:(const SCD_Struct_Fi81*)arg2 motionTimestamp:(double)arg3 frameTimestamp:(SCD_Struct_BW2)arg4 metadata:(id)arg5 ;
-(BOOL)_checkSamplesContainHostTime:(SCD_Struct_BW2)arg1 ;
-(long long)_findClosestIndexToHostTime:(SCD_Struct_BW2)arg1 fromIndex:(long long)arg2 limitIndex:(long long)arg3 ;
-(double)_timeoutThreshold;
-(long long)_findClosestIndexToOffset:(double)arg1 atLeastOneFromIndex:(long long)arg2 limitIndex:(long long)arg3 ;
-(BOOL)_shouldCut:(id)arg1 withLookahead:(id)arg2 withLookback:(id)arg3 ;
-(long long)_findClosestIndexToTimestamp:(double)arg1 fromIndex:(long long)arg2 limitIndex:(long long)arg3 ;
-(double)_directionalWeightForSample:(id)arg1 ;
-(BOOL)_isUnstable:(id)arg1 withLookback:(id)arg2 ;
-(BOOL)_shouldCutUnstable:(id)arg1 withLookahead:(id)arg2 ;
-(BOOL)_shouldCutSVM:(id)arg1 ;
-(void)_updateStorageStats;
-(double)_getHostTime;
-(BOOL)trimmingActive;
-(SCD_Struct_BW2)maxHoldDuration;
-(double)bufferHistorySeconds;
-(double)videoFrameRate;
-(void)setVideoFrameRate:(double)arg1 ;
-(id)init;
-(void)dealloc;
@end

