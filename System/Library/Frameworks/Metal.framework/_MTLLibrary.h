/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/MTLLibrarySPI.h>

@protocol MTLDevice;
@class NSString, NSArray, NSMutableDictionary;

@interface _MTLLibrary : NSObject <MTLLibrarySPI> {

	NSString* _label;
	id<MTLDevice> _device;
	NSArray* _functionNames;
	NSArray* _externFunctionNames;
	MTLLibraryData* _libraryData;
	NSMutableDictionary* _functionDictionary;
	MTLLibraryContainer* _cacheEntry;
	MTLPipelineCollection* _pipelineCollection;

}

@property (nonatomic,retain,readonly) NSMutableDictionary * functionDictionary;              //@synthesize functionDictionary=_functionDictionary - In the implementation block
@property (copy) NSString * label;                                                           //@synthesize label=_label - In the implementation block
@property (readonly) id<MTLDevice> device;                                                   //@synthesize device=_device - In the implementation block
@property (retain,readonly) NSArray * functionNames;                                         //@synthesize functionNames=_functionNames - In the implementation block
@property (retain,readonly) NSArray * externFunctionNames;                                   //@synthesize externFunctionNames=_externFunctionNames - In the implementation block
@property (readonly) MTLLibraryData* libraryData;                                            //@synthesize libraryData=_libraryData - In the implementation block
@property (readonly) MTLLibraryContainer* cacheEntry;                                        //@synthesize cacheEntry=_cacheEntry - In the implementation block
@property (copy) NSString * overrideTriple; 
@property (assign) MTLPipelineCollection* pipelineCollection;                                //@synthesize pipelineCollection=_pipelineCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)formattedDescription:(unsigned long long)arg1 ;
-(MTLLibraryData*)libraryData;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 functionCache:(id)arg3 error:(id*)arg4 ;
-(id)newFunctionWithNameInternal:(id)arg1 ;
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 functionCache:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithLibraryContainer:(MTLLibraryContainer*)arg1 device:(id)arg2 ;
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 error:(id*)arg4 ;
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSString *)overrideTriple;
-(void)setOverrideTriple:(NSString *)arg1 ;
-(NSMutableDictionary *)functionDictionary;
-(MTLPipelineCollection*)pipelineCollection;
-(void)setPipelineCollection:(MTLPipelineCollection*)arg1 ;
-(MTLLibraryContainer*)cacheEntry;
-(NSArray *)externFunctionNames;
-(id)newExternFunctionWithName:(id)arg1 ;
-(NSArray *)functionNames;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3 ;
-(id<MTLDevice>)device;
-(id)newFunctionWithName:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
@end

