/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDGLDataBufferAccessor <NSObject>
@required
-(void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
-(float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setCGFloat:(double)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
-(SCD_Struct_TS77*)GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setGLPoint2D:(SCD_Struct_TS77)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
-(SCD_Struct_TS78*)GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setGLPoint3D:(SCD_Struct_TS78)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
-(SCD_Struct_TS79*)GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setGLPoint4D:(SCD_Struct_TS79)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;

@end
