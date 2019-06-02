/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/MTLResourceSPI.h>

@class MTLResourceAllocationInfo, NSString;

@interface MTLIOAccelResource : NSObject <MTLResourceSPI> {

	MTLIOAccelResource* _res;
	MTLIOAccelResource* next;
	MTLIOAccelResource* prev;
	unsigned long long uniqueId;

}

@property (readonly) IOAccelResourceRef resourceRef; 
@property (nonatomic,readonly) void* virtualAddress; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
@property (nonatomic,readonly) unsigned resourceID; 
@property (nonatomic,readonly) unsigned long long resourceSize; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long allocatedSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) id<MTLHeap> heap; 
@property (assign) int responsibleProcess; 
@property (readonly) MTLResourceAllocationInfo * sharedAllocationInfo; 
@property (readonly) MTLResourceAllocationInfo * cachedAllocationInfo; 
-(unsigned long long)gpuAddress;
-(BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasResource:(id)arg1 ;
-(void*)virtualAddress;
-(id)initWithDevice:(id)arg1 options:(unsigned long long)arg2 args:(IOAccelNewResourceArgs*)arg3 argsSize:(unsigned)arg4 ;
-(id)initMemoryless:(id)arg1 descriptor:(id)arg2 ;
-(void)annotateResource:(CFDictionaryRef)arg1 ;
-(CFArrayRef)copyAnnotations;
-(CFDictionaryRef)copyAnnotationDictionary:(unsigned long long)arg1 obj_key_name:(CFStringRef)arg2 obj_dict:(CFDictionaryRef)arg3 ;
-(int)responsibleProcess;
-(void)setResponsibleProcess:(int)arg1 ;
-(MTLResourceAllocationInfo *)sharedAllocationInfo;
-(MTLResourceAllocationInfo *)cachedAllocationInfo;
-(IOAccelResourceRef)resourceRef;
-(id)initStandinWithDevice:(id)arg1 ;
-(void)setAllocationInfoShared:(id)arg1 andCached:(id)arg2 ;
-(id)initWithResource:(id)arg1 ;
-(unsigned long long)resourceSize;
-(BOOL)isPurgeable;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(void)makeAliasable;
-(BOOL)isAliasable;
-(unsigned long long)cpuCacheMode;
-(unsigned long long)storageMode;
-(id<MTLHeap>)heap;
-(id<MTLDevice>)device;
-(unsigned)resourceID;
-(unsigned long long)allocatedSize;
-(void)waitUntilComplete;
-(void)dealloc;
-(NSString *)label;
-(BOOL)isComplete;
-(void)setLabel:(NSString *)arg1 ;
@end

