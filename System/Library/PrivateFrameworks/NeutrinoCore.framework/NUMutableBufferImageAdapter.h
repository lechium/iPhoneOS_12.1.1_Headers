/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUBufferImageAdapter.h>
#import <libobjc.A.dylib/NUMutableBufferImage.h>

@protocol NUMutableBuffer;
@class NSString, NUImageLayout, NUPixelFormat, NUColorSpace, NURegion;

@interface NUMutableBufferImageAdapter : NUBufferImageAdapter <NUMutableBufferImage> {

	id<NUMutableBuffer> _mutableBuffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NUImageLayout * layout; 
@property (readonly) NUPixelFormat * format; 
@property (readonly) NUColorSpace * colorSpace; 
@property (readonly) SCD_Struct_NU5 size; 
@property (copy,readonly) NURegion * validRegion; 
-(void)writeBufferRegion:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)copySurfaceStorage:(id)arg1 fromRect:(SCD_Struct_NU6)arg2 toPoint:(SCD_Struct_NU5)arg3 device:(id)arg4 ;
-(BOOL)copyBufferStorage:(id)arg1 fromRect:(SCD_Struct_NU6)arg2 toPoint:(SCD_Struct_NU5)arg3 ;
-(id)initWithBuffer:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3 ;
-(id)initWithMutableBuffer:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3 ;
@end

