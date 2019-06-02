/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDeviceSPI, MTLComputePipelineState;
@class MPSImageGaussianPyramid, NSString;

@interface CVAFilterMaskedVariableBlur : NSObject {

	id<MTLDeviceSPI> _device;
	MPSImageGaussianPyramid* _gaussianPyramid;
	id<MTLComputePipelineState> _maskedVariableBlurKernel;
	NSString* _label;

}

@property (readonly) NSString * label;              //@synthesize label=_label - In the implementation block
+(void)prewarmGaussianPyramid:(id)arg1 device:(id)arg2 commandBuffer:(id)arg3 ;
-(id)initWithDevice:(id)arg1 library:(id)arg2 commandQueue:(id)arg3 error:(id*)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 mask:(id)arg4 maxBlur:(float)arg5 ;
-(NSString *)label;
@end
