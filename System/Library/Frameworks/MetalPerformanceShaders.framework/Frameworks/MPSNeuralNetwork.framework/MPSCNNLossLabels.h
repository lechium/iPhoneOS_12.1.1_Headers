/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSState.h>

@class NSData;

@interface MPSCNNLossLabels : MPSState {

	MPSImageCoordinate _lossImageSize;
	BOOL _isScalarLoss;
	unsigned long long _numNonZeroWeights;
	NSData* _userData;
	unsigned long long _numFeatureChannels_labels;
	unsigned long long _numFeatureChannels_loss;

}
-(id)lossImage;
-(id)initWithDevice:(id)arg1 lossImageSize:(MPSImageCoordinate)arg2 labelsDescriptor:(id)arg3 weightsDescriptor:(id)arg4 ;
-(id)initWithDevice:(id)arg1 labelsDescriptor:(id)arg2 ;
-(id)labelsImage;
-(id)weightsImage;
-(id)init;
-(void)dealloc;
@end
