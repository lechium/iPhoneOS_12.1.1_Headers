/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMVideoCorruptor : NSObject
+(int)_getBoxInfoFromFile:(_sFILE*)arg1 ofSize:(long long)arg2 boxType:(unsigned*)arg3 boxSize:(long long*)arg4 ;
+(int)_findBox:(unsigned)arg1 inFile:(_sFILE*)arg2 ofSize:(long long)arg3 boxSize:(long long*)arg4 ;
+(int)_corruptMethodFytpForFile:(_sFILE*)arg1 ofSize:(long long)arg2 ;
+(int)_corruptMethodMdatForFile:(_sFILE*)arg1 ofSize:(long long)arg2 ;
+(int)_corruptMethodMoovForFile:(_sFILE*)arg1 ofSize:(long long)arg2 ;
+(BOOL)corruptVideoFileAtURLWhenEnabled:(id)arg1 ;
@end

