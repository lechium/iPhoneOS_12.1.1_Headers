/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NUImageLayout, NUPixelFormat, NUColorSpace, NURegion;


@protocol NUImage <NSObject,NUImageCopying>
@property (readonly) NUImageLayout * layout; 
@property (readonly) NUPixelFormat * format; 
@property (readonly) NUColorSpace * colorSpace; 
@property (readonly) SCD_Struct_NU5 size; 
@property (copy,readonly) NURegion * validRegion; 
@required
-(NURegion *)validRegion;
-(SCD_Struct_NU5)size;
-(NUImageLayout *)layout;
-(NUColorSpace *)colorSpace;
-(NUPixelFormat *)format;

@end

