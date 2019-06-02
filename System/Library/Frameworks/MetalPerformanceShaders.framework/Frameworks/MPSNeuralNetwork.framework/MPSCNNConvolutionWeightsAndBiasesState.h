/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSCore/MPSState.h>

@interface MPSCNNConvolutionWeightsAndBiasesState : MPSState

@property (nonatomic,readonly) id<MTLBuffer> weights; 
@property (nonatomic,readonly) id<MTLBuffer> biases; 
+(id)temporaryCNNConvolutionWeightsAndBiasesStateWithCommandBuffer:(id)arg1 cnnConvolutionDescriptor:(id)arg2 ;
-(id<MTLBuffer>)biases;
-(id)initWithDevice:(id)arg1 cnnConvolutionDescriptor:(id)arg2 ;
-(id)initWithWeights:(id)arg1 biases:(id)arg2 ;
-(id<MTLBuffer>)weights;
@end
