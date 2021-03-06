/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PencilKit/PencilKit-Structs.h>
@class PKMetalBuffer;

@interface PKMetalStrokeRenderCacheBuffer : NSObject {

	PKMetalBuffer* _buffer;
	unsigned long long _offset;
	unsigned long long _numVertices;
	CGRect _bounds;

}

@property (nonatomic,readonly) CGRect bounds;                               //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;                   //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned long long numVertices;              //@synthesize numVertices=_numVertices - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> vertexBuffer; 
-(id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 numVertices:(unsigned long long)arg3 bounds:(CGRect)arg4 ;
-(id<MTLBuffer>)vertexBuffer;
-(BOOL)lockPurgeableResourcesAddToSet:(id)arg1 ;
-(unsigned long long)numVertices;
-(id)init;
-(CGRect)bounds;
-(unsigned long long)offset;
@end

