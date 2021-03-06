/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/MTLRenderPipelineState.h>

@protocol MTLDevice;
@class NSString, MTLIndirectArgumentBufferEmulationData;

@interface _MTLRenderPipelineState : NSObject <MTLRenderPipelineState> {

	NSString* _label;
	id<MTLDevice> _device;
	BOOL _threadgroupSizeMatchesTileSize;
	MTLIndirectArgumentBufferEmulationData* _vertexIABEmulationData;
	MTLIndirectArgumentBufferEmulationData* _fragmentIABEmulationData;
	BOOL _supportIndirectCommandBuffers;
	unsigned long long _uniqueIdentifier;

}

@property (readonly) NSString * label;                                                                       //@synthesize label=_label - In the implementation block
@property (readonly) id<MTLDevice> device;                                                                   //@synthesize device=_device - In the implementation block
@property (readonly) BOOL threadgroupSizeMatchesTileSize;                                                    //@synthesize threadgroupSizeMatchesTileSize=_threadgroupSizeMatchesTileSize - In the implementation block
@property (nonatomic,retain) MTLIndirectArgumentBufferEmulationData * vertexIABEmulationData;                //@synthesize vertexIABEmulationData=_vertexIABEmulationData - In the implementation block
@property (nonatomic,retain) MTLIndirectArgumentBufferEmulationData * fragmentIABEmulationData;              //@synthesize fragmentIABEmulationData=_fragmentIABEmulationData - In the implementation block
@property (readonly) unsigned long long uniqueIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (readonly) unsigned long long imageblockSampleLength; 
@property (readonly) BOOL supportIndirectCommandBuffers; 
-(MTLIndirectArgumentBufferEmulationData *)vertexIABEmulationData;
-(MTLIndirectArgumentBufferEmulationData *)fragmentIABEmulationData;
-(id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2 ;
-(id)initWithDeviceAndTileDesc:(id)arg1 tilePipelineStateDescriptor:(id)arg2 ;
-(void)setVertexIABEmulationData:(MTLIndirectArgumentBufferEmulationData *)arg1 ;
-(void)setFragmentIABEmulationData:(MTLIndirectArgumentBufferEmulationData *)arg1 ;
-(unsigned long long)imageblockMemoryLengthForDimensions:(SCD_Struct_MT25)arg1 ;
-(BOOL)threadgroupSizeMatchesTileSize;
-(BOOL)supportIndirectCommandBuffers;
-(id<MTLDevice>)device;
-(void)dealloc;
-(NSString *)label;
-(unsigned long long)uniqueIdentifier;
@end

