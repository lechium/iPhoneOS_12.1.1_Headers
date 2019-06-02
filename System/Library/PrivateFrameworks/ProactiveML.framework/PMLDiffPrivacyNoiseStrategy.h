/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PMLNoiseStrategy.h>

@class NSString;

@interface PMLDiffPrivacyNoiseStrategy : NSObject <PMLNoiseStrategy> {

	unsigned long long _seed;
	BOOL _inplaceNorm;
	int _maxIterations;
	float _scaleFactor;
	float _minimumMagnitude;
	Class _samplerClass;

}

@property (assign) float scaleFactor;                               //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign) float minimumMagnitude;                          //@synthesize minimumMagnitude=_minimumMagnitude - In the implementation block
@property (retain) Class samplerClass;                              //@synthesize samplerClass=_samplerClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) int maxIterations;                               //@synthesize maxIterations=_maxIterations - In the implementation block
+(id)gaussianNoiseWithScaleFactor:(float)arg1 minimumMagnitude:(float)arg2 seed:(int)arg3 ;
-(void)addNoiseToWeights:(id)arg1 ;
-(void)addNoiseToGradient:(id)arg1 ;
-(void)addNoiseToFeatureMatrix:(id)arg1 ;
-(void)addNoiseToObjectiveFeatures:(id)arg1 ;
-(void)addNoiseToSparseVector:(id)arg1 ;
-(void)addNoiseToSparseMatrix:(id)arg1 ;
-(void)addNoiseToDenseVector:(id)arg1 ;
-(int)maxIterations;
-(void)setMaxIterations:(int)arg1 ;
-(id)initWithMaxIterationCount:(int)arg1 scaleFactor:(float)arg2 minimumMagnitude:(float)arg3 seed:(int)arg4 samplerClass:(Class)arg5 inplaceNorm:(BOOL)arg6 ;
-(void)setMinimumMagnitude:(float)arg1 ;
-(id)createSampler;
-(float)minimumMagnitude;
-(Class)samplerClass;
-(id)initWithMaxIterationCount:(int)arg1 scaleFactor:(float)arg2 minimumMagnitude:(float)arg3 samplerClass:(Class)arg4 inplaceNorm:(BOOL)arg5 ;
-(void)setSamplerClass:(Class)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(NSString *)description;
-(float)scaleFactor;
-(void)setScaleFactor:(float)arg1 ;
@end

