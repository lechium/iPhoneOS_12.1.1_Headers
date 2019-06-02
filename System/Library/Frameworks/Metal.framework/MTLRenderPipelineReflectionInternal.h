/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPipelineReflection.h>

@class NSArray, MTLArgument, NSDictionary;

@interface MTLRenderPipelineReflectionInternal : MTLRenderPipelineReflection {

	SCD_Struct_MT18 _flags;
	NSArray* _vertexBuiltInArguments;
	unsigned long long _postVertexDumpStride;
	NSArray* _postVertexDumpOutputs;
	NSArray* _inferredInputs;
	NSArray* _vertexArguments;
	NSArray* _fragmentArguments;
	NSArray* _tileArguments;
	NSArray* _tileBuiltInArguments;
	MTLArgument* _imageBlockDataReturn;
	NSDictionary* _performanceStatistics;
	unsigned _traceBufferIndex;
	NSArray* _constantSamplerUniqueIdentifiers;
	NSArray* _constantSamplerDescriptors;

}
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setPerformanceStatistics:(id)arg1 ;
-(unsigned)traceBufferIndex;
-(id)constantSamplerUniqueIdentifiers;
-(id)constantSamplerDescriptors;
-(void)setConstantSamplerUniqueIdentifiers:(id)arg1 ;
-(void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithTileArguments:(id*)arg1 argumentCount:(unsigned)arg2 builtInArgumentCount:(unsigned)arg3 imageBlockDataReturn:(id)arg4 device:(id)arg5 traceBufferIndex:(unsigned)arg6 flags:(SCD_Struct_MT18)arg7 ;
-(id)initWithVertexData:(id)arg1 fragmentData:(id)arg2 serializedVertexDescriptor:(id)arg3 device:(id)arg4 options:(unsigned long long)arg5 flags:(SCD_Struct_MT18)arg6 ;
-(id)initWithTileData:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 flags:(SCD_Struct_MT18)arg4 ;
-(id)initWithTileData:(id)arg1 functionType:(unsigned long long)arg2 device:(id)arg3 options:(unsigned long long)arg4 flags:(SCD_Struct_MT18)arg5 ;
-(id)vertexBuiltInArguments;
-(unsigned long long)postVertexDumpStride;
-(id)postVertexDumpOutputs;
-(id)inferredInputs;
-(id)tileArguments;
-(id)imageBlockDataReturn;
-(id)performanceStatistics;
-(id)vertexArguments;
-(id)fragmentArguments;
-(SCD_Struct_MT18)usageFlags;
-(void)dealloc;
-(id)description;
@end
