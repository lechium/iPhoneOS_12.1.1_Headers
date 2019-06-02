/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDeviceSPI, MTLLibrary, MTLTexture, MTLComputePipelineState;
#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
@class NSString;

@interface CVAFilterBox : NSObject {

	id<MTLDeviceSPI> _device;
	id<MTLLibrary> _library;
	SCD_Struct_CV33 _textureSize;
	id<MTLTexture> _boxIntermediateTexture_rgba;
	id<MTLTexture> _boxIntermediateTexture_r;
	id<MTLComputePipelineState> _box_float_pass_horiz_kernel;
	id<MTLComputePipelineState> _box_float4_pass_horiz_kernel;
	id<MTLComputePipelineState> _box_normValid_float_pass_vert_kernel;
	id<MTLComputePipelineState> _box_norm_float_pass_vert_kernel;
	id<MTLComputePipelineState> _box_float_pass_vert_kernel;
	id<MTLComputePipelineState> _box_normValid_float4_pass_vert_kernel;
	id<MTLComputePipelineState> _box_norm_float4_pass_vert_kernel;
	id<MTLComputePipelineState> _box_float4_pass_vert_kernel;
	NSString* _label;

}

@property (readonly) NSString * label;              //@synthesize label=_label - In the implementation block
-(id)initWithDevice:(id)arg1 library:(id)arg2 textureSize:(SCD_Struct_CV33)arg3 error:(id*)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 inTexture:(id)arg2 outTexture:(id)arg3 radius:(unsigned long long)arg4 normalize:(long long)arg5 ;
-(void)encodeBoxHorizontalToCommandBuffer:(id)arg1 configBuffer:(const BoxFilterConfig*)arg2 source:(id)arg3 destination:(id)arg4 ;
-(void)encodeBoxVerticalToCommandBuffer:(id)arg1 configBuffer:(const BoxFilterConfig*)arg2 source:(id)arg3 destination:(id)arg4 normalize:(long long)arg5 ;
-(NSString *)label;
@end
