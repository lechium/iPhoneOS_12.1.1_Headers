/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
#import <AppleCVAPhoto/ImageSaverAndFileConfigRegistrator.h>

@protocol MTLDeviceSPI, MTLLibrary, MTLCommandQueue, MTLComputePipelineState, OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject;

@interface CVAFilterAlphaBlend : ImageSaverAndFileConfigRegistrator {

	id<MTLDeviceSPI> _device;
	id<MTLLibrary> _library;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _alphaBlend_Kernel;
	NSObject*<OS_dispatch_queue> _synchronousRenderingCallbackQueue;
	NSObject*<OS_dispatch_semaphore> _renderingCallbackSemaphore;

}
-(id)initWithMetalContext:(CVAPhotoMetalContext*)arg1 ;
-(void)encodeAlphaBlendToCommandBuffer:(id)arg1 inTexFirst:(id)arg2 inTexSecond:(id)arg3 outTex:(id)arg4 alpha:(float)arg5 ;
-(pair<id<MTLTexture>, id<MTLTexture> >)getTexturePlanesFromPixelBuffer:(CVBufferRef)arg1 usage:(unsigned long long)arg2 ;
-(void)alphaBlendPixelBuffer:(RetainPtr<__CVBuffer *>*)arg1 inPixelBufferSecond:(RetainPtr<__CVBuffer *>*)arg2 outPixelBuffer:(RetainPtr<__CVBuffer *>*)arg3 alpha:(float)arg4 callbackQueue:(id)arg5 callback:(/*^block*/id)arg6 ;
@end

