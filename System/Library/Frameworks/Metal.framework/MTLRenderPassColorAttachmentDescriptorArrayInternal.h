/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLRenderPassColorAttachmentDescriptorArray.h>

@class MTLRenderPassColorAttachmentDescriptorInternal, MTLRenderPassDepthAttachmentDescriptorInternal, MTLRenderPassStencilAttachmentDescriptorInternal;

@interface MTLRenderPassColorAttachmentDescriptorArrayInternal : MTLRenderPassColorAttachmentDescriptorArray {

	MTLRenderPassColorAttachmentDescriptorInternal* _color_descriptors[8];
	MTLRenderPassDepthAttachmentDescriptorInternal* _depth_descriptor;
	MTLRenderPassStencilAttachmentDescriptorInternal* _stencil_descriptor;

}
-(id)_descriptorAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
@end

