/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@class NUBrushStroke;

@interface _NUBrushStrokeCIImageProvider : NSObject {

	NUBrushStroke* _stroke;
	BOOL _closed;
	long long _pressureMode;
	SCD_Struct_NU6 _extent;

}
-(void)provideImageData:(void*)arg1 bytesPerRow:(unsigned long long)arg2 origin:(unsigned long long)arg3 :(unsigned long long)arg4 size:(unsigned long long)arg5 :(unsigned long long)arg6 userInfo:(id)arg7 ;
-(id)initWithStroke:(id)arg1 closed:(BOOL)arg2 pressureMode:(long long)arg3 ;
@end

