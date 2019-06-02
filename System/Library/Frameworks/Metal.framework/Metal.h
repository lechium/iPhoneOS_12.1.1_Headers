#import <Metal/MTLCaptureScope.h>
#import <Metal/_MTLIOAccelMTLEvent.h>
#import <Metal/MTLTileRenderPipelineColorAttachmentDescriptor.h>
#import <Metal/MTLTileRenderPipelineColorAttachmentDescriptorInternal.h>
#import <Metal/MTLTileRenderPipelineColorAttachmentDescriptorArray.h>
#import <Metal/MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal.h>
#import <Metal/MTLTileRenderPipelineDescriptor.h>
#import <Metal/MTLTileRenderPipelineDescriptorInternal.h>
#import <Metal/MTLIOAccelFragmentRenderCommandEncoder.h>
#import <Metal/MTLIOAccelIndirectCommandBuffer.h>
#import <Metal/MTLIOAccelBlitCommandEncoder.h>
#import <Metal/MTLIOAccelComputeCommandEncoder.h>
#import <Metal/MTLBufferLayoutDescriptor.h>
#import <Metal/MTLBufferLayoutDescriptorInternal.h>
#import <Metal/MTLBufferLayoutDescriptorArray.h>
#import <Metal/MTLBufferLayoutDescriptorArrayInternal.h>
#import <Metal/MTLAttributeDescriptor.h>
#import <Metal/MTLAttributeDescriptorInternal.h>
#import <Metal/MTLAttributeDescriptorArray.h>
#import <Metal/MTLAttributeDescriptorArrayInternal.h>
#import <Metal/MTLStageInputOutputDescriptor.h>
#import <Metal/MTLStageInputOutputDescriptorInternal.h>
#import <Metal/MTLIOAccelDeviceShmem.h>
#import <Metal/MTLIOAccelCommandBuffer.h>
#import <Metal/_MTLIndirectArgumentBufferLayout.h>
#import <Metal/_MTLIndirectArgumentEncoder.h>
#import <Metal/MTLEmulationIndirectArgumentBufferLayout.h>
#import <Metal/MTLEmulationIndirectArgumentEncoder.h>
#import <Metal/MTLIndirectArgumentBufferEmulationData.h>
#import <Metal/MTLIOAccelPooledResource.h>
#import <Metal/_MTLIndirectDrawArguments.h>
#import <Metal/_MTLIndirectDrawIndexedArguments.h>
#import <Metal/_MTLIndirectDrawPatchesArguments.h>
#import <Metal/_MTLIndirectDrawIndexedPatchesArguments.h>
#import <Metal/_MTLIndirectTessellationFactorArguments.h>
#import <Metal/MTLNamedConstantValue.h>
#import <Metal/MTLIndexedConstantValue.h>
#import <Metal/MTLFunctionConstantValues.h>
#import <Metal/MTLFunctionConstantValuesInternal.h>
#import <Metal/MTLIOAccelResourcePool.h>
#import <Metal/MTLBufferArgument.h>
#import <Metal/MTLIndirectConstantArgument.h>
#import <Metal/MTLThreadgroupMemoryArgument.h>
#import <Metal/MTLTextureArgument.h>
#import <Metal/MTLBuiltInArgument.h>
#import <Metal/MTLImageBlockDataArgument.h>
#import <Metal/MTLImageBlockArgument.h>
#import <Metal/MTLPipelineBufferDescriptor.h>
#import <Metal/MTLPipelineBufferDescriptorInternal.h>
#import <Metal/MTLPipelineBufferDescriptorArray.h>
#import <Metal/MTLPipelineBufferDescriptorArrayInternal.h>
#import <Metal/MTLIndirectArgumentDescriptorInternal.h>
#import <Metal/MTLIndirectArgumentDescriptor.h>
#import <Metal/MTLArgumentDescriptorInternal.h>
#import <Metal/MTLArgumentDescriptor.h>
#import <Metal/_MTLDevice.h>
#import <Metal/MTLIOAccelFence.h>
#import <Metal/MTLTextureDescriptor.h>
#import <Metal/MTLTextureDescriptorInternal.h>
#import <Metal/MTLIndirectCommandBufferDescriptor.h>
#import <Metal/MTLIndirectCommandBufferDescriptorInternal.h>
#import <Metal/MTLIOAccelIndirectRenderCommand.h>
#import <Metal/MTLIOAccelIndirectArgumentEncoder.h>
#import <Metal/MTLIOAccelTexture.h>
#import <Metal/MTLIOAccelTextureLayout.h>
#import <Metal/MTLIOAccelBuffer.h>
#import <Metal/_MTLPipelineCache.h>
#import <Metal/_MTLPipelineLibrary.h>
#import <Metal/MTLIOAccelDevice.h>
#import <Metal/_MTLParallelRenderCommandEncoder.h>
#import <Metal/MTLCaptureManager.h>
#import <Metal/MTLIOAccelResourceAllocation.h>
#import <Metal/MTLIOAccelResource.h>
#import <Metal/MTLIOMemoryInfo.h>
#import <Metal/MTLResourceListPool.h>
#import <Metal/MTLIOAccelRenderCommandEncoder.h>
#import <Metal/MTLIOAccelParallelRenderCommandEncoder.h>
#import <Metal/MTLIOAccelCommandQueue.h>
#import <Metal/MTLSamplerDescriptor.h>
#import <Metal/MTLSamplerDescriptorInternal.h>
#import <Metal/_MTLSamplerState.h>
#import <Metal/MTLHeapDescriptor.h>
#import <Metal/MTLHeapDescriptorInternal.h>
#import <Metal/MTLCompileOptions.h>
#import <Metal/MTLCompileOptionsInternal.h>
#import <Metal/MTLVertexAttribute.h>
#import <Metal/MTLVertexAttributeInternal.h>
#import <Metal/MTLAttribute.h>
#import <Metal/MTLAttributeInternal.h>
#import <Metal/MTLFunctionConstant.h>
#import <Metal/MTLFunctionConstantInternal.h>
#import <Metal/MTLFunctionReflection.h>
#import <Metal/MTLFunctionReflectionInternal.h>
#import <Metal/_MTLLibrary.h>
#import <Metal/_MTLFunction.h>
#import <Metal/_MTLFunctionInternal.h>
#import <Metal/MTLFunctionVariant.h>
#import <Metal/MTLCompiler.h>
#import <Metal/_MTLIndirectRenderCommand.h>
#import <Metal/MTLRenderPassAttachmentDescriptor.h>
#import <Metal/MTLRenderPassColorAttachmentDescriptor.h>
#import <Metal/MTLRenderPassDepthAttachmentDescriptor.h>
#import <Metal/MTLRenderPassStencilAttachmentDescriptor.h>
#import <Metal/MTLRenderPassColorAttachmentDescriptorInternal.h>
#import <Metal/MTLRenderPassDepthAttachmentDescriptorInternal.h>
#import <Metal/MTLRenderPassStencilAttachmentDescriptorInternal.h>
#import <Metal/MTLRenderPassColorAttachmentDescriptorArray.h>
#import <Metal/MTLRenderPassColorAttachmentDescriptorArrayInternal.h>
#import <Metal/MTLRenderPassDescriptor.h>
#import <Metal/MTLRenderPassDescriptorInternal.h>
#import <Metal/_MTLCommandEncoder.h>
#import <Metal/MTLComputePipelineReflection.h>
#import <Metal/MTLComputePipelineReflectionInternal.h>
#import <Metal/MTLComputePipelineDescriptor.h>
#import <Metal/MTLComputePipelineDescriptorInternal.h>
#import <Metal/_MTLComputePipelineState.h>
#import <Metal/_MTLDebugCommandEncoder.h>
#import <Metal/MTLStructType.h>
#import <Metal/MTLStructTypeInternal.h>
#import <Metal/MTLType.h>
#import <Metal/MTLTypeInternal.h>
#import <Metal/MTLPointerType.h>
#import <Metal/MTLPointerTypeInternal.h>
#import <Metal/MTLTextureReferenceType.h>
#import <Metal/MTLTextureReferenceTypeInternal.h>
#import <Metal/MTLStructMember.h>
#import <Metal/MTLStructMemberInternal.h>
#import <Metal/MTLArrayType.h>
#import <Metal/MTLArrayTypeInternal.h>
#import <Metal/MTLArgument.h>
#import <Metal/MTLArgumentInternal.h>
#import <Metal/MTLPostVertexDumpOutput.h>
#import <Metal/MTLInferredInput.h>
#import <Metal/MTLRenderPipelineColorAttachmentDescriptor.h>
#import <Metal/MTLRenderPipelineColorAttachmentDescriptorInternal.h>
#import <Metal/MTLRenderPipelineReflection.h>
#import <Metal/MTLRenderPipelineReflectionInternal.h>
#import <Metal/MTLRenderPipelineColorAttachmentDescriptorArray.h>
#import <Metal/MTLRenderPipelineColorAttachmentDescriptorArrayInternal.h>
#import <Metal/MTLRenderPipelineDescriptor.h>
#import <Metal/MTLRenderPipelineDescriptorInternal.h>
#import <Metal/_MTLRenderPipelineState.h>
#import <Metal/MTLIOAccelDebugCommandEncoder.h>
#import <Metal/MTLIOAccelHeap.h>
#import <Metal/MTLIOAccelDeviceShmemPool.h>
#import <Metal/MTLResourceList.h>
#import <Metal/MTLResourceAllocationInfo.h>
#import <Metal/_MTLSharedEvent.h>
#import <Metal/MTLSharedEventHandle.h>
#import <Metal/MTLSharedEventListener.h>
#import <Metal/MTLSharedEventListenerInternal.h>
#import <Metal/MTLIOAccelCommandEncoder.h>
#import <Metal/MTLStencilDescriptor.h>
#import <Metal/MTLStencilDescriptorInternal.h>
#import <Metal/MTLDepthStencilDescriptor.h>
#import <Metal/MTLDepthStencilDescriptorInternal.h>
#import <Metal/_MTLDepthStencilState.h>
#import <Metal/_MTLCommandBuffer.h>
#import <Metal/MTLVertexBufferLayoutDescriptor.h>
#import <Metal/MTLVertexBufferLayoutDescriptorInternal.h>
#import <Metal/MTLVertexBufferLayoutDescriptorArray.h>
#import <Metal/MTLVertexBufferLayoutDescriptorArrayInternal.h>
#import <Metal/MTLVertexAttributeDescriptor.h>
#import <Metal/MTLVertexAttributeDescriptorInternal.h>
#import <Metal/MTLVertexAttributeDescriptorArray.h>
#import <Metal/MTLVertexAttributeDescriptorArrayInternal.h>
#import <Metal/MTLVertexDescriptor.h>
#import <Metal/MTLVertexDescriptorInternal.h>
#import <Metal/_MTLCommandQueue.h>
#import <Metal/MTLCommandQueueDescriptor.h>
#import <Metal/MTLCommandQueueDescriptorInternal.h>
