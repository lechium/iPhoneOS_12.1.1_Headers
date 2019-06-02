/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandQueue, MTLRenderPipelineState;
#import <ARKit/ARKit-Structs.h>
@interface ARGPUWarper : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLRenderPipelineState> _homographyPipelineState;

}
-(void)warpCameraImage:(CVBufferRef)arg1 withExposureOffset:(float)arg2 withCameraIntrinsics:(SCD_Struct_AR5)arg3 withCameraTransform:(SCD_Struct_AR16)arg4 toPlane:(SCD_Struct_AR48*)arg5 withLoadAction:(unsigned long long)arg6 synchronous:(BOOL)arg7 ;
-(void)warpPlane:(SCD_Struct_AR48*)arg1 toPlane:(SCD_Struct_AR48*)arg2 withLoadAction:(unsigned long long)arg3 synchronous:(BOOL)arg4 ;
-(id)init;
@end

