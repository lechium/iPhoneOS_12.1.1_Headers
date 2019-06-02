/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSExternalPluginBase.h>

@interface MPSExternalCNNBinary : MPSExternalPluginBase
-(unsigned long long)encodeWithFilter:(id)arg1 encoder:(id)arg2 commandBuffer:(id)arg3 callInfo:(const SCD_Struct_MP18*)arg4 ;
-(unsigned long long)encodeToCommandBuffer:(id)arg1 computeCommandEncoder:(id)arg2 options:(unsigned long long)arg3 primaryTexture:(id)arg4 primaryInfo:(const SCD_Struct_MP15*)arg5 secondaryTexture:(id)arg6 secondaryInfo:(const SCD_Struct_MP15*)arg7 destinationTexture:(id)arg8 destinationInfo:(const SCD_Struct_MP16*)arg9 ;
@end

