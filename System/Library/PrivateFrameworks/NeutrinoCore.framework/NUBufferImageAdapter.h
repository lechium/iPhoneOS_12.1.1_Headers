/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUBufferImage.h>

@protocol NUBuffer;
@class NUImageLayout, NURegion, NUColorSpace, NSString, NUPixelFormat;

@interface NUBufferImageAdapter : NSObject <NUBufferImage> {

	NUImageLayout* _layout;
	id<NUBuffer> _buffer;
	NURegion* _validRegion;
	NUColorSpace* _colorSpace;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NUImageLayout * layout;                        //@synthesize layout=_layout - In the implementation block
@property (readonly) NUPixelFormat * format; 
@property (readonly) NUColorSpace * colorSpace;                     //@synthesize colorSpace=_colorSpace - In the implementation block
@property (readonly) SCD_Struct_NU5 size; 
@property (copy,readonly) NURegion * validRegion;                   //@synthesize validRegion=_validRegion - In the implementation block
-(void)readBufferRegion:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)immutableImageCopy;
-(NURegion *)validRegion;
-(id)purgeableImageCopy;
-(id)mutableImageCopy;
-(id)mutablePurgeableImageCopy;
-(id)initWithBuffer:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3 ;
-(SCD_Struct_NU5)size;
-(id)init;
-(NUImageLayout *)layout;
-(NUColorSpace *)colorSpace;
-(NUPixelFormat *)format;
@end

