/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSCore/MPSState.h>

@interface MPSCNNNormalizationMeanAndVarianceState : MPSState {

	BOOL _initialized;

}

@property (nonatomic,readonly) id<MTLBuffer> mean; 
@property (nonatomic,readonly) id<MTLBuffer> variance; 
+(id)temporaryStateWithCommandBuffer:(id)arg1 bufferSize:(unsigned long long)arg2 ;
+(id)temporaryStateWithCommandBuffer:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2 ;
-(id)initWithDevice:(id)arg1 bufferSize:(unsigned long long)arg2 ;
-(id)initWithMean:(id)arg1 variance:(id)arg2 ;
-(id<MTLBuffer>)variance;
-(id<MTLBuffer>)mean;
@end

