/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSMatrix/MPSMatrixBinaryKernel.h>

@interface MPSMatrixSoftMaxGradient : MPSMatrixBinaryKernel {

	unsigned long long _sourceColumns;
	unsigned long long _sourceRows;

}

@property (assign,nonatomic) unsigned long long sourceRows;                 //@synthesize sourceRows=_sourceRows - In the implementation block
@property (assign,nonatomic) unsigned long long sourceColumns;              //@synthesize sourceColumns=_sourceColumns - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(void)encodeToCommandBuffer:(id)arg1 gradientMatrix:(id)arg2 forwardOutputMatrix:(id)arg3 resultMatrix:(id)arg4 ;
-(unsigned long long)sourceColumns;
-(void)setSourceColumns:(unsigned long long)arg1 ;
-(unsigned long long)sourceRows;
-(void)setSourceRows:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

