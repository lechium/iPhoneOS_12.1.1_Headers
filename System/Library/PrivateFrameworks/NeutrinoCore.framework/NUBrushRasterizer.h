/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NUBrushRasterizer : NSObject
+(long long)_rasterizeBrushStroke:(id)arg1 toROI:(SCD_Struct_NU6)arg2 maskPtr:(char*)arg3 maskPtrRowBytes:(long long)arg4 close:(BOOL)arg5 startIndex:(long long)arg6 pressureMode:(long long)arg7 ;
+(long long)rasterizeBrushStroke:(id)arg1 atPoint:(SCD_Struct_NU5)arg2 toBuffer:(id)arg3 close:(BOOL)arg4 startIndex:(long long)arg5 ;
+(void)rasterizeBrushStroke:(id)arg1 atPoint:(SCD_Struct_NU5)arg2 toBuffer:(id)arg3 ;
@end

