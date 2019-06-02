/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Metal/Metal-Structs.h>
@class _MTLDevice, NSString, NSObject;

@interface MTLCompiler : NSObject {

	_MTLDevice* _device;
	NSString* _pluginPath;
	NSObject*<OS_dispatch_queue> _compilerQueue;
	MTLCompilerConnectionManager* _compilerConnectionManager;
	unsigned _compilerId;
	unsigned long long _compilerFlags;
	MTLCompilerCache* _shaderCache;

}

@property (copy,readonly) NSString * pluginPath;                                           //@synthesize pluginPath=_pluginPath - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> compilerQueue;                           //@synthesize compilerQueue=_compilerQueue - In the implementation block
@property (readonly) MTLCompilerConnectionManager* compilerConnectionManager;              //@synthesize compilerConnectionManager=_compilerConnectionManager - In the implementation block
@property (readonly) unsigned compilerId;                                                  //@synthesize compilerId=_compilerId - In the implementation block
@property (readonly) unsigned long long compilerFlags;                                     //@synthesize compilerFlags=_compilerFlags - In the implementation block
-(void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 sync:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)compileRequest:(id)arg1 pipelineCache:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)compileRequest:(id)arg1 pipelineCache:(id)arg2 sync:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)compileFunctionInternal:(id)arg1 frameworkData:(id)arg2 driverKeyData:(id)arg3 frameworkLinking:(BOOL)arg4 linkDataSize:(unsigned long long)arg5 pipelineCache:(id)arg6 options:(unsigned)arg7 sync:(BOOL)arg8 completionHandler:(/*^block*/id)arg9 ;
-(void)compileFunction:(id)arg1 serializedPipelineData:(id)arg2 stateData:(id)arg3 linkDataSize:(unsigned long long)arg4 frameworkLinking:(BOOL)arg5 options:(unsigned)arg6 sync:(BOOL)arg7 completionHandler:(/*^block*/id)arg8 ;
-(id)initWithTargetData:(id)arg1 cacheUUID:(SCD_Struct_MT45*)arg2 pluginPath:(id)arg3 device:(id)arg4 compilerFlags:(unsigned long long)arg5 ;
-(void)compileRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)compileFunction:(id)arg1 frameworkData:(id)arg2 driverKeyData:(id)arg3 options:(unsigned long long)arg4 pipelineCache:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)compileFunction:(id)arg1 frameworkData:(id)arg2 driverKeyData:(id)arg3 options:(unsigned long long)arg4 pipelineCache:(id)arg5 sync:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)compileFunction:(id)arg1 serializedData:(id)arg2 stateData:(id)arg3 options:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)compilerQueue;
-(MTLCompilerConnectionManager*)compilerConnectionManager;
-(unsigned)compilerId;
-(unsigned long long)compilerFlags;
-(void)unloadShaderCaches;
-(SCD_Struct_MT22)libraryCacheStats;
-(SCD_Struct_MT22)pipelineCacheStats;
-(void*)getShaderCacheKeys;
-(NSString *)pluginPath;
-(void)dealloc;
@end

