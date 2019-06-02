/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNConvolutionDataSource.h>

@protocol MPSCNNConvolutionDataSource;
@class MPSCNNConvolutionDescriptor, NSString;

@interface TmpWeights : NSObject <MPSCNNConvolutionDataSource> {

	id<MPSCNNConvolutionDataSource> _parentObj;
	MPSCNNConvolutionDescriptor* _convDesc;
	BOOL _hasBias;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWeights:(id)arg1 useBias:(BOOL)arg2 desc:(id)arg3 ;
-(void*)weights;
-(float*)biasTerms;
-(unsigned)dataType;
-(void)dealloc;
-(BOOL)load;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptor;
-(id)label;
-(void)purge;
@end
