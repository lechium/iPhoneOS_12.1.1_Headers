/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPassDescriptor.h>

@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor {

	MTLRenderPassDescriptorPrivate _private;

}
+(id)renderPassDescriptor;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(const MTLRenderPassDescriptorPrivate*)_descriptorPrivate;
-(void)setSamplePositions:(const SCD_Struct_MT50*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)getSamplePositions:(SCD_Struct_MT50*)arg1 count:(unsigned long long)arg2 ;
-(void)setImageblockSampleLength:(unsigned long long)arg1 ;
-(unsigned long long)threadgroupMemoryLength;
-(void)setThreadgroupMemoryLength:(unsigned long long)arg1 ;
-(void)setTileWidth:(unsigned long long)arg1 ;
-(void)setTileHeight:(unsigned long long)arg1 ;
-(unsigned long long)defaultRasterSampleCount;
-(void)setDefaultRasterSampleCount:(unsigned long long)arg1 ;
-(id)visibilityResultBuffer;
-(void)setRenderTargetArrayLength:(unsigned long long)arg1 ;
-(unsigned long long)renderTargetArrayLength;
-(void)setRenderTargetWidth:(unsigned long long)arg1 ;
-(unsigned long long)renderTargetWidth;
-(void)setRenderTargetHeight:(unsigned long long)arg1 ;
-(unsigned long long)renderTargetHeight;
-(void)setDefaultColorSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)defaultColorSampleCount;
-(void)setFineGrainedBackgroundVisibilityEnabled:(BOOL)arg1 ;
-(BOOL)fineGrainedBackgroundVisibilityEnabled;
-(void)setDitherEnabled:(BOOL)arg1 ;
-(BOOL)isDitherEnabled;
-(void)setOpenGLModeEnabled:(BOOL)arg1 ;
-(BOOL)openGLModeEnabled;
-(BOOL)validate:(id)arg1 width:(unsigned long long*)arg2 height:(unsigned long long*)arg3 ;
-(unsigned long long)imageblockSampleLength;
-(unsigned long long)tileWidth;
-(unsigned long long)tileHeight;
-(id)colorAttachments;
-(void)setVisibilityResultBuffer:(id)arg1 ;
-(id)depthAttachment;
-(id)stencilAttachment;
-(void)setDepthAttachment:(id)arg1 ;
-(void)setStencilAttachment:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

