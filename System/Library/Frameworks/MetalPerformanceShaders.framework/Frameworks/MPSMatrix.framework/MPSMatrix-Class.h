/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MPSMatrix/MPSMatrix-Structs.h>
@interface MPSMatrix : NSObject {

	MPSDevice* _device;
	unsigned long long _rows;
	unsigned long long _columns;
	unsigned long long _matrices;
	unsigned long long _rowBytes;
	unsigned long long _matrixBytes;
	unsigned _dataType;
	MPSAutoBuffer* _buffer;

}

@property (nonatomic,retain,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) unsigned long long rows;                     //@synthesize rows=_rows - In the implementation block
@property (nonatomic,readonly) unsigned long long columns;                  //@synthesize columns=_columns - In the implementation block
@property (nonatomic,readonly) unsigned long long matrices;                 //@synthesize matrices=_matrices - In the implementation block
@property (nonatomic,readonly) unsigned dataType;                           //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) unsigned long long rowBytes;                 //@synthesize rowBytes=_rowBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long matrixBytes;              //@synthesize matrixBytes=_matrixBytes - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> data; 
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 ;
-(id)initPrivateWithDescriptor:(id)arg1 device:(MPSDevice*)arg2 ;
-(unsigned long long)matrices;
-(unsigned long long)matrixBytes;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(unsigned long long)resourceSize;
-(id)initWithBuffer:(id)arg1 descriptor:(id)arg2 ;
-(unsigned long long)columns;
-(id<MTLDevice>)device;
-(unsigned)dataType;
-(unsigned long long)rowBytes;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(unsigned long long)rows;
-(id<MTLBuffer>)data;
@end
