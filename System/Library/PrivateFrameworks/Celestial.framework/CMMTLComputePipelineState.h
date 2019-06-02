/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTLComputePipelineStateSPI.h>

@protocol MTLFunction, MTLComputePipelineState;
@class CMMTLDevice, MTLComputePipelineReflection, NSString;

@interface CMMTLComputePipelineState : NSObject <MTLComputePipelineStateSPI> {

	CMMTLDevice* _cmDevice;
	id<MTLFunction> _function;
	MTLComputePipelineReflection* _reflection;
	id<MTLComputePipelineState> _computePipelineState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (readonly) unsigned long long threadExecutionWidth; 
@property (readonly) unsigned long long staticThreadgroupMemoryLength; 
@property (readonly) unsigned long long uniqueIdentifier; 
-(id)initWithCMMTLDevice:(id)arg1 function:(id)arg2 options:(unsigned long long)arg3 reflection:(id*)arg4 ;
-(void)forwardInvocation:(id)arg1 ;
@end
