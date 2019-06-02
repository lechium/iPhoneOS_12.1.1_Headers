/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSState.h>

@protocol MPSNNPadding;
@interface MPSNNBinaryGradientState : MPSState {

	SCD_Struct_MP13 _primaryOffset;
	SCD_Struct_MP13 _secondaryOffset;
	SCD_Struct_MP4 _clipRect;
	MPSImageCoordinate _destSize;
	unsigned long long _destFeatureChannels;
	unsigned long long _destinationFeatureChannelOffset;
	unsigned long long _primarySourceFeatureChannelOffset;
	unsigned long long _secondarySourceFeatureChannelOffset;
	unsigned long long _primarySourceFeatureChannelMaxCount;
	unsigned long long _secondarySourceFeatureChannelMaxCount;
	unsigned long long _primaryKernelWidth;
	unsigned long long _primaryKernelHeight;
	unsigned long long _secondaryKernelWidth;
	unsigned long long _secondaryKernelHeight;
	unsigned long long _primaryStrideInPixelsX;
	unsigned long long _primaryStrideInPixelsY;
	unsigned long long _secondaryStrideInPixelsX;
	unsigned long long _secondaryStrideInPixelsY;
	unsigned long long _primaryDilationRateX;
	unsigned long long _primaryDilationRateY;
	unsigned long long _secondaryDilationRateX;
	unsigned long long _secondaryDilationRateY;
	id<MPSNNPadding> _padding;
	unsigned long long _maxBatchSize;
	BOOL _isBackwards;
	unsigned long long _primaryEdgeMode;
	unsigned long long _secondaryEdgeMode;
	MPSImageCoordinate _primarySrcSize;
	unsigned long long _primarySourceFeatureChannels;
	MPSImageCoordinate _secondarySrcSize;
	unsigned long long _secondarySourceFeatureChannels;
	BOOL _initOnce;
	unsigned _provenance;

}
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4 ;
-(void)dealloc;
@end

