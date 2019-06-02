/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleCVAPhoto/ImageSaverRegistrator.h>

@protocol MTLDeviceSPI, MTLLibrary, MTLTexture, MTLBuffer, MTLComputePipelineState;
@interface CVAFilterDiffusion : ImageSaverRegistrator {

	id<MTLDeviceSPI> _device;
	id<MTLLibrary> _library;
	unsigned long long _width;
	unsigned long long _height;
	float _edgeVariance;
	id<MTLTexture> _laplacian;
	id<MTLTexture> _tmpOut16;
	id<MTLTexture> _tmpOut32;
	id<MTLBuffer> _davidConfigImmutable;
	id<MTLBuffer> _edgeLaplacianConfigImmutable;
	id<MTLBuffer> _jacobiConfigImmutable;
	id<MTLComputePipelineState> _createEdgeLaplacianKernel;
	id<MTLComputePipelineState> _createDiffusionMapLaplacianKernel;
	id<MTLComputePipelineState> _laplacianJacobiKernel;
	id<MTLComputePipelineState> _laplacianDavidKernel;

}
-(id)initWithDevice:(id)arg1 library:(id)arg2 bufferWidth:(unsigned long long)arg3 bufferHeight:(unsigned long long)arg4 edgeVariance:(float)arg5 stepSize:(float)arg6 error:(id*)arg7 ;
-(void)encodeToCommandBufferInternal:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 ;
-(void)encodeDavidIterationToCommandBufferInternal:(id)arg1 priorTexture:(id)arg2 confidenceTexture:(id)arg3 sourceTexture:(id)arg4 destinationTexture:(id)arg5 ;
-(void)encodeEdgeLaplacianToCommandBuffer:(id)arg1 colorTexture:(id)arg2 outputLaplacian:(id)arg3 ;
-(void)encodeDiffusionMapLaplacianToCommandBuffer:(id)arg1 diffusionMapTexture:(id)arg2 outputLaplacian:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 colorTexture:(id)arg4 iterations:(unsigned)arg5 ;
-(void)encodeToCommandBuffer:(id)arg1 priorTexture:(id)arg2 sourceTexture:(id)arg3 destinationTexture:(id)arg4 diffusionMapTexture:(id)arg5 confidenceTexture:(id)arg6 iterations:(unsigned)arg7 ;
@end

